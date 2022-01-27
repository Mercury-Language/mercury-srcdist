/*
** Automatically generated from `write_module_interface_files.m'
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
#include "parse_tree.check_raw_comp_unit.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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



#line 906 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s {
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7;
#line 910 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded;
#line 915 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13;
#line 925 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47;
#line 925 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_54_54;
#line 926 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36;
#line 906 "write_module_interface_files.m"
};

#line 715 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s {
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpTypeDefnPairs_8;
#line 731 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded;
#line 722 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0;
#line 722 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10;
#line 722 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16;
#line 723 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_V_16_16;
#line 715 "write_module_interface_files.m"
};


#line 173 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 176 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 179 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 182 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 185 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 188 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 191 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

#line 194 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0;

#line 197 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 200 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 203 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0;

#line 206 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1;

#line 209 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0[2];

#line 212 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0[2];

#line 215 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0[2];

#line 218 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0;

#line 221 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1;

#line 224 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0[2];

#line 227 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0[2];

#line 230 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0[2];

#line 233 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0;

#line 236 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1;

#line 239 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_strip_assertions_0[2];

#line 242 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_strip_assertions_0[2];

#line 245 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_strip_assertions_0[2];

#line 248 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 251 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 254 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001(
#line 257 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 259 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 262 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001(
#line 265 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 267 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 269 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 272 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001(
#line 275 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 277 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 280 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001(
#line 283 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 285 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 287 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 290 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0_10001(
#line 293 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 295 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 298 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0_10001(
#line 301 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 303 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 305 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 308 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 311 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 313 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 316 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 319 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 321 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 323 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 326 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 329 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 331 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 334 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 337 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 339 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 341 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1447 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
#line 1447 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_7,
#line 1447 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_9,
#line 1447 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_10);

#line 1374 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 1374 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1374 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1374 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3,
#line 1374 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4);

#line 735 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_105_116_101_109_115_95_102_114_111_109_95_109_97_112_95_95_91_49_93_95_48_4_p_0(
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 735 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);

#line 614 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(
#line 614 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 614 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2);

#line 695 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__695__1_3_p_0(
#line 695 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_55,
#line 695 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_56,
#line 695 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_57);

#line 176 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__write_private_interface_file__176__1_2_p_0(
#line 176 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_14,
#line 176 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AugModuleName_32);

#line 1208 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1208 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1208 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1206 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1206 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1206 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 564 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0(
#line 564 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 564 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0(
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1617 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(
#line 1617 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1617 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1621 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(
#line 1621 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1621 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 2019 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 2019 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 2019 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 2019 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6);

#line 2014 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 2014 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1909 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1909 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3);

#line 1896 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1896 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1790 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1790 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1781 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_item_1_p_0(
#line 1781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1765 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_5(
#line 1765 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1765 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1765 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1765 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1761 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_4(
#line 1761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1759 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_3(
#line 1759 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1759 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1757 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_2(
#line 1757 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1757 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1756 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1756 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1756 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1749 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1749 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1749 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1658 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedImports_2,
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedForeignImports_3,
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4,
#line 1658 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_5);

#line 1635 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_need_imports_5_p_0(
#line 1635 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1635 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2,
#line 1635 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_3,
#line 1635 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4,
#line 1635 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_5);

#line 1625 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1625 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1625 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 1557 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_items_acc_4_p_0(
#line 1557 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1557 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1557 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1557 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4);

#line 1526 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0(
#line 1526 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1526 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1526 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1526 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4);

#line 1437 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1437 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1437 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5);

#line 1393 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(
#line 1393 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1393 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1393 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1393 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1393 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5);

#line 1386 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(
#line 1386 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1386 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1386 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1386 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);

#line 1352 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1352 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1352 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 1350 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1350 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1350 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1346 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1346 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1346 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_6,
#line 1346 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_7);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1308 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(
#line 1308 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1308 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1308 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1286 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
#line 1286 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1286 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1286 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1266 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1(
#line 1266 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1266 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1266 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1266 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1259 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(
#line 1259 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1259 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22,
#line 1259 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23);

#line 1220 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_1,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1220 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5,
#line 1220 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_6);

#line 1195 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1195 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1195 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1195 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1186 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1186 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1186 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1186 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1181 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1181 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1181 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1181 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1181 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1151 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1151 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1151 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1151 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14);

#line 1134 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1134 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1134 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1134 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1118 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1118 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1118 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1118 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1116 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1116 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1126 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1126 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1126 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1126 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1126 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1104 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28,
#line 1104 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30,
#line 1104 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32,
#line 1104 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33);

#line 1098 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
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

#line 1090 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1090 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1090 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1090 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20);

#line 1047 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 1047 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 1047 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 1047 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);

#line 1039 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1039 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1039 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1039 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1036 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1036 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1036 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1036 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1028 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12);

#line 993 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 991 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 991 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 991 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 987 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 963 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 963 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 963 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 961 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 961 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 961 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 957 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 957 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 957 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 957 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 925 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 925 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 926 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 926 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 925 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 925 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 925 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 925 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 906 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7);

#line 840 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 840 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 840 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 840 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16);

#line 815 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 815 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 815 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 815 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3);

#line 785 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_9_p_0(
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_3,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_5,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_7,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_9);

#line 781 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3);

#line 774 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_item_1_f_0(
#line 774 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1);

#line 767 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_item_1_f_0(
#line 767 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1);

#line 763 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 763 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 763 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 762 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 762 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 762 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 761 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 753 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 753 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 753 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 742 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(
#line 742 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 742 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2,
#line 742 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_3);

#line 735 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_from_map_4_p_0(
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files___TypeCtor_5,
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 735 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);

#line 722 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(
#line 722 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 723 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3(
#line 723 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 722 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(
#line 722 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 722 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(
#line 722 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 715 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypesMap_6,
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeCtor_7,
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeDefnPairs_8,
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14,
#line 715 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15);

#line 698 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_5(
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 698 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4);

#line 695 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_4(
#line 695 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 695 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 695 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 695 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 693 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_3(
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 693 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4);

#line 684 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_2(
#line 684 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 684 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 684 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2);

#line 1256 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_1(
#line 1256 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1256 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1256 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1256 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 650 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0(
#line 650 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_0_19,
#line 650 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_20,
#line 650 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_21,
#line 650 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22);

#line 631 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(
#line 631 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 631 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 631 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3);

#line 578 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_6_p_0(
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_2,
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 578 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 578 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6);

#line 568 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_4_p_0(
#line 568 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__SrcItemBlocks_5,
#line 568 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_6,
#line 568 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 568 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImpItems_8);

#line 267 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_7_p_0(
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_8,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_9,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63,
#line 267 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65,
#line 267 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66);

#line 254 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4,
#line 254 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_5,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6,
#line 254 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_7);

#line 231 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_6_p_0(
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 231 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 231 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6);

#line 176 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_7_p_0_1(
#line 176 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[25][3];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[15][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[6][5];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[3][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[8][6];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[1][8];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[1][7];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[1][12];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[2][11];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_11[1][4];


#line 1171 "write_module_interface_files.m"
/* sealed */ struct parse_tree__write_module_interface_files__vector_common_type_10_0_s {
#line 1171 "write_module_interface_files.m"
  const MR_String parse_tree__write_module_interface_files__vector_common_type_10_0__vct_10_f_0;
#line 1171 "write_module_interface_files.m"
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
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[2])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[2])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[4])),
    ((MR_Box) (parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[6])),
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
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[7])),
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
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[6][5] = {
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
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[3][1] = {
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

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[8][6] = {
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

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[1][8] = {
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

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[1][7] = {
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



#line 1985 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1993 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2002 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2010 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2019 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2027 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2035 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2043 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2052 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2061 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2070 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0 = {
  (MR_String) "dont_need_foreign_imports",
  (MR_Integer) 0
};

#line 2076 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1 = {
  (MR_String) "need_foreign_imports",
  (MR_Integer) 1
};

#line 2082 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1
};

#line 2088 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1
};

#line 2094 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2100 "parse_tree.write_module_interface_files.c"
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

#line 2117 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0 = {
  (MR_String) "dont_need_imports",
  (MR_Integer) 0
};

#line 2123 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1 = {
  (MR_String) "need_imports",
  (MR_Integer) 1
};

#line 2129 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1
};

#line 2135 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1
};

#line 2141 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2147 "parse_tree.write_module_interface_files.c"
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

#line 2164 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0 = {
  (MR_String) "dont_strip_assertions",
  (MR_Integer) 0
};

#line 2170 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1 = {
  (MR_String) "do_strip_assertions",
  (MR_Integer) 1
};

#line 2176 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_strip_assertions_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1
};

#line 2182 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_strip_assertions_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0
};

#line 2188 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_strip_assertions_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2194 "parse_tree.write_module_interface_files.c"
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

#line 2211 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2220 "parse_tree.write_module_interface_files.c"
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

#line 2237 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2246 "parse_tree.write_module_interface_files.c"
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

#line 2263 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001(
#line 2266 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2268 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2270 "parse_tree.write_module_interface_files.c"
{
#line 2272 "parse_tree.write_module_interface_files.c"
  {
#line 2274 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2277 "parse_tree.write_module_interface_files.c"
    {
#line 2279 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2282 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2284 "parse_tree.write_module_interface_files.c"
  }
#line 2286 "parse_tree.write_module_interface_files.c"
}

#line 2289 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001(
#line 2292 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2294 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2296 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2298 "parse_tree.write_module_interface_files.c"
{
#line 2300 "parse_tree.write_module_interface_files.c"
  {
#line 2302 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2305 "parse_tree.write_module_interface_files.c"
    {
#line 2307 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2310 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2312 "parse_tree.write_module_interface_files.c"
  }
#line 2314 "parse_tree.write_module_interface_files.c"
}

#line 2317 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001(
#line 2320 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2322 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2324 "parse_tree.write_module_interface_files.c"
{
#line 2326 "parse_tree.write_module_interface_files.c"
  {
#line 2328 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2331 "parse_tree.write_module_interface_files.c"
    {
#line 2333 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2336 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2338 "parse_tree.write_module_interface_files.c"
  }
#line 2340 "parse_tree.write_module_interface_files.c"
}

#line 2343 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001(
#line 2346 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2348 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2350 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2352 "parse_tree.write_module_interface_files.c"
{
#line 2354 "parse_tree.write_module_interface_files.c"
  {
#line 2356 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2359 "parse_tree.write_module_interface_files.c"
    {
#line 2361 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2364 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2366 "parse_tree.write_module_interface_files.c"
  }
#line 2368 "parse_tree.write_module_interface_files.c"
}

#line 2371 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0_10001(
#line 2374 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2376 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2378 "parse_tree.write_module_interface_files.c"
{
#line 2380 "parse_tree.write_module_interface_files.c"
  {
#line 2382 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2385 "parse_tree.write_module_interface_files.c"
    {
#line 2387 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2390 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2392 "parse_tree.write_module_interface_files.c"
  }
#line 2394 "parse_tree.write_module_interface_files.c"
}

#line 2397 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0_10001(
#line 2400 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2402 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2404 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2406 "parse_tree.write_module_interface_files.c"
{
#line 2408 "parse_tree.write_module_interface_files.c"
  {
#line 2410 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2413 "parse_tree.write_module_interface_files.c"
    {
#line 2415 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2418 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2420 "parse_tree.write_module_interface_files.c"
  }
#line 2422 "parse_tree.write_module_interface_files.c"
}

#line 2425 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 2428 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2430 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2432 "parse_tree.write_module_interface_files.c"
{
#line 2434 "parse_tree.write_module_interface_files.c"
  {
#line 2436 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2439 "parse_tree.write_module_interface_files.c"
    {
#line 2441 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2444 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2446 "parse_tree.write_module_interface_files.c"
  }
#line 2448 "parse_tree.write_module_interface_files.c"
}

#line 2451 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 2454 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2456 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2458 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2460 "parse_tree.write_module_interface_files.c"
{
#line 2462 "parse_tree.write_module_interface_files.c"
  {
#line 2464 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2467 "parse_tree.write_module_interface_files.c"
    {
#line 2469 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2472 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2474 "parse_tree.write_module_interface_files.c"
  }
#line 2476 "parse_tree.write_module_interface_files.c"
}

#line 2479 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 2482 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2484 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2486 "parse_tree.write_module_interface_files.c"
{
#line 2488 "parse_tree.write_module_interface_files.c"
  {
#line 2490 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2493 "parse_tree.write_module_interface_files.c"
    {
#line 2495 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2498 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2500 "parse_tree.write_module_interface_files.c"
  }
#line 2502 "parse_tree.write_module_interface_files.c"
}

#line 2505 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 2508 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2510 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2512 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2514 "parse_tree.write_module_interface_files.c"
{
#line 2516 "parse_tree.write_module_interface_files.c"
  {
#line 2518 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2521 "parse_tree.write_module_interface_files.c"
    {
#line 2523 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2526 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2528 "parse_tree.write_module_interface_files.c"
  }
#line 2530 "parse_tree.write_module_interface_files.c"
}

#line 1447 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
#line 1447 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_7,
#line 1447 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_9,
#line 1447 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_10)
#line 1447 "write_module_interface_files.m"
{
#line 1451 "write_module_interface_files.m"
  {
#line 1451 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 0)));
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntFileKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 1)));
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 2)));
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeVersionNumbers1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 3)));
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 4)));
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 5)));
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems_18;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems_19;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTreeInt1_20;
#line 1451 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__Suffix_21;
#line 1451 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpSuffix_22;
#line 1451 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__OutputFileName_23;
#line 1451 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpOutputFileName_24;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NoLineNumGlobals_25;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__GenerateVersionNumbers_26;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__DisableVersionNumbers_27;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeVersionNumbers_36;
#line 1451 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTreeInt_37;

#line 1454 "write_module_interface_files.m"
    {
#line 1454 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__IntItems0_16, &parse_tree__write_module_interface_files__IntItems_18);
    }
#line 1455 "write_module_interface_files.m"
    {
#line 1455 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__ImpItems0_17, &parse_tree__write_module_interface_files__ImpItems_19);
    }
#line 1456 "write_module_interface_files.m"
    {
#line 1456 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ParseTreeInt1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12));
#line 1456 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileKind_13));
#line 1456 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_20, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_14));
#line 1456 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_20, 3) = ((MR_Box) (parse_tree__write_module_interface_files__MaybeVersionNumbers1_15));
#line 1456 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_20, 4) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_18));
#line 1456 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_20, 5) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_19));
#line 1456 "write_module_interface_files.m"
    }
#line 1460 "write_module_interface_files.m"
    {
#line 1460 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Suffix_21 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__write_module_interface_files__IntFileKind_13);
    }
#line 1461 "write_module_interface_files.m"
    {
#line 1461 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__TmpSuffix_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_module_interface_files__Suffix_21, (MR_String) ".tmp");
    }
#line 1462 "write_module_interface_files.m"
    {
#line 1462 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__Suffix_21, (MR_Integer) 0, &parse_tree__write_module_interface_files__OutputFileName_23);
    }
#line 1464 "write_module_interface_files.m"
    {
#line 1464 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__TmpSuffix_22, (MR_Integer) 1, &parse_tree__write_module_interface_files__TmpOutputFileName_24);
    }
#line 1467 "write_module_interface_files.m"
    {
#line 1467 "write_module_interface_files.m"
      libs__globals__set_option_4_p_0((MR_Integer) 138, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[0]), parse_tree__write_module_interface_files__Globals_7, &parse_tree__write_module_interface_files__NoLineNumGlobals_25);
    }
#line 1468 "write_module_interface_files.m"
    {
#line 1468 "write_module_interface_files.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_25, (MR_Integer) 117, &parse_tree__write_module_interface_files__GenerateVersionNumbers_26);
    }
#line 1470 "write_module_interface_files.m"
    {
#line 1470 "write_module_interface_files.m"
      libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&parse_tree__write_module_interface_files__DisableVersionNumbers_27);
    }
#line 1472 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__GenerateVersionNumbers_26 == (MR_Integer) 1);
#line 1472 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1473 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__DisableVersionNumbers_27 == (MR_Integer) 0);
#line 1502 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1484 "write_module_interface_files.m"
      {
#line 1484 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Timestamp_28;
#line 1484 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__OldParseTreeInt_31;
#line 1484 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__OldErrors_33;
#line 1484 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__MaybeOldParseTreeInt_34;
#line 1484 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__VersionNumbers_35;
#line 1487 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files___OldIntFileName_29;
#line 1487 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___OldTimestamp_30;
#line 1487 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___OldSpecs_32;

#line 1482 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1479 "write_module_interface_files.m"
          {
#line 1480 "write_module_interface_files.m"
            {
#line 1480 "write_module_interface_files.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/6", (MR_String) "with \140--smart-recompilation\', timestamp not read");
#line 1480 "write_module_interface_files.m"
              return;
            }
#line 1479 "write_module_interface_files.m"
          }
#line 1482 "write_module_interface_files.m"
        else
#line 1483 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Timestamp_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1487 "write_module_interface_files.m"
        {
#line 1487 "write_module_interface_files.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_25, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__IntFileKind_13, &parse_tree__write_module_interface_files___OldIntFileName_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_4[2], &parse_tree__write_module_interface_files___OldTimestamp_30, &parse_tree__write_module_interface_files__OldParseTreeInt_31, &parse_tree__write_module_interface_files___OldSpecs_32, &parse_tree__write_module_interface_files__OldErrors_33);
        }
#line 1492 "write_module_interface_files.m"
        {
#line 1492 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__OldErrors_33);
        }
#line 1494 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1493 "write_module_interface_files.m"
          {
#line 1493 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__MaybeOldParseTreeInt_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeOldParseTreeInt_34, 0) = ((MR_Box) (parse_tree__write_module_interface_files__OldParseTreeInt_31));
#line 1493 "write_module_interface_files.m"
          }
#line 1494 "write_module_interface_files.m"
        else
#line 1497 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__MaybeOldParseTreeInt_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "write_module_interface_files.m"
        {
#line 1499 "write_module_interface_files.m"
          recompilation__version__compute_version_numbers_4_p_0(parse_tree__write_module_interface_files__Timestamp_28, parse_tree__write_module_interface_files__ParseTreeInt1_20, parse_tree__write_module_interface_files__MaybeOldParseTreeInt_34, &parse_tree__write_module_interface_files__VersionNumbers_35);
        }
#line 1501 "write_module_interface_files.m"
        {
#line 1501 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__MaybeVersionNumbers_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeVersionNumbers_36, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumbers_35));
#line 1501 "write_module_interface_files.m"
        }
#line 1484 "write_module_interface_files.m"
      }
#line 1502 "write_module_interface_files.m"
    else
#line 1503 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__MaybeVersionNumbers_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "write_module_interface_files.m"
    {
#line 1505 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ParseTreeInt_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_37, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12));
#line 1505 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileKind_13));
#line 1505 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_37, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_14));
#line 1505 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_37, 3) = ((MR_Box) (parse_tree__write_module_interface_files__MaybeVersionNumbers_36));
#line 1505 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_37, 4) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_18));
#line 1505 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_37, 5) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_19));
#line 1505 "write_module_interface_files.m"
    }
#line 1507 "write_module_interface_files.m"
    {
#line 1507 "write_module_interface_files.m"
      parse_tree__mercury_to_mercury__convert_to_mercury_int_5_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_25, parse_tree__write_module_interface_files__TmpOutputFileName_24, parse_tree__write_module_interface_files__ParseTreeInt_37);
    }
#line 1510 "write_module_interface_files.m"
    {
#line 1510 "write_module_interface_files.m"
      parse_tree__module_cmds__update_interface_4_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__OutputFileName_23);
#line 1510 "write_module_interface_files.m"
      return;
    }
#line 1451 "write_module_interface_files.m"
  }
#line 1447 "write_module_interface_files.m"
}

#line 1374 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 1374 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1374 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1374 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3,
#line 1374 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4)
#line 1374 "write_module_interface_files.m"
{
#line 1378 "write_module_interface_files.m"
  {
#line 1378 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1378 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "write_module_interface_files.m"
      {
#line 1378 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1378 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3;
#line 1378 "write_module_interface_files.m"
      }
#line 1378 "write_module_interface_files.m"
    else
#line 1380 "write_module_interface_files.m"
      {
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock_10;
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks_11;
#line 1380 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__Section_13 = (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_8, (MR_Integer) 0));
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_8, (MR_Integer) 1)));
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_8, (MR_Integer) 2)));
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items_16;
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_19_19;
#line 1380 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RevItems_27;

#line 1390 "write_module_interface_files.m"
        {
#line 1390 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(parse_tree__write_module_interface_files__Items0_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_27, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_19_19);
        }
#line 1391 "write_module_interface_files.m"
        {
#line 1391 "write_module_interface_files.m"
          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_27, &parse_tree__write_module_interface_files__Items_16);
        }
#line 1383 "write_module_interface_files.m"
        {
#line 1383 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ItemBlock_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_10, 0) = parse_tree__write_module_interface_files__Section_13;
#line 1383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_10, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_14));
#line 1383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_10, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Items_16));
#line 1383 "write_module_interface_files.m"
        }
#line 1384 "write_module_interface_files.m"
        {
#line 1384 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(parse_tree__write_module_interface_files__ItemBlocks0_9, &parse_tree__write_module_interface_files__ItemBlocks_11, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_19_19, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4);
        }
#line 1380 "write_module_interface_files.m"
        {
#line 1380 "write_module_interface_files.m"
          MR_Word base;
#line 1380 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 1380 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlock_10));
#line 1380 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlocks_11));
#line 1380 "write_module_interface_files.m"
        }
#line 1380 "write_module_interface_files.m"
      }
#line 1378 "write_module_interface_files.m"
  }
#line 1374 "write_module_interface_files.m"
}

#line 735 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_105_116_101_109_115_95_102_114_111_109_95_109_97_112_95_95_91_49_93_95_48_4_p_0(
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 735 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9)
#line 735 "write_module_interface_files.m"
{
#line 740 "write_module_interface_files.m"
  {
#line 740 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 740 "write_module_interface_files.m"
    {
#line 740 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(parse_tree__write_module_interface_files__TypeDefnPairs_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);
#line 740 "write_module_interface_files.m"
      return;
    }
#line 740 "write_module_interface_files.m"
  }
#line 735 "write_module_interface_files.m"
}

#line 614 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(
#line 614 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 614 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2)
#line 614 "write_module_interface_files.m"
{
#line 617 "write_module_interface_files.m"
  {
#line 617 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 617 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "write_module_interface_files.m"
    else
#line 619 "write_module_interface_files.m"
      {
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock_5;
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks_6;
#line 619 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__Section_7 = (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_3, (MR_Integer) 0));
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_3, (MR_Integer) 1)));
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_3, (MR_Integer) 2)));
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items_10;
#line 619 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RevItems_14;

#line 628 "write_module_interface_files.m"
        {
#line 628 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(parse_tree__write_module_interface_files__Items0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_14);
        }
#line 629 "write_module_interface_files.m"
        {
#line 629 "write_module_interface_files.m"
          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_14, &parse_tree__write_module_interface_files__Items_10);
        }
#line 622 "write_module_interface_files.m"
        {
#line 622 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 622 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_5, 0) = parse_tree__write_module_interface_files__Section_7;
#line 622 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_5, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_8));
#line 622 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_5, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Items_10));
#line 622 "write_module_interface_files.m"
        }
#line 623 "write_module_interface_files.m"
        {
#line 623 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(parse_tree__write_module_interface_files__ItemBlocks0_4, &parse_tree__write_module_interface_files__ItemBlocks_6);
        }
#line 619 "write_module_interface_files.m"
        {
#line 619 "write_module_interface_files.m"
          MR_Word base;
#line 619 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 619 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlock_5));
#line 619 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlocks_6));
#line 619 "write_module_interface_files.m"
        }
#line 619 "write_module_interface_files.m"
      }
#line 617 "write_module_interface_files.m"
  }
#line 614 "write_module_interface_files.m"
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
#line 532 "write_module_interface_files.m"
  {
#line 532 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit_8, (MR_Integer) 0)));
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit_8, (MR_Integer) 1)));
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IFileRawItemBlocks0_14;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IFileRawItemBlocks1_15;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IFileRawItemBlocks_16;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems0_17;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems0_18;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_20;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTreeInt_21;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28;
#line 532 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_31_31;
#line 536 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit_8, (MR_Integer) 2)));
#line 554 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumWarnings_22;
#line 554 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumErrors_23;

#line 539 "write_module_interface_files.m"
    {
#line 539 "write_module_interface_files.m"
      parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__RawCompUnit_8, &parse_tree__write_module_interface_files__IFileRawItemBlocks0_14);
    }
#line 543 "write_module_interface_files.m"
    {
#line 543 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(parse_tree__write_module_interface_files__IFileRawItemBlocks0_14, &parse_tree__write_module_interface_files__IFileRawItemBlocks1_15);
    }
#line 545 "write_module_interface_files.m"
    {
#line 545 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(parse_tree__write_module_interface_files__IFileRawItemBlocks1_15, &parse_tree__write_module_interface_files__IFileRawItemBlocks_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28);
    }
#line 547 "write_module_interface_files.m"
    {
#line 547 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0((MR_Integer) 1, parse_tree__write_module_interface_files__IFileRawItemBlocks_16, &parse_tree__write_module_interface_files__IntItems0_17, &parse_tree__write_module_interface_files__ImpItems0_18);
    }
#line 550 "write_module_interface_files.m"
    {
#line 550 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ParseTreeInt0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 550 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_10));
#line 550 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_20, 1) = ((MR_Box) ((MR_Integer) 1));
#line 550 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_20, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_11));
#line 550 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_20, 4) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems0_17));
#line 550 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_20, 5) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems0_18));
#line 550 "write_module_interface_files.m"
    }
#line 552 "write_module_interface_files.m"
    {
#line 552 "write_module_interface_files.m"
      parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ParseTreeInt0_20, &parse_tree__write_module_interface_files__ParseTreeInt_21, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_31_31);
    }
#line 554 "write_module_interface_files.m"
    {
#line 554 "write_module_interface_files.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_31_31, parse_tree__write_module_interface_files__Globals_6, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_22, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_23);
    }
#line 557 "write_module_interface_files.m"
    {
#line 557 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ParseTreeInt_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 559 "write_module_interface_files.m"
    {
#line 559 "write_module_interface_files.m"
      parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ModuleName_10, (MR_String) ".date3");
#line 559 "write_module_interface_files.m"
      return;
    }
#line 532 "write_module_interface_files.m"
  }
#line 90 "write_module_interface_files.m"
}

#line 695 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__695__1_3_p_0(
#line 695 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_55,
#line 695 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_56,
#line 695 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_57)
#line 695 "write_module_interface_files.m"
{
#line 695 "write_module_interface_files.m"
  {
#line 695 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 695 "write_module_interface_files.m"
    {
#line 695 "write_module_interface_files.m"
      mercury__multi_map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__1_55)), parse_tree__write_module_interface_files__HeadVar__2_56, parse_tree__write_module_interface_files__HeadVar__3_57);
#line 695 "write_module_interface_files.m"
      return;
    }
#line 695 "write_module_interface_files.m"
  }
#line 695 "write_module_interface_files.m"
}

#line 176 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__write_private_interface_file__176__1_2_p_0(
#line 176 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_14,
#line 176 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AugModuleName_32)
#line 176 "write_module_interface_files.m"
{
#line 176 "write_module_interface_files.m"
  {
#line 176 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 176 "write_module_interface_files.m"
    {
#line 176 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_module_interface_files__ModuleName_14, parse_tree__write_module_interface_files__AugModuleName_32);
    }
#line 176 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 176 "write_module_interface_files.m"
  }
#line 176 "write_module_interface_files.m"
}

#line 1208 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1208 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1208 "write_module_interface_files.m"
{
#line 1208 "write_module_interface_files.m"
  {
#line 1208 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1208 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1208 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1208 "write_module_interface_files.m"
    {
#line 1208 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1208 "write_module_interface_files.m"
      return;
    }
#line 1208 "write_module_interface_files.m"
  }
#line 1208 "write_module_interface_files.m"
}

#line 1208 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1208 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1208 "write_module_interface_files.m"
{
#line 1208 "write_module_interface_files.m"
  {
#line 1208 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1208 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1208 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1208 "write_module_interface_files.m"
    {
#line 1208 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1208 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1208 "write_module_interface_files.m"
  }
#line 1208 "write_module_interface_files.m"
}

#line 1206 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1206 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1206 "write_module_interface_files.m"
{
#line 1206 "write_module_interface_files.m"
  {
#line 1206 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1206 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1206 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1206 "write_module_interface_files.m"
    {
#line 1206 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1206 "write_module_interface_files.m"
      return;
    }
#line 1206 "write_module_interface_files.m"
  }
#line 1206 "write_module_interface_files.m"
}

#line 1206 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1206 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1206 "write_module_interface_files.m"
{
#line 1206 "write_module_interface_files.m"
  {
#line 1206 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1206 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1206 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1206 "write_module_interface_files.m"
    {
#line 1206 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1206 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1206 "write_module_interface_files.m"
  }
#line 1206 "write_module_interface_files.m"
}

#line 564 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0(
#line 564 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 564 "write_module_interface_files.m"
{
#line 564 "write_module_interface_files.m"
  {
#line 564 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 564 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 564 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 564 "write_module_interface_files.m"
    {
#line 564 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 564 "write_module_interface_files.m"
      return;
    }
#line 564 "write_module_interface_files.m"
  }
#line 564 "write_module_interface_files.m"
}

#line 564 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0(
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 564 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 564 "write_module_interface_files.m"
{
#line 3314 "parse_tree.write_module_interface_files.c"
  {
#line 3316 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3319 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3321 "parse_tree.write_module_interface_files.c"
  }
#line 564 "write_module_interface_files.m"
}

#line 1617 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(
#line 1617 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1617 "write_module_interface_files.m"
{
#line 1617 "write_module_interface_files.m"
  {
#line 1617 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1617 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1617 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1617 "write_module_interface_files.m"
    {
#line 1617 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 1617 "write_module_interface_files.m"
      return;
    }
#line 1617 "write_module_interface_files.m"
  }
#line 1617 "write_module_interface_files.m"
}

#line 1617 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1617 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1617 "write_module_interface_files.m"
{
#line 3367 "parse_tree.write_module_interface_files.c"
  {
#line 3369 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3372 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3374 "parse_tree.write_module_interface_files.c"
  }
#line 1617 "write_module_interface_files.m"
}

#line 1621 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(
#line 1621 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1621 "write_module_interface_files.m"
{
#line 1621 "write_module_interface_files.m"
  {
#line 1621 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1621 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1621 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1621 "write_module_interface_files.m"
    {
#line 1621 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 1621 "write_module_interface_files.m"
      return;
    }
#line 1621 "write_module_interface_files.m"
  }
#line 1621 "write_module_interface_files.m"
}

#line 1621 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1621 "write_module_interface_files.m"
{
#line 3420 "parse_tree.write_module_interface_files.c"
  {
#line 3422 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3425 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3427 "parse_tree.write_module_interface_files.c"
  }
#line 1621 "write_module_interface_files.m"
}

#line 2019 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 2019 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 2019 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 2019 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6)
#line 2019 "write_module_interface_files.m"
{
#line 2027 "write_module_interface_files.m"
  {
#line 2027 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 2027 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameA_7;
#line 2027 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameB_8;

#line 2007 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2010 "write_module_interface_files.m"
      {
#line 2010 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModeDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 2011 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 2011 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 2011 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 2011 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 2011 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 2011 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 2011 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_36_36;

#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 0)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 1)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 2)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 3)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 4)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 5)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 6)));
#line 2011 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 7)));
#line 2010 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 2010 "write_module_interface_files.m"
      }
#line 2007 "write_module_interface_files.m"
    else
#line 2007 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2007 "write_module_interface_files.m"
      {
#line 2007 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemPredDecl_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 2008 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 2008 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_29_29;

#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 0)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 1)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 2)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 3)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 4)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 5)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 6)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 7)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 8)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 9)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 10)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 11)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 12)));
#line 2008 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 13)));
#line 2007 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 2007 "write_module_interface_files.m"
      }
#line 2007 "write_module_interface_files.m"
    else
#line 2007 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 2023 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 2007 "write_module_interface_files.m"
      {
#line 2007 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2010 "write_module_interface_files.m"
          {
#line 2010 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModeDecl_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 2011 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 2011 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 2011 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 2011 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 2011 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 2011 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_59_59;
#line 2011 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_60_60;

#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 0)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 1)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 2)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 3)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 4)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 5)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 6)));
#line 2011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 7)));
#line 2010 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 2010 "write_module_interface_files.m"
          }
#line 2007 "write_module_interface_files.m"
        else
#line 2007 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2007 "write_module_interface_files.m"
          {
#line 2007 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemPredDecl_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_41_41;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_43_43;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_45_45;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_47_47;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_48_48;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_50_50;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 2008 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 2008 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_53_53;

#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 0)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 1)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 2)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 3)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 4)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 5)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 6)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 7)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 8)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 9)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 10)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 11)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 12)));
#line 2008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 13)));
#line 2007 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 2007 "write_module_interface_files.m"
          }
#line 2007 "write_module_interface_files.m"
        else
#line 2007 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 2007 "write_module_interface_files.m"
      }
#line 2027 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 2026 "write_module_interface_files.m"
      {
#line 2026 "write_module_interface_files.m"
        mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__write_module_interface_files__Result_6, parse_tree__write_module_interface_files__SymNameA_7, parse_tree__write_module_interface_files__SymNameB_8);
#line 2026 "write_module_interface_files.m"
        return;
      }
#line 2027 "write_module_interface_files.m"
    else
#line 2028 "write_module_interface_files.m"
      {
#line 2028 "write_module_interface_files.m"
        {
#line 2028 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.compare_by_symname\'/3", (MR_String) "symname not found");
#line 2028 "write_module_interface_files.m"
          return;
        }
#line 2028 "write_module_interface_files.m"
      }
#line 2027 "write_module_interface_files.m"
  }
#line 2019 "write_module_interface_files.m"
}

#line 2014 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 2014 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 2014 "write_module_interface_files.m"
{
#line 2007 "write_module_interface_files.m"
  {
#line 2007 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2007 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2010 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 2007 "write_module_interface_files.m"
    else
#line 2007 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2007 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 2007 "write_module_interface_files.m"
    else
#line 2007 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 2007 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 2007 "write_module_interface_files.m"
  }
#line 2014 "write_module_interface_files.m"
}

#line 1909 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1909 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3)
#line 1909 "write_module_interface_files.m"
{
#line 1913 "write_module_interface_files.m"
  {
#line 1913 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1913 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Chunkable_4;

#line 1913 "write_module_interface_files.m"
#line 1913 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) {
#line 1913 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1913 "write_module_interface_files.m"
        {
#line 1913 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_3), (MR_Integer) 0);
#line 1913 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 1914 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 1914 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));

#line 1946 "write_module_interface_files.m"
#line 1946 "write_module_interface_files.m"
          switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) {
#line 1946 "write_module_interface_files.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1946 "write_module_interface_files.m"
            case (MR_Integer) 0:
#line 1951 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1946 "write_module_interface_files.m"
              break;
#line 1946 "write_module_interface_files.m"
            case (MR_Integer) 1:
#line 1946 "write_module_interface_files.m"
            case (MR_Integer) 2:
#line 1947 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1946 "write_module_interface_files.m"
              break;
#line 1946 "write_module_interface_files.m"
          }
#line 1913 "write_module_interface_files.m"
        }
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1934 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1913 "write_module_interface_files.m"
#line 1913 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 0)))) {
#line 1913 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 1934 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1913 "write_module_interface_files.m"
            break;
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1917 "write_module_interface_files.m"
            {
#line 1917 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 1)));
#line 1917 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 0)));
#line 1918 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 1)));
#line 1918 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 2)));
#line 1918 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 3)));

#line 1984 "write_module_interface_files.m"
#line 1984 "write_module_interface_files.m"
              switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) {
#line 1984 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1984 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 1984 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 1995 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1984 "write_module_interface_files.m"
                  break;
#line 1984 "write_module_interface_files.m"
                case (MR_Integer) 2:
#line 1995 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1984 "write_module_interface_files.m"
                  break;
#line 1984 "write_module_interface_files.m"
                case (MR_Integer) 3:
#line 1984 "write_module_interface_files.m"
#line 1984 "write_module_interface_files.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) {
#line 1984 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 9:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 15:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 21:
#line 1995 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1984 "write_module_interface_files.m"
                      break;
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 2:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 3:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 4:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 5:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 6:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 7:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 8:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 10:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 11:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 12:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 13:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 14:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 16:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 17:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 18:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 19:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 20:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 22:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 23:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 24:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 25:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 26:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 27:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 28:
#line 1984 "write_module_interface_files.m"
                    case (MR_Integer) 29:
#line 1985 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1984 "write_module_interface_files.m"
                      break;
#line 1984 "write_module_interface_files.m"
                  }
#line 1984 "write_module_interface_files.m"
                  break;
#line 1984 "write_module_interface_files.m"
              }
#line 1917 "write_module_interface_files.m"
            }
#line 1913 "write_module_interface_files.m"
            break;
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 10:
#line 1937 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1913 "write_module_interface_files.m"
            break;
#line 1913 "write_module_interface_files.m"
        }
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
    }
#line 1913 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Chunkable_4;
#line 1913 "write_module_interface_files.m"
  }
#line 1909 "write_module_interface_files.m"
}

#line 1896 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1896 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1896 "write_module_interface_files.m"
{
#line 1913 "write_module_interface_files.m"
  {
#line 1913 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1913 "write_module_interface_files.m"
#line 1913 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) {
#line 1913 "write_module_interface_files.m"
      default:
#line 1913 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1913 "write_module_interface_files.m"
        {
#line 1913 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 0);
#line 1913 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1914 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1914 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1946 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 2))))))
#line 1947 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1946 "write_module_interface_files.m"
          else
#line 1946 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1913 "write_module_interface_files.m"
        }
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1934 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1913 "write_module_interface_files.m"
#line 1913 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) {
#line 1913 "write_module_interface_files.m"
          default:
#line 1913 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1913 "write_module_interface_files.m"
            break;
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 1934 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1913 "write_module_interface_files.m"
            break;
#line 1913 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1917 "write_module_interface_files.m"
            {
#line 1917 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1917 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1918 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1918 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1918 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1984 "write_module_interface_files.m"
              if (((((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 24)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 23)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 27)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 14)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 20)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1985 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1984 "write_module_interface_files.m"
              else
#line 1984 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1917 "write_module_interface_files.m"
            }
#line 1913 "write_module_interface_files.m"
            break;
#line 1913 "write_module_interface_files.m"
        }
#line 1913 "write_module_interface_files.m"
        break;
#line 1913 "write_module_interface_files.m"
    }
#line 1913 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1913 "write_module_interface_files.m"
  }
#line 1896 "write_module_interface_files.m"
}

#line 1790 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1790 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1790 "write_module_interface_files.m"
{
#line 1810 "write_module_interface_files.m"
  {
#line 1810 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1810 "write_module_interface_files.m"
#line 1810 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) {
#line 1810 "write_module_interface_files.m"
      default:
#line 1810 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1810 "write_module_interface_files.m"
        break;
#line 1810 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1810 "write_module_interface_files.m"
        {
#line 1810 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 0);
#line 1810 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1811 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1811 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1844 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 2))))))
#line 1845 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1844 "write_module_interface_files.m"
          else
#line 1844 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1810 "write_module_interface_files.m"
        }
#line 1810 "write_module_interface_files.m"
        break;
#line 1810 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1825 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1810 "write_module_interface_files.m"
        break;
#line 1810 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1810 "write_module_interface_files.m"
#line 1810 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) {
#line 1810 "write_module_interface_files.m"
          default:
#line 1810 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1810 "write_module_interface_files.m"
            break;
#line 1810 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1810 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1810 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1810 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1810 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1825 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1810 "write_module_interface_files.m"
            break;
#line 1810 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1814 "write_module_interface_files.m"
            {
#line 1814 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1814 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1815 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1815 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1815 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1883 "write_module_interface_files.m"
              if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 24)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 23)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 27)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 14)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 20)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1884 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1883 "write_module_interface_files.m"
              else
#line 1883 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1814 "write_module_interface_files.m"
            }
#line 1810 "write_module_interface_files.m"
            break;
#line 1810 "write_module_interface_files.m"
        }
#line 1810 "write_module_interface_files.m"
        break;
#line 1810 "write_module_interface_files.m"
    }
#line 1810 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1810 "write_module_interface_files.m"
  }
#line 1790 "write_module_interface_files.m"
}

#line 1781 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_item_1_p_0(
#line 1781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1781 "write_module_interface_files.m"
{
#line 1783 "write_module_interface_files.m"
  {
#line 1783 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 0)));
#line 1783 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_3;
#line 1783 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_4;
#line 1785 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_5_5;
#line 1785 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_6_6;

#line 1784 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1784 "write_module_interface_files.m"
      {
#line 1784 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_3 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 0);
#line 1785 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 0)));
#line 1785 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 1)));
#line 1785 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 2)));
#line 1787 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_4)) == (MR_mktag((MR_Integer) 1))))
#line 1786 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1787 "write_module_interface_files.m"
        else
#line 1787 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_4)) == (MR_mktag((MR_Integer) 2))))
#line 1787 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1787 "write_module_interface_files.m"
        else
#line 1787 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1784 "write_module_interface_files.m"
      }
#line 1783 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1783 "write_module_interface_files.m"
  }
#line 1781 "write_module_interface_files.m"
}

#line 1765 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_5(
#line 1765 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1765 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1765 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1765 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1765 "write_module_interface_files.m"
{
#line 1765 "write_module_interface_files.m"
  {
#line 1765 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1765 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Result_6;

#line 1765 "write_module_interface_files.m"
    {
#line 1765 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__compare_by_symname_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_Result_6);
    }
#line 1765 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Result_6));
#line 1765 "write_module_interface_files.m"
  }
#line 1765 "write_module_interface_files.m"
}

#line 1761 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_4(
#line 1761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1761 "write_module_interface_files.m"
{
#line 1761 "write_module_interface_files.m"
  {
#line 1761 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1761 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1761 "write_module_interface_files.m"
    {
#line 1761 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__symname_orderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1761 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1761 "write_module_interface_files.m"
  }
#line 1761 "write_module_interface_files.m"
}

#line 1759 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_3(
#line 1759 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1759 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1759 "write_module_interface_files.m"
{
#line 1759 "write_module_interface_files.m"
  {
#line 1759 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1759 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1759 "write_module_interface_files.m"
    {
#line 1759 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__import_or_use_item_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1759 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1759 "write_module_interface_files.m"
  }
#line 1759 "write_module_interface_files.m"
}

#line 1757 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_2(
#line 1757 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1757 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1757 "write_module_interface_files.m"
{
#line 1757 "write_module_interface_files.m"
  {
#line 1757 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1757 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1757 "write_module_interface_files.m"
    {
#line 1757 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_reorderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1757 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1757 "write_module_interface_files.m"
  }
#line 1757 "write_module_interface_files.m"
}

#line 1756 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1756 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1756 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1756 "write_module_interface_files.m"
{
#line 1756 "write_module_interface_files.m"
  {
#line 1756 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1756 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1756 "write_module_interface_files.m"
    {
#line 1756 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_chunkable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1756 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1756 "write_module_interface_files.m"
  }
#line 1756 "write_module_interface_files.m"
}

#line 1749 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1749 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1749 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1749 "write_module_interface_files.m"
{
#line 1751 "write_module_interface_files.m"
  {
#line 1751 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1751 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1751 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1751 "write_module_interface_files.m"
    else
#line 1752 "write_module_interface_files.m"
      {
#line 1752 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1752 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1752 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Chunkable0_6;

#line 1753 "write_module_interface_files.m"
        {
#line 1753 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable0_6 = parse_tree__write_module_interface_files__chunkable_item_1_f_0(parse_tree__write_module_interface_files__Item0_3);
        }
#line 1770 "write_module_interface_files.m"
#line 1770 "write_module_interface_files.m"
        switch (parse_tree__write_module_interface_files__Chunkable0_6) {
#line 1770 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1770 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1771 "write_module_interface_files.m"
            {
#line 1771 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__OrderedItemsTail_17;

#line 1772 "write_module_interface_files.m"
              {
#line 1772 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__OrderedItemsTail_17);
              }
#line 1773 "write_module_interface_files.m"
              {
#line 1773 "write_module_interface_files.m"
                MR_Word base;
#line 1773 "write_module_interface_files.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 1773 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1773 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__OrderedItemsTail_17));
#line 1773 "write_module_interface_files.m"
              }
#line 1771 "write_module_interface_files.m"
            }
#line 1770 "write_module_interface_files.m"
            break;
#line 1770 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1755 "write_module_interface_files.m"
            {
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__FrontItems_7;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__RemainItems_8;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ReorderableItems_9;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__NonReorderableItems_10;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ImportReorderableItems_11;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__NonImportReorderableItems_12;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__SymNameItems_13;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__NonSymNameItems_14;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__OrderedSymNameItems_15;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__OrderedRemainItems_16;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1755 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 1756 "write_module_interface_files.m"
              {
#line 1756 "write_module_interface_files.m"
                mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[20], parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__FrontItems_7, &parse_tree__write_module_interface_files__RemainItems_8);
              }
#line 1757 "write_module_interface_files.m"
              {
#line 1757 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1757 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__FrontItems_7));
#line 1757 "write_module_interface_files.m"
              }
#line 1757 "write_module_interface_files.m"
              {
#line 1757 "write_module_interface_files.m"
                mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[21], parse_tree__write_module_interface_files__V_20_20, &parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__NonReorderableItems_10);
              }
#line 1759 "write_module_interface_files.m"
              {
#line 1759 "write_module_interface_files.m"
                mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[22], parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__ImportReorderableItems_11, &parse_tree__write_module_interface_files__NonImportReorderableItems_12);
              }
#line 1761 "write_module_interface_files.m"
              {
#line 1761 "write_module_interface_files.m"
                mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[23], parse_tree__write_module_interface_files__NonReorderableItems_10, &parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__NonSymNameItems_14);
              }
#line 1765 "write_module_interface_files.m"
              {
#line 1765 "write_module_interface_files.m"
                mercury__list__sort_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[24], parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__OrderedSymNameItems_15);
              }
#line 1766 "write_module_interface_files.m"
              {
#line 1766 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__RemainItems_8, &parse_tree__write_module_interface_files__OrderedRemainItems_16);
              }
#line 1767 "write_module_interface_files.m"
              {
#line 1767 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_24_24 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__ImportReorderableItems_11);
              }
#line 1768 "write_module_interface_files.m"
              {
#line 1768 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_26_26 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonImportReorderableItems_12);
              }
#line 1769 "write_module_interface_files.m"
              {
#line 1769 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_28_28 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonSymNameItems_14, parse_tree__write_module_interface_files__OrderedRemainItems_16);
              }
#line 1769 "write_module_interface_files.m"
              {
#line 1769 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__OrderedSymNameItems_15, parse_tree__write_module_interface_files__V_28_28);
              }
#line 1768 "write_module_interface_files.m"
              {
#line 1768 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_26_26, parse_tree__write_module_interface_files__V_27_27);
              }
#line 1767 "write_module_interface_files.m"
              {
#line 1767 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_24_24, parse_tree__write_module_interface_files__V_25_25);
              }
#line 1755 "write_module_interface_files.m"
            }
#line 1770 "write_module_interface_files.m"
            break;
#line 1770 "write_module_interface_files.m"
        }
#line 1752 "write_module_interface_files.m"
      }
#line 1751 "write_module_interface_files.m"
  }
#line 1749 "write_module_interface_files.m"
}

#line 1658 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedImports_2,
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedForeignImports_3,
#line 1658 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4,
#line 1658 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_5)
#line 1658 "write_module_interface_files.m"
{
#line 1662 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1662 "write_module_interface_files.m"
    {
#line 1662 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1662 "write_module_interface_files.m"
      {
#line 1662 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1662 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1662 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4;
#line 1662 "write_module_interface_files.m"
        else
#line 1664 "write_module_interface_files.m"
          {
#line 1664 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1664 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1664 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48;

#line 1682 "write_module_interface_files.m"
#line 1682 "write_module_interface_files.m"
            switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_11)) {
#line 1682 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1682 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 1666 "write_module_interface_files.m"
                {
#line 1666 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_16 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_11), (MR_Integer) 0);
#line 1666 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ModuleDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_16, (MR_Integer) 0)));
#line 1667 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_16, (MR_Integer) 1)));
#line 1667 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_16, (MR_Integer) 2)));

#line 1678 "write_module_interface_files.m"
#line 1678 "write_module_interface_files.m"
                  switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_17)) {
#line 1678 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1678 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 1679 "write_module_interface_files.m"
                      {
#line 1680 "write_module_interface_files.m"
                        {
#line 1680 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                        }
#line 1679 "write_module_interface_files.m"
                      }
#line 1678 "write_module_interface_files.m"
                      break;
#line 1678 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 1678 "write_module_interface_files.m"
                    case (MR_Integer) 2:
#line 1675 "write_module_interface_files.m"
#line 1675 "write_module_interface_files.m"
                      switch (parse_tree__write_module_interface_files__NeedImports_2) {
#line 1675 "write_module_interface_files.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1675 "write_module_interface_files.m"
                        case (MR_Integer) 0:
#line 1676 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4;
#line 1675 "write_module_interface_files.m"
                          break;
#line 1675 "write_module_interface_files.m"
                        case (MR_Integer) 1:
#line 1673 "write_module_interface_files.m"
                          {
#line 1674 "write_module_interface_files.m"
                            {
#line 1674 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                            }
#line 1673 "write_module_interface_files.m"
                          }
#line 1675 "write_module_interface_files.m"
                          break;
#line 1675 "write_module_interface_files.m"
                      }
#line 1678 "write_module_interface_files.m"
                      break;
#line 1678 "write_module_interface_files.m"
                  }
#line 1666 "write_module_interface_files.m"
                }
#line 1682 "write_module_interface_files.m"
                break;
#line 1682 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 1682 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 1711 "write_module_interface_files.m"
                {
#line 1712 "write_module_interface_files.m"
                  {
#line 1712 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                  }
#line 1711 "write_module_interface_files.m"
                }
#line 1682 "write_module_interface_files.m"
                break;
#line 1682 "write_module_interface_files.m"
              case (MR_Integer) 3:
#line 1682 "write_module_interface_files.m"
#line 1682 "write_module_interface_files.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_11, (MR_Integer) 0)))) {
#line 1682 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 2:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 3:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 5:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 6:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 7:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 8:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 9:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 10:
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 11:
#line 1711 "write_module_interface_files.m"
                    {
#line 1712 "write_module_interface_files.m"
                      {
#line 1712 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                      }
#line 1711 "write_module_interface_files.m"
                    }
#line 1682 "write_module_interface_files.m"
                    break;
#line 1682 "write_module_interface_files.m"
                  case (MR_Integer) 4:
#line 1683 "write_module_interface_files.m"
                    {
#line 1683 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ItemPragma_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_11, (MR_Integer) 1)));
#line 1683 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Pragma_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 0)));
#line 1684 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 1)));
#line 1684 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 2)));
#line 1684 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 3)));
#line 1687 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 1687 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1687 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1687 "write_module_interface_files.m"
                        {
#line 1687 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_24, (MR_Integer) 1)));
#line 1691 "write_module_interface_files.m"
#line 1691 "write_module_interface_files.m"
                          switch (parse_tree__write_module_interface_files__NeedForeignImports_3) {
#line 1691 "write_module_interface_files.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1691 "write_module_interface_files.m"
                            case (MR_Integer) 0:
#line 1692 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4;
#line 1691 "write_module_interface_files.m"
                              break;
#line 1691 "write_module_interface_files.m"
                            case (MR_Integer) 1:
#line 1689 "write_module_interface_files.m"
                              {
#line 1690 "write_module_interface_files.m"
                                {
#line 1690 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                                }
#line 1689 "write_module_interface_files.m"
                              }
#line 1691 "write_module_interface_files.m"
                              break;
#line 1691 "write_module_interface_files.m"
                          }
#line 1687 "write_module_interface_files.m"
                        }
#line 1687 "write_module_interface_files.m"
                      else
#line 1695 "write_module_interface_files.m"
                        {
#line 1695 "write_module_interface_files.m"
                          {
#line 1695 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                          }
#line 1695 "write_module_interface_files.m"
                        }
#line 1683 "write_module_interface_files.m"
                    }
#line 1682 "write_module_interface_files.m"
                    break;
#line 1682 "write_module_interface_files.m"
                }
#line 1682 "write_module_interface_files.m"
                break;
#line 1682 "write_module_interface_files.m"
            }
#line 1714 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1714 "write_module_interface_files.m"
            {
#line 1714 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_12;
#line 1714 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_48_48;

#line 1714 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_4;
#line 1714 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1714 "write_module_interface_files.m"
            }
#line 1714 "write_module_interface_files.m"
            continue;
#line 1664 "write_module_interface_files.m"
          }
#line 1662 "write_module_interface_files.m"
      }
#line 1662 "write_module_interface_files.m"
      break;
#line 1662 "write_module_interface_files.m"
    }
#line 1658 "write_module_interface_files.m"
}

#line 1635 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_need_imports_5_p_0(
#line 1635 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1635 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2,
#line 1635 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_3,
#line 1635 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4,
#line 1635 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_5)
#line 1635 "write_module_interface_files.m"
{
#line 1639 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1639 "write_module_interface_files.m"
    {
#line 1639 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1639 "write_module_interface_files.m"
      {
#line 1639 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1639 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1639 "write_module_interface_files.m"
          {
#line 1639 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4;
#line 1639 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2;
#line 1639 "write_module_interface_files.m"
          }
#line 1639 "write_module_interface_files.m"
        else
#line 1640 "write_module_interface_files.m"
          {
#line 1640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemNeedsImports_16;
#line 1640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemNeedsForeignImports_17;
#line 1640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24;
#line 1640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25;

#line 1642 "write_module_interface_files.m"
            {
#line 1642 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemNeedsImports_16 = parse_tree__item_util__item_needs_imports_1_f_0(parse_tree__write_module_interface_files__Item_12);
            }
#line 1643 "write_module_interface_files.m"
            {
#line 1643 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemNeedsForeignImports_17 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__write_module_interface_files__Item_12);
            }
#line 1647 "write_module_interface_files.m"
#line 1647 "write_module_interface_files.m"
            switch (parse_tree__write_module_interface_files__ItemNeedsImports_16) {
#line 1647 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1647 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 1648 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2;
#line 1647 "write_module_interface_files.m"
                break;
#line 1647 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 1646 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24 = (MR_Integer) 1;
#line 1647 "write_module_interface_files.m"
                break;
#line 1647 "write_module_interface_files.m"
            }
#line 1653 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__ItemNeedsForeignImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1654 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4;
#line 1653 "write_module_interface_files.m"
            else
#line 1652 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25 = (MR_Integer) 1;
#line 1656 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1656 "write_module_interface_files.m"
            {
#line 1656 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_13;
#line 1656 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24;
#line 1656 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25;

#line 1656 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0__tmp_copy_4;
#line 1656 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0__tmp_copy_2;
#line 1656 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1656 "write_module_interface_files.m"
            }
#line 1656 "write_module_interface_files.m"
            continue;
#line 1640 "write_module_interface_files.m"
          }
#line 1639 "write_module_interface_files.m"
      }
#line 1639 "write_module_interface_files.m"
      break;
#line 1639 "write_module_interface_files.m"
    }
#line 1635 "write_module_interface_files.m"
}

#line 1625 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1625 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1625 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 1625 "write_module_interface_files.m"
{
#line 1627 "write_module_interface_files.m"
  {
#line 1627 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1627 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_11_11;
#line 1627 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NeedImports_5;
#line 1627 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NeedForeignImports_6;
#line 1627 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemsCord_7;
#line 1627 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;

#line 1628 "write_module_interface_files.m"
    {
#line 1628 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__find_need_imports_5_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedImports_5, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedForeignImports_6);
    }
#line 5035 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1632 "write_module_interface_files.m"
    {
#line 1632 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_10_10 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_11);
    }
#line 1631 "write_module_interface_files.m"
    {
#line 1631 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(parse_tree__write_module_interface_files__Items0_3, parse_tree__write_module_interface_files__NeedImports_5, parse_tree__write_module_interface_files__NeedForeignImports_6, parse_tree__write_module_interface_files__V_10_10, &parse_tree__write_module_interface_files__ItemsCord_7);
    }
#line 1633 "write_module_interface_files.m"
    {
#line 1633 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__Items_4 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_11, parse_tree__write_module_interface_files__ItemsCord_7);
    }
#line 1627 "write_module_interface_files.m"
  }
#line 1625 "write_module_interface_files.m"
}

#line 1557 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_items_acc_4_p_0(
#line 1557 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1557 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1557 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1557 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4)
#line 1557 "write_module_interface_files.m"
{
#line 1560 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1560 "write_module_interface_files.m"
    {
#line 1560 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1560 "write_module_interface_files.m"
      {
#line 1560 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1560 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1560 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 1560 "write_module_interface_files.m"
        else
#line 1561 "write_module_interface_files.m"
          {
#line 1561 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1561 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1561 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17;
#line 1568 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AbstractItem_13;

#line 1566 "write_module_interface_files.m"
            {
#line 1566 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_defn_3_p_0(parse_tree__write_module_interface_files__Item_10, parse_tree__write_module_interface_files__HeadVar__1_1, &parse_tree__write_module_interface_files__AbstractItem_13);
            }
#line 1568 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1567 "write_module_interface_files.m"
              {
#line 1567 "write_module_interface_files.m"
                {
#line 1567 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_13)));
                }
#line 1567 "write_module_interface_files.m"
              }
#line 1568 "write_module_interface_files.m"
            else
#line 1570 "write_module_interface_files.m"
              {
#line 1570 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__AbstractItem_21;

#line 1568 "write_module_interface_files.m"
                {
#line 1568 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_unify_compare_3_p_0(parse_tree__write_module_interface_files__Item_10, parse_tree__write_module_interface_files__HeadVar__1_1, &parse_tree__write_module_interface_files__AbstractItem_21);
                }
#line 1570 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1569 "write_module_interface_files.m"
                  {
#line 1569 "write_module_interface_files.m"
                    {
#line 1569 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_21)));
                    }
#line 1569 "write_module_interface_files.m"
                  }
#line 1570 "write_module_interface_files.m"
                else
#line 5139 "parse_tree.write_module_interface_files.c"
#line 5140 "parse_tree.write_module_interface_files.c"
                  switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) {
#line 5142 "parse_tree.write_module_interface_files.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 5144 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 0:
#line 5146 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 2:
#line 5148 "parse_tree.write_module_interface_files.c"
                      {
#line 1574 "write_module_interface_files.m"
                        {
#line 1574 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                        }
#line 5155 "parse_tree.write_module_interface_files.c"
                      }
#line 5157 "parse_tree.write_module_interface_files.c"
                      break;
#line 5159 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 1:
#line 1576 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 5163 "parse_tree.write_module_interface_files.c"
                      break;
#line 5165 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 3:
#line 5167 "parse_tree.write_module_interface_files.c"
#line 5168 "parse_tree.write_module_interface_files.c"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) {
#line 5170 "parse_tree.write_module_interface_files.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 5172 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 0:
#line 5174 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 1:
#line 5176 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 7:
#line 5178 "parse_tree.write_module_interface_files.c"
                          {
#line 1574 "write_module_interface_files.m"
                            {
#line 1574 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                            }
#line 5185 "parse_tree.write_module_interface_files.c"
                          }
#line 5187 "parse_tree.write_module_interface_files.c"
                          break;
#line 5189 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 2:
#line 5191 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 3:
#line 5193 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 5:
#line 5195 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 6:
#line 5197 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 8:
#line 5199 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 9:
#line 5201 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 10:
#line 5203 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 11:
#line 1576 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 5207 "parse_tree.write_module_interface_files.c"
                          break;
#line 5209 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 4:
#line 5211 "parse_tree.write_module_interface_files.c"
                          {
#line 5213 "parse_tree.write_module_interface_files.c"
                            MR_Word parse_tree__write_module_interface_files__ItemPragma_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 5215 "parse_tree.write_module_interface_files.c"
                            MR_Word parse_tree__write_module_interface_files__Pragma_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 0)));
#line 1594 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 1)));
#line 1594 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 2)));
#line 1594 "write_module_interface_files.m"
                            MR_Integer parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 3)));
#line 1598 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_37_37;

#line 1598 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1598 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1598 "write_module_interface_files.m"
                              {
#line 1598 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_33, (MR_Integer) 1)));
#line 1574 "write_module_interface_files.m"
                                {
#line 1574 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                                }
#line 1598 "write_module_interface_files.m"
                              }
#line 1598 "write_module_interface_files.m"
                            else
#line 1576 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 5245 "parse_tree.write_module_interface_files.c"
                          }
#line 5247 "parse_tree.write_module_interface_files.c"
                          break;
#line 5249 "parse_tree.write_module_interface_files.c"
                      }
#line 5251 "parse_tree.write_module_interface_files.c"
                      break;
#line 5253 "parse_tree.write_module_interface_files.c"
                  }
#line 1570 "write_module_interface_files.m"
              }
#line 1579 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1579 "write_module_interface_files.m"
            {
#line 1579 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_11;
#line 1579 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17;

#line 1579 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3;
#line 1579 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 1579 "write_module_interface_files.m"
            }
#line 1579 "write_module_interface_files.m"
            continue;
#line 1561 "write_module_interface_files.m"
          }
#line 1560 "write_module_interface_files.m"
      }
#line 1560 "write_module_interface_files.m"
      break;
#line 1560 "write_module_interface_files.m"
    }
#line 1557 "write_module_interface_files.m"
}

#line 1526 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0(
#line 1526 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1526 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1526 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1526 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4)
#line 1526 "write_module_interface_files.m"
{
#line 1529 "write_module_interface_files.m"
  {
#line 1529 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1529 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1529 "write_module_interface_files.m"
      {
#line 1529 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1529 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1529 "write_module_interface_files.m"
      }
#line 1529 "write_module_interface_files.m"
    else
#line 1531 "write_module_interface_files.m"
      {
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_22_22;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_11_31;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RawItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RawItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__IntItemsTail_11;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ImpItemsTail_12;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Section_13;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_15;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemsCord_16;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items1_17;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items_18;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NeedImports_25;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NeedForeignImports_26;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemsCord_27;
#line 1531 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 1534 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Context_14;

#line 1532 "write_module_interface_files.m"
        {
#line 1532 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__RawItemBlocks_8, &parse_tree__write_module_interface_files__IntItemsTail_11, &parse_tree__write_module_interface_files__ImpItemsTail_12);
        }
#line 1534 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawItemBlock_7, (MR_Integer) 0)));
#line 1534 "write_module_interface_files.m"
        parse_tree__write_module_interface_files___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawItemBlock_7, (MR_Integer) 1)));
#line 1534 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Items0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawItemBlock_7, (MR_Integer) 2)));
#line 5363 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1535 "write_module_interface_files.m"
        {
#line 1535 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22);
        }
#line 1535 "write_module_interface_files.m"
        {
#line 1535 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__get_short_interface_from_items_acc_4_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Items0_15, parse_tree__write_module_interface_files__V_21_21, &parse_tree__write_module_interface_files__ItemsCord_16);
        }
#line 1536 "write_module_interface_files.m"
        {
#line 1536 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Items1_17 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22, parse_tree__write_module_interface_files__ItemsCord_16);
        }
#line 1628 "write_module_interface_files.m"
        {
#line 1628 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__find_need_imports_5_p_0(parse_tree__write_module_interface_files__Items1_17, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedImports_25, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedForeignImports_26);
        }
#line 5385 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1632 "write_module_interface_files.m"
        {
#line 1632 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_30_30 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_31);
        }
#line 1631 "write_module_interface_files.m"
        {
#line 1631 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(parse_tree__write_module_interface_files__Items1_17, parse_tree__write_module_interface_files__NeedImports_25, parse_tree__write_module_interface_files__NeedForeignImports_26, parse_tree__write_module_interface_files__V_30_30, &parse_tree__write_module_interface_files__ItemsCord_27);
        }
#line 1633 "write_module_interface_files.m"
        {
#line 1633 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Items_18 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_31, parse_tree__write_module_interface_files__ItemsCord_27);
        }
#line 1544 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Items_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "write_module_interface_files.m"
          {
#line 1542 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__IntItemsTail_11;
#line 1543 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__4_4 = parse_tree__write_module_interface_files__ImpItemsTail_12;
#line 1541 "write_module_interface_files.m"
          }
#line 1544 "write_module_interface_files.m"
        else
#line 1550 "write_module_interface_files.m"
#line 1550 "write_module_interface_files.m"
          switch (parse_tree__write_module_interface_files__Section_13) {
#line 1550 "write_module_interface_files.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1550 "write_module_interface_files.m"
            case (MR_Integer) 1:
#line 1551 "write_module_interface_files.m"
              {
#line 1552 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__IntItemsTail_11;
#line 1553 "write_module_interface_files.m"
                {
#line 1553 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22, parse_tree__write_module_interface_files__Items_18, parse_tree__write_module_interface_files__ImpItemsTail_12);
                }
#line 1551 "write_module_interface_files.m"
              }
#line 1550 "write_module_interface_files.m"
              break;
#line 1550 "write_module_interface_files.m"
            case (MR_Integer) 0:
#line 1547 "write_module_interface_files.m"
              {
#line 1548 "write_module_interface_files.m"
                {
#line 1548 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22, parse_tree__write_module_interface_files__Items_18, parse_tree__write_module_interface_files__IntItemsTail_11);
                }
#line 1549 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__4_4 = parse_tree__write_module_interface_files__ImpItemsTail_12;
#line 1547 "write_module_interface_files.m"
              }
#line 1550 "write_module_interface_files.m"
              break;
#line 1550 "write_module_interface_files.m"
          }
#line 1531 "write_module_interface_files.m"
      }
#line 1529 "write_module_interface_files.m"
  }
#line 1526 "write_module_interface_files.m"
}

#line 1437 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1437 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1437 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5)
#line 1437 "write_module_interface_files.m"
{
#line 1439 "write_module_interface_files.m"
  {
#line 1439 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Spec_6;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pieces_7;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1439 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1440 "write_module_interface_files.m"
    {
#line 1440 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1440 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ClauseOrPragma_4));
#line 1440 "write_module_interface_files.m"
    }
#line 1440 "write_module_interface_files.m"
    {
#line 1440 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_11_11));
#line 1440 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[11])));
#line 1440 "write_module_interface_files.m"
    }
#line 1440 "write_module_interface_files.m"
    {
#line 1440 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[8])));
#line 1440 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_10_10));
#line 1440 "write_module_interface_files.m"
    }
#line 1443 "write_module_interface_files.m"
    {
#line 1443 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Pieces_7));
#line 1443 "write_module_interface_files.m"
    }
#line 1443 "write_module_interface_files.m"
    {
#line 1443 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_21_21));
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1443 "write_module_interface_files.m"
    }
#line 1443 "write_module_interface_files.m"
    {
#line 1443 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 1443 "write_module_interface_files.m"
    }
#line 1443 "write_module_interface_files.m"
    {
#line 1443 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_19_19));
#line 1443 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1443 "write_module_interface_files.m"
    }
#line 1442 "write_module_interface_files.m"
    {
#line 1442 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1442 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1442 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_18_18));
#line 1442 "write_module_interface_files.m"
    }
#line 1439 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Spec_6;
#line 1439 "write_module_interface_files.m"
  }
#line 1437 "write_module_interface_files.m"
}

#line 1393 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(
#line 1393 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1393 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1393 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1393 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1393 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5)
#line 1393 "write_module_interface_files.m"
{
#line 1397 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1397 "write_module_interface_files.m"
    {
#line 1397 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1397 "write_module_interface_files.m"
      {
#line 1397 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1397 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1397 "write_module_interface_files.m"
          {
#line 1397 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1397 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1397 "write_module_interface_files.m"
          }
#line 1397 "write_module_interface_files.m"
        else
#line 1399 "write_module_interface_files.m"
          {
#line 1399 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1399 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1399 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;
#line 1399 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46;

#line 1406 "write_module_interface_files.m"
#line 1406 "write_module_interface_files.m"
            switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item0_12)) {
#line 1406 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1406 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 1406 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 1432 "write_module_interface_files.m"
                {
#line 1433 "write_module_interface_files.m"
                  {
#line 1433 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1433 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1433 "write_module_interface_files.m"
                  }
#line 1432 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1432 "write_module_interface_files.m"
                }
#line 1406 "write_module_interface_files.m"
                break;
#line 1406 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 1402 "write_module_interface_files.m"
                {
#line 1402 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemClause0_16 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item0_12), (MR_Integer) 1);
#line 1402 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 6)));
#line 1402 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Spec_18;
#line 1402 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_74_74;
#line 1402 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_75_75;
#line 1403 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 0)));
#line 1403 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 1)));
#line 1403 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 2)));
#line 1403 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 3)));
#line 1403 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 4)));
#line 1403 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 5)));
#line 1403 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 7)));

#line 1443 "write_module_interface_files.m"
                  {
#line 1443 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_75_75, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_17));
#line 1443 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[14])));
#line 1443 "write_module_interface_files.m"
                  }
#line 1443 "write_module_interface_files.m"
                  {
#line 1443 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_74_74, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_75_75));
#line 1443 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1443 "write_module_interface_files.m"
                  }
#line 1442 "write_module_interface_files.m"
                  {
#line 1442 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1442 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1442 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_74_74));
#line 1442 "write_module_interface_files.m"
                  }
#line 1405 "write_module_interface_files.m"
                  {
#line 1405 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_18));
#line 1405 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1405 "write_module_interface_files.m"
                  }
#line 1402 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1402 "write_module_interface_files.m"
                }
#line 1406 "write_module_interface_files.m"
                break;
#line 1406 "write_module_interface_files.m"
              case (MR_Integer) 3:
#line 1406 "write_module_interface_files.m"
#line 1406 "write_module_interface_files.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 0)))) {
#line 1406 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 2:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 3:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 5:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 6:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 7:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 8:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 9:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 10:
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 11:
#line 1432 "write_module_interface_files.m"
                    {
#line 1433 "write_module_interface_files.m"
                      {
#line 1433 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1433 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1433 "write_module_interface_files.m"
                      }
#line 1432 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1432 "write_module_interface_files.m"
                    }
#line 1406 "write_module_interface_files.m"
                    break;
#line 1406 "write_module_interface_files.m"
                  case (MR_Integer) 4:
#line 1407 "write_module_interface_files.m"
                    {
#line 1407 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 1)));
#line 1407 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 0)));
#line 1407 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__AllowedInInterface_23;
#line 1407 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 2)));
#line 1408 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 1)));
#line 1408 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 3)));

#line 1409 "write_module_interface_files.m"
                      {
#line 1409 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__AllowedInInterface_23 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_20);
                      }
#line 1414 "write_module_interface_files.m"
#line 1414 "write_module_interface_files.m"
                      switch (parse_tree__write_module_interface_files__AllowedInInterface_23) {
#line 1414 "write_module_interface_files.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1414 "write_module_interface_files.m"
                        case (MR_Integer) 0:
#line 1411 "write_module_interface_files.m"
                          {
#line 1411 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__Spec_49;

#line 1412 "write_module_interface_files.m"
                            {
#line 1412 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__Spec_49 = parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0((MR_String) "pragma", parse_tree__write_module_interface_files__Context_51);
                            }
#line 1413 "write_module_interface_files.m"
                            {
#line 1413 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_49));
#line 1413 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1413 "write_module_interface_files.m"
                            }
#line 1411 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1411 "write_module_interface_files.m"
                          }
#line 1414 "write_module_interface_files.m"
                          break;
#line 1414 "write_module_interface_files.m"
                        case (MR_Integer) 1:
#line 1415 "write_module_interface_files.m"
                          {
#line 1416 "write_module_interface_files.m"
                            {
#line 1416 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1416 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1416 "write_module_interface_files.m"
                            }
#line 1415 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1415 "write_module_interface_files.m"
                          }
#line 1414 "write_module_interface_files.m"
                          break;
#line 1414 "write_module_interface_files.m"
                      }
#line 1407 "write_module_interface_files.m"
                    }
#line 1406 "write_module_interface_files.m"
                    break;
#line 1406 "write_module_interface_files.m"
                }
#line 1406 "write_module_interface_files.m"
                break;
#line 1406 "write_module_interface_files.m"
            }
#line 1435 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1435 "write_module_interface_files.m"
            {
#line 1435 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_13;
#line 1435 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;
#line 1435 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46;

#line 1435 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1435 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 1435 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1435 "write_module_interface_files.m"
            }
#line 1435 "write_module_interface_files.m"
            continue;
#line 1399 "write_module_interface_files.m"
          }
#line 1397 "write_module_interface_files.m"
      }
#line 1397 "write_module_interface_files.m"
      break;
#line 1397 "write_module_interface_files.m"
    }
#line 1393 "write_module_interface_files.m"
}

#line 1386 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(
#line 1386 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1386 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1386 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1386 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10)
#line 1386 "write_module_interface_files.m"
{
#line 1389 "write_module_interface_files.m"
  {
#line 1389 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1389 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_8;

#line 1390 "write_module_interface_files.m"
    {
#line 1390 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(parse_tree__write_module_interface_files__Items0_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);
    }
#line 1391 "write_module_interface_files.m"
    {
#line 1391 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__Items_6);
#line 1391 "write_module_interface_files.m"
      return;
    }
#line 1389 "write_module_interface_files.m"
  }
#line 1386 "write_module_interface_files.m"
}

#line 1352 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1352 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1352 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 1352 "write_module_interface_files.m"
{
#line 1366 "write_module_interface_files.m"
  {
#line 1366 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1366 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 1356 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemPragma_5;
#line 1356 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pragma_6;
#line 1356 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__FEInfo_10;
#line 1357 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_7_7;
#line 1357 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;
#line 1357 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_9_9;
#line 1359 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Lang_11;
#line 1359 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Values_13;

#line 1356 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1356 "write_module_interface_files.m"
      {
#line 1356 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemPragma_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1357 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Pragma_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 0)));
#line 1357 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 1)));
#line 1357 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 2)));
#line 1357 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 3)));
#line 1358 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1358 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1358 "write_module_interface_files.m"
          {
#line 1358 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__FEInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_6, (MR_Integer) 1)));
#line 1359 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 0)));
#line 1359 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 1)));
#line 1359 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 2)));
#line 1359 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1358 "write_module_interface_files.m"
          }
#line 1356 "write_module_interface_files.m"
      }
#line 1366 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1364 "write_module_interface_files.m"
      {
#line 1364 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Defns_14;
#line 1364 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv0_Defns_14;
#line 1365 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 1365 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1365 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1365 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1365 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_15_15;

#line 1364 "write_module_interface_files.m"
        {
#line 1364 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__TypeDefnMap_3, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_Defns_14);
        }
#line 1364 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1364 "write_module_interface_files.m"
          {
#line 1364 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Defns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_Defns_14);
#line 1364 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1364 "write_module_interface_files.m"
          }
#line 1364 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1364 "write_module_interface_files.m"
          {
#line 1365 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Defns_14)) == (MR_mktag((MR_Integer) 1)));
#line 1365 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1365 "write_module_interface_files.m"
              {
#line 1365 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 0)));
#line 1365 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 1)));
#line 1365 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 1365 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 1365 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 1365 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1365 "write_module_interface_files.m"
                  {
#line 1365 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__V_18_18, (MR_Integer) 0)));
#line 1365 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "write_module_interface_files.m"
                  }
#line 1365 "write_module_interface_files.m"
              }
#line 1365 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1364 "write_module_interface_files.m"
          }
#line 1364 "write_module_interface_files.m"
      }
#line 1366 "write_module_interface_files.m"
    else
#line 1367 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1366 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1366 "write_module_interface_files.m"
  }
#line 1352 "write_module_interface_files.m"
}

#line 1350 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1350 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1350 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1350 "write_module_interface_files.m"
{
#line 1350 "write_module_interface_files.m"
  {
#line 1350 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1350 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1350 "write_module_interface_files.m"
    {
#line 1350 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1350 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1350 "write_module_interface_files.m"
  }
#line 1350 "write_module_interface_files.m"
}

#line 1346 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1346 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1346 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_6,
#line 1346 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_7)
#line 1346 "write_module_interface_files.m"
{
#line 1349 "write_module_interface_files.m"
  {
#line 1349 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1349 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 1350 "write_module_interface_files.m"
    {
#line 1350 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1350 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[5]));
#line 1350 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1));
#line 1350 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1350 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntTypeMap_4));
#line 1350 "write_module_interface_files.m"
    }
#line 1350 "write_module_interface_files.m"
    {
#line 1350 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_7);
#line 1350 "write_module_interface_files.m"
      return;
    }
#line 1349 "write_module_interface_files.m"
  }
#line 1346 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1305 "write_module_interface_files.m"
{
#line 1305 "write_module_interface_files.m"
  {
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1305 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24));
#line 1305 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1305 "write_module_interface_files.m"
{
#line 1305 "write_module_interface_files.m"
  {
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1305 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24));
#line 1305 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1305 "write_module_interface_files.m"
{
#line 1305 "write_module_interface_files.m"
  {
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1305 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24));
#line 1305 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1305 "write_module_interface_files.m"
{
#line 1305 "write_module_interface_files.m"
  {
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1305 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24));
#line 1305 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1305 "write_module_interface_files.m"
{
#line 1305 "write_module_interface_files.m"
  {
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1305 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1305 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1308 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(
#line 1308 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1308 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1308 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24)
#line 1308 "write_module_interface_files.m"
{
#line 1315 "write_module_interface_files.m"
  {
#line 1315 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1315 "write_module_interface_files.m"
#line 1315 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) {
#line 1315 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1315 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1315 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1315 "write_module_interface_files.m"
        break;
#line 1315 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1319 "write_module_interface_files.m"
        {
#line 1319 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)));
#line 1319 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1319 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleName_12;
#line 1319 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27;
#line 1319 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1305 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24;

#line 1320 "write_module_interface_files.m"
          {
#line 1320 "write_module_interface_files.m"
            mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(parse_tree__write_module_interface_files__TypeName_9, &parse_tree__write_module_interface_files__ModuleName_12);
          }
#line 1321 "write_module_interface_files.m"
          {
#line 1321 "write_module_interface_files.m"
            mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27);
          }
#line 1305 "write_module_interface_files.m"
          {
#line 1305 "write_module_interface_files.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[16], parse_tree__write_module_interface_files__Args_10, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
          }
#line 1305 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
#line 1319 "write_module_interface_files.m"
        }
#line 1315 "write_module_interface_files.m"
        break;
#line 1315 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1316 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1315 "write_module_interface_files.m"
        break;
#line 1315 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1315 "write_module_interface_files.m"
#line 1315 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) {
#line 1315 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1315 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1339 "write_module_interface_files.m"
            {
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1325 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1305 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
              {
#line 1305 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[19], parse_tree__write_module_interface_files__Args_33, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
              }
#line 1305 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
#line 1339 "write_module_interface_files.m"
            }
#line 1315 "write_module_interface_files.m"
            break;
#line 1315 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1339 "write_module_interface_files.m"
            {
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__MaybeRetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_31;
#line 1331 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1305 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24;

#line 1335 "write_module_interface_files.m"
              if ((parse_tree__write_module_interface_files__MaybeRetType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1337 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Args_31 = parse_tree__write_module_interface_files__Args0_18;
#line 1335 "write_module_interface_files.m"
              else
#line 1333 "write_module_interface_files.m"
                {
#line 1333 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__RetType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeRetType_19, (MR_Integer) 0)));

#line 1334 "write_module_interface_files.m"
                  {
#line 1334 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Args_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_31, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RetType_22));
#line 1334 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_31, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Args0_18));
#line 1334 "write_module_interface_files.m"
                  }
#line 1333 "write_module_interface_files.m"
                }
#line 1305 "write_module_interface_files.m"
              {
#line 1305 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[17], parse_tree__write_module_interface_files__Args_31, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
              }
#line 1305 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
#line 1339 "write_module_interface_files.m"
            }
#line 1315 "write_module_interface_files.m"
            break;
#line 1315 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1339 "write_module_interface_files.m"
            {
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1327 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1327 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1305 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
              {
#line 1305 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[15], parse_tree__write_module_interface_files__Args_29, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
              }
#line 1305 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
#line 1339 "write_module_interface_files.m"
            }
#line 1315 "write_module_interface_files.m"
            break;
#line 1315 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1339 "write_module_interface_files.m"
            {
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__KindedType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1339 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_32;
#line 1329 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1305 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24;

#line 1329 "write_module_interface_files.m"
              {
#line 1329 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Args_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_32, 0) = ((MR_Box) (parse_tree__write_module_interface_files__KindedType_16));
#line 1329 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1329 "write_module_interface_files.m"
              }
#line 1305 "write_module_interface_files.m"
              {
#line 1305 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[18], parse_tree__write_module_interface_files__Args_32, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
              }
#line 1305 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
#line 1339 "write_module_interface_files.m"
            }
#line 1315 "write_module_interface_files.m"
            break;
#line 1315 "write_module_interface_files.m"
        }
#line 1315 "write_module_interface_files.m"
        break;
#line 1315 "write_module_interface_files.m"
    }
#line 1315 "write_module_interface_files.m"
  }
#line 1308 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1(
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1305 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1305 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1305 "write_module_interface_files.m"
{
#line 1305 "write_module_interface_files.m"
  {
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1305 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1305 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1286 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
#line 1286 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1286 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1286 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1286 "write_module_interface_files.m"
{
#line 1289 "write_module_interface_files.m"
  {
#line 1289 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1289 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 0)));
#line 1289 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 1)));
#line 1289 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16;
#line 1305 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12;

#line 1295 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ClassName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1293 "write_module_interface_files.m"
      {
#line 1293 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 0)));
#line 1293 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 1)));

#line 1294 "write_module_interface_files.m"
        {
#line 1294 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16);
        }
#line 1293 "write_module_interface_files.m"
      }
#line 1295 "write_module_interface_files.m"
    else
#line 1296 "write_module_interface_files.m"
      {
#line 1297 "write_module_interface_files.m"
        {
#line 1297 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_requirements_of_impl_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
#line 1297 "write_module_interface_files.m"
          return;
        }
#line 1296 "write_module_interface_files.m"
      }
#line 1305 "write_module_interface_files.m"
    {
#line 1305 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[14], parse_tree__write_module_interface_files__ArgTypes_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
    }
#line 1305 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
#line 1289 "write_module_interface_files.m"
  }
#line 1286 "write_module_interface_files.m"
}

#line 1266 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1(
#line 1266 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1266 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1266 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1266 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1266 "write_module_interface_files.m"
{
#line 1266 "write_module_interface_files.m"
  {
#line 1266 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1266 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1266 "write_module_interface_files.m"
    {
#line 1266 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1266 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1266 "write_module_interface_files.m"
  }
#line 1266 "write_module_interface_files.m"
}

#line 1259 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(
#line 1259 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1259 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22,
#line 1259 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23)
#line 1259 "write_module_interface_files.m"
{
#line 1264 "write_module_interface_files.m"
  {
#line 1264 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1264 "write_module_interface_files.m"
#line 1264 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) {
#line 1264 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1269 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
        break;
#line 1264 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1270 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
        break;
#line 1264 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1271 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
        break;
#line 1264 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1264 "write_module_interface_files.m"
#line 1264 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) {
#line 1264 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1272 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1273 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1274 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1275 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1276 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1277 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1264 "write_module_interface_files.m"
            {
#line 1264 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemTypeClass_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1264 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 2)));
#line 1265 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 0)));
#line 1265 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 1)));
#line 1265 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 3)));
#line 1265 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 4)));
#line 1265 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 5)));
#line 1265 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 6)));
#line 1265 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 7)));
#line 1266 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_23;

#line 1266 "write_module_interface_files.m"
              {
#line 1266 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[13], parse_tree__write_module_interface_files__Constraints_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_23);
              }
#line 1266 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_23);
#line 1264 "write_module_interface_files.m"
            }
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1278 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 1279 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 1280 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 10:
#line 1281 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 1282 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1264 "write_module_interface_files.m"
            break;
#line 1264 "write_module_interface_files.m"
        }
#line 1264 "write_module_interface_files.m"
        break;
#line 1264 "write_module_interface_files.m"
    }
#line 1264 "write_module_interface_files.m"
  }
#line 1259 "write_module_interface_files.m"
}

#line 1220 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_1,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1220 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5,
#line 1220 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_6)
#line 1220 "write_module_interface_files.m"
{
#line 1224 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1224 "write_module_interface_files.m"
    {
#line 1224 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1224 "write_module_interface_files.m"
      {
#line 1224 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1224 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "write_module_interface_files.m"
          {
#line 1224 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5;
#line 1224 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 1224 "write_module_interface_files.m"
          }
#line 1224 "write_module_interface_files.m"
        else
#line 1226 "write_module_interface_files.m"
          {
#line 1226 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1226 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1226 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33;
#line 1226 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34;
#line 1239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_19;

#line 1227 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_15)) == (MR_mktag((MR_Integer) 2)));
#line 1227 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1227 "write_module_interface_files.m"
              {
#line 1227 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemTypeDefn_19 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_15), (MR_Integer) 2);
#line 1228 "write_module_interface_files.m"
                {
#line 1228 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 0)));
#line 1228 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 1)));
#line 1228 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 2)));
#line 1228 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__TypeCtor_26;
#line 1228 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_31_31;
#line 1228 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 3)));
#line 1228 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 4)));
#line 1228 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 5)));

#line 1229 "write_module_interface_files.m"
                  {
#line 1229 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3], parse_tree__write_module_interface_files__Args_21);
                  }
#line 1229 "write_module_interface_files.m"
                  {
#line 1229 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_26, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Name_20));
#line 1229 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_26, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_31_31));
#line 1229 "write_module_interface_files.m"
                  }
#line 1234 "write_module_interface_files.m"
#line 1234 "write_module_interface_files.m"
                  switch (parse_tree__write_module_interface_files__Section_1) {
#line 1234 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 1235 "write_module_interface_files.m"
                      {
#line 1235 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_47_47;

#line 1250 "write_module_interface_files.m"
                        {
#line 1250 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_22));
#line 1250 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_19));
#line 1250 "write_module_interface_files.m"
                        }
#line 1250 "write_module_interface_files.m"
                        {
#line 1250 "write_module_interface_files.m"
                          mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_26)), ((MR_Box) (parse_tree__write_module_interface_files__V_47_47)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34);
                        }
#line 1235 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 1235 "write_module_interface_files.m"
                      }
#line 1234 "write_module_interface_files.m"
                      break;
#line 1234 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 1231 "write_module_interface_files.m"
                      {
#line 1231 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_57_57;

#line 1232 "write_module_interface_files.m"
                        {
#line 1232 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_15)));
                        }
#line 1250 "write_module_interface_files.m"
                        {
#line 1250 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_57_57, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_22));
#line 1250 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_19));
#line 1250 "write_module_interface_files.m"
                        }
#line 1250 "write_module_interface_files.m"
                        {
#line 1250 "write_module_interface_files.m"
                          mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_26)), ((MR_Box) (parse_tree__write_module_interface_files__V_57_57)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34);
                        }
#line 1231 "write_module_interface_files.m"
                      }
#line 1234 "write_module_interface_files.m"
                      break;
#line 1234 "write_module_interface_files.m"
                  }
#line 1228 "write_module_interface_files.m"
                }
#line 1227 "write_module_interface_files.m"
              }
#line 1227 "write_module_interface_files.m"
            else
#line 1240 "write_module_interface_files.m"
              {
#line 1240 "write_module_interface_files.m"
                {
#line 1240 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_15)));
                }
#line 1240 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5;
#line 1240 "write_module_interface_files.m"
              }
#line 1242 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1242 "write_module_interface_files.m"
            {
#line 1242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_16;
#line 1242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33;
#line 1242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34;

#line 1242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0__tmp_copy_5;
#line 1242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3;
#line 1242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 1242 "write_module_interface_files.m"
            }
#line 1242 "write_module_interface_files.m"
            continue;
#line 1226 "write_module_interface_files.m"
          }
#line 1224 "write_module_interface_files.m"
      }
#line 1224 "write_module_interface_files.m"
      break;
#line 1224 "write_module_interface_files.m"
    }
#line 1220 "write_module_interface_files.m"
}

#line 1195 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1195 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1195 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1195 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1195 "write_module_interface_files.m"
{
#line 1198 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1198 "write_module_interface_files.m"
    {
#line 1198 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1198 "write_module_interface_files.m"
      {
#line 1198 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1198 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1198 "write_module_interface_files.m"
        else
#line 1199 "write_module_interface_files.m"
          {
#line 1199 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1199 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1199 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 1)));
#line 1199 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;
#line 1200 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 0)));
#line 1200 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 2)));
#line 1200 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 3)));

#line 1201 "write_module_interface_files.m"
            {
#line 1201 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Type_11, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16);
            }
#line 1202 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1202 "write_module_interface_files.m"
            {
#line 1202 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Args_8;
#line 1202 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;

#line 1202 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1202 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1202 "write_module_interface_files.m"
            }
#line 1202 "write_module_interface_files.m"
            continue;
#line 1199 "write_module_interface_files.m"
          }
#line 1198 "write_module_interface_files.m"
      }
#line 1198 "write_module_interface_files.m"
      break;
#line 1198 "write_module_interface_files.m"
    }
#line 1195 "write_module_interface_files.m"
}

#line 1186 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1186 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1186 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1186 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1186 "write_module_interface_files.m"
{
#line 1189 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1189 "write_module_interface_files.m"
    {
#line 1189 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1189 "write_module_interface_files.m"
      {
#line 1189 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1189 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1189 "write_module_interface_files.m"
        else
#line 1190 "write_module_interface_files.m"
          {
#line 1190 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1190 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1190 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 3)));
#line 1190 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_18_18;
#line 1191 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 0)));
#line 1191 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 1)));
#line 1191 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 2)));
#line 1191 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 4)));
#line 1191 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 5)));

#line 1192 "write_module_interface_files.m"
            {
#line 1192 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__ConsArgs_13, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_18_18);
            }
#line 1193 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1193 "write_module_interface_files.m"
            {
#line 1193 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Ctors_8;
#line 1193 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_18_18;

#line 1193 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1193 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1193 "write_module_interface_files.m"
            }
#line 1193 "write_module_interface_files.m"
            continue;
#line 1190 "write_module_interface_files.m"
          }
#line 1189 "write_module_interface_files.m"
      }
#line 1189 "write_module_interface_files.m"
      break;
#line 1189 "write_module_interface_files.m"
    }
#line 1186 "write_module_interface_files.m"
}

#line 1181 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1181 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1181 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1181 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1181 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1181 "write_module_interface_files.m"
{
#line 1181 "write_module_interface_files.m"
  {
#line 1181 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1181 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14;

#line 1181 "write_module_interface_files.m"
    {
#line 1181 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14);
    }
#line 1181 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14));
#line 1181 "write_module_interface_files.m"
  }
#line 1181 "write_module_interface_files.m"
}

#line 1151 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1151 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1151 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1151 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14)
#line 1151 "write_module_interface_files.m"
{
#line 1182 "write_module_interface_files.m"
  {
#line 1182 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1182 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_6;
#line 1182 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Args_7;

#line 1155 "write_module_interface_files.m"
    {
#line 1155 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__write_module_interface_files__Type_4, &parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__Args_7);
    }
#line 1182 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1156 "write_module_interface_files.m"
      {
#line 1156 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_26_26;
#line 1156 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_27_27;
#line 1156 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 0)));
#line 1156 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19;
#line 1156 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1156 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 1)));
#line 1158 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1158 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1181 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14;

#line 1158 "write_module_interface_files.m"
        {
#line 1158 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__V_10_10, &parse_tree__write_module_interface_files__V_11_11);
        }
#line 1163 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1163 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1163 "write_module_interface_files.m"
        else
#line 1169 "write_module_interface_files.m"
          {
#line 1164 "write_module_interface_files.m"
            {
#line 1164 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(parse_tree__write_module_interface_files__TypeCtor_6);
            }
#line 1169 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1169 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1169 "write_module_interface_files.m"
            else
#line 1178 "write_module_interface_files.m"
              {
#line 1171 "write_module_interface_files.m"
                MR_String parse_tree__write_module_interface_files__V_28_28;
#line 1171 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__lo_0;
#line 1171 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__hi_1;
#line 1171 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__mid_2;
#line 1171 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__result_3;

#line 1170 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_8)) == (MR_mktag((MR_Integer) 0)));
#line 1170 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1170 "write_module_interface_files.m"
                  {
#line 1170 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SymName_8, (MR_Integer) 0)));
#line 1171 "write_module_interface_files.m"
                    /* binary string simple lookup switch */
#line 1171 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__lo_0 = (MR_Integer) 0;
#line 1171 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__hi_1 = (MR_Integer) 3;
#line 1171 "write_module_interface_files.m"
                    do
#line 1171 "write_module_interface_files.m"
                      {
#line 1171 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__mid_2 = (((parse_tree__write_module_interface_files__lo_0 + parse_tree__write_module_interface_files__hi_1)) / (MR_Integer) 2);
#line 1171 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__result_3 = MR_strcmp(parse_tree__write_module_interface_files__V_28_28, ((&parse_tree__write_module_interface_files_vector_common_10[0 + parse_tree__write_module_interface_files__mid_2]))->parse_tree__write_module_interface_files__vector_common_type_10_0__vct_10_f_0);
#line 1171 "write_module_interface_files.m"
                        if ((parse_tree__write_module_interface_files__result_3 == (MR_Integer) 0))
#line 1171 "write_module_interface_files.m"
                          {
#line 1171 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1171 "write_module_interface_files.m"
                            /* jump out of search loop */
#line 1171 "write_module_interface_files.m"
                            goto label_0;
#line 1171 "write_module_interface_files.m"
                          }
#line 1171 "write_module_interface_files.m"
                        else
#line 1171 "write_module_interface_files.m"
                        if ((parse_tree__write_module_interface_files__result_3 < (MR_Integer) 0))
#line 1171 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__hi_1 = (parse_tree__write_module_interface_files__mid_2 - (MR_Integer) 1);
#line 1171 "write_module_interface_files.m"
                        else
#line 1171 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__lo_0 = (parse_tree__write_module_interface_files__mid_2 + (MR_Integer) 1);
#line 1171 "write_module_interface_files.m"
                      }
#line 1171 "write_module_interface_files.m"
                    while ((parse_tree__write_module_interface_files__lo_0 <= parse_tree__write_module_interface_files__hi_1));
#line 1171 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1171 "write_module_interface_files.m"
                  label_0:;
#line 1170 "write_module_interface_files.m"
                  }
#line 1178 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1178 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1178 "write_module_interface_files.m"
                else
#line 1179 "write_module_interface_files.m"
                  {
#line 1179 "write_module_interface_files.m"
                    {
#line 1179 "write_module_interface_files.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_6)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19);
                    }
#line 1179 "write_module_interface_files.m"
                  }
#line 1178 "write_module_interface_files.m"
              }
#line 1169 "write_module_interface_files.m"
          }
#line 1181 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_20_20 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[12];
#line 7380 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 7382 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_27_27 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1181 "write_module_interface_files.m"
        {
#line 1181 "write_module_interface_files.m"
          mercury__list__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_26_26, parse_tree__write_module_interface_files__TypeInfo_27_27, parse_tree__write_module_interface_files__V_20_20, parse_tree__write_module_interface_files__Args_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
        }
#line 1181 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
#line 1156 "write_module_interface_files.m"
      }
#line 1182 "write_module_interface_files.m"
    else
#line 1182 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1182 "write_module_interface_files.m"
  }
#line 1151 "write_module_interface_files.m"
}

#line 1134 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1134 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1134 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1134 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1134 "write_module_interface_files.m"
{
#line 1137 "write_module_interface_files.m"
  {
#line 1137 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 0)));
#line 1139 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 1)));

#line 1143 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1141 "write_module_interface_files.m"
      {
#line 1141 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 0)));
#line 1141 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 1)));

#line 1142 "write_module_interface_files.m"
        {
#line 1142 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);
#line 1142 "write_module_interface_files.m"
          return;
        }
#line 1141 "write_module_interface_files.m"
      }
#line 1143 "write_module_interface_files.m"
    else
#line 1144 "write_module_interface_files.m"
      {
#line 1145 "write_module_interface_files.m"
        {
#line 1145 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_modules\'/3", (MR_String) "unqualified type encountered");
#line 1145 "write_module_interface_files.m"
          return;
        }
#line 1144 "write_module_interface_files.m"
      }
#line 1137 "write_module_interface_files.m"
  }
#line 1134 "write_module_interface_files.m"
}

#line 1118 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1118 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1118 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1118 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1118 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1118 "write_module_interface_files.m"
{
#line 1118 "write_module_interface_files.m"
  {
#line 1118 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1118 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1118 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1118 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20;

#line 1118 "write_module_interface_files.m"
    {
#line 1118 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
    }
#line 1118 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 1118 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 1118 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20));
#line 1118 "write_module_interface_files.m"
  }
#line 1118 "write_module_interface_files.m"
}

#line 1116 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1116 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1116 "write_module_interface_files.m"
{
#line 1116 "write_module_interface_files.m"
  {
#line 1116 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1116 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_12;

#line 1116 "write_module_interface_files.m"
    {
#line 1116 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_12);
    }
#line 1116 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_12));
#line 1116 "write_module_interface_files.m"
  }
#line 1116 "write_module_interface_files.m"
}

#line 1126 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1126 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1126 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1126 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1126 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1126 "write_module_interface_files.m"
{
#line 1126 "write_module_interface_files.m"
  {
#line 1126 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1126 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1126 "write_module_interface_files.m"
    {
#line 1126 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1126 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1126 "write_module_interface_files.m"
  }
#line 1126 "write_module_interface_files.m"
}

#line 1104 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28,
#line 1104 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30,
#line 1104 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31,
#line 1104 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32,
#line 1104 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33)
#line 1104 "write_module_interface_files.m"
{
#line 1111 "write_module_interface_files.m"
  {
#line 1111 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1111 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1110 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));

#line 1120 "write_module_interface_files.m"
#line 1120 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) {
#line 1120 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1120 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1121 "write_module_interface_files.m"
        {
#line 1121 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1121 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1121 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1121 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_46;
#line 1121 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 1)));
#line 1121 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 2)));
#line 1126 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_33;

#line 1124 "write_module_interface_files.m"
          {
#line 1124 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_34_34 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_60_60);
          }
#line 1124 "write_module_interface_files.m"
          {
#line 1124 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Ctors_19, parse_tree__write_module_interface_files__V_34_34, &parse_tree__write_module_interface_files__RhsTypeCtors_46);
          }
#line 1125 "write_module_interface_files.m"
          {
#line 1125 "write_module_interface_files.m"
            mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_60_60, parse_tree__write_module_interface_files__RhsTypeCtors_46, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31);
          }
#line 1126 "write_module_interface_files.m"
          {
#line 1126 "write_module_interface_files.m"
            mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_60_60, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[10], parse_tree__write_module_interface_files__RhsTypeCtors_46, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_33);
          }
#line 1126 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_33);
#line 1121 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28;
#line 1121 "write_module_interface_files.m"
        }
#line 1120 "write_module_interface_files.m"
        break;
#line 1120 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1113 "write_module_interface_files.m"
        {
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_51_51;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_59_59;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__RhsType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_16;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__NewRhsTypeCtors_17;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_38_38;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_40_40;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_41_41;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 1113 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 1116 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_40_40;
#line 1118 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1118 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_29;
#line 1118 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv8_V_18_18;
#line 1118 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_33;

#line 1114 "write_module_interface_files.m"
          {
#line 1114 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_38_38 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_47_47);
          }
#line 1114 "write_module_interface_files.m"
          {
#line 1114 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__RhsType_15, parse_tree__write_module_interface_files__V_38_38, &parse_tree__write_module_interface_files__RhsTypeCtors_16);
          }
#line 1115 "write_module_interface_files.m"
          {
#line 1115 "write_module_interface_files.m"
            mercury__set__difference_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_47_47, parse_tree__write_module_interface_files__RhsTypeCtors_16, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28, &parse_tree__write_module_interface_files__NewRhsTypeCtors_17);
          }
#line 7704 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_51_51 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4];
#line 1116 "write_module_interface_files.m"
          {
#line 1116 "write_module_interface_files.m"
            mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_47_47, parse_tree__write_module_interface_files__TypeInfo_51_51, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[11], parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_40_40);
          }
#line 1116 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_40_40 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_40_40);
#line 1117 "write_module_interface_files.m"
          {
#line 1117 "write_module_interface_files.m"
            mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_47_47, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28, &parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_41_41);
          }
#line 1118 "write_module_interface_files.m"
          {
#line 1118 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_42_42, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 1118 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3));
#line 1118 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1118 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_42_42, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1118 "write_module_interface_files.m"
          }
#line 1119 "write_module_interface_files.m"
          {
#line 1119 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_44_44 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_47_47);
          }
#line 7737 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_59_59 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1118 "write_module_interface_files.m"
          {
#line 1118 "write_module_interface_files.m"
            mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_47_47, parse_tree__write_module_interface_files__TypeInfo_59_59, parse_tree__write_module_interface_files__TypeInfo_59_59, parse_tree__write_module_interface_files__TypeInfo_51_51, parse_tree__write_module_interface_files__V_42_42, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_41_41)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_29, ((MR_Box) (parse_tree__write_module_interface_files__V_44_44)), &parse_tree__write_module_interface_files__conv8_V_18_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_40_40)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_33);
          }
#line 1118 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_29);
#line 1118 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) parse_tree__write_module_interface_files__conv8_V_18_18);
#line 1118 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_33);
#line 1113 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30;
#line 1113 "write_module_interface_files.m"
        }
#line 1120 "write_module_interface_files.m"
        break;
#line 1120 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1128 "write_module_interface_files.m"
        {
#line 1128 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28;
#line 1128 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30;
#line 1128 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32;
#line 1128 "write_module_interface_files.m"
        }
#line 1120 "write_module_interface_files.m"
        break;
#line 1120 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1120 "write_module_interface_files.m"
#line 1120 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)))) {
#line 1120 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1120 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1129 "write_module_interface_files.m"
            {
#line 1129 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28;
#line 1129 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30;
#line 1129 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32;
#line 1129 "write_module_interface_files.m"
            }
#line 1120 "write_module_interface_files.m"
            break;
#line 1120 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1130 "write_module_interface_files.m"
            {
#line 1130 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_29 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_28;
#line 1130 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_31 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_30;
#line 1130 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_33 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_32;
#line 1130 "write_module_interface_files.m"
            }
#line 1120 "write_module_interface_files.m"
            break;
#line 1120 "write_module_interface_files.m"
        }
#line 1120 "write_module_interface_files.m"
        break;
#line 1120 "write_module_interface_files.m"
    }
#line 1111 "write_module_interface_files.m"
  }
#line 1104 "write_module_interface_files.m"
}

#line 1098 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
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
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_29;
#line 1098 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_31;
#line 1098 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_33;

#line 1098 "write_module_interface_files.m"
    {
#line 1098 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_29, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_31, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_33);
    }
#line 1098 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_29));
#line 1098 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_31));
#line 1098 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_33));
#line 1098 "write_module_interface_files.m"
  }
#line 1098 "write_module_interface_files.m"
}

#line 1090 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1090 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1090 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1090 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1090 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20)
#line 1090 "write_module_interface_files.m"
{
#line 1100 "write_module_interface_files.m"
  {
#line 1100 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1100 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefns_14;
#line 1097 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_TypeDefns_14;

#line 1097 "write_module_interface_files.m"
    {
#line 1097 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__ImplTypeMap_9, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_10)), &parse_tree__write_module_interface_files__conv0_TypeDefns_14);
    }
#line 1097 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1097 "write_module_interface_files.m"
      {
#line 1097 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__TypeDefns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_TypeDefns_14);
#line 1097 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1097 "write_module_interface_files.m"
      }
#line 1100 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1098 "write_module_interface_files.m"
      {
#line 1098 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_35_35;
#line 1098 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1098 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1098 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1098 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20;

#line 1098 "write_module_interface_files.m"
        {
#line 1098 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[1]));
#line 1098 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1));
#line 1098 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1098 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1098 "write_module_interface_files.m"
        }
#line 7938 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_35_35 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1098 "write_module_interface_files.m"
        {
#line 1098 "write_module_interface_files.m"
          mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__TypeInfo_35_35, parse_tree__write_module_interface_files__TypeInfo_35_35, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_21_21, parse_tree__write_module_interface_files__TypeDefns_14, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19)), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
        }
#line 1098 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16);
#line 1098 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18);
#line 1098 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = ((MR_Word) parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
#line 1098 "write_module_interface_files.m"
      }
#line 1100 "write_module_interface_files.m"
    else
#line 1101 "write_module_interface_files.m"
      {
#line 1101 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19;
#line 1101 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17;
#line 1101 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15;
#line 1101 "write_module_interface_files.m"
      }
#line 1100 "write_module_interface_files.m"
  }
#line 1090 "write_module_interface_files.m"
}

#line 1047 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 1047 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 1047 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 1047 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 1047 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34)
#line 1047 "write_module_interface_files.m"
{
#line 1056 "write_module_interface_files.m"
  {
#line 1056 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1056 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 1056 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_13;
#line 1056 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 1055 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Item_14;
#line 1061 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_40_40;
#line 1061 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 1061 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___RhsType_18;
#line 1062 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1062 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_V_19_19;

#line 1055 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 0)));
#line 1055 "write_module_interface_files.m"
    parse_tree__write_module_interface_files___Item_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 1)));
#line 1061 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1061 "write_module_interface_files.m"
      {
#line 1061 "write_module_interface_files.m"
        parse_tree__write_module_interface_files___RhsType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 8028 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 8030 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1062 "write_module_interface_files.m"
        {
#line 1062 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_40_40, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_V_19_19);
        }
#line 1062 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1062 "write_module_interface_files.m"
          {
#line 1062 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) parse_tree__write_module_interface_files__conv0_V_19_19);
#line 1062 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1062 "write_module_interface_files.m"
          }
#line 1061 "write_module_interface_files.m"
      }
#line 1065 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1064 "write_module_interface_files.m"
      {
#line 1064 "write_module_interface_files.m"
        {
#line 1064 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
        }
#line 1064 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1064 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1064 "write_module_interface_files.m"
      }
#line 1065 "write_module_interface_files.m"
    else
#line 1070 "write_module_interface_files.m"
      {
#line 1066 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43;
#line 1066 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_44_44;
#line 1066 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1066 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1066 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1067 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1067 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_V_23_23;

#line 1066 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1066 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1066 "write_module_interface_files.m"
          {
#line 1066 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1066 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1066 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 3)));
#line 8095 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 8097 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeInfo_44_44 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1067 "write_module_interface_files.m"
            {
#line 1067 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_44_44, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv1_V_23_23);
            }
#line 1067 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1067 "write_module_interface_files.m"
              {
#line 1067 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) parse_tree__write_module_interface_files__conv1_V_23_23);
#line 1067 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1067 "write_module_interface_files.m"
              }
#line 1066 "write_module_interface_files.m"
          }
#line 1070 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1069 "write_module_interface_files.m"
          {
#line 1069 "write_module_interface_files.m"
            {
#line 1069 "write_module_interface_files.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
            }
#line 1069 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1069 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1069 "write_module_interface_files.m"
          }
#line 1070 "write_module_interface_files.m"
        else
#line 1086 "write_module_interface_files.m"
          {
#line 1086 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_24;
#line 1086 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_25;
#line 1086 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_26;

#line 1071 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 0)));
#line 1071 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1071 "write_module_interface_files.m"
              {
#line 1071 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 1071 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1071 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1078 "write_module_interface_files.m"
                {
#line 1074 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1074 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv2_V_27_27;
#line 1075 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files___NumBits_28;

#line 1074 "write_module_interface_files.m"
                  {
#line 1074 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv2_V_27_27);
                  }
#line 1074 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1074 "write_module_interface_files.m"
                    {
#line 1074 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) parse_tree__write_module_interface_files__conv2_V_27_27);
#line 1074 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1074 "write_module_interface_files.m"
                    }
#line 1074 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1075 "write_module_interface_files.m"
                    {
#line 1075 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_24, &parse_tree__write_module_interface_files___NumBits_28);
                    }
#line 1078 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1077 "write_module_interface_files.m"
                    {
#line 1077 "write_module_interface_files.m"
                      {
#line 1077 "write_module_interface_files.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32);
                      }
#line 1077 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1077 "write_module_interface_files.m"
                    }
#line 1078 "write_module_interface_files.m"
                  else
#line 1083 "write_module_interface_files.m"
                    {
#line 884 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 884 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Ctor_57;
#line 884 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ExistQTVars_58;
#line 884 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Constraints_59;
#line 884 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Args_61;
#line 884 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_68_68;
#line 894 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Name_60;
#line 894 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files___Arity_62;
#line 894 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Context_63;

#line 892 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
                        {
#line 892 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
                            {
#line 886 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_24)) == (MR_mktag((MR_Integer) 1)));
#line 892 "write_module_interface_files.m"
                              if (parse_tree__write_module_interface_files__succeeded)
#line 892 "write_module_interface_files.m"
                                {
#line 892 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__Ctor_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 0)));
#line 892 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 1)));
#line 892 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                                  if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
                                    {
#line 894 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__ExistQTVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 0)));
#line 894 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Constraints_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 1)));
#line 894 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 2)));
#line 894 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 3)));
#line 894 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 4)));
#line 894 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 5)));
#line 895 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                                      if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
                                        {
#line 896 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                                          if (parse_tree__write_module_interface_files__succeeded)
#line 900 "write_module_interface_files.m"
                                            {
#line 900 "write_module_interface_files.m"
                                              if ((parse_tree__write_module_interface_files__Args_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 900 "write_module_interface_files.m"
                                              else
#line 902 "write_module_interface_files.m"
                                                {
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__ArgType_65;
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 0)));
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 1)));
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_64_64;
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_66_66;
#line 902 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_67_67;

#line 902 "write_module_interface_files.m"
                                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "write_module_interface_files.m"
                                                  if (parse_tree__write_module_interface_files__succeeded)
#line 902 "write_module_interface_files.m"
                                                    {
#line 902 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 0)));
#line 902 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__ArgType_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 1)));
#line 902 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 2)));
#line 902 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 3)));
#line 903 "write_module_interface_files.m"
                                                      {
#line 903 "write_module_interface_files.m"
                                                        parse_tree__write_module_interface_files__V_71_71 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__BothTypesMap_11, parse_tree__write_module_interface_files__ArgType_65, parse_tree__write_module_interface_files__V_54_54);
                                                      }
#line 903 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_71_71 == (MR_Integer) 1);
#line 902 "write_module_interface_files.m"
                                                    }
#line 902 "write_module_interface_files.m"
                                                }
#line 900 "write_module_interface_files.m"
                                            }
#line 884 "write_module_interface_files.m"
                                        }
#line 884 "write_module_interface_files.m"
                                    }
#line 892 "write_module_interface_files.m"
                                }
#line 884 "write_module_interface_files.m"
                            }
#line 884 "write_module_interface_files.m"
                        }
#line 1083 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1082 "write_module_interface_files.m"
                        {
#line 1082 "write_module_interface_files.m"
                          {
#line 1082 "write_module_interface_files.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33, parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);
                          }
#line 1082 "write_module_interface_files.m"
                        }
#line 1083 "write_module_interface_files.m"
                      else
#line 1083 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1083 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1083 "write_module_interface_files.m"
                    }
#line 1078 "write_module_interface_files.m"
                }
#line 1071 "write_module_interface_files.m"
              }
#line 1071 "write_module_interface_files.m"
            else
#line 1087 "write_module_interface_files.m"
              {
#line 1087 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1087 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1087 "write_module_interface_files.m"
              }
#line 1086 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29;
#line 1086 "write_module_interface_files.m"
          }
#line 1070 "write_module_interface_files.m"
      }
#line 1056 "write_module_interface_files.m"
  }
#line 1047 "write_module_interface_files.m"
}

#line 1039 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1039 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1039 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1039 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1039 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1039 "write_module_interface_files.m"
{
#line 1039 "write_module_interface_files.m"
  {
#line 1039 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1039 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1039 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1039 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20;

#line 1039 "write_module_interface_files.m"
    {
#line 1039 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20);
    }
#line 1039 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 1039 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 1039 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20));
#line 1039 "write_module_interface_files.m"
  }
#line 1039 "write_module_interface_files.m"
}

#line 1036 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1036 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1036 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1036 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1036 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1036 "write_module_interface_files.m"
{
#line 1036 "write_module_interface_files.m"
  {
#line 1036 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1036 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30;
#line 1036 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32;
#line 1036 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34;

#line 1036 "write_module_interface_files.m"
    {
#line 1036 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34);
    }
#line 1036 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30));
#line 1036 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32));
#line 1036 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34));
#line 1036 "write_module_interface_files.m"
  }
#line 1036 "write_module_interface_files.m"
}

#line 1028 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12)
#line 1028 "write_module_interface_files.m"
{
#line 1033 "write_module_interface_files.m"
  {
#line 1033 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImplTypes_13;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1033 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_29_29;
#line 1035 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14;
#line 1035 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15;
#line 1035 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10;
#line 1039 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16;
#line 1039 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17;
#line 1039 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv9_Modules_12;

#line 1034 "write_module_interface_files.m"
    {
#line 1034 "write_module_interface_files.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__ImplTypeMap_8, &parse_tree__write_module_interface_files__ImplTypes_13);
    }
#line 1036 "write_module_interface_files.m"
    {
#line 1036 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[0]));
#line 1036 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1));
#line 1036 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1036 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 3) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceTypeMap_7));
#line 1036 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 4) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypeMap_9));
#line 1036 "write_module_interface_files.m"
    }
#line 1037 "write_module_interface_files.m"
    {
#line 1037 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1038 "write_module_interface_files.m"
    {
#line 1038 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1038 "write_module_interface_files.m"
    {
#line 1038 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 8583 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1035 "write_module_interface_files.m"
    {
#line 1035 "write_module_interface_files.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__V_18_18, parse_tree__write_module_interface_files__ImplTypes_13, ((MR_Box) (parse_tree__write_module_interface_files__V_19_19)), &parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_20_20)), &parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15, ((MR_Box) (parse_tree__write_module_interface_files__V_21_21)), &parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
    }
#line 1035 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14);
#line 1035 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15 = ((MR_Word) parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15);
#line 1035 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__DummyTypeCtors_10 = ((MR_Word) parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
#line 1039 "write_module_interface_files.m"
    {
#line 1039 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 1039 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2));
#line 1039 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1039 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_8));
#line 1039 "write_module_interface_files.m"
    }
#line 1041 "write_module_interface_files.m"
    {
#line 1041 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_23_23 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1041 "write_module_interface_files.m"
    {
#line 1041 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_24_24 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1042 "write_module_interface_files.m"
    {
#line 1042 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_25_25 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1039 "write_module_interface_files.m"
    {
#line 1039 "write_module_interface_files.m"
      mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_23_23)), &parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__V_24_24)), &parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__V_25_25)), &parse_tree__write_module_interface_files__conv9_Modules_12);
    }
#line 1039 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16);
#line 1039 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17 = ((MR_Word) parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17);
#line 1039 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv9_Modules_12);
#line 1045 "write_module_interface_files.m"
    {
#line 1045 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15));
#line 1045 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "write_module_interface_files.m"
    }
#line 1044 "write_module_interface_files.m"
    {
#line 1044 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17));
#line 1044 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_29_29));
#line 1044 "write_module_interface_files.m"
    }
#line 1044 "write_module_interface_files.m"
    {
#line 1044 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16));
#line 1044 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_28_28));
#line 1044 "write_module_interface_files.m"
    }
#line 1043 "write_module_interface_files.m"
    {
#line 1043 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14));
#line 1043 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 1043 "write_module_interface_files.m"
    }
#line 1043 "write_module_interface_files.m"
    {
#line 1043 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__NecessaryTypeCtors_11 = mercury__set__union_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__V_26_26);
    }
#line 1033 "write_module_interface_files.m"
  }
#line 1028 "write_module_interface_files.m"
}

#line 993 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 993 "write_module_interface_files.m"
{
#line 1000 "write_module_interface_files.m"
  {
#line 1000 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 2)));
#line 1000 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_5;

#line 996 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 996 "write_module_interface_files.m"
      {
#line 996 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemTypeDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_4), (MR_Integer) 2);
#line 997 "write_module_interface_files.m"
        {
#line 997 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 0)));
#line 997 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Params_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 1)));
#line 997 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 997 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_13_13;
#line 997 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 2)));
#line 997 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 3)));
#line 997 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 4)));
#line 997 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 5)));

#line 998 "write_module_interface_files.m"
          {
#line 998 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3], parse_tree__write_module_interface_files__Params_7);
          }
#line 998 "write_module_interface_files.m"
          {
#line 998 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_6));
#line 998 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_12, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_13_13));
#line 998 "write_module_interface_files.m"
          }
#line 999 "write_module_interface_files.m"
          {
#line 999 "write_module_interface_files.m"
            return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__NecessaryTypeCtors_3);
          }
#line 997 "write_module_interface_files.m"
        }
#line 996 "write_module_interface_files.m"
      }
#line 996 "write_module_interface_files.m"
    else
#line 1001 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1000 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1000 "write_module_interface_files.m"
  }
#line 993 "write_module_interface_files.m"
}

#line 991 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 991 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 991 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 991 "write_module_interface_files.m"
{
#line 991 "write_module_interface_files.m"
  {
#line 991 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 991 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 991 "write_module_interface_files.m"
    {
#line 991 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 991 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 991 "write_module_interface_files.m"
  }
#line 991 "write_module_interface_files.m"
}

#line 987 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 987 "write_module_interface_files.m"
{
#line 990 "write_module_interface_files.m"
  {
#line 990 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 990 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 991 "write_module_interface_files.m"
    {
#line 991 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 991 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[4]));
#line 991 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1));
#line 991 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 991 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryTypeCtors_4));
#line 991 "write_module_interface_files.m"
    }
#line 991 "write_module_interface_files.m"
    {
#line 991 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 991 "write_module_interface_files.m"
      return;
    }
#line 990 "write_module_interface_files.m"
  }
#line 987 "write_module_interface_files.m"
}

#line 963 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 963 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 963 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 963 "write_module_interface_files.m"
{
#line 978 "write_module_interface_files.m"
  {
#line 978 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 0)));
#line 978 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5;

#line 967 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 967 "write_module_interface_files.m"
      {
#line 967 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_4), (MR_Integer) 0);
#line 968 "write_module_interface_files.m"
        {
#line 968 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 968 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 968 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));
#line 975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleName_9;

#line 971 "write_module_interface_files.m"
          if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 1))))
#line 971 "write_module_interface_files.m"
            {
#line 971 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)));
#line 971 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 971 "write_module_interface_files.m"
            }
#line 971 "write_module_interface_files.m"
          else
#line 971 "write_module_interface_files.m"
          if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 2))))
#line 970 "write_module_interface_files.m"
            {
#line 970 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)));
#line 970 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 970 "write_module_interface_files.m"
            }
#line 971 "write_module_interface_files.m"
          else
#line 971 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 975 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 974 "write_module_interface_files.m"
            {
#line 974 "write_module_interface_files.m"
              {
#line 974 "write_module_interface_files.m"
                return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_9)), parse_tree__write_module_interface_files__NecessaryImports_3);
              }
#line 974 "write_module_interface_files.m"
            }
#line 975 "write_module_interface_files.m"
          else
#line 976 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 968 "write_module_interface_files.m"
        }
#line 967 "write_module_interface_files.m"
      }
#line 967 "write_module_interface_files.m"
    else
#line 979 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 978 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 978 "write_module_interface_files.m"
  }
#line 963 "write_module_interface_files.m"
}

#line 961 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 961 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 961 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 961 "write_module_interface_files.m"
{
#line 961 "write_module_interface_files.m"
  {
#line 961 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 961 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 961 "write_module_interface_files.m"
    {
#line 961 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 961 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 961 "write_module_interface_files.m"
  }
#line 961 "write_module_interface_files.m"
}

#line 957 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 957 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 957 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 957 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 957 "write_module_interface_files.m"
{
#line 960 "write_module_interface_files.m"
  {
#line 960 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 960 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 961 "write_module_interface_files.m"
    {
#line 961 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 961 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[3]));
#line 961 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1));
#line 961 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 961 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryImports_4));
#line 961 "write_module_interface_files.m"
    }
#line 961 "write_module_interface_files.m"
    {
#line 961 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 961 "write_module_interface_files.m"
      return;
    }
#line 960 "write_module_interface_files.m"
  }
#line 957 "write_module_interface_files.m"
}

#line 925 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 925 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 925 "write_module_interface_files.m"
{
#line 925 "write_module_interface_files.m"
  {
#line 925 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 925 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0, 1);
#line 925 "write_module_interface_files.m"
  }
#line 925 "write_module_interface_files.m"
}

#line 926 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 926 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 926 "write_module_interface_files.m"
{
#line 926 "write_module_interface_files.m"
  {
#line 926 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 926 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36);
#line 926 "write_module_interface_files.m"
    {
#line 926 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 926 "write_module_interface_files.m"
      return;
    }
#line 926 "write_module_interface_files.m"
  }
#line 926 "write_module_interface_files.m"
}

#line 925 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 925 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 925 "write_module_interface_files.m"
{
#line 925 "write_module_interface_files.m"
  {
#line 925 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 925 "write_module_interface_files.m"
    {
#line 926 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 894 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Name_46;
#line 894 "write_module_interface_files.m"
      MR_Integer parse_tree__write_module_interface_files___Arity_48;
#line 894 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Context_49;

#line 926 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 0)));
#line 926 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 1)));
#line 927 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
#line 927 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 927 "write_module_interface_files.m"
        {
#line 927 "write_module_interface_files.m"
          {
#line 927 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 0)));
#line 927 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 1)));
#line 927 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 2)));
#line 927 "write_module_interface_files.m"
          }
#line 925 "write_module_interface_files.m"
          {
#line 892 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 925 "write_module_interface_files.m"
              {
#line 892 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 925 "write_module_interface_files.m"
                  {
#line 892 "write_module_interface_files.m"
                    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17)) == (MR_mktag((MR_Integer) 1)));
#line 892 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 892 "write_module_interface_files.m"
                      {
#line 892 "write_module_interface_files.m"
                        {
#line 892 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 0)));
#line 892 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 1)));
#line 892 "write_module_interface_files.m"
                        }
#line 925 "write_module_interface_files.m"
                        {
#line 892 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "write_module_interface_files.m"
                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 925 "write_module_interface_files.m"
                            {
#line 894 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 0)));
#line 894 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 1)));
#line 894 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 2)));
#line 894 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 3)));
#line 894 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 4)));
#line 894 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 5)));
#line 895 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "write_module_interface_files.m"
                              if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 925 "write_module_interface_files.m"
                                {
#line 896 "write_module_interface_files.m"
                                  (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "write_module_interface_files.m"
                                  if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 925 "write_module_interface_files.m"
                                    {
#line 929 "write_module_interface_files.m"
                                      {
#line 929 "write_module_interface_files.m"
                                        MR_Word base;
#line 929 "write_module_interface_files.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20 = base;
#line 929 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6));
#line 929 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7));
#line 929 "write_module_interface_files.m"
                                      }
#line 900 "write_module_interface_files.m"
                                      if (((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 900 "write_module_interface_files.m"
                                      else
#line 902 "write_module_interface_files.m"
                                        {
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__ArgType_51;
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 0)));
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 1)));
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_50_50;
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 902 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_53_53;

#line 902 "write_module_interface_files.m"
                                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "write_module_interface_files.m"
                                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 902 "write_module_interface_files.m"
                                            {
#line 902 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 0)));
#line 902 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__ArgType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 1)));
#line 902 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 2)));
#line 902 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 3)));
#line 903 "write_module_interface_files.m"
                                              {
#line 903 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__V_57_57 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, parse_tree__write_module_interface_files__ArgType_51, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20);
                                              }
#line 903 "write_module_interface_files.m"
                                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_57_57 == (MR_Integer) 1);
#line 902 "write_module_interface_files.m"
                                            }
#line 902 "write_module_interface_files.m"
                                        }
#line 900 "write_module_interface_files.m"
                                      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 900 "write_module_interface_files.m"
                                        {
#line 900 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 900 "write_module_interface_files.m"
                                          return;
                                        }
#line 925 "write_module_interface_files.m"
                                    }
#line 925 "write_module_interface_files.m"
                                }
#line 925 "write_module_interface_files.m"
                            }
#line 925 "write_module_interface_files.m"
                        }
#line 892 "write_module_interface_files.m"
                      }
#line 925 "write_module_interface_files.m"
                  }
#line 925 "write_module_interface_files.m"
              }
#line 925 "write_module_interface_files.m"
          }
#line 927 "write_module_interface_files.m"
        }
#line 925 "write_module_interface_files.m"
    }
#line 925 "write_module_interface_files.m"
  }
#line 925 "write_module_interface_files.m"
}

#line 925 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 925 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 925 "write_module_interface_files.m"
{
#line 925 "write_module_interface_files.m"
  {
#line 925 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 925 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0) == 0)
#line 925 "write_module_interface_files.m"
      {
#line 925 "write_module_interface_files.m"
        {
#line 925 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_40_40 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 925 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeDefns_14;

#line 925 "write_module_interface_files.m"
          {
#line 925 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, parse_tree__write_module_interface_files__TypeInfo_40_40, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13)), &parse_tree__write_module_interface_files__TypeDefns_14);
          }
#line 925 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 926 "write_module_interface_files.m"
            {
#line 926 "write_module_interface_files.m"
              mercury__list__member_2_p_1(parse_tree__write_module_interface_files__TypeInfo_40_40, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36, parse_tree__write_module_interface_files__TypeDefns_14, parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3, parse_tree__write_module_interface_files__env_ptr);
            }
#line 925 "write_module_interface_files.m"
        }
#line 925 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_FALSE;
#line 925 "write_module_interface_files.m"
      }
#line 925 "write_module_interface_files.m"
    else
#line 925 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 925 "write_module_interface_files.m"
  }
#line 925 "write_module_interface_files.m"
}

#line 906 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7)
#line 906 "write_module_interface_files.m"
{
#line 906 "write_module_interface_files.m"
  {
#line 906 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s parse_tree__write_module_interface_files__env;

#line 906 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5 = parse_tree__write_module_interface_files__TypeDefnMap_5;
#line 906 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6 = parse_tree__write_module_interface_files__Type_6;
#line 906 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7 = parse_tree__write_module_interface_files__CoveredTypes0_7;
#line 910 "write_module_interface_files.m"
    {
#line 910 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__IsDummyType_8;

#line 910 "write_module_interface_files.m"
#line 910 "write_module_interface_files.m"
      switch (MR_tag((MR_Word) (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)) {
#line 910 "write_module_interface_files.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 910 "write_module_interface_files.m"
        case (MR_Integer) 0:
#line 910 "write_module_interface_files.m"
        case (MR_Integer) 2:
#line 946 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 910 "write_module_interface_files.m"
          break;
#line 910 "write_module_interface_files.m"
        case (MR_Integer) 1:
#line 910 "write_module_interface_files.m"
          {
#line 910 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 0)));
#line 910 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 1)));
#line 910 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 2)));

#line 911 "write_module_interface_files.m"
            {
#line 911 "write_module_interface_files.m"
              (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7);
            }
#line 914 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 913 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 914 "write_module_interface_files.m"
            else
#line 915 "write_module_interface_files.m"
              {
#line 915 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__Arity_12;
#line 919 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_35_35;

#line 915 "write_module_interface_files.m"
                {
#line 915 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Arity_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__write_module_interface_files__TypeArgs_10);
                }
#line 916 "write_module_interface_files.m"
                {
#line 916 "write_module_interface_files.m"
                  MR_Word base;
#line 916 "write_module_interface_files.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "write_module_interface_files.m"
                  (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13 = base;
#line 916 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_9));
#line 916 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Arity_12));
#line 916 "write_module_interface_files.m"
                }
#line 918 "write_module_interface_files.m"
                {
#line 918 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_35_35 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13);
                }
#line 919 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_35_35 == (MR_Integer) 0);
#line 922 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 921 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 922 "write_module_interface_files.m"
                else
#line 934 "write_module_interface_files.m"
                  {
#line 925 "write_module_interface_files.m"
                    {
#line 925 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(&parse_tree__write_module_interface_files__env);
                    }
#line 934 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 933 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 934 "write_module_interface_files.m"
                    else
#line 935 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 934 "write_module_interface_files.m"
                  }
#line 915 "write_module_interface_files.m"
              }
#line 910 "write_module_interface_files.m"
          }
#line 910 "write_module_interface_files.m"
          break;
#line 910 "write_module_interface_files.m"
        case (MR_Integer) 3:
#line 946 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 910 "write_module_interface_files.m"
          break;
#line 910 "write_module_interface_files.m"
      }
#line 910 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__IsDummyType_8;
#line 910 "write_module_interface_files.m"
    }
#line 906 "write_module_interface_files.m"
  }
#line 906 "write_module_interface_files.m"
}

#line 840 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 840 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 840 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 840 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16)
#line 840 "write_module_interface_files.m"
{
#line 865 "write_module_interface_files.m"
  {
#line 865 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15)) == (MR_mktag((MR_Integer) 1)));
#line 865 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn0_7;
#line 865 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Ctors_8;
#line 865 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_9;
#line 865 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_10;
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn0_6;
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;

#line 846 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 846 "write_module_interface_files.m"
      {
#line 846 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 0)));
#line 846 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 1)));
#line 846 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 846 "write_module_interface_files.m"
          {
#line 846 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 846 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__ItemTypeDefn0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 847 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn0_6)) == (MR_mktag((MR_Integer) 0)));
#line 847 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 847 "write_module_interface_files.m"
              {
#line 847 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 0)));
#line 847 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 1)));
#line 847 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 2)));
#line 847 "write_module_interface_files.m"
              }
#line 846 "write_module_interface_files.m"
          }
#line 846 "write_module_interface_files.m"
      }
#line 865 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 855 "write_module_interface_files.m"
      {
#line 884 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 884 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctor_35;
#line 884 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ExistQTVars_36;
#line 884 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Constraints_37;
#line 884 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Args_39;
#line 884 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 894 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Name_38;
#line 894 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___Arity_40;
#line 894 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Context_41;

#line 892 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
          {
#line 892 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
              {
#line 886 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_8)) == (MR_mktag((MR_Integer) 1)));
#line 892 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 892 "write_module_interface_files.m"
                  {
#line 892 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Ctor_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 0)));
#line 892 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 1)));
#line 892 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
                      {
#line 894 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ExistQTVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 0)));
#line 894 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Constraints_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 1)));
#line 894 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Name_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 2)));
#line 894 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Args_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 3)));
#line 894 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 4)));
#line 894 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 5)));
#line 895 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 884 "write_module_interface_files.m"
                          {
#line 896 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 900 "write_module_interface_files.m"
                              {
#line 900 "write_module_interface_files.m"
                                if ((parse_tree__write_module_interface_files__Args_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 900 "write_module_interface_files.m"
                                else
#line 902 "write_module_interface_files.m"
                                  {
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__ArgType_43;
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_39, (MR_Integer) 0)));
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_39, (MR_Integer) 1)));
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 902 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_45_45;

#line 902 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "write_module_interface_files.m"
                                    if (parse_tree__write_module_interface_files__succeeded)
#line 902 "write_module_interface_files.m"
                                      {
#line 902 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 0)));
#line 902 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__ArgType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 1)));
#line 902 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 2)));
#line 902 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 3)));
#line 903 "write_module_interface_files.m"
                                        {
#line 903 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__V_49_49 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__TypeDefnMap_4, parse_tree__write_module_interface_files__ArgType_43, parse_tree__write_module_interface_files__V_32_32);
                                        }
#line 903 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_49_49 == (MR_Integer) 1);
#line 902 "write_module_interface_files.m"
                                      }
#line 902 "write_module_interface_files.m"
                                  }
#line 900 "write_module_interface_files.m"
                              }
#line 884 "write_module_interface_files.m"
                          }
#line 884 "write_module_interface_files.m"
                      }
#line 892 "write_module_interface_files.m"
                  }
#line 884 "write_module_interface_files.m"
              }
#line 884 "write_module_interface_files.m"
          }
#line 855 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 855 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 855 "write_module_interface_files.m"
        else
#line 860 "write_module_interface_files.m"
          {
#line 860 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Details_12;
#line 860 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Defn_13;
#line 860 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_14;
#line 860 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 858 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__NumBits_11;
#line 862 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 862 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 862 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 862 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 862 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_27_27;
#line 862 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_24_24;

#line 856 "write_module_interface_files.m"
            {
#line 856 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_8, &parse_tree__write_module_interface_files__NumBits_11);
            }
#line 858 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 857 "write_module_interface_files.m"
              {
#line 857 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 857 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__NumBits_11));
#line 857 "write_module_interface_files.m"
              }
#line 858 "write_module_interface_files.m"
            else
#line 859 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "write_module_interface_files.m"
            {
#line 861 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Defn_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__Defn_13, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Details_12));
#line 861 "write_module_interface_files.m"
            }
#line 862 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 0)));
#line 862 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 1)));
#line 862 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 2)));
#line 862 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 3)));
#line 862 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 4)));
#line 862 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 5)));
#line 862 "write_module_interface_files.m"
            {
#line 862 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemTypeDefn_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 862 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_22_22));
#line 862 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 862 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 862 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 3) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 862 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 4) = ((MR_Box) (parse_tree__write_module_interface_files__V_26_26));
#line 862 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 5) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 862 "write_module_interface_files.m"
            }
#line 863 "write_module_interface_files.m"
            {
#line 863 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 863 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 863 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_14));
#line 863 "write_module_interface_files.m"
            }
#line 863 "write_module_interface_files.m"
            {
#line 863 "write_module_interface_files.m"
              MR_Word base;
#line 863 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = base;
#line 863 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 863 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "write_module_interface_files.m"
            }
#line 860 "write_module_interface_files.m"
          }
#line 855 "write_module_interface_files.m"
      }
#line 865 "write_module_interface_files.m"
    else
#line 865 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 865 "write_module_interface_files.m"
  }
#line 840 "write_module_interface_files.m"
}

#line 815 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 815 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 815 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 815 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3)
#line 815 "write_module_interface_files.m"
{
#line 818 "write_module_interface_files.m"
  {
#line 818 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 818 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 818 "write_module_interface_files.m"
      {
#line 818 "write_module_interface_files.m"
        {
#line 818 "write_module_interface_files.m"
          MR_Word base;
#line 818 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 818 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 818 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "write_module_interface_files.m"
        }
#line 818 "write_module_interface_files.m"
      }
#line 818 "write_module_interface_files.m"
    else
#line 819 "write_module_interface_files.m"
      {
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 0)));
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewParams_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 1)));
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 0)));
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadParams_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 1)));
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__CompareSymName_22;
#line 820 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 2)));
#line 820 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 3)));
#line 820 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 4)));
#line 820 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 5)));
#line 821 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 2)));
#line 821 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 3)));
#line 821 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 4)));
#line 821 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 5)));

#line 822 "write_module_interface_files.m"
        {
#line 822 "write_module_interface_files.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__write_module_interface_files__CompareSymName_22, parse_tree__write_module_interface_files__NewSymName_10, parse_tree__write_module_interface_files__HeadSymName_16);
        }
#line 826 "write_module_interface_files.m"
#line 826 "write_module_interface_files.m"
        switch (parse_tree__write_module_interface_files__CompareSymName_22) {
#line 826 "write_module_interface_files.m"
          default:
#line 826 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 826 "write_module_interface_files.m"
            break;
#line 826 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 825 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 826 "write_module_interface_files.m"
            break;
#line 826 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 827 "write_module_interface_files.m"
            {
#line 827 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeInfo_29_29 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 827 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__NewParamsLength_23;
#line 827 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__HeadParamsLength_24;
#line 827 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Compare_25;

#line 828 "write_module_interface_files.m"
              {
#line 828 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_29_29, parse_tree__write_module_interface_files__NewParams_11, &parse_tree__write_module_interface_files__NewParamsLength_23);
              }
#line 829 "write_module_interface_files.m"
              {
#line 829 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_29_29, parse_tree__write_module_interface_files__HeadParams_17, &parse_tree__write_module_interface_files__HeadParamsLength_24);
              }
#line 830 "write_module_interface_files.m"
              {
#line 830 "write_module_interface_files.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__write_module_interface_files__Compare_25, parse_tree__write_module_interface_files__NewParamsLength_23, parse_tree__write_module_interface_files__HeadParamsLength_24);
              }
#line 831 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Compare_25 == (MR_Integer) 1);
#line 827 "write_module_interface_files.m"
            }
#line 826 "write_module_interface_files.m"
            break;
#line 826 "write_module_interface_files.m"
        }
#line 835 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 834 "write_module_interface_files.m"
          {
#line 834 "write_module_interface_files.m"
            MR_Word base;
#line 834 "write_module_interface_files.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 834 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 834 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__2_2));
#line 834 "write_module_interface_files.m"
          }
#line 835 "write_module_interface_files.m"
        else
#line 836 "write_module_interface_files.m"
          {
#line 836 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewTail_26;

#line 836 "write_module_interface_files.m"
            {
#line 836 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__New_1, parse_tree__write_module_interface_files__Tail_8, &parse_tree__write_module_interface_files__NewTail_26);
            }
#line 837 "write_module_interface_files.m"
            {
#line 837 "write_module_interface_files.m"
              MR_Word base;
#line 837 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 837 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Head_7));
#line 837 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewTail_26));
#line 837 "write_module_interface_files.m"
            }
#line 836 "write_module_interface_files.m"
          }
#line 819 "write_module_interface_files.m"
      }
#line 818 "write_module_interface_files.m"
  }
#line 815 "write_module_interface_files.m"
}

#line 785 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_9_p_0(
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_3,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_5,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_7,
#line 785 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8,
#line 785 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_9)
#line 785 "write_module_interface_files.m"
{
#line 791 "write_module_interface_files.m"
  while (MR_TRUE)
#line 791 "write_module_interface_files.m"
    {
#line 791 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 791 "write_module_interface_files.m"
      {
#line 791 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 791 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "write_module_interface_files.m"
          {
#line 792 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8;
#line 792 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 792 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 791 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 791 "write_module_interface_files.m"
          }
#line 791 "write_module_interface_files.m"
        else
#line 794 "write_module_interface_files.m"
          {
#line 794 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 794 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 794 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44;
#line 794 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_45_45;
#line 794 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_46_46;
#line 794 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_47_47;
#line 807 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_28;

#line 795 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_22)) == (MR_mktag((MR_Integer) 0)));
#line 795 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 795 "write_module_interface_files.m"
              {
#line 795 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemModuleDefn_28 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_22), (MR_Integer) 0);
#line 796 "write_module_interface_files.m"
                {
#line 796 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ModuleDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_28, (MR_Integer) 0)));
#line 796 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_28, (MR_Integer) 1)));
#line 796 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_28, (MR_Integer) 2)));

#line 800 "write_module_interface_files.m"
#line 800 "write_module_interface_files.m"
                  switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_29)) {
#line 800 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 800 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 804 "write_module_interface_files.m"
                      {
#line 805 "write_module_interface_files.m"
                        {
#line 805 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_22));
#line 805 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2));
#line 805 "write_module_interface_files.m"
                        }
#line 804 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 804 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 804 "write_module_interface_files.m"
                      }
#line 800 "write_module_interface_files.m"
                      break;
#line 800 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 798 "write_module_interface_files.m"
                      {
#line 798 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__ImportedModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ModuleDefn_29, (MR_Integer) 0)));

#line 799 "write_module_interface_files.m"
                        {
#line 799 "write_module_interface_files.m"
                          mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (parse_tree__write_module_interface_files__ImportedModuleName_32)), ((MR_Box) (parse_tree__write_module_interface_files__Context_30)), parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_46_46);
                        }
#line 798 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 798 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 798 "write_module_interface_files.m"
                      }
#line 800 "write_module_interface_files.m"
                      break;
#line 800 "write_module_interface_files.m"
                    case (MR_Integer) 2:
#line 801 "write_module_interface_files.m"
                      {
#line 801 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__UsedModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__ModuleDefn_29, (MR_Integer) 0)));

#line 802 "write_module_interface_files.m"
                        {
#line 802 "write_module_interface_files.m"
                          mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (parse_tree__write_module_interface_files__UsedModuleName_33)), ((MR_Box) (parse_tree__write_module_interface_files__Context_30)), parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_45_45);
                        }
#line 801 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 801 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 801 "write_module_interface_files.m"
                      }
#line 800 "write_module_interface_files.m"
                      break;
#line 800 "write_module_interface_files.m"
                  }
#line 796 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_47_47 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8;
#line 796 "write_module_interface_files.m"
                }
#line 795 "write_module_interface_files.m"
              }
#line 795 "write_module_interface_files.m"
            else
#line 809 "write_module_interface_files.m"
              {
#line 809 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_35;

#line 807 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_22)) == (MR_mktag((MR_Integer) 2)));
#line 807 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 807 "write_module_interface_files.m"
                  {
#line 807 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ItemTypeDefn_35 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_22), (MR_Integer) 2);
#line 808 "write_module_interface_files.m"
                    {
#line 808 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__ItemTypeDefn_35, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_47_47);
                    }
#line 808 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 807 "write_module_interface_files.m"
                  }
#line 807 "write_module_interface_files.m"
                else
#line 810 "write_module_interface_files.m"
                  {
#line 810 "write_module_interface_files.m"
                    {
#line 810 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_22));
#line 810 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2));
#line 810 "write_module_interface_files.m"
                    }
#line 810 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_47_47 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8;
#line 810 "write_module_interface_files.m"
                  }
#line 809 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 809 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 809 "write_module_interface_files.m"
              }
#line 812 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 812 "write_module_interface_files.m"
            {
#line 812 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_23;
#line 812 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_44_44;
#line 812 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_46_46;
#line 812 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_45_45;
#line 812 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_47_47;

#line 812 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_8;
#line 812 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0__tmp_copy_6;
#line 812 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0__tmp_copy_4;
#line 812 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_2;
#line 812 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 812 "write_module_interface_files.m"
            }
#line 812 "write_module_interface_files.m"
            continue;
#line 794 "write_module_interface_files.m"
          }
#line 791 "write_module_interface_files.m"
      }
#line 791 "write_module_interface_files.m"
      break;
#line 791 "write_module_interface_files.m"
    }
#line 785 "write_module_interface_files.m"
}

#line 781 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3)
#line 781 "write_module_interface_files.m"
{
#line 783 "write_module_interface_files.m"
  {
#line 783 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 783 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemTypeDefn_3);

#line 783 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__HeadVar__2_2;
#line 783 "write_module_interface_files.m"
  }
#line 781 "write_module_interface_files.m"
}

#line 774 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_item_1_f_0(
#line 774 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1)
#line 774 "write_module_interface_files.m"
{
#line 776 "write_module_interface_files.m"
  {
#line 776 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 776 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_5;
#line 776 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 776 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 776 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_6;
#line 776 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_7;

#line 777 "write_module_interface_files.m"
    {
#line 777 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__ModuleDefn_6, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_3));
#line 777 "write_module_interface_files.m"
    }
#line 778 "write_module_interface_files.m"
    {
#line 778 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 778 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_6));
#line 778 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_4));
#line 778 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 778 "write_module_interface_files.m"
    }
#line 779 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_7);
#line 776 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_5;
#line 776 "write_module_interface_files.m"
  }
#line 774 "write_module_interface_files.m"
}

#line 767 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_item_1_f_0(
#line 767 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1)
#line 767 "write_module_interface_files.m"
{
#line 769 "write_module_interface_files.m"
  {
#line 769 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 769 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_5;
#line 769 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_6;
#line 769 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_7;

#line 770 "write_module_interface_files.m"
    {
#line 770 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 770 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ModuleDefn_6, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_3));
#line 770 "write_module_interface_files.m"
    }
#line 771 "write_module_interface_files.m"
    {
#line 771 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 771 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_6));
#line 771 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_4));
#line 771 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 771 "write_module_interface_files.m"
    }
#line 772 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_7);
#line 769 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_5;
#line 769 "write_module_interface_files.m"
  }
#line 767 "write_module_interface_files.m"
}

#line 763 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 763 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 763 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 763 "write_module_interface_files.m"
{
#line 763 "write_module_interface_files.m"
  {
#line 763 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 763 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 763 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_HeadVar__2_2;

#line 763 "write_module_interface_files.m"
    {
#line 763 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv2_HeadVar__2_2 = parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 763 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_HeadVar__2_2));
#line 763 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 763 "write_module_interface_files.m"
  }
#line 763 "write_module_interface_files.m"
}

#line 762 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 762 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 762 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 762 "write_module_interface_files.m"
{
#line 762 "write_module_interface_files.m"
  {
#line 762 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 762 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 762 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_Item_5;

#line 762 "write_module_interface_files.m"
    {
#line 762 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv1_Item_5 = parse_tree__write_module_interface_files__wrap_use_module_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 762 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_Item_5));
#line 762 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 762 "write_module_interface_files.m"
  }
#line 762 "write_module_interface_files.m"
}

#line 761 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 761 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 761 "write_module_interface_files.m"
{
#line 761 "write_module_interface_files.m"
  {
#line 761 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 761 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 761 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Item_5;

#line 761 "write_module_interface_files.m"
    {
#line 761 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv0_Item_5 = parse_tree__write_module_interface_files__wrap_import_module_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 761 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Item_5));
#line 761 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 761 "write_module_interface_files.m"
  }
#line 761 "write_module_interface_files.m"
}

#line 753 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 753 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 753 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 753 "write_module_interface_files.m"
{
#line 755 "write_module_interface_files.m"
  {
#line 755 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_29_29;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_30_30;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevRemainderItems_5;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportModuleMap_6;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseModuleMap_7;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefnInfos_8;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RemainderItems_9;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportModuleAssocList_10;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseModuleAssocList_11;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportItems_12;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseItems_13;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefnItems_14;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 755 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;

#line 757 "write_module_interface_files.m"
    {
#line 757 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28);
    }
#line 757 "write_module_interface_files.m"
    {
#line 757 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_17_17 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28);
    }
#line 756 "write_module_interface_files.m"
    {
#line 756 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__do_standardize_impl_items_9_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevRemainderItems_5, parse_tree__write_module_interface_files__V_16_16, &parse_tree__write_module_interface_files__ImportModuleMap_6, parse_tree__write_module_interface_files__V_17_17, &parse_tree__write_module_interface_files__UseModuleMap_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__TypeDefnInfos_8);
    }
#line 10471 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 758 "write_module_interface_files.m"
    {
#line 758 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_29_29, parse_tree__write_module_interface_files__RevRemainderItems_5, &parse_tree__write_module_interface_files__RemainderItems_9);
    }
#line 759 "write_module_interface_files.m"
    {
#line 759 "write_module_interface_files.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28, parse_tree__write_module_interface_files__ImportModuleMap_6, &parse_tree__write_module_interface_files__ImportModuleAssocList_10);
    }
#line 760 "write_module_interface_files.m"
    {
#line 760 "write_module_interface_files.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28, parse_tree__write_module_interface_files__UseModuleMap_7, &parse_tree__write_module_interface_files__UseModuleAssocList_11);
    }
#line 10488 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_30_30 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2];
#line 761 "write_module_interface_files.m"
    {
#line 761 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ImportItems_12 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeInfo_30_30, parse_tree__write_module_interface_files__TypeCtorInfo_29_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[7], parse_tree__write_module_interface_files__ImportModuleAssocList_10);
    }
#line 762 "write_module_interface_files.m"
    {
#line 762 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__UseItems_13 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeInfo_30_30, parse_tree__write_module_interface_files__TypeCtorInfo_29_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[8], parse_tree__write_module_interface_files__UseModuleAssocList_11);
    }
#line 763 "write_module_interface_files.m"
    {
#line 763 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__TypeDefnItems_14 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0, parse_tree__write_module_interface_files__TypeCtorInfo_29_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[9], parse_tree__write_module_interface_files__TypeDefnInfos_8);
    }
#line 764 "write_module_interface_files.m"
    {
#line 764 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RemainderItems_9));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "write_module_interface_files.m"
    }
#line 764 "write_module_interface_files.m"
    {
#line 764 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 0) = ((MR_Box) (parse_tree__write_module_interface_files__TypeDefnItems_14));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 764 "write_module_interface_files.m"
    }
#line 764 "write_module_interface_files.m"
    {
#line 764 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 0) = ((MR_Box) (parse_tree__write_module_interface_files__UseItems_13));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_24_24));
#line 764 "write_module_interface_files.m"
    }
#line 764 "write_module_interface_files.m"
    {
#line 764 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ImportItems_12));
#line 764 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 764 "write_module_interface_files.m"
    }
#line 764 "write_module_interface_files.m"
    {
#line 764 "write_module_interface_files.m"
      mercury__list__condense_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_29_29, parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__Items_4);
#line 764 "write_module_interface_files.m"
      return;
    }
#line 755 "write_module_interface_files.m"
  }
#line 753 "write_module_interface_files.m"
}

#line 742 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(
#line 742 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 742 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2,
#line 742 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_3)
#line 742 "write_module_interface_files.m"
{
#line 745 "write_module_interface_files.m"
  while (MR_TRUE)
#line 745 "write_module_interface_files.m"
    {
#line 745 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 745 "write_module_interface_files.m"
      {
#line 745 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 745 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2;
#line 745 "write_module_interface_files.m"
        else
#line 746 "write_module_interface_files.m"
          {
#line 746 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeDefnPair_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 746 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 746 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefnPair_7, (MR_Integer) 1)));
#line 746 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14;
#line 746 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemTypeDefn_11);
#line 747 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefnPair_7, (MR_Integer) 0)));

#line 748 "write_module_interface_files.m"
            {
#line 748 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_15_15));
#line 748 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2));
#line 748 "write_module_interface_files.m"
            }
#line 749 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 749 "write_module_interface_files.m"
            {
#line 749 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__TypeDefnPairs_8;
#line 749 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14;

#line 749 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0__tmp_copy_2;
#line 749 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 749 "write_module_interface_files.m"
            }
#line 749 "write_module_interface_files.m"
            continue;
#line 746 "write_module_interface_files.m"
          }
#line 745 "write_module_interface_files.m"
      }
#line 745 "write_module_interface_files.m"
      break;
#line 745 "write_module_interface_files.m"
    }
#line 742 "write_module_interface_files.m"
}

#line 735 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_from_map_4_p_0(
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files___TypeCtor_5,
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 735 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 735 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9)
#line 735 "write_module_interface_files.m"
{
#line 740 "write_module_interface_files.m"
  {
#line 740 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 740 "write_module_interface_files.m"
    {
#line 740 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_105_116_101_109_115_95_102_114_111_109_95_109_97_112_95_95_91_49_93_95_48_4_p_0(parse_tree__write_module_interface_files__TypeDefnPairs_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);
#line 740 "write_module_interface_files.m"
      return;
    }
#line 740 "write_module_interface_files.m"
  }
#line 735 "write_module_interface_files.m"
}

#line 722 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(
#line 722 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 722 "write_module_interface_files.m"
{
#line 722 "write_module_interface_files.m"
  {
#line 722 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 722 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0, 1);
#line 722 "write_module_interface_files.m"
  }
#line 722 "write_module_interface_files.m"
}

#line 723 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3(
#line 723 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 723 "write_module_interface_files.m"
{
#line 723 "write_module_interface_files.m"
  {
#line 723 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 723 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_V_16_16);
#line 723 "write_module_interface_files.m"
    {
#line 723 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 723 "write_module_interface_files.m"
      return;
    }
#line 723 "write_module_interface_files.m"
  }
#line 723 "write_module_interface_files.m"
}

#line 722 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(
#line 722 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 722 "write_module_interface_files.m"
{
#line 722 "write_module_interface_files.m"
  {
#line 722 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 722 "write_module_interface_files.m"
    {
#line 723 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 725 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Details_12;
#line 726 "write_module_interface_files.m"
      MR_Integer parse_tree__write_module_interface_files__V_13_13;

#line 723 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16, (MR_Integer) 0)));
#line 723 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16, (MR_Integer) 1)));
#line 725 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10)) == (MR_mktag((MR_Integer) 2)));
#line 725 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 725 "write_module_interface_files.m"
        {
#line 725 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Details_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10, (MR_Integer) 0)));
#line 725 "write_module_interface_files.m"
          {
#line 726 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Details_12)) == (MR_mktag((MR_Integer) 1)));
#line 726 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 726 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_12, (MR_Integer) 0)));
#line 726 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
#line 725 "write_module_interface_files.m"
          }
#line 725 "write_module_interface_files.m"
        }
#line 724 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
#line 724 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 724 "write_module_interface_files.m"
        {
#line 724 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 724 "write_module_interface_files.m"
          return;
        }
#line 722 "write_module_interface_files.m"
    }
#line 722 "write_module_interface_files.m"
  }
#line 722 "write_module_interface_files.m"
}

#line 722 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(
#line 722 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 722 "write_module_interface_files.m"
{
#line 722 "write_module_interface_files.m"
  {
#line 722 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 722 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0) == 0)
#line 722 "write_module_interface_files.m"
      {
#line 722 "write_module_interface_files.m"
        {
#line 723 "write_module_interface_files.m"
          {
#line 723 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_V_16_16, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpTypeDefnPairs_8, parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3, parse_tree__write_module_interface_files__env_ptr);
          }
#line 722 "write_module_interface_files.m"
        }
#line 722 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = MR_FALSE;
#line 722 "write_module_interface_files.m"
      }
#line 722 "write_module_interface_files.m"
    else
#line 722 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = MR_TRUE;
#line 722 "write_module_interface_files.m"
  }
#line 722 "write_module_interface_files.m"
}

#line 715 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypesMap_6,
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeCtor_7,
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeDefnPairs_8,
#line 715 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14,
#line 715 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15)
#line 715 "write_module_interface_files.m"
{
#line 715 "write_module_interface_files.m"
  {
#line 715 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 715 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpTypeDefnPairs_8 = parse_tree__write_module_interface_files__ImpTypeDefnPairs_8;
#line 731 "write_module_interface_files.m"
    {
#line 727 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_19_19;
#line 727 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__TypeInfo_20_20;

#line 722 "write_module_interface_files.m"
      {
#line 722 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(&parse_tree__write_module_interface_files__env);
      }
#line 722 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
#line 727 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 727 "write_module_interface_files.m"
        {
#line 10856 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 10858 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_20_20 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 728 "write_module_interface_files.m"
          {
#line 728 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = mercury__multi_map__contains_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_19_19, parse_tree__write_module_interface_files__TypeInfo_20_20, parse_tree__write_module_interface_files__IntTypesMap_6, ((MR_Box) (parse_tree__write_module_interface_files__ImpTypeCtor_7)));
          }
#line 727 "write_module_interface_files.m"
        }
#line 731 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 730 "write_module_interface_files.m"
        {
#line 730 "write_module_interface_files.m"
          {
#line 730 "write_module_interface_files.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__ImpTypeCtor_7)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14, parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15);
#line 730 "write_module_interface_files.m"
            return;
          }
#line 730 "write_module_interface_files.m"
        }
#line 731 "write_module_interface_files.m"
      else
#line 731 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14;
#line 731 "write_module_interface_files.m"
    }
#line 715 "write_module_interface_files.m"
  }
#line 715 "write_module_interface_files.m"
}

#line 698 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_5(
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 698 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 698 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4)
#line 698 "write_module_interface_files.m"
{
#line 698 "write_module_interface_files.m"
  {
#line 698 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 698 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ImpItems_9;

#line 698 "write_module_interface_files.m"
    {
#line 698 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__add_type_defn_items_from_map_4_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ImpItems_9);
    }
#line 698 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_4 = ((MR_Box) (parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ImpItems_9));
#line 698 "write_module_interface_files.m"
  }
#line 698 "write_module_interface_files.m"
}

#line 695 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_4(
#line 695 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 695 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 695 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 695 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 695 "write_module_interface_files.m"
{
#line 695 "write_module_interface_files.m"
  {
#line 695 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 695 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv5_HeadVar__3_57;

#line 695 "write_module_interface_files.m"
    {
#line 695 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__695__1_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv5_HeadVar__3_57);
    }
#line 695 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv5_HeadVar__3_57));
#line 695 "write_module_interface_files.m"
  }
#line 695 "write_module_interface_files.m"
}

#line 693 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_3(
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 693 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 693 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4)
#line 693 "write_module_interface_files.m"
{
#line 693 "write_module_interface_files.m"
  {
#line 693 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 693 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbstractExportedTypes_15;

#line 693 "write_module_interface_files.m"
    {
#line 693 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbstractExportedTypes_15);
    }
#line 693 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_4 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbstractExportedTypes_15));
#line 693 "write_module_interface_files.m"
  }
#line 693 "write_module_interface_files.m"
}

#line 684 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_2(
#line 684 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 684 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 684 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2)
#line 684 "write_module_interface_files.m"
{
#line 684 "write_module_interface_files.m"
  {
#line 684 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 684 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_TypeDefnPairs_16;

#line 684 "write_module_interface_files.m"
    {
#line 684 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_TypeDefnPairs_16);
    }
#line 684 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_TypeDefnPairs_16));
#line 684 "write_module_interface_files.m"
  }
#line 684 "write_module_interface_files.m"
}

#line 1256 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_1(
#line 1256 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1256 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1256 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1256 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1256 "write_module_interface_files.m"
{
#line 1256 "write_module_interface_files.m"
  {
#line 1256 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1256 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_23;

#line 1256 "write_module_interface_files.m"
    {
#line 1256 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_23);
    }
#line 1256 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_23));
#line 1256 "write_module_interface_files.m"
  }
#line 1256 "write_module_interface_files.m"
}

#line 650 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0(
#line 650 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_0_19,
#line 650 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_20,
#line 650 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_21,
#line 650 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22)
#line 650 "write_module_interface_files.m"
{
#line 655 "write_module_interface_files.m"
  {
#line 655 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_45_45 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_15_75;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_15_85;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__BothTypesMap_9;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryAbsImpExpTypeCtors_11;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeImpImports_12;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AllNecessaryTypeCtors_13;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeclassImpImports_14;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryImpImports_15;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_16;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_23_23;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_24_24;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_36_36;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_38_38;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_39_39;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_40_40;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_41_41;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemsCord_72;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_73_73;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemsCord_82;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_83_83;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_89_89;
#line 1256 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_NecessaryTypeclassImpImports_14;
#line 693 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv4_RemovableAbstractExportedTypes_16;
#line 695 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImpTypesMap_36_36;
#line 698 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_ImpItems_38_38;

#line 655 "write_module_interface_files.m"
    {
#line 655 "write_module_interface_files.m"
      mercury__map__init_1_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_23_23);
    }
#line 656 "write_module_interface_files.m"
    {
#line 656 "write_module_interface_files.m"
      mercury__map__init_1_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_24_24);
    }
#line 11153 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_15_75 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1216 "write_module_interface_files.m"
    {
#line 1216 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_73_73 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_75);
    }
#line 1216 "write_module_interface_files.m"
    {
#line 1216 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_0_19, parse_tree__write_module_interface_files__V_73_73, &parse_tree__write_module_interface_files__ItemsCord_72, parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_23_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27);
    }
#line 1218 "write_module_interface_files.m"
    {
#line 1218 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_20 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_75, parse_tree__write_module_interface_files__ItemsCord_72);
    }
#line 11170 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_15_85 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1216 "write_module_interface_files.m"
    {
#line 1216 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_83_83 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_85);
    }
#line 1216 "write_module_interface_files.m"
    {
#line 1216 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 1, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_21, parse_tree__write_module_interface_files__V_83_83, &parse_tree__write_module_interface_files__ItemsCord_82, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_24_24, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30);
    }
#line 1218 "write_module_interface_files.m"
    {
#line 1218 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_85, parse_tree__write_module_interface_files__ItemsCord_82);
    }
#line 661 "write_module_interface_files.m"
    {
#line 661 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__BothTypesMap_9 = mercury__multi_map__merge_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30);
    }
#line 666 "write_module_interface_files.m"
    {
#line 666 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30, parse_tree__write_module_interface_files__BothTypesMap_9, &parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, &parse_tree__write_module_interface_files__NecessaryAbsImpExpTypeCtors_11, &parse_tree__write_module_interface_files__NecessaryTypeImpImports_12);
    }
#line 669 "write_module_interface_files.m"
    {
#line 669 "write_module_interface_files.m"
      mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, parse_tree__write_module_interface_files__NecessaryAbsImpExpTypeCtors_11, &parse_tree__write_module_interface_files__AllNecessaryTypeCtors_13);
    }
#line 1257 "write_module_interface_files.m"
    {
#line 1257 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_89_89 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1256 "write_module_interface_files.m"
    {
#line 1256 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[4], parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29, ((MR_Box) (parse_tree__write_module_interface_files__V_89_89)), &parse_tree__write_module_interface_files__conv1_NecessaryTypeclassImpImports_14);
    }
#line 1256 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__NecessaryTypeclassImpImports_14 = ((MR_Word) parse_tree__write_module_interface_files__conv1_NecessaryTypeclassImpImports_14);
#line 679 "write_module_interface_files.m"
    {
#line 679 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__NecessaryImpImports_15 = mercury__set__union_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_module_interface_files__NecessaryTypeImpImports_12, parse_tree__write_module_interface_files__NecessaryTypeclassImpImports_14);
    }
#line 684 "write_module_interface_files.m"
    {
#line 684 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[1]));
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_2));
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 3) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypesMap_9));
#line 684 "write_module_interface_files.m"
    }
#line 684 "write_module_interface_files.m"
    {
#line 684 "write_module_interface_files.m"
      mercury__map__map_values_only_3_p_0(parse_tree__write_module_interface_files__TypeInfo_45_45, parse_tree__write_module_interface_files__TypeInfo_45_45, parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__V_31_31, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32);
    }
#line 693 "write_module_interface_files.m"
    {
#line 693 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 693 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[0]));
#line 693 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_3));
#line 693 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 693 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 3) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27));
#line 693 "write_module_interface_files.m"
    }
#line 694 "write_module_interface_files.m"
    {
#line 694 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_34_34 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44);
    }
#line 693 "write_module_interface_files.m"
    {
#line 693 "write_module_interface_files.m"
      mercury__map__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1], parse_tree__write_module_interface_files__V_33_33, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32, ((MR_Box) (parse_tree__write_module_interface_files__V_34_34)), &parse_tree__write_module_interface_files__conv4_RemovableAbstractExportedTypes_16);
    }
#line 693 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_16 = ((MR_Word) parse_tree__write_module_interface_files__conv4_RemovableAbstractExportedTypes_16);
#line 695 "write_module_interface_files.m"
    {
#line 695 "write_module_interface_files.m"
      mercury__set__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[5], parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_16, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImpTypesMap_36_36);
    }
#line 695 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_36_36 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImpTypesMap_36_36);
#line 698 "write_module_interface_files.m"
    {
#line 698 "write_module_interface_files.m"
      mercury__map__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[6], parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_36_36, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29)), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_ImpItems_38_38);
    }
#line 698 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_38_38 = ((MR_Word) parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_ImpItems_38_38);
#line 701 "write_module_interface_files.m"
    {
#line 701 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_38_38, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_39_39);
    }
#line 702 "write_module_interface_files.m"
    {
#line 702 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(parse_tree__write_module_interface_files__NecessaryImpImports_15, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_39_39, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_40_40);
    }
#line 703 "write_module_interface_files.m"
    {
#line 703 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(parse_tree__write_module_interface_files__AllNecessaryTypeCtors_13, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_40_40, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_41_41);
    }
#line 704 "write_module_interface_files.m"
    {
#line 704 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_41_41, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42);
    }
#line 707 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42;
#line 707 "write_module_interface_files.m"
    else
#line 709 "write_module_interface_files.m"
      {
#line 709 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22);
#line 709 "write_module_interface_files.m"
        return;
      }
#line 655 "write_module_interface_files.m"
  }
#line 650 "write_module_interface_files.m"
}

#line 631 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(
#line 631 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 631 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 631 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3)
#line 631 "write_module_interface_files.m"
{
#line 634 "write_module_interface_files.m"
  while (MR_TRUE)
#line 634 "write_module_interface_files.m"
    {
#line 634 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 634 "write_module_interface_files.m"
      {
#line 634 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 634 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 634 "write_module_interface_files.m"
        else
#line 635 "write_module_interface_files.m"
          {
#line 635 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;
#line 639 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemPromise_10;
#line 639 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12;
#line 640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13;
#line 640 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_14_14;
#line 640 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_15_15;

#line 639 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 639 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 639 "write_module_interface_files.m"
              {
#line 639 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemPromise_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 1)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 0)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 1)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 2)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 3)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 4)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 5)));
#line 640 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == (MR_Integer) 3);
#line 639 "write_module_interface_files.m"
              }
#line 643 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 643 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 643 "write_module_interface_files.m"
            else
#line 644 "write_module_interface_files.m"
              {
#line 644 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 644 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 644 "write_module_interface_files.m"
              }
#line 646 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 646 "write_module_interface_files.m"
            {
#line 646 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 646 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;

#line 646 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 646 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 646 "write_module_interface_files.m"
            }
#line 646 "write_module_interface_files.m"
            continue;
#line 635 "write_module_interface_files.m"
          }
#line 634 "write_module_interface_files.m"
      }
#line 634 "write_module_interface_files.m"
      break;
#line 634 "write_module_interface_files.m"
    }
#line 631 "write_module_interface_files.m"
}

#line 578 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_6_p_0(
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_2,
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 578 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 578 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 578 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6)
#line 578 "write_module_interface_files.m"
{
#line 582 "write_module_interface_files.m"
  while (MR_TRUE)
#line 582 "write_module_interface_files.m"
    {
#line 582 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 582 "write_module_interface_files.m"
      {
#line 582 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 582 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "write_module_interface_files.m"
          {
#line 582 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 582 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 582 "write_module_interface_files.m"
          }
#line 582 "write_module_interface_files.m"
        else
#line 584 "write_module_interface_files.m"
          {
#line 584 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SrcItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 584 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SrcItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SrcSection_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SrcItemBlock_14, (MR_Integer) 0)));
#line 584 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SrcItemBlock_14, (MR_Integer) 2)));
#line 584 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_29_29;
#line 584 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_33_33;
#line 585 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SrcItemBlock_14, (MR_Integer) 1)));

#line 596 "write_module_interface_files.m"
#line 596 "write_module_interface_files.m"
            switch (parse_tree__write_module_interface_files__SrcSection_19) {
#line 596 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 596 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 596 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 599 "write_module_interface_files.m"
                {
#line 603 "write_module_interface_files.m"
#line 603 "write_module_interface_files.m"
                  switch (parse_tree__write_module_interface_files__MaybeStripAssertions_2) {
#line 603 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 603 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 604 "write_module_interface_files.m"
                      {
#line 604 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43;
#line 604 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 604 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__StrippedItems_37;
#line 604 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__RevItems_46;

#line 628 "write_module_interface_files.m"
                        {
#line 628 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(parse_tree__write_module_interface_files__Items_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_46);
                        }
#line 629 "write_module_interface_files.m"
                        {
#line 629 "write_module_interface_files.m"
                          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_46, &parse_tree__write_module_interface_files__StrippedItems_37);
                        }
#line 11531 "parse_tree.write_module_interface_files.c"
                        parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 606 "write_module_interface_files.m"
                        {
#line 606 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_28_28 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__StrippedItems_37);
                        }
#line 606 "write_module_interface_files.m"
                        {
#line 606 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_29_29 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, parse_tree__write_module_interface_files__V_28_28);
                        }
#line 604 "write_module_interface_files.m"
                      }
#line 603 "write_module_interface_files.m"
                      break;
#line 603 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 601 "write_module_interface_files.m"
                      {
#line 601 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 601 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_30_30;

#line 602 "write_module_interface_files.m"
                        {
#line 602 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_30_30 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_42_42, parse_tree__write_module_interface_files__Items_21);
                        }
#line 602 "write_module_interface_files.m"
                        {
#line 602 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_29_29 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_42_42, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, parse_tree__write_module_interface_files__V_30_30);
                        }
#line 601 "write_module_interface_files.m"
                      }
#line 603 "write_module_interface_files.m"
                      break;
#line 603 "write_module_interface_files.m"
                  }
#line 599 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_33_33 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 599 "write_module_interface_files.m"
                }
#line 596 "write_module_interface_files.m"
                break;
#line 596 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 587 "write_module_interface_files.m"
                {
#line 591 "write_module_interface_files.m"
#line 591 "write_module_interface_files.m"
                  switch (parse_tree__write_module_interface_files__MaybeStripAssertions_2) {
#line 591 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 591 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 592 "write_module_interface_files.m"
                      {
#line 592 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_41_41;
#line 592 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__StrippedItems_22;
#line 592 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 592 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__RevItems_51;

#line 628 "write_module_interface_files.m"
                        {
#line 628 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(parse_tree__write_module_interface_files__Items_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_51);
                        }
#line 629 "write_module_interface_files.m"
                        {
#line 629 "write_module_interface_files.m"
                          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_51, &parse_tree__write_module_interface_files__StrippedItems_22);
                        }
#line 11610 "parse_tree.write_module_interface_files.c"
                        parse_tree__write_module_interface_files__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 594 "write_module_interface_files.m"
                        {
#line 594 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_32_32 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_41_41, parse_tree__write_module_interface_files__StrippedItems_22);
                        }
#line 594 "write_module_interface_files.m"
                        {
#line 594 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_33_33 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_41_41, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, parse_tree__write_module_interface_files__V_32_32);
                        }
#line 592 "write_module_interface_files.m"
                      }
#line 591 "write_module_interface_files.m"
                      break;
#line 591 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 589 "write_module_interface_files.m"
                      {
#line 589 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 589 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_34_34;

#line 590 "write_module_interface_files.m"
                        {
#line 590 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_34_34 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_40_40, parse_tree__write_module_interface_files__Items_21);
                        }
#line 590 "write_module_interface_files.m"
                        {
#line 590 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_33_33 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_40_40, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, parse_tree__write_module_interface_files__V_34_34);
                        }
#line 589 "write_module_interface_files.m"
                      }
#line 591 "write_module_interface_files.m"
                      break;
#line 591 "write_module_interface_files.m"
                  }
#line 587 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_29_29 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 587 "write_module_interface_files.m"
                }
#line 596 "write_module_interface_files.m"
                break;
#line 596 "write_module_interface_files.m"
            }
#line 609 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 609 "write_module_interface_files.m"
            {
#line 609 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__SrcItemBlocks_15;
#line 609 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_33_33;
#line 609 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_29_29;

#line 609 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5;
#line 609 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3;
#line 609 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 609 "write_module_interface_files.m"
            }
#line 609 "write_module_interface_files.m"
            continue;
#line 584 "write_module_interface_files.m"
          }
#line 582 "write_module_interface_files.m"
      }
#line 582 "write_module_interface_files.m"
      break;
#line 582 "write_module_interface_files.m"
    }
#line 578 "write_module_interface_files.m"
}

#line 568 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_4_p_0(
#line 568 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__SrcItemBlocks_5,
#line 568 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_6,
#line 568 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 568 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImpItems_8)
#line 568 "write_module_interface_files.m"
{
#line 572 "write_module_interface_files.m"
  {
#line 572 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 572 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 572 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItemsCord_9;
#line 572 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItemsCord_10;
#line 572 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 572 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_12_12;

#line 574 "write_module_interface_files.m"
    {
#line 574 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13);
    }
#line 574 "write_module_interface_files.m"
    {
#line 574 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_12_12 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13);
    }
#line 573 "write_module_interface_files.m"
    {
#line 573 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_6_p_0(parse_tree__write_module_interface_files__SrcItemBlocks_5, parse_tree__write_module_interface_files__MaybeStripAssertions_6, parse_tree__write_module_interface_files__V_11_11, &parse_tree__write_module_interface_files__IntItemsCord_9, parse_tree__write_module_interface_files__V_12_12, &parse_tree__write_module_interface_files__ImpItemsCord_10);
    }
#line 575 "write_module_interface_files.m"
    {
#line 575 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__IntItems_7 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13, parse_tree__write_module_interface_files__IntItemsCord_9);
    }
#line 576 "write_module_interface_files.m"
    {
#line 576 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__ImpItems_8 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13, parse_tree__write_module_interface_files__ImpItemsCord_10);
    }
#line 572 "write_module_interface_files.m"
  }
#line 568 "write_module_interface_files.m"
}

#line 267 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_7_p_0(
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_8,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_9,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63,
#line 267 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64,
#line 267 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65,
#line 267 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66)
#line 267 "write_module_interface_files.m"
{
#line 274 "write_module_interface_files.m"
  {
#line 274 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 274 "write_module_interface_files.m"
#line 274 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) {
#line 274 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 274 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 274 "write_module_interface_files.m"
        {
#line 274 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_13 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_10), (MR_Integer) 0);
#line 274 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_13, (MR_Integer) 0)));
#line 275 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_13, (MR_Integer) 1)));
#line 275 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_13, (MR_Integer) 2)));

#line 290 "write_module_interface_files.m"
#line 290 "write_module_interface_files.m"
          switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_14)) {
#line 290 "write_module_interface_files.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 290 "write_module_interface_files.m"
            case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
#line 394 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 394 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 394 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 397 "write_module_interface_files.m"
                  {
#line 398 "write_module_interface_files.m"
                    {
#line 398 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 397 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 397 "write_module_interface_files.m"
                  }
#line 394 "write_module_interface_files.m"
                  break;
#line 394 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
                  {
#line 395 "write_module_interface_files.m"
                    {
#line 395 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 394 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 394 "write_module_interface_files.m"
                  }
#line 394 "write_module_interface_files.m"
                  break;
#line 394 "write_module_interface_files.m"
              }
#line 290 "write_module_interface_files.m"
              break;
#line 290 "write_module_interface_files.m"
            case (MR_Integer) 1:
#line 286 "write_module_interface_files.m"
#line 286 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 286 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 286 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 287 "write_module_interface_files.m"
                  {
#line 288 "write_module_interface_files.m"
                    {
#line 288 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 287 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 287 "write_module_interface_files.m"
                  }
#line 286 "write_module_interface_files.m"
                  break;
#line 286 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 283 "write_module_interface_files.m"
                  {
#line 283 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;

#line 284 "write_module_interface_files.m"
                    {
#line 284 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_92_92, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 285 "write_module_interface_files.m"
                    {
#line 285 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_92_92, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 283 "write_module_interface_files.m"
                  }
#line 286 "write_module_interface_files.m"
                  break;
#line 286 "write_module_interface_files.m"
              }
#line 290 "write_module_interface_files.m"
              break;
#line 290 "write_module_interface_files.m"
            case (MR_Integer) 2:
#line 394 "write_module_interface_files.m"
#line 394 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 394 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 394 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 397 "write_module_interface_files.m"
                  {
#line 398 "write_module_interface_files.m"
                    {
#line 398 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 397 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 397 "write_module_interface_files.m"
                  }
#line 394 "write_module_interface_files.m"
                  break;
#line 394 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
                  {
#line 395 "write_module_interface_files.m"
                    {
#line 395 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 394 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 394 "write_module_interface_files.m"
                  }
#line 394 "write_module_interface_files.m"
                  break;
#line 394 "write_module_interface_files.m"
              }
#line 290 "write_module_interface_files.m"
              break;
#line 290 "write_module_interface_files.m"
          }
#line 274 "write_module_interface_files.m"
        }
#line 274 "write_module_interface_files.m"
        break;
#line 274 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 301 "write_module_interface_files.m"
        {
#line 301 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 301 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 301 "write_module_interface_files.m"
        }
#line 274 "write_module_interface_files.m"
        break;
#line 274 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 394 "write_module_interface_files.m"
#line 394 "write_module_interface_files.m"
        switch (parse_tree__write_module_interface_files__Section_9) {
#line 394 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 394 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 397 "write_module_interface_files.m"
            {
#line 398 "write_module_interface_files.m"
              {
#line 398 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
              }
#line 397 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 397 "write_module_interface_files.m"
            }
#line 394 "write_module_interface_files.m"
            break;
#line 394 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
            {
#line 395 "write_module_interface_files.m"
              {
#line 395 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
              }
#line 394 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 394 "write_module_interface_files.m"
            }
#line 394 "write_module_interface_files.m"
            break;
#line 394 "write_module_interface_files.m"
        }
#line 274 "write_module_interface_files.m"
        break;
#line 274 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 274 "write_module_interface_files.m"
#line 274 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) {
#line 274 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 394 "write_module_interface_files.m"
#line 394 "write_module_interface_files.m"
            switch (parse_tree__write_module_interface_files__Section_9) {
#line 394 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 394 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 397 "write_module_interface_files.m"
                {
#line 398 "write_module_interface_files.m"
                  {
#line 398 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                  }
#line 397 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 397 "write_module_interface_files.m"
                }
#line 394 "write_module_interface_files.m"
                break;
#line 394 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
                {
#line 395 "write_module_interface_files.m"
                  {
#line 395 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                  }
#line 394 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 394 "write_module_interface_files.m"
                }
#line 394 "write_module_interface_files.m"
                break;
#line 394 "write_module_interface_files.m"
            }
#line 274 "write_module_interface_files.m"
            break;
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 307 "write_module_interface_files.m"
            {
#line 307 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 307 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 0)));
#line 307 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__AllowedInInterface_28;
#line 308 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 1)));
#line 308 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 2)));
#line 308 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_23, (MR_Integer) 3)));

#line 309 "write_module_interface_files.m"
              {
#line 309 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__AllowedInInterface_28 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_24);
              }
#line 312 "write_module_interface_files.m"
#line 312 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__AllowedInInterface_28) {
#line 312 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 312 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 311 "write_module_interface_files.m"
                  {
#line 311 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 311 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 311 "write_module_interface_files.m"
                  }
#line 312 "write_module_interface_files.m"
                  break;
#line 312 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 394 "write_module_interface_files.m"
#line 394 "write_module_interface_files.m"
                  switch (parse_tree__write_module_interface_files__Section_9) {
#line 394 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 394 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 397 "write_module_interface_files.m"
                      {
#line 398 "write_module_interface_files.m"
                        {
#line 398 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                        }
#line 397 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 397 "write_module_interface_files.m"
                      }
#line 394 "write_module_interface_files.m"
                      break;
#line 394 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
                      {
#line 395 "write_module_interface_files.m"
                        {
#line 395 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                        }
#line 394 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 394 "write_module_interface_files.m"
                      }
#line 394 "write_module_interface_files.m"
                      break;
#line 394 "write_module_interface_files.m"
                  }
#line 312 "write_module_interface_files.m"
                  break;
#line 312 "write_module_interface_files.m"
              }
#line 307 "write_module_interface_files.m"
            }
#line 274 "write_module_interface_files.m"
            break;
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 334 "write_module_interface_files.m"
            {
#line 334 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__InstanceInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 334 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__AbstractInstanceInfo_38;
#line 334 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__AbstractItem_39;

#line 335 "write_module_interface_files.m"
              {
#line 335 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__AbstractInstanceInfo_38 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__write_module_interface_files__InstanceInfo_37);
              }
#line 336 "write_module_interface_files.m"
              {
#line 336 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__AbstractItem_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__AbstractItem_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 336 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__AbstractItem_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__AbstractInstanceInfo_38));
#line 336 "write_module_interface_files.m"
              }
#line 394 "write_module_interface_files.m"
#line 394 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 394 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 394 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 397 "write_module_interface_files.m"
                  {
#line 398 "write_module_interface_files.m"
                    {
#line 398 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_39)));
                    }
#line 397 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 397 "write_module_interface_files.m"
                  }
#line 394 "write_module_interface_files.m"
                  break;
#line 394 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 394 "write_module_interface_files.m"
                  {
#line 395 "write_module_interface_files.m"
                    {
#line 395 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_39)));
                    }
#line 394 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 394 "write_module_interface_files.m"
                  }
#line 394 "write_module_interface_files.m"
                  break;
#line 394 "write_module_interface_files.m"
              }
#line 334 "write_module_interface_files.m"
            }
#line 274 "write_module_interface_files.m"
            break;
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 302 "write_module_interface_files.m"
            {
#line 302 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 302 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 302 "write_module_interface_files.m"
            }
#line 274 "write_module_interface_files.m"
            break;
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 303 "write_module_interface_files.m"
            {
#line 303 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 303 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 303 "write_module_interface_files.m"
            }
#line 274 "write_module_interface_files.m"
            break;
#line 274 "write_module_interface_files.m"
          case (MR_Integer) 10:
#line 340 "write_module_interface_files.m"
            {
#line 340 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemMutable_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 340 "write_module_interface_files.m"
              MR_String parse_tree__write_module_interface_files__MutableName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 0)));
#line 340 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 1)));
#line 340 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Inst_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 3)));
#line 340 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Attrs_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 4)));
#line 340 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 6)));
#line 340 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ConstantInterface_49;
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files___Value_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 2)));
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files___Varset_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 5)));
#line 341 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files___SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_40, (MR_Integer) 7)));

#line 343 "write_module_interface_files.m"
              {
#line 343 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ConstantInterface_49 = parse_tree__prog_item__mutable_var_constant_1_f_0(parse_tree__write_module_interface_files__Attrs_45);
              }
#line 356 "write_module_interface_files.m"
#line 356 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__ConstantInterface_49) {
#line 356 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 356 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 345 "write_module_interface_files.m"
                  {
#line 345 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantGetPredDecl_50;
#line 345 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantSetPredDecl_51;
#line 345 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantGetPredDeclItem_52;
#line 345 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantSetPredDeclItem_53;

#line 346 "write_module_interface_files.m"
                    {
#line 346 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantGetPredDecl_50 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_41, parse_tree__write_module_interface_files__Type_42, parse_tree__write_module_interface_files__Inst_44, parse_tree__write_module_interface_files__Context_47);
                    }
#line 348 "write_module_interface_files.m"
                    {
#line 348 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantSetPredDecl_51 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_41, parse_tree__write_module_interface_files__Type_42, parse_tree__write_module_interface_files__Inst_44, parse_tree__write_module_interface_files__Context_47);
                    }
#line 350 "write_module_interface_files.m"
                    {
#line 350 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantGetPredDeclItem_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantGetPredDeclItem_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 350 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantGetPredDeclItem_52, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDecl_50));
#line 350 "write_module_interface_files.m"
                    }
#line 351 "write_module_interface_files.m"
                    {
#line 351 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantSetPredDeclItem_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantSetPredDeclItem_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 351 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantSetPredDeclItem_53, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDecl_51));
#line 351 "write_module_interface_files.m"
                    }
#line 12299 "parse_tree.write_module_interface_files.c"
#line 12300 "parse_tree.write_module_interface_files.c"
                    switch (parse_tree__write_module_interface_files__Section_9) {
#line 12302 "parse_tree.write_module_interface_files.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 12304 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 1:
#line 12306 "parse_tree.write_module_interface_files.c"
                        {
#line 12308 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_76_76;

#line 398 "write_module_interface_files.m"
                          {
#line 398 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_76_76 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDeclItem_52)));
                          }
#line 398 "write_module_interface_files.m"
                          {
#line 398 "write_module_interface_files.m"
                            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_76_76, ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDeclItem_53)));
                          }
#line 397 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 12323 "parse_tree.write_module_interface_files.c"
                        }
#line 12325 "parse_tree.write_module_interface_files.c"
                        break;
#line 12327 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 0:
#line 12329 "parse_tree.write_module_interface_files.c"
                        {
#line 12331 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_75_226;

#line 395 "write_module_interface_files.m"
                          {
#line 395 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_75_226 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDeclItem_52)));
                          }
#line 395 "write_module_interface_files.m"
                          {
#line 395 "write_module_interface_files.m"
                            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_75_226, ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDeclItem_53)));
                          }
#line 394 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 12346 "parse_tree.write_module_interface_files.c"
                        }
#line 12348 "parse_tree.write_module_interface_files.c"
                        break;
#line 12350 "parse_tree.write_module_interface_files.c"
                    }
#line 345 "write_module_interface_files.m"
                  }
#line 356 "write_module_interface_files.m"
                  break;
#line 356 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 357 "write_module_interface_files.m"
                  {
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdGetPredDecl_54;
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdSetPredDecl_55;
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdGetPredDeclItem_56;
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdSetPredDeclItem_57;
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__IOStateInterface_58;
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_69;
#line 357 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70;

#line 358 "write_module_interface_files.m"
                    {
#line 358 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdGetPredDecl_54 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_41, parse_tree__write_module_interface_files__Type_42, parse_tree__write_module_interface_files__Inst_44, parse_tree__write_module_interface_files__Context_47);
                    }
#line 360 "write_module_interface_files.m"
                    {
#line 360 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdSetPredDecl_55 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_41, parse_tree__write_module_interface_files__Type_42, parse_tree__write_module_interface_files__Inst_44, parse_tree__write_module_interface_files__Context_47);
                    }
#line 362 "write_module_interface_files.m"
                    {
#line 362 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdGetPredDeclItem_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdGetPredDeclItem_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 362 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdGetPredDeclItem_56, 1) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDecl_54));
#line 362 "write_module_interface_files.m"
                    }
#line 363 "write_module_interface_files.m"
                    {
#line 363 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdSetPredDeclItem_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdSetPredDeclItem_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 363 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdSetPredDeclItem_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDecl_55));
#line 363 "write_module_interface_files.m"
                    }
#line 12405 "parse_tree.write_module_interface_files.c"
#line 12406 "parse_tree.write_module_interface_files.c"
                    switch (parse_tree__write_module_interface_files__Section_9) {
#line 12408 "parse_tree.write_module_interface_files.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 12410 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 1:
#line 12412 "parse_tree.write_module_interface_files.c"
                        {
#line 12414 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68_68;

#line 398 "write_module_interface_files.m"
                          {
#line 398 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_56)));
                          }
#line 398 "write_module_interface_files.m"
                          {
#line 398 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68_68, ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_57)));
                          }
#line 397 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_69 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63;
#line 12429 "parse_tree.write_module_interface_files.c"
                        }
#line 12431 "parse_tree.write_module_interface_files.c"
                        break;
#line 12433 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 0:
#line 12435 "parse_tree.write_module_interface_files.c"
                        {
#line 12437 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_67_230;

#line 395 "write_module_interface_files.m"
                          {
#line 395 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_67_230 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_63, ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_56)));
                          }
#line 395 "write_module_interface_files.m"
                          {
#line 395 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_69 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_67_230, ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_57)));
                          }
#line 394 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_65;
#line 12452 "parse_tree.write_module_interface_files.c"
                        }
#line 12454 "parse_tree.write_module_interface_files.c"
                        break;
#line 12456 "parse_tree.write_module_interface_files.c"
                    }
#line 369 "write_module_interface_files.m"
                    {
#line 369 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__IOStateInterface_58 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(parse_tree__write_module_interface_files__Attrs_45);
                    }
#line 382 "write_module_interface_files.m"
#line 382 "write_module_interface_files.m"
                    switch (parse_tree__write_module_interface_files__IOStateInterface_58) {
#line 382 "write_module_interface_files.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "write_module_interface_files.m"
                      case (MR_Integer) 1:
#line 371 "write_module_interface_files.m"
                        {
#line 371 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOGetPredDecl_59;
#line 371 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOSetPredDecl_60;
#line 371 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOGetPredDeclItem_61;
#line 371 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOSetPredDeclItem_62;

#line 372 "write_module_interface_files.m"
                          {
#line 372 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOGetPredDecl_59 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_41, parse_tree__write_module_interface_files__Type_42, parse_tree__write_module_interface_files__Inst_44, parse_tree__write_module_interface_files__Context_47);
                          }
#line 374 "write_module_interface_files.m"
                          {
#line 374 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOSetPredDecl_60 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_41, parse_tree__write_module_interface_files__Type_42, parse_tree__write_module_interface_files__Inst_44, parse_tree__write_module_interface_files__Context_47);
                          }
#line 376 "write_module_interface_files.m"
                          {
#line 376 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOGetPredDeclItem_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOGetPredDeclItem_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOGetPredDeclItem_61, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDecl_59));
#line 376 "write_module_interface_files.m"
                          }
#line 377 "write_module_interface_files.m"
                          {
#line 377 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOSetPredDeclItem_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOSetPredDeclItem_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 377 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOSetPredDeclItem_62, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDecl_60));
#line 377 "write_module_interface_files.m"
                          }
#line 12511 "parse_tree.write_module_interface_files.c"
#line 12512 "parse_tree.write_module_interface_files.c"
                          switch (parse_tree__write_module_interface_files__Section_9) {
#line 12514 "parse_tree.write_module_interface_files.c"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 12516 "parse_tree.write_module_interface_files.c"
                            case (MR_Integer) 1:
#line 12518 "parse_tree.write_module_interface_files.c"
                              {
#line 12520 "parse_tree.write_module_interface_files.c"
                                MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72;

#line 398 "write_module_interface_files.m"
                                {
#line 398 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70, ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDeclItem_61)));
                                }
#line 398 "write_module_interface_files.m"
                                {
#line 398 "write_module_interface_files.m"
                                  *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72, ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDeclItem_62)));
                                }
#line 397 "write_module_interface_files.m"
                                *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_69;
#line 12535 "parse_tree.write_module_interface_files.c"
                              }
#line 12537 "parse_tree.write_module_interface_files.c"
                              break;
#line 12539 "parse_tree.write_module_interface_files.c"
                            case (MR_Integer) 0:
#line 12541 "parse_tree.write_module_interface_files.c"
                              {
#line 12543 "parse_tree.write_module_interface_files.c"
                                MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_228;

#line 395 "write_module_interface_files.m"
                                {
#line 395 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_228 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_69, ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDeclItem_61)));
                                }
#line 395 "write_module_interface_files.m"
                                {
#line 395 "write_module_interface_files.m"
                                  *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_228, ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDeclItem_62)));
                                }
#line 394 "write_module_interface_files.m"
                                *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70;
#line 12558 "parse_tree.write_module_interface_files.c"
                              }
#line 12560 "parse_tree.write_module_interface_files.c"
                              break;
#line 12562 "parse_tree.write_module_interface_files.c"
                          }
#line 371 "write_module_interface_files.m"
                        }
#line 382 "write_module_interface_files.m"
                        break;
#line 382 "write_module_interface_files.m"
                      case (MR_Integer) 0:
#line 383 "write_module_interface_files.m"
                        {
#line 383 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_69;
#line 383 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70;
#line 383 "write_module_interface_files.m"
                        }
#line 382 "write_module_interface_files.m"
                        break;
#line 382 "write_module_interface_files.m"
                    }
#line 357 "write_module_interface_files.m"
                  }
#line 356 "write_module_interface_files.m"
                  break;
#line 356 "write_module_interface_files.m"
              }
#line 340 "write_module_interface_files.m"
            }
#line 274 "write_module_interface_files.m"
            break;
#line 274 "write_module_interface_files.m"
        }
#line 274 "write_module_interface_files.m"
        break;
#line 274 "write_module_interface_files.m"
    }
#line 274 "write_module_interface_files.m"
  }
#line 267 "write_module_interface_files.m"
}

#line 254 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4,
#line 254 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_5,
#line 254 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6,
#line 254 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_7)
#line 254 "write_module_interface_files.m"
{
#line 258 "write_module_interface_files.m"
  while (MR_TRUE)
#line 258 "write_module_interface_files.m"
    {
#line 258 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 258 "write_module_interface_files.m"
      {
#line 258 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 258 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "write_module_interface_files.m"
          {
#line 259 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6;
#line 259 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4;
#line 258 "write_module_interface_files.m"
          }
#line 258 "write_module_interface_files.m"
        else
#line 261 "write_module_interface_files.m"
          {
#line 261 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_26_26;
#line 261 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_27_27;

#line 262 "write_module_interface_files.m"
            {
#line 262 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__process_item_for_private_interface_7_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__HeadVar__2_2, parse_tree__write_module_interface_files__Item_18, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_26_26, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_27_27);
            }
#line 264 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 264 "write_module_interface_files.m"
            {
#line 264 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__3__tmp_copy_3 = parse_tree__write_module_interface_files__Items_19;
#line 264 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_26_26;
#line 264 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_27_27;

#line 264 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_6;
#line 264 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_4;
#line 264 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__HeadVar__3__tmp_copy_3;
#line 264 "write_module_interface_files.m"
            }
#line 264 "write_module_interface_files.m"
            continue;
#line 261 "write_module_interface_files.m"
          }
#line 258 "write_module_interface_files.m"
      }
#line 258 "write_module_interface_files.m"
      break;
#line 258 "write_module_interface_files.m"
    }
#line 254 "write_module_interface_files.m"
}

#line 231 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_6_p_0(
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 231 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 231 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 231 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6)
#line 231 "write_module_interface_files.m"
{
#line 235 "write_module_interface_files.m"
  while (MR_TRUE)
#line 235 "write_module_interface_files.m"
    {
#line 235 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 235 "write_module_interface_files.m"
      {
#line 235 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 235 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "write_module_interface_files.m"
          {
#line 236 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 236 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 235 "write_module_interface_files.m"
          }
#line 235 "write_module_interface_files.m"
        else
#line 238 "write_module_interface_files.m"
          {
#line 238 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemBlock_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemBlocks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SrcSection_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_15, (MR_Integer) 0)));
#line 238 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_15, (MR_Integer) 2)));
#line 238 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_27_27;
#line 238 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_28_28;
#line 239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_15, (MR_Integer) 1)));

#line 246 "write_module_interface_files.m"
#line 246 "write_module_interface_files.m"
            switch (parse_tree__write_module_interface_files__SrcSection_19) {
#line 246 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 246 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 248 "write_module_interface_files.m"
                {
#line 248 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_27_27 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 248 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_28_28 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 248 "write_module_interface_files.m"
                }
#line 246 "write_module_interface_files.m"
                break;
#line 246 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 243 "write_module_interface_files.m"
                {
#line 244 "write_module_interface_files.m"
                  {
#line 244 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1, parse_tree__write_module_interface_files__Items_21, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_28_28);
                  }
#line 243 "write_module_interface_files.m"
                }
#line 246 "write_module_interface_files.m"
                break;
#line 246 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 243 "write_module_interface_files.m"
                {
#line 244 "write_module_interface_files.m"
                  {
#line 244 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0, parse_tree__write_module_interface_files__Items_21, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_28_28);
                  }
#line 243 "write_module_interface_files.m"
                }
#line 246 "write_module_interface_files.m"
                break;
#line 246 "write_module_interface_files.m"
            }
#line 251 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 251 "write_module_interface_files.m"
            {
#line 251 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__ItemBlocks_16;
#line 251 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_27_27;
#line 251 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_28_28;

#line 251 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5;
#line 251 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3;
#line 251 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 251 "write_module_interface_files.m"
            }
#line 251 "write_module_interface_files.m"
            continue;
#line 238 "write_module_interface_files.m"
          }
#line 235 "write_module_interface_files.m"
      }
#line 235 "write_module_interface_files.m"
      break;
#line 235 "write_module_interface_files.m"
    }
#line 231 "write_module_interface_files.m"
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
#line 532 "write_module_interface_files.m"
  {
#line 532 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 532 "write_module_interface_files.m"
    {
#line 532 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_5_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__RawCompUnit_8);
#line 532 "write_module_interface_files.m"
      return;
    }
#line 532 "write_module_interface_files.m"
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
#line 407 "write_module_interface_files.m"
  {
#line 407 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 0)));
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 1)));
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntRawItemBlocks_17;
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RawCompUnit1_18;
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleAndImports2_19;
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AugCompUnit2_23;
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_24;
#line 407 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_61_61;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___RawItemBlocks0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 2)));

#line 410 "write_module_interface_files.m"
    {
#line 410 "write_module_interface_files.m"
      parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 1, parse_tree__write_module_interface_files__RawCompUnit0_11, &parse_tree__write_module_interface_files__IntRawItemBlocks_17);
    }
#line 411 "write_module_interface_files.m"
    {
#line 411 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__RawCompUnit1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 411 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit1_18, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 411 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit1_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 411 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit1_18, 2) = ((MR_Box) (parse_tree__write_module_interface_files__IntRawItemBlocks_17));
#line 411 "write_module_interface_files.m"
    }
#line 415 "write_module_interface_files.m"
    {
#line 415 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__SourceFileName_9, parse_tree__write_module_interface_files__SourceFileModuleName_10, parse_tree__write_module_interface_files__RawCompUnit1_18, &parse_tree__write_module_interface_files__ModuleAndImports2_19);
    }
#line 420 "write_module_interface_files.m"
    {
#line 420 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__write_module_interface_files__ModuleAndImports2_19, &parse_tree__write_module_interface_files__AugCompUnit2_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_61_61, &parse_tree__write_module_interface_files__Errors_24);
    }
#line 422 "write_module_interface_files.m"
    {
#line 422 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_24);
    }
#line 433 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 425 "write_module_interface_files.m"
      {
#line 425 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__IntFileName_27;
#line 425 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__Int2FileName_28;
#line 425 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 425 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_74_74;
#line 425 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_76_76;
#line 425 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_77_77;
#line 425 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_79_79;
#line 425 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_81_81;
#line 424 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_25;
#line 424 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_26;

#line 424 "write_module_interface_files.m"
        {
#line 424 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_61_61, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_25, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_26);
        }
#line 426 "write_module_interface_files.m"
        {
#line 426 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_27);
        }
#line 428 "write_module_interface_files.m"
        {
#line 428 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_module_interface_files__Int2FileName_28);
        }
#line 432 "write_module_interface_files.m"
        {
#line 432 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_81_81, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Int2FileName_28));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 432 "write_module_interface_files.m"
        }
#line 432 "write_module_interface_files.m"
        {
#line 432 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_79_79, 0) = ((MR_Box) ((MR_String) "\140"));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_79_79, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_81_81));
#line 432 "write_module_interface_files.m"
        }
#line 431 "write_module_interface_files.m"
        {
#line 431 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_77_77, 0) = ((MR_Box) ((MR_String) "\' and "));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_77_77, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_79_79));
#line 431 "write_module_interface_files.m"
        }
#line 431 "write_module_interface_files.m"
        {
#line 431 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_76_76, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_27));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_76_76, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_77_77));
#line 431 "write_module_interface_files.m"
        }
#line 431 "write_module_interface_files.m"
        {
#line 431 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_74_74, 0) = ((MR_Box) ((MR_String) "\140"));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_74_74, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_76_76));
#line 431 "write_module_interface_files.m"
        }
#line 430 "write_module_interface_files.m"
        {
#line 430 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) ((MR_String) "Error reading short interface files.\n"));
#line 430 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_74_74));
#line 430 "write_module_interface_files.m"
        }
#line 430 "write_module_interface_files.m"
        {
#line 430 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_71_71);
#line 430 "write_module_interface_files.m"
          return;
        }
#line 425 "write_module_interface_files.m"
      }
#line 433 "write_module_interface_files.m"
    else
#line 436 "write_module_interface_files.m"
      {
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__AugCompUnit_29;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_34;
#line 436 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__NumErrors_35;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_85_85;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_87_134;
#line 435 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 435 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 435 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 435 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 442 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_129;

#line 436 "write_module_interface_files.m"
        {
#line 436 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_85_85 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 435 "write_module_interface_files.m"
        {
#line 435 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_aug_comp_unit_11_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__AugCompUnit2_23, &parse_tree__write_module_interface_files__AugCompUnit_29, parse_tree__write_module_interface_files__V_85_85, &parse_tree__write_module_interface_files__V_30_30, (MR_String) "", &parse_tree__write_module_interface_files__V_31_31, &parse_tree__write_module_interface_files__V_32_32, &parse_tree__write_module_interface_files__V_33_33, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_61_61, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_87_134);
        }
#line 440 "write_module_interface_files.m"
        {
#line 440 "write_module_interface_files.m"
          libs__globals__set_option_4_p_0((MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[0]), parse_tree__write_module_interface_files__Globals_8, &parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_34);
        }
#line 442 "write_module_interface_files.m"
        {
#line 442 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_87_134, parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_34, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_129, (MR_Integer) 0, &parse_tree__write_module_interface_files__NumErrors_35);
        }
#line 444 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__NumErrors_35 > (MR_Integer) 0);
#line 449 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 446 "write_module_interface_files.m"
          {
#line 446 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_98_98;
#line 446 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_101_101;
#line 446 "write_module_interface_files.m"
            MR_String parse_tree__write_module_interface_files__IntFileName_130;

#line 445 "write_module_interface_files.m"
            {
#line 445 "write_module_interface_files.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_130);
            }
#line 447 "write_module_interface_files.m"
            {
#line 447 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_101_101, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_130));
#line 447 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[6])));
#line 447 "write_module_interface_files.m"
            }
#line 447 "write_module_interface_files.m"
            {
#line 447 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_98_98, 0) = ((MR_Box) ((MR_String) "\140"));
#line 447 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_98_98, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_101_101));
#line 447 "write_module_interface_files.m"
            }
#line 447 "write_module_interface_files.m"
            {
#line 447 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_98_98);
#line 447 "write_module_interface_files.m"
              return;
            }
#line 446 "write_module_interface_files.m"
          }
#line 449 "write_module_interface_files.m"
        else
#line 460 "write_module_interface_files.m"
          {
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SrcItemBlocks_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 3)));
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs0_44;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs1_45;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ToCheckIntItemBlock_46;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ToCheckIntCompUnit_47;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs_48;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__DummyMaybeVersionNumbers_51;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ParseTreeInt1_52;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__BothRawItemBlocks_53;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ShortIntItems_54;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ShortImpItems_55;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ParseTreeInt2_56;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_108_108;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_109_109;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_110_110;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_111_111;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_112_112;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_114_114;
#line 460 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_116_116;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 0)));
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 1)));
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___ModuleVersionNumbers_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 2)));
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___DirectIntItemBlocks_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 4)));
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___IndirectIntItemBlocks_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 5)));
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___OptItemBlocks_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 6)));
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___IntForOptItemBlocks_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_29, (MR_Integer) 7)));
#line 476 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings2_49;
#line 476 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors2_50;

#line 461 "write_module_interface_files.m"
            {
#line 461 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_4_p_0(parse_tree__write_module_interface_files__SrcItemBlocks_39, (MR_Integer) 1, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_108_108, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_109_109);
            }
#line 463 "write_module_interface_files.m"
            {
#line 463 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_108_108, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_110_110, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_109_109, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_111_111);
            }
#line 464 "write_module_interface_files.m"
            {
#line 464 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_110_110, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_112_112, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__InterfaceSpecs0_44);
            }
#line 466 "write_module_interface_files.m"
            {
#line 466 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_111_111, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_114_114, parse_tree__write_module_interface_files__InterfaceSpecs0_44, &parse_tree__write_module_interface_files__InterfaceSpecs1_45);
            }
#line 470 "write_module_interface_files.m"
            {
#line 470 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ToCheckIntItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 470 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntItemBlock_46, 0) = ((MR_Box) ((MR_Integer) 0));
#line 470 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntItemBlock_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 470 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntItemBlock_46, 2) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_112_112));
#line 470 "write_module_interface_files.m"
            }
#line 473 "write_module_interface_files.m"
            {
#line 473 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_116_116, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ToCheckIntItemBlock_46));
#line 473 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "write_module_interface_files.m"
            }
#line 472 "write_module_interface_files.m"
            {
#line 472 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ToCheckIntCompUnit_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntCompUnit_47, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntCompUnit_47, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntCompUnit_47, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_116_116));
#line 472 "write_module_interface_files.m"
            }
#line 474 "write_module_interface_files.m"
            {
#line 474 "write_module_interface_files.m"
              parse_tree__check_raw_comp_unit__check_int_for_no_exports_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ToCheckIntCompUnit_47, parse_tree__write_module_interface_files__InterfaceSpecs1_45, &parse_tree__write_module_interface_files__InterfaceSpecs_48);
            }
#line 476 "write_module_interface_files.m"
            {
#line 476 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__InterfaceSpecs_48, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings2_49, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors2_50);
            }
#line 501 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__DummyMaybeVersionNumbers_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "write_module_interface_files.m"
            {
#line 502 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ParseTreeInt1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 502 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_52, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 502 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_52, 1) = ((MR_Box) ((MR_Integer) 3));
#line 502 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_52, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 502 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_52, 3) = ((MR_Box) (parse_tree__write_module_interface_files__DummyMaybeVersionNumbers_51));
#line 502 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_52, 4) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_112_112));
#line 502 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_52, 5) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_114_114));
#line 502 "write_module_interface_files.m"
            }
#line 505 "write_module_interface_files.m"
            {
#line 505 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ParseTreeInt1_52, parse_tree__write_module_interface_files__MaybeTimestamp_12);
            }
#line 509 "write_module_interface_files.m"
            {
#line 509 "write_module_interface_files.m"
              parse_tree__prog_item__int_impl_items_to_raw_item_blocks_4_p_0(parse_tree__write_module_interface_files__ModuleNameContext_15, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_112_112, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_114_114, &parse_tree__write_module_interface_files__BothRawItemBlocks_53);
            }
#line 511 "write_module_interface_files.m"
            {
#line 511 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__BothRawItemBlocks_53, &parse_tree__write_module_interface_files__ShortIntItems_54, &parse_tree__write_module_interface_files__ShortImpItems_55);
            }
#line 517 "write_module_interface_files.m"
            {
#line 517 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ParseTreeInt2_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 517 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 517 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_56, 1) = ((MR_Box) ((MR_Integer) 2));
#line 517 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_56, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 517 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_56, 3) = ((MR_Box) (parse_tree__write_module_interface_files__DummyMaybeVersionNumbers_51));
#line 517 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_56, 4) = ((MR_Box) (parse_tree__write_module_interface_files__ShortIntItems_54));
#line 517 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_56, 5) = ((MR_Box) (parse_tree__write_module_interface_files__ShortImpItems_55));
#line 517 "write_module_interface_files.m"
            }
#line 520 "write_module_interface_files.m"
            {
#line 520 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ParseTreeInt2_56, parse_tree__write_module_interface_files__MaybeTimestamp_12);
            }
#line 522 "write_module_interface_files.m"
            {
#line 522 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".date");
#line 522 "write_module_interface_files.m"
              return;
            }
#line 460 "write_module_interface_files.m"
          }
#line 436 "write_module_interface_files.m"
      }
#line 407 "write_module_interface_files.m"
  }
#line 84 "write_module_interface_files.m"
}

#line 176 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_7_p_0_1(
#line 176 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg)
#line 176 "write_module_interface_files.m"
{
#line 176 "write_module_interface_files.m"
  {
#line 176 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 176 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 176 "write_module_interface_files.m"
    {
#line 176 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__write_private_interface_file__176__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))));
    }
#line 176 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 176 "write_module_interface_files.m"
  }
#line 176 "write_module_interface_files.m"
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
#line 139 "write_module_interface_files.m"
  {
#line 139 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 0)));
#line 139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 1)));
#line 139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleAndImports_17;
#line 139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AugCompUnit1_18;
#line 139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Specs0_19;
#line 139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_20;
#line 140 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 2)));

#line 141 "write_module_interface_files.m"
    {
#line 141 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__SourceFileName_9, parse_tree__write_module_interface_files__SourceFileModuleName_10, parse_tree__write_module_interface_files__RawCompUnit0_11, &parse_tree__write_module_interface_files__ModuleAndImports_17);
    }
#line 145 "write_module_interface_files.m"
    {
#line 145 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__write_module_interface_files__ModuleAndImports_17, &parse_tree__write_module_interface_files__AugCompUnit1_18, &parse_tree__write_module_interface_files__Specs0_19, &parse_tree__write_module_interface_files__Errors_20);
    }
#line 147 "write_module_interface_files.m"
    {
#line 147 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_20);
    }
#line 155 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 149 "write_module_interface_files.m"
      {
#line 149 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__FileName_21;
#line 149 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 149 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_59_59;
#line 149 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_61_61;
#line 151 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_22;
#line 151 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_23;

#line 148 "write_module_interface_files.m"
        {
#line 148 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_21);
        }
#line 151 "write_module_interface_files.m"
        {
#line 151 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs0_19, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_22, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_23);
        }
#line 154 "write_module_interface_files.m"
        {
#line 154 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_61_61, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_21));
#line 154 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 154 "write_module_interface_files.m"
        }
#line 154 "write_module_interface_files.m"
        {
#line 154 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_59_59, 0) = ((MR_Box) ((MR_String) "\140"));
#line 154 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_59_59, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_61_61));
#line 154 "write_module_interface_files.m"
        }
#line 153 "write_module_interface_files.m"
        {
#line 153 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_56_56, 0) = ((MR_Box) ((MR_String) "Error reading interface files.\n"));
#line 153 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_56_56, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_59_59));
#line 153 "write_module_interface_files.m"
        }
#line 153 "write_module_interface_files.m"
        {
#line 153 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_56_56);
#line 153 "write_module_interface_files.m"
          return;
        }
#line 149 "write_module_interface_files.m"
      }
#line 155 "write_module_interface_files.m"
    else
#line 158 "write_module_interface_files.m"
      {
#line 158 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__AugCompUnit_24;
#line 158 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Specs_29;
#line 158 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_65_65;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___EventSpecMap_25;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 158 "write_module_interface_files.m"
        {
#line 158 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_65_65 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 157 "write_module_interface_files.m"
        {
#line 157 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_aug_comp_unit_11_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__AugCompUnit1_18, &parse_tree__write_module_interface_files__AugCompUnit_24, parse_tree__write_module_interface_files__V_65_65, &parse_tree__write_module_interface_files___EventSpecMap_25, (MR_String) "", &parse_tree__write_module_interface_files__V_26_26, &parse_tree__write_module_interface_files__V_27_27, &parse_tree__write_module_interface_files__V_28_28, parse_tree__write_module_interface_files__Specs0_19, &parse_tree__write_module_interface_files__Specs_29);
        }
#line 167 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Specs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "write_module_interface_files.m"
          {
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_105_105;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AugModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 0)));
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ModuleVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 2)));
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SrcItemBlocks_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 3)));
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__IntItemsCord_40;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImpItemsCord_41;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeVersionNumbers_43;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__IntItems_44;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImpItems_45;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_46;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_67_67;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 168 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_72_72;
#line 172 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___ModuleNameContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 1)));
#line 172 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___DirectIntItemBlocks_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 4)));
#line 172 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___IndirectIntItemBlocks_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 5)));
#line 172 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___OptItemBlocks_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 6)));
#line 172 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___IntForOptItemBlocks_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugCompUnit_24, (MR_Integer) 7)));
#line 186 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__VersionNumbers_42;
#line 183 "write_module_interface_files.m"
            MR_Box parse_tree__write_module_interface_files__conv0_VersionNumbers_42;

#line 176 "write_module_interface_files.m"
            {
#line 176 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_67_67, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[0]));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_67_67, 1) = ((MR_Box) (parse_tree__write_module_interface_files__write_private_interface_file_7_p_0_1));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_67_67, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_67_67, 4) = ((MR_Box) (parse_tree__write_module_interface_files__AugModuleName_32));
#line 176 "write_module_interface_files.m"
            }
#line 176 "write_module_interface_files.m"
            {
#line 176 "write_module_interface_files.m"
              mercury__require__expect_4_p_0(parse_tree__write_module_interface_files__V_67_67, (MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.write_private_interface_file\'/7", (MR_String) "AugModuleName != ModuleName");
            }
#line 13561 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 181 "write_module_interface_files.m"
            {
#line 181 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_71_71 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_105_105);
            }
#line 181 "write_module_interface_files.m"
            {
#line 181 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_72_72 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_105_105);
            }
#line 179 "write_module_interface_files.m"
            {
#line 179 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_6_p_0(parse_tree__write_module_interface_files__ModuleName_14, parse_tree__write_module_interface_files__SrcItemBlocks_35, parse_tree__write_module_interface_files__V_71_71, &parse_tree__write_module_interface_files__IntItemsCord_40, parse_tree__write_module_interface_files__V_72_72, &parse_tree__write_module_interface_files__ImpItemsCord_41);
            }
#line 183 "write_module_interface_files.m"
            {
#line 183 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, parse_tree__write_module_interface_files__ModuleVersionNumbers_34, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14)), &parse_tree__write_module_interface_files__conv0_VersionNumbers_42);
            }
#line 183 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 183 "write_module_interface_files.m"
              {
#line 183 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__VersionNumbers_42 = ((MR_Word) parse_tree__write_module_interface_files__conv0_VersionNumbers_42);
#line 183 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 183 "write_module_interface_files.m"
              }
#line 186 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 185 "write_module_interface_files.m"
              {
#line 185 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeVersionNumbers_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeVersionNumbers_43, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumbers_42));
#line 185 "write_module_interface_files.m"
              }
#line 186 "write_module_interface_files.m"
            else
#line 187 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__MaybeVersionNumbers_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "write_module_interface_files.m"
            {
#line 189 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__IntItems_44 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_105_105, parse_tree__write_module_interface_files__IntItemsCord_40);
            }
#line 190 "write_module_interface_files.m"
            {
#line 190 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ImpItems_45 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_105_105, parse_tree__write_module_interface_files__ImpItemsCord_41);
            }
#line 191 "write_module_interface_files.m"
            {
#line 191 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ParseTreeInt0_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 191 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 191 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 191 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_46, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 191 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_46, 3) = ((MR_Box) (parse_tree__write_module_interface_files__MaybeVersionNumbers_43));
#line 191 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_46, 4) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_44));
#line 191 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_46, 5) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_45));
#line 191 "write_module_interface_files.m"
            }
#line 193 "write_module_interface_files.m"
            {
#line 193 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ParseTreeInt0_46, parse_tree__write_module_interface_files__MaybeTimestamp_12);
            }
#line 195 "write_module_interface_files.m"
            {
#line 195 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".date0");
#line 195 "write_module_interface_files.m"
              return;
            }
#line 168 "write_module_interface_files.m"
          }
#line 167 "write_module_interface_files.m"
        else
#line 160 "write_module_interface_files.m"
          {
#line 160 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_83_83;
#line 160 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_86_86;
#line 160 "write_module_interface_files.m"
            MR_String parse_tree__write_module_interface_files__FileName_92;
#line 164 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings_90;
#line 164 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors_91;

#line 161 "write_module_interface_files.m"
            {
#line 161 "write_module_interface_files.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".m", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_92);
            }
#line 164 "write_module_interface_files.m"
            {
#line 164 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs_29, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_90, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_91);
            }
#line 166 "write_module_interface_files.m"
            {
#line 166 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_86_86, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_92));
#line 166 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 166 "write_module_interface_files.m"
            }
#line 166 "write_module_interface_files.m"
            {
#line 166 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_83_83, 0) = ((MR_Box) ((MR_String) "\140"));
#line 166 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_83_83, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_86_86));
#line 166 "write_module_interface_files.m"
            }
#line 166 "write_module_interface_files.m"
            {
#line 166 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_83_83);
#line 166 "write_module_interface_files.m"
              return;
            }
#line 160 "write_module_interface_files.m"
          }
#line 158 "write_module_interface_files.m"
      }
#line 139 "write_module_interface_files.m"
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
