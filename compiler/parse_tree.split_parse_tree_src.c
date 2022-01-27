/*
** Automatically generated from `split_parse_tree_src.m'
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


/* :- module parse_tree.split_parse_tree_src. */
/* :- implementation. */

/*
INIT mercury__parse_tree__split_parse_tree_src__init
ENDINIT
*/

#include "parse_tree.split_parse_tree_src.mih"


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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

#line 100 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 103 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 106 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

#line 109 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 112 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0;

#line 115 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1;

#line 118 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2;

#line 121 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3;

#line 124 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_duplicated_section_0[4];

#line 127 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0[4];

#line 130 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0[4];

#line 133 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0;

#line 136 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1[3];

#line 139 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1;

#line 142 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0[1];

#line 145 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1[1];

#line 148 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0[2];

#line 151 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0[2];

#line 154 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0[2];

#line 157 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 160 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0;

#line 163 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1;

#line 166 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2;

#line 169 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_parent_module_context_0[3];

#line 172 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0[3];

#line 175 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0[3];

#line 178 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0[2];

#line 181 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0;

#line 184 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1];

#line 187 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0[1];

#line 190 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0[1];

#line 193 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0[1];

#line 196 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0[1];

#line 199 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0;

#line 202 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_module_section_0;

#line 205 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_module_section_0;

#line 208 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[2];

#line 211 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1;

#line 214 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0[1];

#line 217 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1[1];

#line 220 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0[2];

#line 223 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0[2];

#line 226 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0[2];

#line 229 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

#line 232 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1];

#line 235 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0;

#line 238 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1];

#line 241 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1;

#line 244 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1];

#line 247 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2;

#line 250 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[2];

#line 253 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3;

#line 256 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0[1];

#line 259 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1[1];

#line 262 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2[1];

#line 265 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3[1];

#line 268 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0[4];

#line 271 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0[4];

#line 274 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0[4];

#line 277 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
#line 280 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 282 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 285 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
#line 288 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 290 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 292 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 295 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
#line 298 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 300 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 303 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
#line 306 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 308 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 310 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 313 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
#line 316 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 318 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 321 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
#line 324 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 326 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 328 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 331 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
#line 334 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 336 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 339 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
#line 342 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 344 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 346 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 349 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
#line 352 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 354 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 357 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
#line 360 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 362 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 364 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 367 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
#line 370 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 372 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 375 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
#line 378 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 380 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 382 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 385 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
#line 388 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 390 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 393 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
#line 396 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 398 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 400 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 403 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
#line 406 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 408 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

#line 411 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
#line 414 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 416 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 418 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

#line 211 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__211__1_2_p_0(
#line 211 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14,
#line 211 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_33);

#line 209 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__209__1_2_p_0(
#line 209 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13,
#line 209 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_28);

#line 60 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
#line 60 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 60 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 101 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
#line 101 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 101 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 84 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
#line 84 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 84 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 130 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
#line 130 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 130 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 55 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
#line 55 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 55 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 167 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
#line 167 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 167 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 121 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
#line 121 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 121 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 423 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
#line 423 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

#line 423 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 714 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_4,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_6,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_8,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10);

#line 638 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Component_11,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_12,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54);

#line 621 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_4,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_6,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_8,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10);

#line 603 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
#line 603 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 603 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2,
#line 603 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3,
#line 603 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4,
#line 603 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5);

#line 573 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_8,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_9,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldIntContext_10,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldImpContext_11,
#line 573 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_12);

#line 556 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_8,
#line 556 "split_parse_tree_src.m"
  MR_String parse_tree__split_parse_tree_src__SectionWord_9,
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldContext_11,
#line 556 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_12);

#line 545 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
#line 545 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_5,
#line 545 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_6,
#line 545 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_7,
#line 545 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_8);

#line 494 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_8,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Section_9,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SplitNested_11,
#line 494 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_12);

#line 429 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_8,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_9,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__DupSection_10,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_11,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldEntry_12,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25,
#line 429 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26);

#line 413 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_7,
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13,
#line 413 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14);

#line 295 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParseTree_9,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_10,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_46,
#line 295 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_48,
#line 295 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_49,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_50,
#line 295 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);

#line 277 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
#line 277 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 277 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
#line 277 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3);

#line 262 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
#line 262 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 262 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
#line 262 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3);

#line 252 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1(
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__closure_arg,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_3,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_4,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_5,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_6,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_7,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_8,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_9);

#line 217 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_10,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_28,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35);

#line 183 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
#line 183 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_5,
#line 183 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
#line 183 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12,
#line 183 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);

#line 169 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
#line 169 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_5,
#line 169 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
#line 169 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11,
#line 169 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);

#line 139 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
#line 139 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_3,
#line 139 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__MaybeProblemAncestor_4);

#line 103 "split_parse_tree_src.m"
static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
#line 103 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SplitNested_3);

#line 211 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
#line 211 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__closure_arg);

#line 209 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
#line 209 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__closure_arg);


static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[99][2];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][12];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[6][1];




static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[99][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is missing its interface section."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for itself."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not have an"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location of the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not have its name reused."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location of the reuse."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is empty."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was previously declared to be a separate submodule."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a duplicate"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has the same name as its ancestor module."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was also declarated here."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its both its interface and its implementation"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "were also declarated here."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was also declarated here,"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[44])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a nested submodule."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Submodule"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The top level module"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: submodule"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: submodule"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the empty nested submodule"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This implementation section for module"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs in"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the interface section of"))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[75])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[34])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[40])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[52])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[56])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[58])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1501 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0
  }
};

#line 1510 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1518 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1527 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

#line 1535 "parse_tree.split_parse_tree_src.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1543 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0 = {
  (MR_String) "dup_empty",
  (MR_Integer) 0
};

#line 1549 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1 = {
  (MR_String) "dup_int_only",
  (MR_Integer) 1
};

#line 1555 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2 = {
  (MR_String) "dup_imp_only",
  (MR_Integer) 2
};

#line 1561 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3 = {
  (MR_String) "dup_int_imp",
  (MR_Integer) 3
};

#line 1567 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_duplicated_section_0[4] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3
};

#line 1575 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0[4] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1
};

#line 1583 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1591 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_duplicated_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "duplicated_section",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_duplicated_section_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0
};

#line 1608 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0 = {
  (MR_String) "ma_no_parent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1623 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1[3] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0
};

#line 1630 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1 = {
  (MR_String) "ma_parent",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1,
  NULL,
  NULL,
  NULL
};

#line 1645 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0
};

#line 1650 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1
};

#line 1655 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1
  }
};

#line 1669 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0[2] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1
};

#line 1675 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1681 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "module_ancestors",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0
};

#line 1698 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1707 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_to_submodules_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "module_to_submodules_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1724 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0 = {
  (MR_String) "no_parent_top_level",
  (MR_Integer) 0
};

#line 1730 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1 = {
  (MR_String) "in_parent_interface",
  (MR_Integer) 1
};

#line 1736 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2 = {
  (MR_String) "in_parent_implementation",
  (MR_Integer) 2
};

#line 1742 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_parent_module_context_0[3] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2
};

#line 1749 "parse_tree.split_parse_tree_src.c"
static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0[3] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0
};

#line 1756 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1763 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_parent_module_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "parent_module_context",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_parent_module_context_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0
};

#line 1780 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0
};

#line 1786 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0 = {
  (MR_String) "sa_parent",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0,
  NULL,
  NULL,
  NULL
};

#line 1801 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0
};

#line 1806 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0
  }
};

#line 1815 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0
};

#line 1820 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0[1] = {
  (MR_Integer) 0
};

#line 1825 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "section_ancestors",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0
};

#line 1842 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1847 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0 = {
  (MR_String) "split_included",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0,
  NULL,
  NULL,
  NULL
};

#line 1862 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0
  }
};

#line 1870 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_module_section_0
  }
};

#line 1878 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0,
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_module_section_0
};

#line 1884 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1 = {
  (MR_String) "split_nested",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1,
  NULL,
  NULL,
  NULL
};

#line 1899 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0
};

#line 1904 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1
};

#line 1909 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1
  }
};

#line 1923 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0[2] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1
};

#line 1929 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1935 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_module_entry",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0
};

#line 1952 "parse_tree.split_parse_tree_src.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0
  }
};

#line 1961 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1978 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1983 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0 = {
  (MR_String) "split_nested_top_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1998 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2003 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1 = {
  (MR_String) "split_nested_only_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 2018 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2023 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2 = {
  (MR_String) "split_nested_only_imp",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2,
  NULL,
  NULL,
  NULL
};

#line 2038 "parse_tree.split_parse_tree_src.c"
static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2044 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3 = {
  (MR_String) "split_nested_int_imp",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3,
  NULL,
  NULL,
  NULL
};

#line 2059 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0
};

#line 2064 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1
};

#line 2069 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2
};

#line 2074 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3
};

#line 2079 "parse_tree.split_parse_tree_src.c"
static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3
  }
};

#line 2103 "parse_tree.split_parse_tree_src.c"
static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0[4] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0
};

#line 2111 "parse_tree.split_parse_tree_src.c"
static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2119 "parse_tree.split_parse_tree_src.c"
const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_nested_info",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0
};

#line 2136 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
#line 2139 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2141 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2143 "parse_tree.split_parse_tree_src.c"
{
#line 2145 "parse_tree.split_parse_tree_src.c"
  {
#line 2147 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2150 "parse_tree.split_parse_tree_src.c"
    {
#line 2152 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2155 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2157 "parse_tree.split_parse_tree_src.c"
  }
#line 2159 "parse_tree.split_parse_tree_src.c"
}

#line 2162 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
#line 2165 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2167 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2169 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2171 "parse_tree.split_parse_tree_src.c"
{
#line 2173 "parse_tree.split_parse_tree_src.c"
  {
#line 2175 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2178 "parse_tree.split_parse_tree_src.c"
    {
#line 2180 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2183 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2185 "parse_tree.split_parse_tree_src.c"
  }
#line 2187 "parse_tree.split_parse_tree_src.c"
}

#line 2190 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
#line 2193 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2195 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2197 "parse_tree.split_parse_tree_src.c"
{
#line 2199 "parse_tree.split_parse_tree_src.c"
  {
#line 2201 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2204 "parse_tree.split_parse_tree_src.c"
    {
#line 2206 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2209 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2211 "parse_tree.split_parse_tree_src.c"
  }
#line 2213 "parse_tree.split_parse_tree_src.c"
}

#line 2216 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
#line 2219 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2221 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2223 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2225 "parse_tree.split_parse_tree_src.c"
{
#line 2227 "parse_tree.split_parse_tree_src.c"
  {
#line 2229 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2232 "parse_tree.split_parse_tree_src.c"
    {
#line 2234 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2237 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2239 "parse_tree.split_parse_tree_src.c"
  }
#line 2241 "parse_tree.split_parse_tree_src.c"
}

#line 2244 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
#line 2247 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2249 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2251 "parse_tree.split_parse_tree_src.c"
{
#line 2253 "parse_tree.split_parse_tree_src.c"
  {
#line 2255 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2258 "parse_tree.split_parse_tree_src.c"
    {
#line 2260 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2263 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2265 "parse_tree.split_parse_tree_src.c"
  }
#line 2267 "parse_tree.split_parse_tree_src.c"
}

#line 2270 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
#line 2273 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2275 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2277 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2279 "parse_tree.split_parse_tree_src.c"
{
#line 2281 "parse_tree.split_parse_tree_src.c"
  {
#line 2283 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2286 "parse_tree.split_parse_tree_src.c"
    {
#line 2288 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2291 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2293 "parse_tree.split_parse_tree_src.c"
  }
#line 2295 "parse_tree.split_parse_tree_src.c"
}

#line 2298 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
#line 2301 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2303 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2305 "parse_tree.split_parse_tree_src.c"
{
#line 2307 "parse_tree.split_parse_tree_src.c"
  {
#line 2309 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2312 "parse_tree.split_parse_tree_src.c"
    {
#line 2314 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2317 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2319 "parse_tree.split_parse_tree_src.c"
  }
#line 2321 "parse_tree.split_parse_tree_src.c"
}

#line 2324 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
#line 2327 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2329 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2331 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2333 "parse_tree.split_parse_tree_src.c"
{
#line 2335 "parse_tree.split_parse_tree_src.c"
  {
#line 2337 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2340 "parse_tree.split_parse_tree_src.c"
    {
#line 2342 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2345 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2347 "parse_tree.split_parse_tree_src.c"
  }
#line 2349 "parse_tree.split_parse_tree_src.c"
}

#line 2352 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
#line 2355 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2357 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2359 "parse_tree.split_parse_tree_src.c"
{
#line 2361 "parse_tree.split_parse_tree_src.c"
  {
#line 2363 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2366 "parse_tree.split_parse_tree_src.c"
    {
#line 2368 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2371 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2373 "parse_tree.split_parse_tree_src.c"
  }
#line 2375 "parse_tree.split_parse_tree_src.c"
}

#line 2378 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
#line 2381 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2383 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2385 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2387 "parse_tree.split_parse_tree_src.c"
{
#line 2389 "parse_tree.split_parse_tree_src.c"
  {
#line 2391 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2394 "parse_tree.split_parse_tree_src.c"
    {
#line 2396 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2399 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2401 "parse_tree.split_parse_tree_src.c"
  }
#line 2403 "parse_tree.split_parse_tree_src.c"
}

#line 2406 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
#line 2409 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2411 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2413 "parse_tree.split_parse_tree_src.c"
{
#line 2415 "parse_tree.split_parse_tree_src.c"
  {
#line 2417 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2420 "parse_tree.split_parse_tree_src.c"
    {
#line 2422 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2425 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2427 "parse_tree.split_parse_tree_src.c"
  }
#line 2429 "parse_tree.split_parse_tree_src.c"
}

#line 2432 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
#line 2435 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2437 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2439 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2441 "parse_tree.split_parse_tree_src.c"
{
#line 2443 "parse_tree.split_parse_tree_src.c"
  {
#line 2445 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2448 "parse_tree.split_parse_tree_src.c"
    {
#line 2450 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2453 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2455 "parse_tree.split_parse_tree_src.c"
  }
#line 2457 "parse_tree.split_parse_tree_src.c"
}

#line 2460 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
#line 2463 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2465 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2467 "parse_tree.split_parse_tree_src.c"
{
#line 2469 "parse_tree.split_parse_tree_src.c"
  {
#line 2471 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2474 "parse_tree.split_parse_tree_src.c"
    {
#line 2476 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2479 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2481 "parse_tree.split_parse_tree_src.c"
  }
#line 2483 "parse_tree.split_parse_tree_src.c"
}

#line 2486 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
#line 2489 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2491 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2493 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2495 "parse_tree.split_parse_tree_src.c"
{
#line 2497 "parse_tree.split_parse_tree_src.c"
  {
#line 2499 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2502 "parse_tree.split_parse_tree_src.c"
    {
#line 2504 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2507 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2509 "parse_tree.split_parse_tree_src.c"
  }
#line 2511 "parse_tree.split_parse_tree_src.c"
}

#line 2514 "parse_tree.split_parse_tree_src.c"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
#line 2517 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2519 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
#line 2521 "parse_tree.split_parse_tree_src.c"
{
#line 2523 "parse_tree.split_parse_tree_src.c"
  {
#line 2525 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 2528 "parse_tree.split_parse_tree_src.c"
    {
#line 2530 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
#line 2533 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 2535 "parse_tree.split_parse_tree_src.c"
  }
#line 2537 "parse_tree.split_parse_tree_src.c"
}

#line 2540 "parse_tree.split_parse_tree_src.c"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
#line 2543 "parse_tree.split_parse_tree_src.c"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 2545 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 2547 "parse_tree.split_parse_tree_src.c"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
#line 2549 "parse_tree.split_parse_tree_src.c"
{
#line 2551 "parse_tree.split_parse_tree_src.c"
  {
#line 2553 "parse_tree.split_parse_tree_src.c"
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

#line 2556 "parse_tree.split_parse_tree_src.c"
    {
#line 2558 "parse_tree.split_parse_tree_src.c"
      parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
#line 2561 "parse_tree.split_parse_tree_src.c"
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
#line 2563 "parse_tree.split_parse_tree_src.c"
  }
#line 2565 "parse_tree.split_parse_tree_src.c"
}

#line 211 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__211__1_2_p_0(
#line 211 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14,
#line 211 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_33)
#line 211 "split_parse_tree_src.m"
{
#line 211 "split_parse_tree_src.m"
  {
#line 211 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 211 "split_parse_tree_src.m"
    {
#line 211 "split_parse_tree_src.m"
      return parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14)), ((MR_Box) (parse_tree__split_parse_tree_src__HeadVar__2_33)));
    }
#line 211 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 211 "split_parse_tree_src.m"
  }
#line 211 "split_parse_tree_src.m"
}

#line 209 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__209__1_2_p_0(
#line 209 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13,
#line 209 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_28)
#line 209 "split_parse_tree_src.m"
{
#line 209 "split_parse_tree_src.m"
  {
#line 209 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 209 "split_parse_tree_src.m"
    {
#line 209 "split_parse_tree_src.m"
      return parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13)), ((MR_Box) (parse_tree__split_parse_tree_src__HeadVar__2_28)));
    }
#line 209 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 209 "split_parse_tree_src.m"
  }
#line 209 "split_parse_tree_src.m"
}

#line 60 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
#line 60 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 60 "split_parse_tree_src.m"
{
#line 60 "split_parse_tree_src.m"
  {
#line 60 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 60 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_45 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 60 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_46 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 60 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_45 == parse_tree__split_parse_tree_src__CastY_46);
#line 60 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 2644 "parse_tree.split_parse_tree_src.c"
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "split_parse_tree_src.m"
    else
#line 60 "split_parse_tree_src.m"
#line 60 "split_parse_tree_src.m"
      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) {
#line 60 "split_parse_tree_src.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 0:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);

#line 60 "split_parse_tree_src.m"
#line 60 "split_parse_tree_src.m"
            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
#line 60 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 60 "split_parse_tree_src.m"
                {
#line 60 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 0);

#line 60 "split_parse_tree_src.m"
                  {
#line 60 "split_parse_tree_src.m"
                    mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_56_56, parse_tree__split_parse_tree_src__V_5_5);
#line 60 "split_parse_tree_src.m"
                    return;
                  }
#line 60 "split_parse_tree_src.m"
                }
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 2685 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 2:
#line 2691 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 3:
#line 2697 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
            }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 1:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 1);

#line 60 "split_parse_tree_src.m"
#line 60 "split_parse_tree_src.m"
            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
#line 60 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 2721 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 60 "split_parse_tree_src.m"
                {
#line 60 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 1);

#line 60 "split_parse_tree_src.m"
                  {
#line 60 "split_parse_tree_src.m"
                    mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_55_55, parse_tree__split_parse_tree_src__V_16_16);
#line 60 "split_parse_tree_src.m"
                    return;
                  }
#line 60 "split_parse_tree_src.m"
                }
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 2:
#line 2745 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 3:
#line 2751 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
            }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 2:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_54_54 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 2);

#line 60 "split_parse_tree_src.m"
#line 60 "split_parse_tree_src.m"
            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
#line 60 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 2775 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 2781 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 2:
#line 60 "split_parse_tree_src.m"
                {
#line 60 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_27_27 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 2);

#line 60 "split_parse_tree_src.m"
                  {
#line 60 "split_parse_tree_src.m"
                    mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_54_54, parse_tree__split_parse_tree_src__V_27_27);
#line 60 "split_parse_tree_src.m"
                    return;
                  }
#line 60 "split_parse_tree_src.m"
                }
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 3:
#line 2805 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
            }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 3:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "split_parse_tree_src.m"
#line 60 "split_parse_tree_src.m"
            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
#line 60 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 2831 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 2837 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 2:
#line 2843 "parse_tree.split_parse_tree_src.c"
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
              case (MR_Integer) 3:
#line 60 "split_parse_tree_src.m"
                {
#line 60 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
#line 60 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_44_44;

#line 60 "split_parse_tree_src.m"
                  {
#line 60 "split_parse_tree_src.m"
                    mercury__term____Compare____context_0_0(&parse_tree__split_parse_tree_src__V_44_44, parse_tree__split_parse_tree_src__V_53_53, parse_tree__split_parse_tree_src__V_42_42);
                  }
#line 2863 "parse_tree.split_parse_tree_src.c"
                  parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_44_44 == (MR_Integer) 0);
#line 60 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
#line 60 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 60 "split_parse_tree_src.m"
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_44_44;
#line 60 "split_parse_tree_src.m"
                  else
#line 60 "split_parse_tree_src.m"
                    {
#line 60 "split_parse_tree_src.m"
                      mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_52_52, parse_tree__split_parse_tree_src__V_43_43);
#line 60 "split_parse_tree_src.m"
                      return;
                    }
#line 60 "split_parse_tree_src.m"
                }
#line 60 "split_parse_tree_src.m"
                break;
#line 60 "split_parse_tree_src.m"
            }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
      }
#line 60 "split_parse_tree_src.m"
  }
#line 60 "split_parse_tree_src.m"
}

#line 60 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 60 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 60 "split_parse_tree_src.m"
{
#line 60 "split_parse_tree_src.m"
  {
#line 60 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 60 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_13 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 60 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_14 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 60 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_13 == parse_tree__split_parse_tree_src__CastY_14);
#line 60 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 60 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 60 "split_parse_tree_src.m"
    else
#line 60 "split_parse_tree_src.m"
#line 60 "split_parse_tree_src.m"
      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1)) {
#line 60 "split_parse_tree_src.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 0:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 0);
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_4_4;

#line 60 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 60 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 60 "split_parse_tree_src.m"
              {
#line 60 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);
#line 2945 "parse_tree.split_parse_tree_src.c"
                {
#line 2947 "parse_tree.split_parse_tree_src.c"
                  return parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_3_3, parse_tree__split_parse_tree_src__V_4_4);
                }
#line 60 "split_parse_tree_src.m"
              }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 1:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 1);
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_6_6;

#line 60 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 60 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 60 "split_parse_tree_src.m"
              {
#line 60 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 1);
#line 2973 "parse_tree.split_parse_tree_src.c"
                {
#line 2975 "parse_tree.split_parse_tree_src.c"
                  return parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_5_5, parse_tree__split_parse_tree_src__V_6_6);
                }
#line 60 "split_parse_tree_src.m"
              }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 2:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_7_7 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 2);
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_8_8;

#line 60 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 60 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 60 "split_parse_tree_src.m"
              {
#line 60 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_8_8 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 2);
#line 3001 "parse_tree.split_parse_tree_src.c"
                {
#line 3003 "parse_tree.split_parse_tree_src.c"
                  return parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_7_7, parse_tree__split_parse_tree_src__V_8_8);
                }
#line 60 "split_parse_tree_src.m"
              }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
        case (MR_Integer) 3:
#line 60 "split_parse_tree_src.m"
          {
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_11_11;
#line 60 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_12_12;

#line 60 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 60 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 60 "split_parse_tree_src.m"
              {
#line 60 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 3035 "parse_tree.split_parse_tree_src.c"
                {
#line 3037 "parse_tree.split_parse_tree_src.c"
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_9_9, parse_tree__split_parse_tree_src__V_11_11);
                }
#line 60 "split_parse_tree_src.m"
                if (parse_tree__split_parse_tree_src__succeeded)
#line 3042 "parse_tree.split_parse_tree_src.c"
                  {
#line 3044 "parse_tree.split_parse_tree_src.c"
                    return parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_10_10, parse_tree__split_parse_tree_src__V_12_12);
                  }
#line 60 "split_parse_tree_src.m"
              }
#line 60 "split_parse_tree_src.m"
          }
#line 60 "split_parse_tree_src.m"
          break;
#line 60 "split_parse_tree_src.m"
      }
#line 60 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 60 "split_parse_tree_src.m"
  }
#line 60 "split_parse_tree_src.m"
}

#line 101 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
#line 101 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 101 "split_parse_tree_src.m"
{
#line 101 "split_parse_tree_src.m"
  {
#line 101 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 101 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 101 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 101 "split_parse_tree_src.m"
    {
#line 101 "split_parse_tree_src.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_5)));
#line 101 "split_parse_tree_src.m"
      return;
    }
#line 101 "split_parse_tree_src.m"
  }
#line 101 "split_parse_tree_src.m"
}

#line 101 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 101 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 101 "split_parse_tree_src.m"
{
#line 101 "split_parse_tree_src.m"
  {
#line 101 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 101 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_3 = parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 101 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 101 "split_parse_tree_src.m"
    {
#line 101 "split_parse_tree_src.m"
      return parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_4)));
    }
#line 101 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 101 "split_parse_tree_src.m"
  }
#line 101 "split_parse_tree_src.m"
}

#line 84 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
#line 84 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 84 "split_parse_tree_src.m"
{
#line 84 "split_parse_tree_src.m"
  {
#line 84 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 84 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_17 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 84 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_18 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 84 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_17 == parse_tree__split_parse_tree_src__CastY_18);
#line 84 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 3148 "parse_tree.split_parse_tree_src.c"
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "split_parse_tree_src.m"
    else
#line 84 "split_parse_tree_src.m"
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 84 "split_parse_tree_src.m"
      {
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_22_22 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);

#line 84 "split_parse_tree_src.m"
        if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 84 "split_parse_tree_src.m"
          {
#line 84 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 0);

#line 84 "split_parse_tree_src.m"
            {
#line 84 "split_parse_tree_src.m"
              mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_22_22, parse_tree__split_parse_tree_src__V_5_5);
#line 84 "split_parse_tree_src.m"
              return;
            }
#line 84 "split_parse_tree_src.m"
          }
#line 84 "split_parse_tree_src.m"
        else
#line 3177 "parse_tree.split_parse_tree_src.c"
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "split_parse_tree_src.m"
      }
#line 84 "split_parse_tree_src.m"
    else
#line 84 "split_parse_tree_src.m"
      {
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "split_parse_tree_src.m"
        if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3192 "parse_tree.split_parse_tree_src.c"
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "split_parse_tree_src.m"
        else
#line 84 "split_parse_tree_src.m"
          {
#line 84 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
#line 84 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_16_16;

#line 84 "split_parse_tree_src.m"
            {
#line 84 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&parse_tree__split_parse_tree_src__V_16_16, parse_tree__split_parse_tree_src__V_24_24, parse_tree__split_parse_tree_src__V_14_14);
            }
#line 3210 "parse_tree.split_parse_tree_src.c"
            parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_16_16 == (MR_Integer) 0);
#line 84 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
#line 84 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 84 "split_parse_tree_src.m"
              *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_16_16;
#line 84 "split_parse_tree_src.m"
            else
#line 84 "split_parse_tree_src.m"
              {
#line 84 "split_parse_tree_src.m"
                {
#line 84 "split_parse_tree_src.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[4], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__V_23_23)), ((MR_Box) (parse_tree__split_parse_tree_src__V_15_15)));
#line 84 "split_parse_tree_src.m"
                  return;
                }
#line 84 "split_parse_tree_src.m"
              }
#line 84 "split_parse_tree_src.m"
          }
#line 84 "split_parse_tree_src.m"
      }
#line 84 "split_parse_tree_src.m"
  }
#line 84 "split_parse_tree_src.m"
}

#line 84 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 84 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 84 "split_parse_tree_src.m"
{
#line 84 "split_parse_tree_src.m"
  {
#line 84 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 84 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_9 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 84 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_10 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 84 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_9 == parse_tree__split_parse_tree_src__CastY_10);
#line 84 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 84 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 84 "split_parse_tree_src.m"
    else
#line 84 "split_parse_tree_src.m"
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 84 "split_parse_tree_src.m"
      {
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 0);
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_4_4;

#line 84 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 84 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 84 "split_parse_tree_src.m"
          {
#line 84 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);
#line 3283 "parse_tree.split_parse_tree_src.c"
            {
#line 3285 "parse_tree.split_parse_tree_src.c"
              return parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_3_3, parse_tree__split_parse_tree_src__V_4_4);
            }
#line 84 "split_parse_tree_src.m"
          }
#line 84 "split_parse_tree_src.m"
      }
#line 84 "split_parse_tree_src.m"
    else
#line 84 "split_parse_tree_src.m"
      {
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__TypeInfo_12_12;
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_7_7;
#line 84 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_8_8;

#line 84 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 84 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 84 "split_parse_tree_src.m"
          {
#line 84 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 3317 "parse_tree.split_parse_tree_src.c"
            {
#line 3319 "parse_tree.split_parse_tree_src.c"
              parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(parse_tree__split_parse_tree_src__V_5_5, parse_tree__split_parse_tree_src__V_7_7);
            }
#line 84 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 84 "split_parse_tree_src.m"
              {
#line 3326 "parse_tree.split_parse_tree_src.c"
                parse_tree__split_parse_tree_src__TypeInfo_12_12 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[4];
#line 3328 "parse_tree.split_parse_tree_src.c"
                {
#line 3330 "parse_tree.split_parse_tree_src.c"
                  return parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0(parse_tree__split_parse_tree_src__TypeInfo_12_12, ((MR_Box) (parse_tree__split_parse_tree_src__V_6_6)), ((MR_Box) (parse_tree__split_parse_tree_src__V_8_8)));
                }
#line 84 "split_parse_tree_src.m"
              }
#line 84 "split_parse_tree_src.m"
          }
#line 84 "split_parse_tree_src.m"
      }
#line 84 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 84 "split_parse_tree_src.m"
  }
#line 84 "split_parse_tree_src.m"
}

#line 130 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
#line 130 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 130 "split_parse_tree_src.m"
{
#line 130 "split_parse_tree_src.m"
  {
#line 130 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 130 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_9 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 130 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_10 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 130 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_9 == parse_tree__split_parse_tree_src__CastY_10);
#line 130 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 3370 "parse_tree.split_parse_tree_src.c"
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "split_parse_tree_src.m"
    else
#line 130 "split_parse_tree_src.m"
      {
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_8_8;

#line 130 "split_parse_tree_src.m"
        {
#line 130 "split_parse_tree_src.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__split_parse_tree_src__V_8_8, parse_tree__split_parse_tree_src__V_4_4, parse_tree__split_parse_tree_src__V_6_6);
        }
#line 3392 "parse_tree.split_parse_tree_src.c"
        parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_8_8 == (MR_Integer) 0);
#line 130 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
#line 130 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 130 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_8_8;
#line 130 "split_parse_tree_src.m"
        else
#line 130 "split_parse_tree_src.m"
          {
#line 130 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_5_5, parse_tree__split_parse_tree_src__V_7_7);
#line 130 "split_parse_tree_src.m"
            return;
          }
#line 130 "split_parse_tree_src.m"
      }
#line 130 "split_parse_tree_src.m"
  }
#line 130 "split_parse_tree_src.m"
}

#line 130 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 130 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 130 "split_parse_tree_src.m"
{
#line 130 "split_parse_tree_src.m"
  {
#line 130 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 130 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_7 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 130 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_8 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 130 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_7 == parse_tree__split_parse_tree_src__CastY_8);
#line 130 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 130 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 130 "split_parse_tree_src.m"
    else
#line 130 "split_parse_tree_src.m"
      {
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));

#line 3453 "parse_tree.split_parse_tree_src.c"
        {
#line 3455 "parse_tree.split_parse_tree_src.c"
          parse_tree__split_parse_tree_src__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__split_parse_tree_src__V_3_3, parse_tree__split_parse_tree_src__V_5_5);
        }
#line 130 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 3460 "parse_tree.split_parse_tree_src.c"
          {
#line 3462 "parse_tree.split_parse_tree_src.c"
            return parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(parse_tree__split_parse_tree_src__V_4_4, parse_tree__split_parse_tree_src__V_6_6);
          }
#line 130 "split_parse_tree_src.m"
      }
#line 130 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 130 "split_parse_tree_src.m"
  }
#line 130 "split_parse_tree_src.m"
}

#line 55 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
#line 55 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 55 "split_parse_tree_src.m"
{
#line 55 "split_parse_tree_src.m"
  {
#line 55 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 55 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 55 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 55 "split_parse_tree_src.m"
    {
#line 55 "split_parse_tree_src.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Cast_HeadVar1_4, parse_tree__split_parse_tree_src__Cast_HeadVar2_5);
#line 55 "split_parse_tree_src.m"
      return;
    }
#line 55 "split_parse_tree_src.m"
  }
#line 55 "split_parse_tree_src.m"
}

#line 55 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
#line 55 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 55 "split_parse_tree_src.m"
{
#line 3515 "parse_tree.split_parse_tree_src.c"
  {
#line 3517 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__HeadVar__2_1 == parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 3520 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 3522 "parse_tree.split_parse_tree_src.c"
  }
#line 55 "split_parse_tree_src.m"
}

#line 167 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
#line 167 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 167 "split_parse_tree_src.m"
{
#line 167 "split_parse_tree_src.m"
  {
#line 167 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 167 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 167 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 167 "split_parse_tree_src.m"
    {
#line 167 "split_parse_tree_src.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_5)));
#line 167 "split_parse_tree_src.m"
      return;
    }
#line 167 "split_parse_tree_src.m"
  }
#line 167 "split_parse_tree_src.m"
}

#line 167 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 167 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 167 "split_parse_tree_src.m"
{
#line 167 "split_parse_tree_src.m"
  {
#line 167 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 167 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_3 = parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 167 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 167 "split_parse_tree_src.m"
    {
#line 167 "split_parse_tree_src.m"
      return parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_4)));
    }
#line 167 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 167 "split_parse_tree_src.m"
  }
#line 167 "split_parse_tree_src.m"
}

#line 121 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
#line 121 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 121 "split_parse_tree_src.m"
{
#line 121 "split_parse_tree_src.m"
  {
#line 121 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 121 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_18 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 121 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_19 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 121 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_18 == parse_tree__split_parse_tree_src__CastY_19);
#line 121 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 3613 "parse_tree.split_parse_tree_src.c"
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "split_parse_tree_src.m"
    else
#line 121 "split_parse_tree_src.m"
    if ((parse_tree__split_parse_tree_src__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "split_parse_tree_src.m"
      if ((parse_tree__split_parse_tree_src__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "split_parse_tree_src.m"
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "split_parse_tree_src.m"
      else
#line 3625 "parse_tree.split_parse_tree_src.c"
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "split_parse_tree_src.m"
    else
#line 121 "split_parse_tree_src.m"
      {
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

#line 121 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3640 "parse_tree.split_parse_tree_src.c"
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "split_parse_tree_src.m"
        else
#line 121 "split_parse_tree_src.m"
          {
#line 121 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 2)));
#line 121 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_16_16;
#line 121 "split_parse_tree_src.m"
            MR_Integer parse_tree__split_parse_tree_src__V_26_26 = (MR_Integer) parse_tree__split_parse_tree_src__V_25_25;
#line 121 "split_parse_tree_src.m"
            MR_Integer parse_tree__split_parse_tree_src__V_27_27 = (MR_Integer) parse_tree__split_parse_tree_src__V_13_13;

#line 121 "split_parse_tree_src.m"
            {
#line 121 "split_parse_tree_src.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__split_parse_tree_src__V_16_16, parse_tree__split_parse_tree_src__V_26_26, parse_tree__split_parse_tree_src__V_27_27);
            }
#line 3664 "parse_tree.split_parse_tree_src.c"
            parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_16_16 == (MR_Integer) 0);
#line 121 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
#line 121 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 121 "split_parse_tree_src.m"
              *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_16_16;
#line 121 "split_parse_tree_src.m"
            else
#line 121 "split_parse_tree_src.m"
              {
#line 121 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_17_17;

#line 121 "split_parse_tree_src.m"
                {
#line 121 "split_parse_tree_src.m"
                  mercury__term____Compare____context_0_0(&parse_tree__split_parse_tree_src__V_17_17, parse_tree__split_parse_tree_src__V_24_24, parse_tree__split_parse_tree_src__V_14_14);
                }
#line 3684 "parse_tree.split_parse_tree_src.c"
                parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_17_17 == (MR_Integer) 0);
#line 121 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
#line 121 "split_parse_tree_src.m"
                if (parse_tree__split_parse_tree_src__succeeded)
#line 121 "split_parse_tree_src.m"
                  *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_17_17;
#line 121 "split_parse_tree_src.m"
                else
#line 121 "split_parse_tree_src.m"
                  {
#line 121 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_23_23, parse_tree__split_parse_tree_src__V_15_15);
#line 121 "split_parse_tree_src.m"
                    return;
                  }
#line 121 "split_parse_tree_src.m"
              }
#line 121 "split_parse_tree_src.m"
          }
#line 121 "split_parse_tree_src.m"
      }
#line 121 "split_parse_tree_src.m"
  }
#line 121 "split_parse_tree_src.m"
}

#line 121 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 121 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 121 "split_parse_tree_src.m"
{
#line 121 "split_parse_tree_src.m"
  {
#line 121 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 121 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastX_11 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 121 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__CastY_12 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 121 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_11 == parse_tree__split_parse_tree_src__CastY_12);
#line 121 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 121 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 121 "split_parse_tree_src.m"
    else
#line 121 "split_parse_tree_src.m"
    if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "split_parse_tree_src.m"
      {
#line 121 "split_parse_tree_src.m"
        MR_Integer parse_tree__split_parse_tree_src__CastX_3 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
#line 121 "split_parse_tree_src.m"
        MR_Integer parse_tree__split_parse_tree_src__CastY_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

#line 121 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastY_4 == parse_tree__split_parse_tree_src__CastX_3);
#line 121 "split_parse_tree_src.m"
      }
#line 121 "split_parse_tree_src.m"
    else
#line 121 "split_parse_tree_src.m"
      {
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 2)));
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_8_8;
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_9_9;
#line 121 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_10_10;

#line 121 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 121 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 121 "split_parse_tree_src.m"
          {
#line 121 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
#line 3780 "parse_tree.split_parse_tree_src.c"
            parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_5_5 == parse_tree__split_parse_tree_src__V_8_8);
#line 121 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 121 "split_parse_tree_src.m"
              {
#line 3786 "parse_tree.split_parse_tree_src.c"
                {
#line 3788 "parse_tree.split_parse_tree_src.c"
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_6_6, parse_tree__split_parse_tree_src__V_9_9);
                }
#line 121 "split_parse_tree_src.m"
                if (parse_tree__split_parse_tree_src__succeeded)
#line 3793 "parse_tree.split_parse_tree_src.c"
                  {
#line 3795 "parse_tree.split_parse_tree_src.c"
                    return parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(parse_tree__split_parse_tree_src__V_7_7, parse_tree__split_parse_tree_src__V_10_10);
                  }
#line 121 "split_parse_tree_src.m"
              }
#line 121 "split_parse_tree_src.m"
          }
#line 121 "split_parse_tree_src.m"
      }
#line 121 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 121 "split_parse_tree_src.m"
  }
#line 121 "split_parse_tree_src.m"
}

#line 423 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
#line 423 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
#line 423 "split_parse_tree_src.m"
{
#line 423 "split_parse_tree_src.m"
  {
#line 423 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 423 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
#line 423 "split_parse_tree_src.m"
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

#line 423 "split_parse_tree_src.m"
    {
#line 423 "split_parse_tree_src.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Cast_HeadVar1_4, parse_tree__split_parse_tree_src__Cast_HeadVar2_5);
#line 423 "split_parse_tree_src.m"
      return;
    }
#line 423 "split_parse_tree_src.m"
  }
#line 423 "split_parse_tree_src.m"
}

#line 423 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
#line 423 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
#line 423 "split_parse_tree_src.m"
{
#line 3852 "parse_tree.split_parse_tree_src.c"
  {
#line 3854 "parse_tree.split_parse_tree_src.c"
    MR_bool parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__HeadVar__2_1 == parse_tree__split_parse_tree_src__HeadVar__2_2);

#line 3857 "parse_tree.split_parse_tree_src.c"
    return parse_tree__split_parse_tree_src__succeeded;
#line 3859 "parse_tree.split_parse_tree_src.c"
  }
#line 423 "split_parse_tree_src.m"
}

#line 714 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_4,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_6,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_8,
#line 714 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
#line 714 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10)
#line 714 "split_parse_tree_src.m"
{
#line 720 "split_parse_tree_src.m"
  while (MR_TRUE)
#line 720 "split_parse_tree_src.m"
    {
#line 720 "split_parse_tree_src.m"
      /* tailcall optimized into a loop */
#line 720 "split_parse_tree_src.m"
      {
#line 720 "split_parse_tree_src.m"
        MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 720 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "split_parse_tree_src.m"
          {
#line 721 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
#line 721 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_8 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7;
#line 721 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_6 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5;
#line 721 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3;
#line 720 "split_parse_tree_src.m"
          }
#line 720 "split_parse_tree_src.m"
        else
#line 723 "split_parse_tree_src.m"
          {
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Include_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Includes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__InclModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Include_24, (MR_Integer) 0)));
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Include_24, (MR_Integer) 1)));
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112;
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113;
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114;
#line 723 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115;
#line 724 "split_parse_tree_src.m"
            MR_Integer parse_tree__split_parse_tree_src___SeqNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Include_24, (MR_Integer) 2)));
#line 750 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__OldEntry_34;
#line 725 "split_parse_tree_src.m"
            MR_Box parse_tree__split_parse_tree_src__conv0_OldEntry_34;

#line 725 "split_parse_tree_src.m"
            {
#line 725 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5, ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31)), &parse_tree__split_parse_tree_src__conv0_OldEntry_34);
            }
#line 725 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 725 "split_parse_tree_src.m"
              {
#line 725 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldEntry_34 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_OldEntry_34);
#line 725 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 725 "split_parse_tree_src.m"
              }
#line 750 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 726 "split_parse_tree_src.m"
              {
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__ParentModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_2, (MR_Integer) 0)));
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Pieces1_37;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__OldContext_40;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Pieces2_41;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Msg_43;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__OldMsg_44;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Spec_45;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_57_57;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_58_58;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_59_59;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_62_62;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_64_64;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_67_67;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_68_68;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_100_100;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_101_101;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_102_102;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_109_109;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_110_110;
#line 726 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_2, (MR_Integer) 1)));

#line 727 "split_parse_tree_src.m"
                {
#line 727 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 727 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_58_58, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_35));
#line 727 "split_parse_tree_src.m"
                }
#line 729 "split_parse_tree_src.m"
                {
#line 729 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 729 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_68_68, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31));
#line 729 "split_parse_tree_src.m"
                }
#line 729 "split_parse_tree_src.m"
                {
#line 729 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_68_68));
#line 729 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[63])));
#line 729 "split_parse_tree_src.m"
                }
#line 729 "split_parse_tree_src.m"
                {
#line 729 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[84])));
#line 729 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_64_64, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_67_67));
#line 729 "split_parse_tree_src.m"
                }
#line 728 "split_parse_tree_src.m"
                {
#line 728 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 728 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_62_62, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_64_64));
#line 728 "split_parse_tree_src.m"
                }
#line 728 "split_parse_tree_src.m"
                {
#line 728 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 728 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_62_62));
#line 728 "split_parse_tree_src.m"
                }
#line 727 "split_parse_tree_src.m"
                {
#line 727 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_57_57, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_58_58));
#line 727 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_57_57, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_59_59));
#line 727 "split_parse_tree_src.m"
                }
#line 727 "split_parse_tree_src.m"
                {
#line 727 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Pieces1_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 727 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_37, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_57_57));
#line 727 "split_parse_tree_src.m"
                }
#line 737 "split_parse_tree_src.m"
                if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_34)) == (MR_mktag((MR_Integer) 0))))
#line 738 "split_parse_tree_src.m"
                  {
#line 738 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__OldContext_40 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_34), (MR_Integer) 0);
#line 739 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__Pieces2_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[67]);
#line 738 "split_parse_tree_src.m"
                  }
#line 737 "split_parse_tree_src.m"
                else
#line 733 "split_parse_tree_src.m"
                  {
#line 733 "split_parse_tree_src.m"
                    MR_Word parse_tree__split_parse_tree_src__OldSplitNested_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_34, (MR_Integer) 0)));
#line 733 "split_parse_tree_src.m"
                    MR_Word parse_tree__split_parse_tree_src__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_34, (MR_Integer) 1)));

#line 734 "split_parse_tree_src.m"
                    {
#line 734 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__OldContext_40 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__OldSplitNested_38);
                    }
#line 735 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__Pieces2_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[71]);
#line 733 "split_parse_tree_src.m"
                  }
#line 745 "split_parse_tree_src.m"
                {
#line 745 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_102_102 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__split_parse_tree_src__Pieces1_37, parse_tree__split_parse_tree_src__Pieces2_41);
                }
#line 745 "split_parse_tree_src.m"
                {
#line 745 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 745 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_101_101, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_102_102));
#line 745 "split_parse_tree_src.m"
                }
#line 745 "split_parse_tree_src.m"
                {
#line 745 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_101_101));
#line 745 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "split_parse_tree_src.m"
                }
#line 745 "split_parse_tree_src.m"
                {
#line 745 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_43, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_32));
#line 745 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_43, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_100_100));
#line 745 "split_parse_tree_src.m"
                }
#line 746 "split_parse_tree_src.m"
                {
#line 746 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__OldMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_44, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_40));
#line 746 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[85])));
#line 746 "split_parse_tree_src.m"
                }
#line 748 "split_parse_tree_src.m"
                {
#line 748 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_110_110, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_44));
#line 748 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "split_parse_tree_src.m"
                }
#line 748 "split_parse_tree_src.m"
                {
#line 748 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_109_109, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_43));
#line 748 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_109_109, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_110_110));
#line 748 "split_parse_tree_src.m"
                }
#line 747 "split_parse_tree_src.m"
                {
#line 747 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 747 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_109_109));
#line 747 "split_parse_tree_src.m"
                }
#line 749 "split_parse_tree_src.m"
                {
#line 749 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_45));
#line 749 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9));
#line 749 "split_parse_tree_src.m"
                }
#line 726 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7;
#line 726 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5;
#line 726 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3;
#line 726 "split_parse_tree_src.m"
              }
#line 750 "split_parse_tree_src.m"
            else
#line 751 "split_parse_tree_src.m"
              {
#line 751 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Entry_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__split_parse_tree_src__Context_32);

#line 752 "split_parse_tree_src.m"
                {
#line 752 "split_parse_tree_src.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_46)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113);
                }
#line 753 "split_parse_tree_src.m"
                {
#line 753 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(parse_tree__split_parse_tree_src__SectionAncestors_2, parse_tree__split_parse_tree_src__InclModuleName_31, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114);
                }
#line 755 "split_parse_tree_src.m"
                {
#line 755 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3, ((MR_Box) (parse_tree__split_parse_tree_src__Include_24)));
                }
#line 751 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
#line 751 "split_parse_tree_src.m"
              }
#line 757 "split_parse_tree_src.m"
            /* direct tailcall eliminated */
#line 757 "split_parse_tree_src.m"
            {
#line 757 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__Includes_25;
#line 757 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0__tmp_copy_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115;
#line 757 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113;
#line 757 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114;
#line 757 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112;

#line 757 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9;
#line 757 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_7;
#line 757 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_5;
#line 757 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0__tmp_copy_3;
#line 757 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
#line 757 "split_parse_tree_src.m"
            }
#line 757 "split_parse_tree_src.m"
            continue;
#line 723 "split_parse_tree_src.m"
          }
#line 720 "split_parse_tree_src.m"
      }
#line 720 "split_parse_tree_src.m"
      break;
#line 720 "split_parse_tree_src.m"
    }
#line 714 "split_parse_tree_src.m"
}

#line 638 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Component_11,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_12,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52,
#line 638 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53,
#line 638 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54)
#line 638 "split_parse_tree_src.m"
{
#line 649 "split_parse_tree_src.m"
  {
#line 649 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 649 "split_parse_tree_src.m"
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Component_11)) == (MR_mktag((MR_Integer) 1))))
#line 697 "split_parse_tree_src.m"
      {
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__NestedModuleParseTree_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 2)));
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__NestedModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedModuleParseTree_41, (MR_Integer) 0)));
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__NestedModuleContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedModuleParseTree_41, (MR_Integer) 1)));
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__NestedIncludeItem_45;
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__NestedModuleAncestors_46;
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_56_56;
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SectionKind_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 0)));
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SectionContext_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 1)));
#line 697 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__RawItemBlock_105;
#line 699 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src___NestedModuleComponents_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedModuleParseTree_41, (MR_Integer) 2)));

#line 702 "split_parse_tree_src.m"
        {
#line 702 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__NestedIncludeItem_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 702 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedIncludeItem_45, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedModuleName_42));
#line 702 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedIncludeItem_45, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedModuleContext_43));
#line 702 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedIncludeItem_45, 2) = ((MR_Box) ((MR_Integer) -1));
#line 702 "split_parse_tree_src.m"
        }
#line 704 "split_parse_tree_src.m"
        {
#line 704 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedIncludeItem_45));
#line 704 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "split_parse_tree_src.m"
        }
#line 703 "split_parse_tree_src.m"
        {
#line 703 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__RawItemBlock_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 703 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_103));
#line 703 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_104));
#line 703 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_56_56));
#line 703 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "split_parse_tree_src.m"
        }
#line 705 "split_parse_tree_src.m"
        {
#line 705 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlock_105)));
        }
#line 708 "split_parse_tree_src.m"
        {
#line 708 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__NestedModuleAncestors_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 708 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_103));
#line 708 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_104));
#line 708 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionAncestors_12));
#line 708 "split_parse_tree_src.m"
        }
#line 710 "split_parse_tree_src.m"
        {
#line 710 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(parse_tree__split_parse_tree_src__NestedModuleParseTree_41, parse_tree__split_parse_tree_src__NestedModuleAncestors_46, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54);
#line 710 "split_parse_tree_src.m"
          return;
        }
#line 697 "split_parse_tree_src.m"
      }
#line 649 "split_parse_tree_src.m"
    else
#line 649 "split_parse_tree_src.m"
      {
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SectionKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 0)));
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SectionContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 1)));
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__IncludesCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 2)));
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__AvailsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 3)));
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__ItemsCord_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 4)));
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Includes_22;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Avails_23;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Items_24;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OKIncludesCord_25;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OKIncludes_26;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__RawItemBlock_27;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_64_64;
#line 649 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;

#line 650 "split_parse_tree_src.m"
        {
#line 650 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Includes_22 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106, parse_tree__split_parse_tree_src__IncludesCord_19);
        }
#line 651 "split_parse_tree_src.m"
        {
#line 651 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Avails_23 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__split_parse_tree_src__AvailsCord_20);
        }
#line 652 "split_parse_tree_src.m"
        {
#line 652 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Items_24 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__split_parse_tree_src__ItemsCord_21);
        }
#line 654 "split_parse_tree_src.m"
        {
#line 654 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_64_64 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106);
        }
#line 653 "split_parse_tree_src.m"
        {
#line 653 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(parse_tree__split_parse_tree_src__Includes_22, parse_tree__split_parse_tree_src__SectionAncestors_12, parse_tree__split_parse_tree_src__V_64_64, &parse_tree__split_parse_tree_src__OKIncludesCord_25, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67);
        }
#line 656 "split_parse_tree_src.m"
        {
#line 656 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__OKIncludes_26 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106, parse_tree__split_parse_tree_src__OKIncludesCord_25);
        }
#line 657 "split_parse_tree_src.m"
        {
#line 657 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__RawItemBlock_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 657 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_17));
#line 657 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_18));
#line 657 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__OKIncludes_26));
#line 657 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__Avails_23));
#line 657 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__Items_24));
#line 657 "split_parse_tree_src.m"
        }
#line 659 "split_parse_tree_src.m"
        {
#line 659 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlock_27)));
        }
#line 662 "split_parse_tree_src.m"
#line 662 "split_parse_tree_src.m"
        switch (parse_tree__split_parse_tree_src__SectionKind_17) {
#line 662 "split_parse_tree_src.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 662 "split_parse_tree_src.m"
          case (MR_Integer) 1:
#line 663 "split_parse_tree_src.m"
            {
#line 663 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__MaybeProblemAncestor_28;

#line 664 "split_parse_tree_src.m"
              {
#line 664 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(parse_tree__split_parse_tree_src__SectionAncestors_12, &parse_tree__split_parse_tree_src__MaybeProblemAncestor_28);
              }
#line 668 "split_parse_tree_src.m"
              if ((parse_tree__split_parse_tree_src__MaybeProblemAncestor_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "split_parse_tree_src.m"
                *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;
#line 668 "split_parse_tree_src.m"
              else
#line 669 "split_parse_tree_src.m"
                {
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__ProblemAncestor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__MaybeProblemAncestor_28, (MR_Integer) 0)));
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__CurModuleName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_12, (MR_Integer) 0)));
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_12, (MR_Integer) 1)));
#line 669 "split_parse_tree_src.m"
                  MR_String parse_tree__split_parse_tree_src__PorA_37;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__Pieces_38;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__Msg_39;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__Spec_40;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_74_74;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_75_75;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_76_76;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_79_79;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_82_82;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_83_83;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_84_84;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_87_87;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_88_88;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_95_95;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_96_96;
#line 669 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_100_100;

#line 675 "split_parse_tree_src.m"
                  if ((parse_tree__split_parse_tree_src__ModuleAncestors_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "split_parse_tree_src.m"
                    {
#line 673 "split_parse_tree_src.m"
                      {
#line 673 "split_parse_tree_src.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/10", (MR_String) "in interface section of nonexistent ancestor");
#line 673 "split_parse_tree_src.m"
                        return;
                      }
#line 672 "split_parse_tree_src.m"
                    }
#line 675 "split_parse_tree_src.m"
                  else
#line 676 "split_parse_tree_src.m"
                    {
#line 676 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__ModuleSectionAncestor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 2)));
#line 676 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__ModuleParent_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ModuleSectionAncestor_34, (MR_Integer) 0)));
#line 676 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 0)));
#line 676 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 1)));
#line 677 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ModuleSectionAncestor_34, (MR_Integer) 1)));

#line 678 "split_parse_tree_src.m"
                      {
#line 678 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__split_parse_tree_src__ModuleParent_35, parse_tree__split_parse_tree_src__ProblemAncestor_29);
                      }
#line 680 "split_parse_tree_src.m"
                      if (parse_tree__split_parse_tree_src__succeeded)
#line 679 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__PorA_37 = (MR_String) "parent";
#line 680 "split_parse_tree_src.m"
                      else
#line 681 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__PorA_37 = (MR_String) "ancestor";
#line 676 "split_parse_tree_src.m"
                    }
#line 685 "split_parse_tree_src.m"
                  {
#line 685 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 685 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_75_75, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__CurModuleName_30));
#line 685 "split_parse_tree_src.m"
                  }
#line 686 "split_parse_tree_src.m"
                  {
#line 686 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 686 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__PorA_37));
#line 686 "split_parse_tree_src.m"
                  }
#line 687 "split_parse_tree_src.m"
                  {
#line 687 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 687 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_88_88, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ProblemAncestor_29));
#line 687 "split_parse_tree_src.m"
                  }
#line 687 "split_parse_tree_src.m"
                  {
#line 687 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_87_87, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_88_88));
#line 687 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[60])));
#line 687 "split_parse_tree_src.m"
                  }
#line 687 "split_parse_tree_src.m"
                  {
#line 687 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[81])));
#line 687 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_84_84, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_87_87));
#line 687 "split_parse_tree_src.m"
                  }
#line 686 "split_parse_tree_src.m"
                  {
#line 686 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_83_83));
#line 686 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_84_84));
#line 686 "split_parse_tree_src.m"
                  }
#line 686 "split_parse_tree_src.m"
                  {
#line 686 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
#line 686 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_82_82));
#line 686 "split_parse_tree_src.m"
                  }
#line 685 "split_parse_tree_src.m"
                  {
#line 685 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
#line 685 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_79_79));
#line 685 "split_parse_tree_src.m"
                  }
#line 685 "split_parse_tree_src.m"
                  {
#line 685 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_75_75));
#line 685 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_76_76));
#line 685 "split_parse_tree_src.m"
                  }
#line 684 "split_parse_tree_src.m"
                  {
#line 684 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[96])));
#line 684 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_74_74));
#line 684 "split_parse_tree_src.m"
                  }
#line 689 "split_parse_tree_src.m"
                  {
#line 689 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 689 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_96_96, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_38));
#line 689 "split_parse_tree_src.m"
                  }
#line 689 "split_parse_tree_src.m"
                  {
#line 689 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_95_95, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_96_96));
#line 689 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "split_parse_tree_src.m"
                  }
#line 689 "split_parse_tree_src.m"
                  {
#line 689 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_18));
#line 689 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_95_95));
#line 689 "split_parse_tree_src.m"
                  }
#line 691 "split_parse_tree_src.m"
                  {
#line 691 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_39));
#line 691 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "split_parse_tree_src.m"
                  }
#line 690 "split_parse_tree_src.m"
                  {
#line 690 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 690 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 690 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_100_100));
#line 690 "split_parse_tree_src.m"
                  }
#line 692 "split_parse_tree_src.m"
                  {
#line 692 "split_parse_tree_src.m"
                    MR_Word base;
#line 692 "split_parse_tree_src.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "split_parse_tree_src.m"
                    *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54 = base;
#line 692 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_40));
#line 692 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67));
#line 692 "split_parse_tree_src.m"
                  }
#line 669 "split_parse_tree_src.m"
                }
#line 663 "split_parse_tree_src.m"
            }
#line 662 "split_parse_tree_src.m"
            break;
#line 662 "split_parse_tree_src.m"
          case (MR_Integer) 0:
#line 661 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;
#line 662 "split_parse_tree_src.m"
            break;
#line 662 "split_parse_tree_src.m"
        }
#line 649 "split_parse_tree_src.m"
      }
#line 649 "split_parse_tree_src.m"
  }
#line 638 "split_parse_tree_src.m"
}

#line 621 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_4,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_6,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_8,
#line 621 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
#line 621 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10)
#line 621 "split_parse_tree_src.m"
{
#line 628 "split_parse_tree_src.m"
  while (MR_TRUE)
#line 628 "split_parse_tree_src.m"
    {
#line 628 "split_parse_tree_src.m"
      /* tailcall optimized into a loop */
#line 628 "split_parse_tree_src.m"
      {
#line 628 "split_parse_tree_src.m"
        MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 628 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "split_parse_tree_src.m"
          {
#line 629 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
#line 629 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_8 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7;
#line 629 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_6 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5;
#line 629 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3;
#line 628 "split_parse_tree_src.m"
          }
#line 628 "split_parse_tree_src.m"
        else
#line 632 "split_parse_tree_src.m"
          {
#line 632 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Component_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Components_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39;
#line 632 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40;
#line 632 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41;
#line 632 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42;

#line 633 "split_parse_tree_src.m"
            {
#line 633 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(parse_tree__split_parse_tree_src__Component_24, parse_tree__split_parse_tree_src__SectionAncestors_2, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7, &parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42);
            }
#line 635 "split_parse_tree_src.m"
            /* direct tailcall eliminated */
#line 635 "split_parse_tree_src.m"
            {
#line 635 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__Components_25;
#line 635 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39;
#line 635 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40;
#line 635 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0__tmp_copy_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41;
#line 635 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42;

#line 635 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9;
#line 635 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0__tmp_copy_7;
#line 635 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_5;
#line 635 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_3;
#line 635 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
#line 635 "split_parse_tree_src.m"
            }
#line 635 "split_parse_tree_src.m"
            continue;
#line 632 "split_parse_tree_src.m"
          }
#line 628 "split_parse_tree_src.m"
      }
#line 628 "split_parse_tree_src.m"
      break;
#line 628 "split_parse_tree_src.m"
    }
#line 621 "split_parse_tree_src.m"
}

#line 603 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
#line 603 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 603 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2,
#line 603 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3,
#line 603 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4,
#line 603 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5)
#line 603 "split_parse_tree_src.m"
{
#line 606 "split_parse_tree_src.m"
  while (MR_TRUE)
#line 606 "split_parse_tree_src.m"
    {
#line 606 "split_parse_tree_src.m"
      /* tailcall optimized into a loop */
#line 606 "split_parse_tree_src.m"
      {
#line 606 "split_parse_tree_src.m"
        MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 606 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "split_parse_tree_src.m"
          {
#line 606 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4;
#line 606 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2;
#line 606 "split_parse_tree_src.m"
          }
#line 606 "split_parse_tree_src.m"
        else
#line 608 "split_parse_tree_src.m"
          {
#line 608 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__SectionKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 0)));
#line 608 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25;
#line 608 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26;
#line 609 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 1)));
#line 609 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 2)));
#line 609 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 3)));
#line 609 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 4)));

#line 613 "split_parse_tree_src.m"
#line 613 "split_parse_tree_src.m"
            switch (parse_tree__split_parse_tree_src__SectionKind_16) {
#line 613 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 613 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 614 "split_parse_tree_src.m"
                {
#line 615 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25 = (MR_Integer) 1;
#line 614 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2;
#line 614 "split_parse_tree_src.m"
                }
#line 613 "split_parse_tree_src.m"
                break;
#line 613 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 611 "split_parse_tree_src.m"
                {
#line 612 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26 = (MR_Integer) 1;
#line 611 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4;
#line 611 "split_parse_tree_src.m"
                }
#line 613 "split_parse_tree_src.m"
                break;
#line 613 "split_parse_tree_src.m"
            }
#line 617 "split_parse_tree_src.m"
            /* direct tailcall eliminated */
#line 617 "split_parse_tree_src.m"
            {
#line 617 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__ItemBlocks_13;
#line 617 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0__tmp_copy_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26;
#line 617 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0__tmp_copy_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25;

#line 617 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0__tmp_copy_4;
#line 617 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0__tmp_copy_2;
#line 617 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
#line 617 "split_parse_tree_src.m"
            }
#line 617 "split_parse_tree_src.m"
            continue;
#line 608 "split_parse_tree_src.m"
          }
#line 606 "split_parse_tree_src.m"
      }
#line 606 "split_parse_tree_src.m"
      break;
#line 606 "split_parse_tree_src.m"
    }
#line 603 "split_parse_tree_src.m"
}

#line 573 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_8,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_9,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldIntContext_10,
#line 573 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldImpContext_11,
#line 573 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_12)
#line 573 "split_parse_tree_src.m"
{
#line 578 "split_parse_tree_src.m"
  {
#line 578 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Pieces_13;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_23_23;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_25_25;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_28_28;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_30_30;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_33_33;
#line 578 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_34_34;

#line 579 "split_parse_tree_src.m"
    {
#line 579 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 579 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_9));
#line 579 "split_parse_tree_src.m"
    }
#line 581 "split_parse_tree_src.m"
    {
#line 581 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 581 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
#line 581 "split_parse_tree_src.m"
    }
#line 581 "split_parse_tree_src.m"
    {
#line 581 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
#line 581 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[48])));
#line 581 "split_parse_tree_src.m"
    }
#line 581 "split_parse_tree_src.m"
    {
#line 581 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
#line 581 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_30_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
#line 581 "split_parse_tree_src.m"
    }
#line 580 "split_parse_tree_src.m"
    {
#line 580 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 580 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_28_28, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_30_30));
#line 580 "split_parse_tree_src.m"
    }
#line 580 "split_parse_tree_src.m"
    {
#line 580 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 580 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_28_28));
#line 580 "split_parse_tree_src.m"
    }
#line 579 "split_parse_tree_src.m"
    {
#line 579 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_24_24));
#line 579 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_25_25));
#line 579 "split_parse_tree_src.m"
    }
#line 579 "split_parse_tree_src.m"
    {
#line 579 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 579 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_23_23));
#line 579 "split_parse_tree_src.m"
    }
#line 584 "split_parse_tree_src.m"
    {
#line 584 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__OldIntContext_10, parse_tree__split_parse_tree_src__OldImpContext_11);
    }
#line 591 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 586 "split_parse_tree_src.m"
      {
#line 586 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Msg_15;
#line 586 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OldMsg_16;
#line 586 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_52_52;
#line 586 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_53_53;
#line 586 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_60_60;
#line 586 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_61_61;

#line 587 "split_parse_tree_src.m"
        {
#line 587 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 587 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_53_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
#line 587 "split_parse_tree_src.m"
        }
#line 587 "split_parse_tree_src.m"
        {
#line 587 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_53_53));
#line 587 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "split_parse_tree_src.m"
        }
#line 587 "split_parse_tree_src.m"
        {
#line 587 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
#line 587 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_52_52));
#line 587 "split_parse_tree_src.m"
        }
#line 588 "split_parse_tree_src.m"
        {
#line 588 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__OldMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntContext_10));
#line 588 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[93])));
#line 588 "split_parse_tree_src.m"
        }
#line 590 "split_parse_tree_src.m"
        {
#line 590 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_16));
#line 590 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "split_parse_tree_src.m"
        }
#line 590 "split_parse_tree_src.m"
        {
#line 590 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_60_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_15));
#line 590 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_60_60, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_61_61));
#line 590 "split_parse_tree_src.m"
        }
#line 589 "split_parse_tree_src.m"
        {
#line 589 "split_parse_tree_src.m"
          MR_Word base;
#line 589 "split_parse_tree_src.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 589 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__Spec_12 = base;
#line 589 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 589 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_60_60));
#line 589 "split_parse_tree_src.m"
        }
#line 586 "split_parse_tree_src.m"
      }
#line 591 "split_parse_tree_src.m"
    else
#line 593 "split_parse_tree_src.m"
      {
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OldIntMsg_19;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OldImpMsg_20;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_79_79;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_80_80;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_90_90;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_91_91;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_92_92;
#line 593 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Msg_94;

#line 596 "split_parse_tree_src.m"
        {
#line 596 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 596 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_80_80, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
#line 596 "split_parse_tree_src.m"
        }
#line 596 "split_parse_tree_src.m"
        {
#line 596 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_80_80));
#line 596 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "split_parse_tree_src.m"
        }
#line 596 "split_parse_tree_src.m"
        {
#line 596 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Msg_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_94, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
#line 596 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_94, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_79_79));
#line 596 "split_parse_tree_src.m"
        }
#line 597 "split_parse_tree_src.m"
        {
#line 597 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__OldIntMsg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldIntMsg_19, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntContext_10));
#line 597 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldIntMsg_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[94])));
#line 597 "split_parse_tree_src.m"
        }
#line 598 "split_parse_tree_src.m"
        {
#line 598 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__OldImpMsg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 598 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldImpMsg_20, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldImpContext_11));
#line 598 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldImpMsg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
#line 598 "split_parse_tree_src.m"
        }
#line 600 "split_parse_tree_src.m"
        {
#line 600 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_92_92, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldImpMsg_20));
#line 600 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "split_parse_tree_src.m"
        }
#line 600 "split_parse_tree_src.m"
        {
#line 600 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntMsg_19));
#line 600 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_92_92));
#line 600 "split_parse_tree_src.m"
        }
#line 600 "split_parse_tree_src.m"
        {
#line 600 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_90_90, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_94));
#line 600 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_90_90, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_91_91));
#line 600 "split_parse_tree_src.m"
        }
#line 599 "split_parse_tree_src.m"
        {
#line 599 "split_parse_tree_src.m"
          MR_Word base;
#line 599 "split_parse_tree_src.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__Spec_12 = base;
#line 599 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 599 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_90_90));
#line 599 "split_parse_tree_src.m"
        }
#line 593 "split_parse_tree_src.m"
      }
#line 578 "split_parse_tree_src.m"
  }
#line 573 "split_parse_tree_src.m"
}

#line 556 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_8,
#line 556 "split_parse_tree_src.m"
  MR_String parse_tree__split_parse_tree_src__SectionWord_9,
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
#line 556 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldContext_11,
#line 556 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_12)
#line 556 "split_parse_tree_src.m"
{
#line 561 "split_parse_tree_src.m"
  {
#line 561 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Pieces_13;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__OldPieces_14;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Msg_15;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__OldMsg_16;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_19_19;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_20_20;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_21_21;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_26_26;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_29_29;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_30_30;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_31_31;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_34_34;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_35_35;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_42_42;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_50_50;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_51_51;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_53_53;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_54_54;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_58_58;
#line 561 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_59_59;

#line 562 "split_parse_tree_src.m"
    {
#line 562 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 562 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_20_20, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_10));
#line 562 "split_parse_tree_src.m"
    }
#line 564 "split_parse_tree_src.m"
    {
#line 564 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 564 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_30_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
#line 564 "split_parse_tree_src.m"
    }
#line 565 "split_parse_tree_src.m"
    {
#line 565 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__V_35_35, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionWord_9));
#line 565 "split_parse_tree_src.m"
    }
#line 565 "split_parse_tree_src.m"
    {
#line 565 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_35_35));
#line 565 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[91])));
#line 565 "split_parse_tree_src.m"
    }
#line 565 "split_parse_tree_src.m"
    {
#line 565 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[89])));
#line 565 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
#line 565 "split_parse_tree_src.m"
    }
#line 564 "split_parse_tree_src.m"
    {
#line 564 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_29_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_30_30));
#line 564 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_29_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_31_31));
#line 564 "split_parse_tree_src.m"
    }
#line 564 "split_parse_tree_src.m"
    {
#line 564 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
#line 564 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_26_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_29_29));
#line 564 "split_parse_tree_src.m"
    }
#line 563 "split_parse_tree_src.m"
    {
#line 563 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 563 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_26_26));
#line 563 "split_parse_tree_src.m"
    }
#line 563 "split_parse_tree_src.m"
    {
#line 563 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 563 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_21_21, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_24_24));
#line 563 "split_parse_tree_src.m"
    }
#line 562 "split_parse_tree_src.m"
    {
#line 562 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_20_20));
#line 562 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_21_21));
#line 562 "split_parse_tree_src.m"
    }
#line 562 "split_parse_tree_src.m"
    {
#line 562 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 562 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_19_19));
#line 562 "split_parse_tree_src.m"
    }
#line 566 "split_parse_tree_src.m"
    {
#line 566 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_42_42, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_35_35));
#line 566 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[44])));
#line 566 "split_parse_tree_src.m"
    }
#line 566 "split_parse_tree_src.m"
    {
#line 566 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__OldPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[92])));
#line 566 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldPieces_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_42_42));
#line 566 "split_parse_tree_src.m"
    }
#line 568 "split_parse_tree_src.m"
    {
#line 568 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 568 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_51_51, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
#line 568 "split_parse_tree_src.m"
    }
#line 568 "split_parse_tree_src.m"
    {
#line 568 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_50_50, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_51_51));
#line 568 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 568 "split_parse_tree_src.m"
    }
#line 568 "split_parse_tree_src.m"
    {
#line 568 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
#line 568 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_50_50));
#line 568 "split_parse_tree_src.m"
    }
#line 569 "split_parse_tree_src.m"
    {
#line 569 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_54_54, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldPieces_14));
#line 569 "split_parse_tree_src.m"
    }
#line 569 "split_parse_tree_src.m"
    {
#line 569 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_53_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_54_54));
#line 569 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "split_parse_tree_src.m"
    }
#line 569 "split_parse_tree_src.m"
    {
#line 569 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__OldMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 569 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_11));
#line 569 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_53_53));
#line 569 "split_parse_tree_src.m"
    }
#line 571 "split_parse_tree_src.m"
    {
#line 571 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_16));
#line 571 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "split_parse_tree_src.m"
    }
#line 571 "split_parse_tree_src.m"
    {
#line 571 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_58_58, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_15));
#line 571 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_58_58, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_59_59));
#line 571 "split_parse_tree_src.m"
    }
#line 570 "split_parse_tree_src.m"
    {
#line 570 "split_parse_tree_src.m"
      MR_Word base;
#line 570 "split_parse_tree_src.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 570 "split_parse_tree_src.m"
      *parse_tree__split_parse_tree_src__Spec_12 = base;
#line 570 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 570 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_58_58));
#line 570 "split_parse_tree_src.m"
    }
#line 561 "split_parse_tree_src.m"
  }
#line 556 "split_parse_tree_src.m"
}

#line 545 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
#line 545 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_5,
#line 545 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_6,
#line 545 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_7,
#line 545 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_8)
#line 545 "split_parse_tree_src.m"
{
#line 549 "split_parse_tree_src.m"
  {
#line 549 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Pieces_9;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Msg_10;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_13_13;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_14_14;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_15_15;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_18_18;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_20_20;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_23_23;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_31_31;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_32_32;
#line 549 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_36_36;

#line 550 "split_parse_tree_src.m"
    {
#line 550 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_14_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_7));
#line 550 "split_parse_tree_src.m"
    }
#line 551 "split_parse_tree_src.m"
    {
#line 551 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 551 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_5));
#line 551 "split_parse_tree_src.m"
    }
#line 551 "split_parse_tree_src.m"
    {
#line 551 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_24_24));
#line 551 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[42])));
#line 551 "split_parse_tree_src.m"
    }
#line 551 "split_parse_tree_src.m"
    {
#line 551 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
#line 551 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_20_20, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_23_23));
#line 551 "split_parse_tree_src.m"
    }
#line 550 "split_parse_tree_src.m"
    {
#line 550 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_18_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_20_20));
#line 550 "split_parse_tree_src.m"
    }
#line 550 "split_parse_tree_src.m"
    {
#line 550 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_15_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_18_18));
#line 550 "split_parse_tree_src.m"
    }
#line 550 "split_parse_tree_src.m"
    {
#line 550 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_13_13, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_14_14));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_13_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_15_15));
#line 550 "split_parse_tree_src.m"
    }
#line 550 "split_parse_tree_src.m"
    {
#line 550 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 550 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_9, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_13_13));
#line 550 "split_parse_tree_src.m"
    }
#line 553 "split_parse_tree_src.m"
    {
#line 553 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 553 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_32_32, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_9));
#line 553 "split_parse_tree_src.m"
    }
#line 553 "split_parse_tree_src.m"
    {
#line 553 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_32_32));
#line 553 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "split_parse_tree_src.m"
    }
#line 553 "split_parse_tree_src.m"
    {
#line 553 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Msg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_10, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_6));
#line 553 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_10, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_31_31));
#line 553 "split_parse_tree_src.m"
    }
#line 554 "split_parse_tree_src.m"
    {
#line 554 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_36_36, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_10));
#line 554 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "split_parse_tree_src.m"
    }
#line 554 "split_parse_tree_src.m"
    {
#line 554 "split_parse_tree_src.m"
      MR_Word base;
#line 554 "split_parse_tree_src.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "split_parse_tree_src.m"
      *parse_tree__split_parse_tree_src__Spec_8 = base;
#line 554 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 554 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_36_36));
#line 554 "split_parse_tree_src.m"
    }
#line 549 "split_parse_tree_src.m"
  }
#line 545 "split_parse_tree_src.m"
}

#line 494 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_8,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Section_9,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
#line 494 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SplitNested_11,
#line 494 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__Spec_12)
#line 494 "split_parse_tree_src.m"
{
#line 501 "split_parse_tree_src.m"
  {
#line 501 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 501 "split_parse_tree_src.m"
#line 501 "split_parse_tree_src.m"
    switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11)) {
#line 501 "split_parse_tree_src.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 501 "split_parse_tree_src.m"
      case (MR_Integer) 0:
#line 549 "split_parse_tree_src.m"
        {
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__Pieces_34;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__Msg_35;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_38_38;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_39_39;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_40_40;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_43_43;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_45_45;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_48_48;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_49_49;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_56_56;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_57_57;
#line 549 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_61_61;

#line 550 "split_parse_tree_src.m"
          {
#line 550 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_39_39, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_10));
#line 550 "split_parse_tree_src.m"
          }
#line 551 "split_parse_tree_src.m"
          {
#line 551 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 551 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_49_49, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
#line 551 "split_parse_tree_src.m"
          }
#line 551 "split_parse_tree_src.m"
          {
#line 551 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_48_48, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_49_49));
#line 551 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[42])));
#line 551 "split_parse_tree_src.m"
          }
#line 551 "split_parse_tree_src.m"
          {
#line 551 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
#line 551 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_45_45, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_48_48));
#line 551 "split_parse_tree_src.m"
          }
#line 550 "split_parse_tree_src.m"
          {
#line 550 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_45_45));
#line 550 "split_parse_tree_src.m"
          }
#line 550 "split_parse_tree_src.m"
          {
#line 550 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_43_43));
#line 550 "split_parse_tree_src.m"
          }
#line 550 "split_parse_tree_src.m"
          {
#line 550 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_39_39));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_40_40));
#line 550 "split_parse_tree_src.m"
          }
#line 550 "split_parse_tree_src.m"
          {
#line 550 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 550 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_38_38));
#line 550 "split_parse_tree_src.m"
          }
#line 553 "split_parse_tree_src.m"
          {
#line 553 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 553 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_57_57, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_34));
#line 553 "split_parse_tree_src.m"
          }
#line 553 "split_parse_tree_src.m"
          {
#line 553 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_57_57));
#line 553 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "split_parse_tree_src.m"
          }
#line 553 "split_parse_tree_src.m"
          {
#line 553 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_35, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
#line 553 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_35, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_56_56));
#line 553 "split_parse_tree_src.m"
          }
#line 554 "split_parse_tree_src.m"
          {
#line 554 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_35));
#line 554 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "split_parse_tree_src.m"
          }
#line 554 "split_parse_tree_src.m"
          {
#line 554 "split_parse_tree_src.m"
            MR_Word base;
#line 554 "split_parse_tree_src.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__Spec_12 = base;
#line 554 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 554 "split_parse_tree_src.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_61_61));
#line 554 "split_parse_tree_src.m"
          }
#line 549 "split_parse_tree_src.m"
        }
#line 501 "split_parse_tree_src.m"
        break;
#line 501 "split_parse_tree_src.m"
      case (MR_Integer) 1:
#line 506 "split_parse_tree_src.m"
        {
#line 506 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__IntContext_14 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11), (MR_Integer) 1);
#line 506 "split_parse_tree_src.m"
          MR_String parse_tree__split_parse_tree_src__SectionWord_15;
#line 506 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__OldContext_16;

#line 511 "split_parse_tree_src.m"
#line 511 "split_parse_tree_src.m"
          switch (parse_tree__split_parse_tree_src__Section_9) {
#line 511 "split_parse_tree_src.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 511 "split_parse_tree_src.m"
            case (MR_Integer) 1:
#line 512 "split_parse_tree_src.m"
              {
#line 513 "split_parse_tree_src.m"
                {
#line 513 "split_parse_tree_src.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate int without duplication");
#line 513 "split_parse_tree_src.m"
                  return;
                }
#line 512 "split_parse_tree_src.m"
              }
#line 511 "split_parse_tree_src.m"
              break;
#line 511 "split_parse_tree_src.m"
            case (MR_Integer) 0:
#line 508 "split_parse_tree_src.m"
              {
#line 509 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__SectionWord_15 = (MR_String) "interface";
#line 510 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldContext_16 = parse_tree__split_parse_tree_src__IntContext_14;
#line 508 "split_parse_tree_src.m"
              }
#line 511 "split_parse_tree_src.m"
              break;
#line 511 "split_parse_tree_src.m"
          }
#line 515 "split_parse_tree_src.m"
          {
#line 515 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_15, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_16, parse_tree__split_parse_tree_src__Spec_12);
#line 515 "split_parse_tree_src.m"
            return;
          }
#line 506 "split_parse_tree_src.m"
        }
#line 501 "split_parse_tree_src.m"
        break;
#line 501 "split_parse_tree_src.m"
      case (MR_Integer) 2:
#line 518 "split_parse_tree_src.m"
        {
#line 518 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__ImpContext_17 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11), (MR_Integer) 2);
#line 518 "split_parse_tree_src.m"
          MR_String parse_tree__split_parse_tree_src__SectionWord_24;
#line 518 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__OldContext_25;

#line 522 "split_parse_tree_src.m"
#line 522 "split_parse_tree_src.m"
          switch (parse_tree__split_parse_tree_src__Section_9) {
#line 522 "split_parse_tree_src.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 522 "split_parse_tree_src.m"
            case (MR_Integer) 1:
#line 523 "split_parse_tree_src.m"
              {
#line 524 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__SectionWord_24 = (MR_String) "implementation";
#line 525 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldContext_25 = parse_tree__split_parse_tree_src__ImpContext_17;
#line 523 "split_parse_tree_src.m"
              }
#line 522 "split_parse_tree_src.m"
              break;
#line 522 "split_parse_tree_src.m"
            case (MR_Integer) 0:
#line 520 "split_parse_tree_src.m"
              {
#line 521 "split_parse_tree_src.m"
                {
#line 521 "split_parse_tree_src.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate imp without duplication");
#line 521 "split_parse_tree_src.m"
                  return;
                }
#line 520 "split_parse_tree_src.m"
              }
#line 522 "split_parse_tree_src.m"
              break;
#line 522 "split_parse_tree_src.m"
          }
#line 527 "split_parse_tree_src.m"
          {
#line 527 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_24, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_25, parse_tree__split_parse_tree_src__Spec_12);
#line 527 "split_parse_tree_src.m"
            return;
          }
#line 518 "split_parse_tree_src.m"
        }
#line 501 "split_parse_tree_src.m"
        break;
#line 501 "split_parse_tree_src.m"
      case (MR_Integer) 3:
#line 530 "split_parse_tree_src.m"
        {
#line 530 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__IntContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 0)));
#line 530 "split_parse_tree_src.m"
          MR_String parse_tree__split_parse_tree_src__SectionWord_27;
#line 530 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__OldContext_28;
#line 530 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__ImpContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 1)));

#line 535 "split_parse_tree_src.m"
#line 535 "split_parse_tree_src.m"
          switch (parse_tree__split_parse_tree_src__Section_9) {
#line 535 "split_parse_tree_src.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 535 "split_parse_tree_src.m"
            case (MR_Integer) 1:
#line 536 "split_parse_tree_src.m"
              {
#line 537 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__SectionWord_27 = (MR_String) "implementation";
#line 538 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldContext_28 = parse_tree__split_parse_tree_src__ImpContext_29;
#line 536 "split_parse_tree_src.m"
              }
#line 535 "split_parse_tree_src.m"
              break;
#line 535 "split_parse_tree_src.m"
            case (MR_Integer) 0:
#line 532 "split_parse_tree_src.m"
              {
#line 533 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__SectionWord_27 = (MR_String) "interface";
#line 534 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldContext_28 = parse_tree__split_parse_tree_src__IntContext_26;
#line 532 "split_parse_tree_src.m"
              }
#line 535 "split_parse_tree_src.m"
              break;
#line 535 "split_parse_tree_src.m"
          }
#line 540 "split_parse_tree_src.m"
          {
#line 540 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_27, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_28, parse_tree__split_parse_tree_src__Spec_12);
#line 540 "split_parse_tree_src.m"
            return;
          }
#line 530 "split_parse_tree_src.m"
        }
#line 501 "split_parse_tree_src.m"
        break;
#line 501 "split_parse_tree_src.m"
    }
#line 501 "split_parse_tree_src.m"
  }
#line 494 "split_parse_tree_src.m"
}

#line 429 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_8,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_9,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__DupSection_10,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_11,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__OldEntry_12,
#line 429 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25,
#line 429 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26)
#line 429 "split_parse_tree_src.m"
{
#line 434 "split_parse_tree_src.m"
  {
#line 434 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 434 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Spec_19;

#line 448 "split_parse_tree_src.m"
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_12)) == (MR_mktag((MR_Integer) 0))))
#line 436 "split_parse_tree_src.m"
      {
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OldContext_14 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_12), (MR_Integer) 0);
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Pieces_15;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__Msg_17;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OldMsg_18;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_72_72;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_73_73;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_74_74;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_77_77;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_79_79;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_82_82;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_83_83;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_104_104;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_105_105;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_112_112;
#line 436 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_113_113;

#line 437 "split_parse_tree_src.m"
        {
#line 437 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 437 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_73_73, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_11));
#line 437 "split_parse_tree_src.m"
        }
#line 439 "split_parse_tree_src.m"
        {
#line 439 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 439 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_8));
#line 439 "split_parse_tree_src.m"
        }
#line 439 "split_parse_tree_src.m"
        {
#line 439 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_83_83));
#line 439 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[30])));
#line 439 "split_parse_tree_src.m"
        }
#line 439 "split_parse_tree_src.m"
        {
#line 439 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[84])));
#line 439 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_82_82));
#line 439 "split_parse_tree_src.m"
        }
#line 438 "split_parse_tree_src.m"
        {
#line 438 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 438 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_77_77, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_79_79));
#line 438 "split_parse_tree_src.m"
        }
#line 438 "split_parse_tree_src.m"
        {
#line 438 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 438 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_77_77));
#line 438 "split_parse_tree_src.m"
        }
#line 437 "split_parse_tree_src.m"
        {
#line 437 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_72_72, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_73_73));
#line 437 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_72_72, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_74_74));
#line 437 "split_parse_tree_src.m"
        }
#line 437 "split_parse_tree_src.m"
        {
#line 437 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 437 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_72_72));
#line 437 "split_parse_tree_src.m"
        }
#line 444 "split_parse_tree_src.m"
        {
#line 444 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 444 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_105_105, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_15));
#line 444 "split_parse_tree_src.m"
        }
#line 444 "split_parse_tree_src.m"
        {
#line 444 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_104_104, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_105_105));
#line 444 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "split_parse_tree_src.m"
        }
#line 444 "split_parse_tree_src.m"
        {
#line 444 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_17, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
#line 444 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_17, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_104_104));
#line 444 "split_parse_tree_src.m"
        }
#line 445 "split_parse_tree_src.m"
        {
#line 445 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__OldMsg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_18, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_14));
#line 445 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[85])));
#line 445 "split_parse_tree_src.m"
        }
#line 447 "split_parse_tree_src.m"
        {
#line 447 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_113_113, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_18));
#line 447 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "split_parse_tree_src.m"
        }
#line 447 "split_parse_tree_src.m"
        {
#line 447 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_112_112, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_17));
#line 447 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_112_112, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_113_113));
#line 447 "split_parse_tree_src.m"
        }
#line 446 "split_parse_tree_src.m"
        {
#line 446 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 446 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 446 "split_parse_tree_src.m"
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_112_112));
#line 446 "split_parse_tree_src.m"
        }
#line 436 "split_parse_tree_src.m"
      }
#line 448 "split_parse_tree_src.m"
    else
#line 449 "split_parse_tree_src.m"
      {
#line 449 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SplitNested_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_12, (MR_Integer) 0)));
#line 449 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_12, (MR_Integer) 1)));

#line 463 "split_parse_tree_src.m"
#line 463 "split_parse_tree_src.m"
        switch (parse_tree__split_parse_tree_src__DupSection_10) {
#line 463 "split_parse_tree_src.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 463 "split_parse_tree_src.m"
          case (MR_Integer) 0:
#line 451 "split_parse_tree_src.m"
            {
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_33_33;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_34_34;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_35_35;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_38_38;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_40_40;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_43_43;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_44_44;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_59_59;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_60_60;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_67_67;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_68_68;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__OldContext_116;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Pieces_117;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Msg_119;
#line 451 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__OldMsg_120;

#line 452 "split_parse_tree_src.m"
              {
#line 452 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldContext_116 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__SplitNested_20);
              }
#line 453 "split_parse_tree_src.m"
              {
#line 453 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 453 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_11));
#line 453 "split_parse_tree_src.m"
              }
#line 456 "split_parse_tree_src.m"
              {
#line 456 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 456 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_44_44, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_8));
#line 456 "split_parse_tree_src.m"
              }
#line 456 "split_parse_tree_src.m"
              {
#line 456 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_44_44));
#line 456 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[38])));
#line 456 "split_parse_tree_src.m"
              }
#line 455 "split_parse_tree_src.m"
              {
#line 455 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[86])));
#line 455 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_43_43));
#line 455 "split_parse_tree_src.m"
              }
#line 454 "split_parse_tree_src.m"
              {
#line 454 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 454 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_40_40));
#line 454 "split_parse_tree_src.m"
              }
#line 454 "split_parse_tree_src.m"
              {
#line 454 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
#line 454 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_35_35, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_38_38));
#line 454 "split_parse_tree_src.m"
              }
#line 453 "split_parse_tree_src.m"
              {
#line 453 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
#line 453 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_35_35));
#line 453 "split_parse_tree_src.m"
              }
#line 453 "split_parse_tree_src.m"
              {
#line 453 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__Pieces_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
#line 453 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_117, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
#line 453 "split_parse_tree_src.m"
              }
#line 459 "split_parse_tree_src.m"
              {
#line 459 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 459 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_60_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_117));
#line 459 "split_parse_tree_src.m"
              }
#line 459 "split_parse_tree_src.m"
              {
#line 459 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_60_60));
#line 459 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "split_parse_tree_src.m"
              }
#line 459 "split_parse_tree_src.m"
              {
#line 459 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__Msg_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_119, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
#line 459 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_119, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_59_59));
#line 459 "split_parse_tree_src.m"
              }
#line 460 "split_parse_tree_src.m"
              {
#line 460 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldMsg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_120, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_116));
#line 460 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[87])));
#line 460 "split_parse_tree_src.m"
              }
#line 462 "split_parse_tree_src.m"
              {
#line 462 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_68_68, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_120));
#line 462 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "split_parse_tree_src.m"
              }
#line 462 "split_parse_tree_src.m"
              {
#line 462 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_119));
#line 462 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_68_68));
#line 462 "split_parse_tree_src.m"
              }
#line 461 "split_parse_tree_src.m"
              {
#line 461 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 461 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 461 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_67_67));
#line 461 "split_parse_tree_src.m"
              }
#line 451 "split_parse_tree_src.m"
            }
#line 463 "split_parse_tree_src.m"
            break;
#line 463 "split_parse_tree_src.m"
          case (MR_Integer) 2:
#line 468 "split_parse_tree_src.m"
            {
#line 469 "split_parse_tree_src.m"
              {
#line 469 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
              }
#line 468 "split_parse_tree_src.m"
            }
#line 463 "split_parse_tree_src.m"
            break;
#line 463 "split_parse_tree_src.m"
          case (MR_Integer) 3:
#line 477 "split_parse_tree_src.m"
#line 477 "split_parse_tree_src.m"
            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_20)) {
#line 477 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 477 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 475 "split_parse_tree_src.m"
                {
#line 475 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, parse_tree__split_parse_tree_src__ParentModuleName_11, &parse_tree__split_parse_tree_src__Spec_19);
                }
#line 477 "split_parse_tree_src.m"
                break;
#line 477 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 478 "split_parse_tree_src.m"
                {
#line 479 "split_parse_tree_src.m"
                  {
#line 479 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
                  }
#line 478 "split_parse_tree_src.m"
                }
#line 477 "split_parse_tree_src.m"
                break;
#line 477 "split_parse_tree_src.m"
              case (MR_Integer) 2:
#line 482 "split_parse_tree_src.m"
                {
#line 483 "split_parse_tree_src.m"
                  {
#line 483 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
                  }
#line 482 "split_parse_tree_src.m"
                }
#line 477 "split_parse_tree_src.m"
                break;
#line 477 "split_parse_tree_src.m"
              case (MR_Integer) 3:
#line 486 "split_parse_tree_src.m"
                {
#line 486 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__IntContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 0)));
#line 486 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__ImpContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 1)));

#line 487 "split_parse_tree_src.m"
                  {
#line 487 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__IntContext_23, parse_tree__split_parse_tree_src__ImpContext_24, &parse_tree__split_parse_tree_src__Spec_19);
                  }
#line 486 "split_parse_tree_src.m"
                }
#line 477 "split_parse_tree_src.m"
                break;
#line 477 "split_parse_tree_src.m"
            }
#line 463 "split_parse_tree_src.m"
            break;
#line 463 "split_parse_tree_src.m"
          case (MR_Integer) 1:
#line 464 "split_parse_tree_src.m"
            {
#line 465 "split_parse_tree_src.m"
              {
#line 465 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
              }
#line 464 "split_parse_tree_src.m"
            }
#line 463 "split_parse_tree_src.m"
            break;
#line 463 "split_parse_tree_src.m"
        }
#line 449 "split_parse_tree_src.m"
      }
#line 492 "split_parse_tree_src.m"
    {
#line 492 "split_parse_tree_src.m"
      MR_Word base;
#line 492 "split_parse_tree_src.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "split_parse_tree_src.m"
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26 = base;
#line 492 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_19));
#line 492 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25));
#line 492 "split_parse_tree_src.m"
    }
#line 434 "split_parse_tree_src.m"
  }
#line 429 "split_parse_tree_src.m"
}

#line 413 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__Context_7,
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
#line 413 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13,
#line 413 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14)
#line 413 "split_parse_tree_src.m"
{
#line 416 "split_parse_tree_src.m"
  {
#line 416 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Pieces_10;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Msg_11;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Spec_12;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_17_17;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_18_18;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_19_19;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_22_22;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_25_25;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_26_26;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_33_33;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_34_34;
#line 416 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_38_38;

#line 417 "split_parse_tree_src.m"
    {
#line 417 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_18_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6));
#line 417 "split_parse_tree_src.m"
    }
#line 418 "split_parse_tree_src.m"
    {
#line 418 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 418 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_26_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8));
#line 418 "split_parse_tree_src.m"
    }
#line 418 "split_parse_tree_src.m"
    {
#line 418 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_26_26));
#line 418 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[24])));
#line 418 "split_parse_tree_src.m"
    }
#line 418 "split_parse_tree_src.m"
    {
#line 418 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[81])));
#line 418 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_22_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_25_25));
#line 418 "split_parse_tree_src.m"
    }
#line 417 "split_parse_tree_src.m"
    {
#line 417 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[80])));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_22_22));
#line 417 "split_parse_tree_src.m"
    }
#line 417 "split_parse_tree_src.m"
    {
#line 417 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_17_17, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_18_18));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_17_17, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_19_19));
#line 417 "split_parse_tree_src.m"
    }
#line 417 "split_parse_tree_src.m"
    {
#line 417 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[79])));
#line 417 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_10, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_17_17));
#line 417 "split_parse_tree_src.m"
    }
#line 419 "split_parse_tree_src.m"
    {
#line 419 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 419 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_10));
#line 419 "split_parse_tree_src.m"
    }
#line 419 "split_parse_tree_src.m"
    {
#line 419 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
#line 419 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "split_parse_tree_src.m"
    }
#line 419 "split_parse_tree_src.m"
    {
#line 419 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_11, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_7));
#line 419 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_11, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
#line 419 "split_parse_tree_src.m"
    }
#line 420 "split_parse_tree_src.m"
    {
#line 420 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_11));
#line 420 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "split_parse_tree_src.m"
    }
#line 420 "split_parse_tree_src.m"
    {
#line 420 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 420 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 420 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 420 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_38_38));
#line 420 "split_parse_tree_src.m"
    }
#line 421 "split_parse_tree_src.m"
    {
#line 421 "split_parse_tree_src.m"
      MR_Word base;
#line 421 "split_parse_tree_src.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "split_parse_tree_src.m"
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14 = base;
#line 421 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_12));
#line 421 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13));
#line 421 "split_parse_tree_src.m"
    }
#line 416 "split_parse_tree_src.m"
  }
#line 413 "split_parse_tree_src.m"
}

#line 295 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParseTree_9,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_10,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_46,
#line 295 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_48,
#line 295 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_49,
#line 295 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_50,
#line 295 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51)
#line 295 "split_parse_tree_src.m"
{
#line 301 "split_parse_tree_src.m"
  {
#line 301 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TypeInfo_182_182;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 0)));
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 1)));
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__ModuleComponentsCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 2)));
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__ModuleComponents_17;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__ItemBlockCord0_19;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_52_52;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_55_55;
#line 301 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;

#line 304 "split_parse_tree_src.m"
    {
#line 304 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(parse_tree__split_parse_tree_src__ModuleAncestors_10, parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_48, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_52_52);
    }
#line 307 "split_parse_tree_src.m"
    {
#line 307 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__ModuleComponents_17 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__split_parse_tree_src__ModuleComponentsCord_16);
    }
#line 308 "split_parse_tree_src.m"
    {
#line 308 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
#line 308 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleAncestors_10));
#line 308 "split_parse_tree_src.m"
    }
#line 6958 "parse_tree.split_parse_tree_src.c"
    parse_tree__split_parse_tree_src__TypeInfo_182_182 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1];
#line 311 "split_parse_tree_src.m"
    {
#line 311 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_55_55 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182);
    }
#line 309 "split_parse_tree_src.m"
    {
#line 309 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(parse_tree__split_parse_tree_src__ModuleComponents_17, parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_46, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_52_52, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_49, parse_tree__split_parse_tree_src__V_55_55, &parse_tree__split_parse_tree_src__ItemBlockCord0_19, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_50, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56);
    }
#line 339 "split_parse_tree_src.m"
    if ((parse_tree__split_parse_tree_src__ModuleAncestors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "split_parse_tree_src.m"
      {
#line 334 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__OldEntry_20;
#line 314 "split_parse_tree_src.m"
        MR_Box parse_tree__split_parse_tree_src__conv0_OldEntry_20;

#line 314 "split_parse_tree_src.m"
        {
#line 314 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv0_OldEntry_20);
        }
#line 314 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 314 "split_parse_tree_src.m"
          {
#line 314 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__OldEntry_20 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_OldEntry_20);
#line 314 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 314 "split_parse_tree_src.m"
          }
#line 334 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 328 "split_parse_tree_src.m"
          {
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__OldContext_21;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Pieces_22;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__OldPieces_23;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Msg_26;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__OldMsg_27;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Spec_28;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_116_116;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_117_117;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_119_119;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_120_120;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_124_124;
#line 328 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_125_125;

#line 322 "split_parse_tree_src.m"
            if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_20)) == (MR_mktag((MR_Integer) 0))))
#line 316 "split_parse_tree_src.m"
              {
#line 316 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_91_91;
#line 316 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_92_92;

#line 316 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldContext_21 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_20), (MR_Integer) 0);
#line 317 "split_parse_tree_src.m"
                {
#line 317 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 317 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_92_92, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
#line 317 "split_parse_tree_src.m"
                }
#line 317 "split_parse_tree_src.m"
                {
#line 317 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_92_92));
#line 317 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[13])));
#line 317 "split_parse_tree_src.m"
                }
#line 317 "split_parse_tree_src.m"
                {
#line 317 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78])));
#line 317 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_91_91));
#line 317 "split_parse_tree_src.m"
                }
#line 320 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[18]);
#line 316 "split_parse_tree_src.m"
              }
#line 322 "split_parse_tree_src.m"
            else
#line 323 "split_parse_tree_src.m"
              {
#line 323 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__SplitNested_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_20, (MR_Integer) 0)));
#line 323 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_76_76;
#line 323 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_77_77;
#line 323 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_20, (MR_Integer) 1)));

#line 324 "split_parse_tree_src.m"
                {
#line 324 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__OldContext_21 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__SplitNested_24);
                }
#line 325 "split_parse_tree_src.m"
                {
#line 325 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 325 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_77_77, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
#line 325 "split_parse_tree_src.m"
                }
#line 325 "split_parse_tree_src.m"
                {
#line 325 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_77_77));
#line 325 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[20])));
#line 325 "split_parse_tree_src.m"
                }
#line 325 "split_parse_tree_src.m"
                {
#line 325 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78])));
#line 325 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_76_76));
#line 325 "split_parse_tree_src.m"
                }
#line 327 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__OldPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[22]);
#line 323 "split_parse_tree_src.m"
              }
#line 329 "split_parse_tree_src.m"
            {
#line 329 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 329 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_117_117, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_22));
#line 329 "split_parse_tree_src.m"
            }
#line 329 "split_parse_tree_src.m"
            {
#line 329 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_116_116, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_117_117));
#line 329 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "split_parse_tree_src.m"
            }
#line 329 "split_parse_tree_src.m"
            {
#line 329 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_26, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
#line 329 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_116_116));
#line 329 "split_parse_tree_src.m"
            }
#line 330 "split_parse_tree_src.m"
            {
#line 330 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 330 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_120_120, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldPieces_23));
#line 330 "split_parse_tree_src.m"
            }
#line 330 "split_parse_tree_src.m"
            {
#line 330 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_119_119, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_120_120));
#line 330 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "split_parse_tree_src.m"
            }
#line 330 "split_parse_tree_src.m"
            {
#line 330 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__OldMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_27, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_21));
#line 330 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_27, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_119_119));
#line 330 "split_parse_tree_src.m"
            }
#line 332 "split_parse_tree_src.m"
            {
#line 332 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_125_125, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_27));
#line 332 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "split_parse_tree_src.m"
            }
#line 332 "split_parse_tree_src.m"
            {
#line 332 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_124_124, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_26));
#line 332 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_124_124, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_125_125));
#line 332 "split_parse_tree_src.m"
            }
#line 331 "split_parse_tree_src.m"
            {
#line 331 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 331 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_124_124));
#line 331 "split_parse_tree_src.m"
            }
#line 333 "split_parse_tree_src.m"
            {
#line 333 "split_parse_tree_src.m"
              MR_Word base;
#line 333 "split_parse_tree_src.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "split_parse_tree_src.m"
              *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = base;
#line 333 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_28));
#line 333 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56));
#line 333 "split_parse_tree_src.m"
            }
#line 328 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
#line 328 "split_parse_tree_src.m"
          }
#line 334 "split_parse_tree_src.m"
        else
#line 336 "split_parse_tree_src.m"
          {
#line 336 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Entry_29;
#line 336 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_128_128 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__split_parse_tree_src__Context_15);

#line 335 "split_parse_tree_src.m"
            {
#line 335 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__Entry_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_128_128));
#line 335 "split_parse_tree_src.m"
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord0_19));
#line 335 "split_parse_tree_src.m"
            }
#line 337 "split_parse_tree_src.m"
            {
#line 337 "split_parse_tree_src.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_29)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
            }
#line 336 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
#line 336 "split_parse_tree_src.m"
          }
#line 334 "split_parse_tree_src.m"
      }
#line 339 "split_parse_tree_src.m"
    else
#line 341 "split_parse_tree_src.m"
      {
#line 341 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SectionAncestors_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_10, (MR_Integer) 2)));
#line 341 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__ParentModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_32, (MR_Integer) 0)));
#line 341 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__ItemBlocks_35;
#line 341 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SeenInt_36;
#line 341 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SeenImp_37;
#line 341 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__ItemBlockCord_38;
#line 340 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src___SectionKind_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_10, (MR_Integer) 0)));
#line 340 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src___SectionContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_10, (MR_Integer) 1)));
#line 342 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_32, (MR_Integer) 1)));

#line 343 "split_parse_tree_src.m"
        {
#line 343 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__ItemBlocks_35 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__ItemBlockCord0_19);
        }
#line 344 "split_parse_tree_src.m"
        {
#line 344 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(parse_tree__split_parse_tree_src__ItemBlocks_35, (MR_Integer) 0, &parse_tree__split_parse_tree_src__SeenInt_36, (MR_Integer) 0, &parse_tree__split_parse_tree_src__SeenImp_37);
        }
#line 345 "split_parse_tree_src.m"
        {
#line 345 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__ItemBlockCord_38 = mercury__cord__from_list_1_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__ItemBlocks_35);
        }
#line 357 "split_parse_tree_src.m"
#line 357 "split_parse_tree_src.m"
        switch (parse_tree__split_parse_tree_src__SeenInt_36) {
#line 357 "split_parse_tree_src.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 357 "split_parse_tree_src.m"
          case (MR_Integer) 0:
#line 357 "split_parse_tree_src.m"
#line 357 "split_parse_tree_src.m"
            switch (parse_tree__split_parse_tree_src__SeenImp_37) {
#line 357 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 347 "split_parse_tree_src.m"
                {
#line 347 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71;
#line 354 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_130;
#line 351 "split_parse_tree_src.m"
                  MR_Box parse_tree__split_parse_tree_src__conv1_OldEntry_130;

#line 349 "split_parse_tree_src.m"
                  {
#line 349 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71);
                  }
#line 351 "split_parse_tree_src.m"
                  {
#line 351 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv1_OldEntry_130);
                  }
#line 351 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 351 "split_parse_tree_src.m"
                    {
#line 351 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__OldEntry_130 = ((MR_Word) parse_tree__split_parse_tree_src__conv1_OldEntry_130);
#line 351 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 351 "split_parse_tree_src.m"
                    }
#line 354 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 352 "split_parse_tree_src.m"
                    {
#line 352 "split_parse_tree_src.m"
                      {
#line 352 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_130, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                      }
#line 352 "split_parse_tree_src.m"
                    }
#line 354 "split_parse_tree_src.m"
                  else
#line 354 "split_parse_tree_src.m"
                    *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71;
#line 347 "split_parse_tree_src.m"
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
#line 347 "split_parse_tree_src.m"
                }
#line 357 "split_parse_tree_src.m"
                break;
#line 357 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 394 "split_parse_tree_src.m"
                {
#line 394 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_151;
#line 381 "split_parse_tree_src.m"
                  MR_Box parse_tree__split_parse_tree_src__conv2_OldEntry_151;

#line 381 "split_parse_tree_src.m"
                  {
#line 381 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv2_OldEntry_151);
                  }
#line 381 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 381 "split_parse_tree_src.m"
                    {
#line 381 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__OldEntry_151 = ((MR_Word) parse_tree__split_parse_tree_src__conv2_OldEntry_151);
#line 381 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 381 "split_parse_tree_src.m"
                    }
#line 394 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 390 "split_parse_tree_src.m"
                    {
#line 390 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__IntContext_45;
#line 390 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__OldItemBlockCord_145;
#line 383 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__OldSplitNested_140;

#line 383 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_151)) == (MR_mktag((MR_Integer) 1)));
#line 383 "split_parse_tree_src.m"
                      if (parse_tree__split_parse_tree_src__succeeded)
#line 383 "split_parse_tree_src.m"
                        {
#line 383 "split_parse_tree_src.m"
                          parse_tree__split_parse_tree_src__OldSplitNested_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_151, (MR_Integer) 0)));
#line 383 "split_parse_tree_src.m"
                          parse_tree__split_parse_tree_src__OldItemBlockCord_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_151, (MR_Integer) 1)));
#line 384 "split_parse_tree_src.m"
                          parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_140)) == (MR_mktag((MR_Integer) 1)));
#line 384 "split_parse_tree_src.m"
                          if (parse_tree__split_parse_tree_src__succeeded)
#line 384 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__IntContext_45 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_140), (MR_Integer) 1);
#line 383 "split_parse_tree_src.m"
                        }
#line 390 "split_parse_tree_src.m"
                      if (parse_tree__split_parse_tree_src__succeeded)
#line 386 "split_parse_tree_src.m"
                        {
#line 386 "split_parse_tree_src.m"
                          MR_Word parse_tree__split_parse_tree_src__NewSplitNested_141;
#line 386 "split_parse_tree_src.m"
                          MR_Word parse_tree__split_parse_tree_src__NewItemBlockCord_142;
#line 386 "split_parse_tree_src.m"
                          MR_Word parse_tree__split_parse_tree_src__NewEntry_143;

#line 386 "split_parse_tree_src.m"
                          {
#line 386 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__NewSplitNested_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_141, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__IntContext_45));
#line 386 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_141, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
#line 386 "split_parse_tree_src.m"
                          }
#line 387 "split_parse_tree_src.m"
                          {
#line 387 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__NewItemBlockCord_142 = mercury__cord__f_43_43_2_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__OldItemBlockCord_145, parse_tree__split_parse_tree_src__ItemBlockCord_38);
                          }
#line 388 "split_parse_tree_src.m"
                          {
#line 388 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__NewEntry_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_143, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NewSplitNested_141));
#line 388 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_143, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NewItemBlockCord_142));
#line 388 "split_parse_tree_src.m"
                          }
#line 389 "split_parse_tree_src.m"
                          {
#line 389 "split_parse_tree_src.m"
                            mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_143)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                          }
#line 386 "split_parse_tree_src.m"
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
#line 386 "split_parse_tree_src.m"
                        }
#line 390 "split_parse_tree_src.m"
                      else
#line 391 "split_parse_tree_src.m"
                        {
#line 391 "split_parse_tree_src.m"
                          {
#line 391 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 2, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_151, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                          }
#line 391 "split_parse_tree_src.m"
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
#line 391 "split_parse_tree_src.m"
                        }
#line 390 "split_parse_tree_src.m"
                    }
#line 394 "split_parse_tree_src.m"
                  else
#line 395 "split_parse_tree_src.m"
                    {
#line 395 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_149 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__split_parse_tree_src__Context_15);
#line 395 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__Entry_150;

#line 396 "split_parse_tree_src.m"
                      {
#line 396 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__Entry_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_150, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_149));
#line 396 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_150, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
#line 396 "split_parse_tree_src.m"
                      }
#line 397 "split_parse_tree_src.m"
                      {
#line 397 "split_parse_tree_src.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_150)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                      }
#line 395 "split_parse_tree_src.m"
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
#line 395 "split_parse_tree_src.m"
                    }
#line 394 "split_parse_tree_src.m"
                }
#line 357 "split_parse_tree_src.m"
                break;
#line 357 "split_parse_tree_src.m"
            }
#line 357 "split_parse_tree_src.m"
            break;
#line 357 "split_parse_tree_src.m"
          case (MR_Integer) 1:
#line 357 "split_parse_tree_src.m"
#line 357 "split_parse_tree_src.m"
            switch (parse_tree__split_parse_tree_src__SeenImp_37) {
#line 357 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 373 "split_parse_tree_src.m"
                {
#line 373 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_134;
#line 360 "split_parse_tree_src.m"
                  MR_Box parse_tree__split_parse_tree_src__conv3_OldEntry_134;

#line 360 "split_parse_tree_src.m"
                  {
#line 360 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv3_OldEntry_134);
                  }
#line 360 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 360 "split_parse_tree_src.m"
                    {
#line 360 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__OldEntry_134 = ((MR_Word) parse_tree__split_parse_tree_src__conv3_OldEntry_134);
#line 360 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 360 "split_parse_tree_src.m"
                    }
#line 373 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 369 "split_parse_tree_src.m"
                    {
#line 369 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__OldItemBlockCord_40;
#line 369 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__ImpContext_41;
#line 362 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__OldSplitNested_39;

#line 362 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_134)) == (MR_mktag((MR_Integer) 1)));
#line 362 "split_parse_tree_src.m"
                      if (parse_tree__split_parse_tree_src__succeeded)
#line 362 "split_parse_tree_src.m"
                        {
#line 362 "split_parse_tree_src.m"
                          parse_tree__split_parse_tree_src__OldSplitNested_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_134, (MR_Integer) 0)));
#line 362 "split_parse_tree_src.m"
                          parse_tree__split_parse_tree_src__OldItemBlockCord_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_134, (MR_Integer) 1)));
#line 363 "split_parse_tree_src.m"
                          parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_39)) == (MR_mktag((MR_Integer) 2)));
#line 363 "split_parse_tree_src.m"
                          if (parse_tree__split_parse_tree_src__succeeded)
#line 363 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__ImpContext_41 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_39), (MR_Integer) 2);
#line 362 "split_parse_tree_src.m"
                        }
#line 369 "split_parse_tree_src.m"
                      if (parse_tree__split_parse_tree_src__succeeded)
#line 365 "split_parse_tree_src.m"
                        {
#line 365 "split_parse_tree_src.m"
                          MR_Word parse_tree__split_parse_tree_src__NewSplitNested_42;
#line 365 "split_parse_tree_src.m"
                          MR_Word parse_tree__split_parse_tree_src__NewItemBlockCord_43;
#line 365 "split_parse_tree_src.m"
                          MR_Word parse_tree__split_parse_tree_src__NewEntry_44;

#line 365 "split_parse_tree_src.m"
                          {
#line 365 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__NewSplitNested_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
#line 365 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ImpContext_41));
#line 365 "split_parse_tree_src.m"
                          }
#line 366 "split_parse_tree_src.m"
                          {
#line 366 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__NewItemBlockCord_43 = mercury__cord__f_43_43_2_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__ItemBlockCord_38, parse_tree__split_parse_tree_src__OldItemBlockCord_40);
                          }
#line 367 "split_parse_tree_src.m"
                          {
#line 367 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__NewEntry_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_44, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NewSplitNested_42));
#line 367 "split_parse_tree_src.m"
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_44, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NewItemBlockCord_43));
#line 367 "split_parse_tree_src.m"
                          }
#line 368 "split_parse_tree_src.m"
                          {
#line 368 "split_parse_tree_src.m"
                            mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_44)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                          }
#line 365 "split_parse_tree_src.m"
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
#line 365 "split_parse_tree_src.m"
                        }
#line 369 "split_parse_tree_src.m"
                      else
#line 370 "split_parse_tree_src.m"
                        {
#line 370 "split_parse_tree_src.m"
                          {
#line 370 "split_parse_tree_src.m"
                            parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_134, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                          }
#line 370 "split_parse_tree_src.m"
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
#line 370 "split_parse_tree_src.m"
                        }
#line 369 "split_parse_tree_src.m"
                    }
#line 373 "split_parse_tree_src.m"
                  else
#line 374 "split_parse_tree_src.m"
                    {
#line 374 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_132 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__split_parse_tree_src__Context_15);
#line 374 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__Entry_133;

#line 375 "split_parse_tree_src.m"
                      {
#line 375 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__Entry_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_133, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_132));
#line 375 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_133, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
#line 375 "split_parse_tree_src.m"
                      }
#line 376 "split_parse_tree_src.m"
                      {
#line 376 "split_parse_tree_src.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_133)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                      }
#line 374 "split_parse_tree_src.m"
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
#line 374 "split_parse_tree_src.m"
                    }
#line 373 "split_parse_tree_src.m"
                }
#line 357 "split_parse_tree_src.m"
                break;
#line 357 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 405 "split_parse_tree_src.m"
                {
#line 405 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_169;
#line 402 "split_parse_tree_src.m"
                  MR_Box parse_tree__split_parse_tree_src__conv4_OldEntry_169;

#line 402 "split_parse_tree_src.m"
                  {
#line 402 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv4_OldEntry_169);
                  }
#line 402 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 402 "split_parse_tree_src.m"
                    {
#line 402 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__OldEntry_169 = ((MR_Word) parse_tree__split_parse_tree_src__conv4_OldEntry_169);
#line 402 "split_parse_tree_src.m"
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 402 "split_parse_tree_src.m"
                    }
#line 405 "split_parse_tree_src.m"
                  if (parse_tree__split_parse_tree_src__succeeded)
#line 403 "split_parse_tree_src.m"
                    {
#line 403 "split_parse_tree_src.m"
                      {
#line 403 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 3, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_169, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                      }
#line 403 "split_parse_tree_src.m"
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
#line 403 "split_parse_tree_src.m"
                    }
#line 405 "split_parse_tree_src.m"
                  else
#line 406 "split_parse_tree_src.m"
                    {
#line 406 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_167;
#line 406 "split_parse_tree_src.m"
                      MR_Word parse_tree__split_parse_tree_src__Entry_168;

#line 406 "split_parse_tree_src.m"
                      {
#line 406 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__SplitNested_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_167, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
#line 406 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_167, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
#line 406 "split_parse_tree_src.m"
                      }
#line 407 "split_parse_tree_src.m"
                      {
#line 407 "split_parse_tree_src.m"
                        parse_tree__split_parse_tree_src__Entry_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_168, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_167));
#line 407 "split_parse_tree_src.m"
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_168, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
#line 407 "split_parse_tree_src.m"
                      }
#line 408 "split_parse_tree_src.m"
                      {
#line 408 "split_parse_tree_src.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_168)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                      }
#line 406 "split_parse_tree_src.m"
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
#line 406 "split_parse_tree_src.m"
                    }
#line 405 "split_parse_tree_src.m"
                }
#line 357 "split_parse_tree_src.m"
                break;
#line 357 "split_parse_tree_src.m"
            }
#line 357 "split_parse_tree_src.m"
            break;
#line 357 "split_parse_tree_src.m"
        }
#line 341 "split_parse_tree_src.m"
      }
#line 301 "split_parse_tree_src.m"
  }
#line 295 "split_parse_tree_src.m"
}

#line 277 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
#line 277 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 277 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
#line 277 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3)
#line 277 "split_parse_tree_src.m"
{
#line 280 "split_parse_tree_src.m"
  while (MR_TRUE)
#line 280 "split_parse_tree_src.m"
    {
#line 280 "split_parse_tree_src.m"
      /* tailcall optimized into a loop */
#line 280 "split_parse_tree_src.m"
      {
#line 280 "split_parse_tree_src.m"
        MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 280 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
#line 280 "split_parse_tree_src.m"
        else
#line 281 "split_parse_tree_src.m"
          {
#line 281 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15;
#line 288 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__ItemInstance_10;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_14_14;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_17_17;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_18_18;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_19_19;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_20_20;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_21_21;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_22_22;
#line 284 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_23_23;
#line 284 "split_parse_tree_src.m"
            MR_Integer parse_tree__split_parse_tree_src__V_24_24;

#line 283 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = ((((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Item_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 283 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 283 "split_parse_tree_src.m"
              {
#line 283 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__ItemInstance_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Item_7, (MR_Integer) 1)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 0)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 1)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 2)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 3)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 4)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 5)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 6)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 7)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 8)));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
#line 283 "split_parse_tree_src.m"
              }
#line 288 "split_parse_tree_src.m"
            if (parse_tree__split_parse_tree_src__succeeded)
#line 286 "split_parse_tree_src.m"
              {
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__InstanceContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 7)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Msg_38;
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__Spec_39;
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_51_51;
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 0)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 1)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 2)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 3)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 4)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 5)));
#line 286 "split_parse_tree_src.m"
                MR_Word parse_tree__split_parse_tree_src__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 6)));
#line 286 "split_parse_tree_src.m"
                MR_Integer parse_tree__split_parse_tree_src__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 8)));

#line 793 "split_parse_tree_src.m"
                {
#line 793 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__InstanceContext_11));
#line 793 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[77])));
#line 793 "split_parse_tree_src.m"
                }
#line 794 "split_parse_tree_src.m"
                {
#line 794 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_51_51, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_38));
#line 794 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "split_parse_tree_src.m"
                }
#line 794 "split_parse_tree_src.m"
                {
#line 794 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 794 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 794 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_51_51));
#line 794 "split_parse_tree_src.m"
                }
#line 795 "split_parse_tree_src.m"
                {
#line 795 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_39));
#line 795 "split_parse_tree_src.m"
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2));
#line 795 "split_parse_tree_src.m"
                }
#line 286 "split_parse_tree_src.m"
              }
#line 288 "split_parse_tree_src.m"
            else
#line 288 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
#line 291 "split_parse_tree_src.m"
            /* direct tailcall eliminated */
#line 291 "split_parse_tree_src.m"
            {
#line 291 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__Items_8;
#line 291 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15;

#line 291 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2;
#line 291 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
#line 291 "split_parse_tree_src.m"
            }
#line 291 "split_parse_tree_src.m"
            continue;
#line 281 "split_parse_tree_src.m"
          }
#line 280 "split_parse_tree_src.m"
      }
#line 280 "split_parse_tree_src.m"
      break;
#line 280 "split_parse_tree_src.m"
    }
#line 277 "split_parse_tree_src.m"
}

#line 262 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
#line 262 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
#line 262 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
#line 262 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3)
#line 262 "split_parse_tree_src.m"
{
#line 265 "split_parse_tree_src.m"
  while (MR_TRUE)
#line 265 "split_parse_tree_src.m"
    {
#line 265 "split_parse_tree_src.m"
      /* tailcall optimized into a loop */
#line 265 "split_parse_tree_src.m"
      {
#line 265 "split_parse_tree_src.m"
        MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 265 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
#line 265 "split_parse_tree_src.m"
        else
#line 267 "split_parse_tree_src.m"
          {
#line 267 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__RawItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Section_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 0)));
#line 267 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 4)));
#line 267 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17;
#line 268 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 1)));
#line 268 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src___Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 2)));
#line 268 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src___Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 3)));

#line 272 "split_parse_tree_src.m"
#line 272 "split_parse_tree_src.m"
            switch (parse_tree__split_parse_tree_src__Section_10) {
#line 272 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 272 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 273 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
#line 272 "split_parse_tree_src.m"
                break;
#line 272 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 271 "split_parse_tree_src.m"
                {
#line 271 "split_parse_tree_src.m"
                  parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__Items_14, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17);
                }
#line 272 "split_parse_tree_src.m"
                break;
#line 272 "split_parse_tree_src.m"
            }
#line 275 "split_parse_tree_src.m"
            /* direct tailcall eliminated */
#line 275 "split_parse_tree_src.m"
            {
#line 275 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__RawItemBlocks_8;
#line 275 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17;

#line 275 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2;
#line 275 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
#line 275 "split_parse_tree_src.m"
            }
#line 275 "split_parse_tree_src.m"
            continue;
#line 267 "split_parse_tree_src.m"
          }
#line 265 "split_parse_tree_src.m"
      }
#line 265 "split_parse_tree_src.m"
      break;
#line 265 "split_parse_tree_src.m"
    }
#line 262 "split_parse_tree_src.m"
}

#line 252 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1(
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__closure_arg,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_3,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_4,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_5,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_6,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_7,
#line 252 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_8,
#line 252 "split_parse_tree_src.m"
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_9)
#line 252 "split_parse_tree_src.m"
{
#line 252 "split_parse_tree_src.m"
  {
#line 252 "split_parse_tree_src.m"
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;
#line 252 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_29;
#line 252 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_31;
#line 252 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_33;
#line 252 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_35;

#line 252 "split_parse_tree_src.m"
    {
#line 252 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), &parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_29, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_4), &parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_31, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_6), &parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_33, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_8), &parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_35);
    }
#line 252 "split_parse_tree_src.m"
    *parse_tree__split_parse_tree_src__wrapper_arg_3 = ((MR_Box) (parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_29));
#line 252 "split_parse_tree_src.m"
    *parse_tree__split_parse_tree_src__wrapper_arg_5 = ((MR_Box) (parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_31));
#line 252 "split_parse_tree_src.m"
    *parse_tree__split_parse_tree_src__wrapper_arg_7 = ((MR_Box) (parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_33));
#line 252 "split_parse_tree_src.m"
    *parse_tree__split_parse_tree_src__wrapper_arg_9 = ((MR_Box) (parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_35));
#line 252 "split_parse_tree_src.m"
  }
#line 252 "split_parse_tree_src.m"
}

#line 217 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_10,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_28,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33,
#line 217 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34,
#line 217 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35)
#line 217 "split_parse_tree_src.m"
{
#line 224 "split_parse_tree_src.m"
  {
#line 224 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 224 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 224 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Entry_15;
#line 224 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36;
#line 225 "split_parse_tree_src.m"
    MR_Box parse_tree__split_parse_tree_src__conv0_Entry_15;

#line 225 "split_parse_tree_src.m"
    {
#line 225 "split_parse_tree_src.m"
      mercury__map__det_remove_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), &parse_tree__split_parse_tree_src__conv0_Entry_15, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_28, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36);
    }
#line 225 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__Entry_15 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_Entry_15);
#line 229 "split_parse_tree_src.m"
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Entry_15)) == (MR_mktag((MR_Integer) 0))))
#line 227 "split_parse_tree_src.m"
      {
#line 228 "split_parse_tree_src.m"
        {
#line 228 "split_parse_tree_src.m"
          mercury__map__delete_3_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31);
        }
#line 227 "split_parse_tree_src.m"
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36;
#line 227 "split_parse_tree_src.m"
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32;
#line 227 "split_parse_tree_src.m"
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34;
#line 227 "split_parse_tree_src.m"
      }
#line 229 "split_parse_tree_src.m"
    else
#line 230 "split_parse_tree_src.m"
      {
#line 230 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__NestedInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_15, (MR_Integer) 0)));
#line 230 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__RawItemBlockCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_15, (MR_Integer) 1)));
#line 230 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55;
#line 230 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56;
#line 254 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SubModulesCord_26;
#line 254 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_57_57;
#line 250 "split_parse_tree_src.m"
        MR_Box parse_tree__split_parse_tree_src__conv1_SubModulesCord_26;

#line 242 "split_parse_tree_src.m"
#line 242 "split_parse_tree_src.m"
        switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17)) {
#line 242 "split_parse_tree_src.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 242 "split_parse_tree_src.m"
          case (MR_Integer) 0:
#line 235 "split_parse_tree_src.m"
            {
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Context_90 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 0);
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_91;
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__RawCompUnit_92;

#line 236 "split_parse_tree_src.m"
              {
#line 236 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__RawItemBlocks_91 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
              }
#line 237 "split_parse_tree_src.m"
              {
#line 237 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_91, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55);
              }
#line 239 "split_parse_tree_src.m"
              {
#line 239 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__RawCompUnit_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_92, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_92, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_90));
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_92, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_91));
#line 239 "split_parse_tree_src.m"
              }
#line 241 "split_parse_tree_src.m"
              {
#line 241 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_92)));
              }
#line 235 "split_parse_tree_src.m"
            }
#line 242 "split_parse_tree_src.m"
            break;
#line 242 "split_parse_tree_src.m"
          case (MR_Integer) 1:
#line 235 "split_parse_tree_src.m"
            {
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Context_85 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 1);
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_86;
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__RawCompUnit_87;

#line 236 "split_parse_tree_src.m"
              {
#line 236 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__RawItemBlocks_86 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
              }
#line 237 "split_parse_tree_src.m"
              {
#line 237 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_86, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55);
              }
#line 239 "split_parse_tree_src.m"
              {
#line 239 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__RawCompUnit_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_87, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_87, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_85));
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_87, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_86));
#line 239 "split_parse_tree_src.m"
              }
#line 241 "split_parse_tree_src.m"
              {
#line 241 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_87)));
              }
#line 235 "split_parse_tree_src.m"
            }
#line 242 "split_parse_tree_src.m"
            break;
#line 242 "split_parse_tree_src.m"
          case (MR_Integer) 2:
#line 243 "split_parse_tree_src.m"
            {
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Pieces_23;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Msg_24;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Spec_25;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_39_39;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_40_40;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_47_47;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_48_48;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_52_52;
#line 243 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Context_65 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 2);

#line 244 "split_parse_tree_src.m"
              {
#line 244 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 244 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_40_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
#line 244 "split_parse_tree_src.m"
              }
#line 244 "split_parse_tree_src.m"
              {
#line 244 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_39_39, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_40_40));
#line 244 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])));
#line 244 "split_parse_tree_src.m"
              }
#line 244 "split_parse_tree_src.m"
              {
#line 244 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[76])));
#line 244 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_39_39));
#line 244 "split_parse_tree_src.m"
              }
#line 246 "split_parse_tree_src.m"
              {
#line 246 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 246 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_48_48, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_23));
#line 246 "split_parse_tree_src.m"
              }
#line 246 "split_parse_tree_src.m"
              {
#line 246 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_47_47, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_48_48));
#line 246 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "split_parse_tree_src.m"
              }
#line 246 "split_parse_tree_src.m"
              {
#line 246 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_24, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_65));
#line 246 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_47_47));
#line 246 "split_parse_tree_src.m"
              }
#line 247 "split_parse_tree_src.m"
              {
#line 247 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_24));
#line 247 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "split_parse_tree_src.m"
              }
#line 247 "split_parse_tree_src.m"
              {
#line 247 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 247 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 247 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_25, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_52_52));
#line 247 "split_parse_tree_src.m"
              }
#line 248 "split_parse_tree_src.m"
              {
#line 248 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_25));
#line 248 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34));
#line 248 "split_parse_tree_src.m"
              }
#line 243 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32;
#line 243 "split_parse_tree_src.m"
            }
#line 242 "split_parse_tree_src.m"
            break;
#line 242 "split_parse_tree_src.m"
          case (MR_Integer) 3:
#line 235 "split_parse_tree_src.m"
            {
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 0)));
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_21;
#line 235 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__RawCompUnit_22;
#line 234 "split_parse_tree_src.m"
              MR_Word parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 1)));

#line 236 "split_parse_tree_src.m"
              {
#line 236 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__RawItemBlocks_21 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
              }
#line 237 "split_parse_tree_src.m"
              {
#line 237 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_21, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55);
              }
#line 239 "split_parse_tree_src.m"
              {
#line 239 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__RawCompUnit_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_19));
#line 239 "split_parse_tree_src.m"
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_21));
#line 239 "split_parse_tree_src.m"
              }
#line 241 "split_parse_tree_src.m"
              {
#line 241 "split_parse_tree_src.m"
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_22)));
              }
#line 235 "split_parse_tree_src.m"
            }
#line 242 "split_parse_tree_src.m"
            break;
#line 242 "split_parse_tree_src.m"
        }
#line 250 "split_parse_tree_src.m"
        {
#line 250 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__succeeded = mercury__map__remove_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), &parse_tree__split_parse_tree_src__conv1_SubModulesCord_26, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_57_57);
        }
#line 250 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 250 "split_parse_tree_src.m"
          {
#line 250 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__SubModulesCord_26 = ((MR_Word) parse_tree__split_parse_tree_src__conv1_SubModulesCord_26);
#line 250 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 250 "split_parse_tree_src.m"
          }
#line 254 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 251 "split_parse_tree_src.m"
          {
#line 251 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__SubModules_27;
#line 251 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__V_58_58;
#line 252 "split_parse_tree_src.m"
            MR_Box parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_29;
#line 252 "split_parse_tree_src.m"
            MR_Box parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_31;
#line 252 "split_parse_tree_src.m"
            MR_Box parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_33;
#line 252 "split_parse_tree_src.m"
            MR_Box parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_35;

#line 251 "split_parse_tree_src.m"
            {
#line 251 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__V_58_58 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, parse_tree__split_parse_tree_src__SubModulesCord_26);
            }
#line 251 "split_parse_tree_src.m"
            {
#line 251 "split_parse_tree_src.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, parse_tree__split_parse_tree_src__V_58_58, &parse_tree__split_parse_tree_src__SubModules_27);
            }
#line 252 "split_parse_tree_src.m"
            {
#line 252 "split_parse_tree_src.m"
              mercury__list__foldl4_10_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[2], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[3], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[2], parse_tree__split_parse_tree_src__SubModules_27, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36)), &parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_29, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_57_57)), &parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_31, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56)), &parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_33, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55)), &parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_35);
            }
#line 252 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29 = ((MR_Word) parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_29);
#line 252 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31 = ((MR_Word) parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_31);
#line 252 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33 = ((MR_Word) parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_33);
#line 252 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35 = ((MR_Word) parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_35);
#line 251 "split_parse_tree_src.m"
          }
#line 254 "split_parse_tree_src.m"
        else
#line 255 "split_parse_tree_src.m"
          {
#line 255 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55;
#line 255 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56;
#line 255 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30;
#line 255 "split_parse_tree_src.m"
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36;
#line 255 "split_parse_tree_src.m"
          }
#line 230 "split_parse_tree_src.m"
      }
#line 224 "split_parse_tree_src.m"
  }
#line 217 "split_parse_tree_src.m"
}

#line 183 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
#line 183 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_5,
#line 183 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
#line 183 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12,
#line 183 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13)
#line 183 "split_parse_tree_src.m"
{
#line 186 "split_parse_tree_src.m"
  {
#line 186 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 186 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_5, (MR_Integer) 0)));
#line 187 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_5, (MR_Integer) 1)));
#line 193 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__SiblingModules0_10;
#line 189 "split_parse_tree_src.m"
    MR_Box parse_tree__split_parse_tree_src__conv0_SiblingModules0_10;

#line 189 "split_parse_tree_src.m"
    {
#line 189 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), &parse_tree__split_parse_tree_src__conv0_SiblingModules0_10);
    }
#line 189 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 189 "split_parse_tree_src.m"
      {
#line 189 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__SiblingModules0_10 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_SiblingModules0_10);
#line 189 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 189 "split_parse_tree_src.m"
      }
#line 193 "split_parse_tree_src.m"
    if (parse_tree__split_parse_tree_src__succeeded)
#line 191 "split_parse_tree_src.m"
      {
#line 191 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 191 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SiblingModules_11;

#line 191 "split_parse_tree_src.m"
        {
#line 191 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__SiblingModules_11 = mercury__cord__snoc_2_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_19, parse_tree__split_parse_tree_src__SiblingModules0_10, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
        }
#line 192 "split_parse_tree_src.m"
        {
#line 192 "split_parse_tree_src.m"
          mercury__map__det_update_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_19, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_11)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);
#line 192 "split_parse_tree_src.m"
          return;
        }
#line 191 "split_parse_tree_src.m"
      }
#line 193 "split_parse_tree_src.m"
    else
#line 194 "split_parse_tree_src.m"
      {
#line 194 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 194 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SiblingModules_16;

#line 194 "split_parse_tree_src.m"
        {
#line 194 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__SiblingModules_16 = mercury__cord__singleton_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_21, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
        }
#line 195 "split_parse_tree_src.m"
        {
#line 195 "split_parse_tree_src.m"
          mercury__map__det_insert_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_21, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_16)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);
#line 195 "split_parse_tree_src.m"
          return;
        }
#line 194 "split_parse_tree_src.m"
      }
#line 186 "split_parse_tree_src.m"
  }
#line 183 "split_parse_tree_src.m"
}

#line 169 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
#line 169 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_5,
#line 169 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
#line 169 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11,
#line 169 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12)
#line 169 "split_parse_tree_src.m"
{
#line 176 "split_parse_tree_src.m"
  {
#line 176 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;

#line 176 "split_parse_tree_src.m"
    if ((parse_tree__split_parse_tree_src__ModuleAncestors_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "split_parse_tree_src.m"
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11;
#line 176 "split_parse_tree_src.m"
    else
#line 179 "split_parse_tree_src.m"
      {
#line 179 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SectionAncestors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_5, (MR_Integer) 2)));
#line 179 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__ParentModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_10, (MR_Integer) 0)));
#line 178 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src___SectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_5, (MR_Integer) 0)));
#line 178 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src___SectionContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_5, (MR_Integer) 1)));
#line 187 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_10, (MR_Integer) 1)));
#line 193 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__SiblingModules0_21;
#line 189 "split_parse_tree_src.m"
        MR_Box parse_tree__split_parse_tree_src__conv0_SiblingModules0_21;

#line 189 "split_parse_tree_src.m"
        {
#line 189 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), &parse_tree__split_parse_tree_src__conv0_SiblingModules0_21);
        }
#line 189 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 189 "split_parse_tree_src.m"
          {
#line 189 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__SiblingModules0_21 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_SiblingModules0_21);
#line 189 "split_parse_tree_src.m"
            parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
#line 189 "split_parse_tree_src.m"
          }
#line 193 "split_parse_tree_src.m"
        if (parse_tree__split_parse_tree_src__succeeded)
#line 191 "split_parse_tree_src.m"
          {
#line 191 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_19_28 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 191 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__SiblingModules_22;

#line 191 "split_parse_tree_src.m"
            {
#line 191 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__SiblingModules_22 = mercury__cord__snoc_2_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_28, parse_tree__split_parse_tree_src__SiblingModules0_21, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
            }
#line 192 "split_parse_tree_src.m"
            {
#line 192 "split_parse_tree_src.m"
              mercury__map__det_update_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_28, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_22)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);
#line 192 "split_parse_tree_src.m"
              return;
            }
#line 191 "split_parse_tree_src.m"
          }
#line 193 "split_parse_tree_src.m"
        else
#line 194 "split_parse_tree_src.m"
          {
#line 194 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_21_30 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 194 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__SiblingModules_25;

#line 194 "split_parse_tree_src.m"
            {
#line 194 "split_parse_tree_src.m"
              parse_tree__split_parse_tree_src__SiblingModules_25 = mercury__cord__singleton_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_30, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
            }
#line 195 "split_parse_tree_src.m"
            {
#line 195 "split_parse_tree_src.m"
              mercury__map__det_insert_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_30, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_25)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);
#line 195 "split_parse_tree_src.m"
              return;
            }
#line 194 "split_parse_tree_src.m"
          }
#line 179 "split_parse_tree_src.m"
      }
#line 176 "split_parse_tree_src.m"
  }
#line 169 "split_parse_tree_src.m"
}

#line 139 "split_parse_tree_src.m"
static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
#line 139 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_3,
#line 139 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__MaybeProblemAncestor_4)
#line 139 "split_parse_tree_src.m"
{
#line 143 "split_parse_tree_src.m"
  while (MR_TRUE)
#line 143 "split_parse_tree_src.m"
    {
#line 143 "split_parse_tree_src.m"
      /* tailcall optimized into a loop */
#line 143 "split_parse_tree_src.m"
      {
#line 143 "split_parse_tree_src.m"
        MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 143 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_3, (MR_Integer) 1)));
#line 144 "split_parse_tree_src.m"
        MR_Word parse_tree__split_parse_tree_src___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_3, (MR_Integer) 0)));

#line 148 "split_parse_tree_src.m"
        if ((parse_tree__split_parse_tree_src__ModuleAncestors_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "split_parse_tree_src.m"
          *parse_tree__split_parse_tree_src__MaybeProblemAncestor_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "split_parse_tree_src.m"
        else
#line 150 "split_parse_tree_src.m"
          {
#line 150 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__SectionKind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_6, (MR_Integer) 0)));
#line 150 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src__SectionParentAncestors_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_6, (MR_Integer) 2)));
#line 149 "split_parse_tree_src.m"
            MR_Word parse_tree__split_parse_tree_src___SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_6, (MR_Integer) 1)));

#line 155 "split_parse_tree_src.m"
#line 155 "split_parse_tree_src.m"
            switch (parse_tree__split_parse_tree_src__SectionKind_7) {
#line 155 "split_parse_tree_src.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 155 "split_parse_tree_src.m"
              case (MR_Integer) 1:
#line 157 "split_parse_tree_src.m"
                {
#line 157 "split_parse_tree_src.m"
                  /* direct tailcall eliminated */
#line 157 "split_parse_tree_src.m"
                  {
#line 157 "split_parse_tree_src.m"
                    MR_Word parse_tree__split_parse_tree_src__SectionAncestors__tmp_copy_3 = parse_tree__split_parse_tree_src__SectionParentAncestors_9;

#line 157 "split_parse_tree_src.m"
                    parse_tree__split_parse_tree_src__SectionAncestors_3 = parse_tree__split_parse_tree_src__SectionAncestors__tmp_copy_3;
#line 157 "split_parse_tree_src.m"
                  }
#line 157 "split_parse_tree_src.m"
                  continue;
#line 157 "split_parse_tree_src.m"
                }
#line 155 "split_parse_tree_src.m"
                break;
#line 155 "split_parse_tree_src.m"
              case (MR_Integer) 0:
#line 152 "split_parse_tree_src.m"
                {
#line 152 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__ProblemAncestor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionParentAncestors_9, (MR_Integer) 0)));
#line 153 "split_parse_tree_src.m"
                  MR_Word parse_tree__split_parse_tree_src__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionParentAncestors_9, (MR_Integer) 1)));

#line 154 "split_parse_tree_src.m"
                  {
#line 154 "split_parse_tree_src.m"
                    MR_Word base;
#line 154 "split_parse_tree_src.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 154 "split_parse_tree_src.m"
                    *parse_tree__split_parse_tree_src__MaybeProblemAncestor_4 = base;
#line 154 "split_parse_tree_src.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ProblemAncestor_10));
#line 154 "split_parse_tree_src.m"
                  }
#line 152 "split_parse_tree_src.m"
                }
#line 155 "split_parse_tree_src.m"
                break;
#line 155 "split_parse_tree_src.m"
            }
#line 150 "split_parse_tree_src.m"
          }
#line 143 "split_parse_tree_src.m"
      }
#line 143 "split_parse_tree_src.m"
      break;
#line 143 "split_parse_tree_src.m"
    }
#line 139 "split_parse_tree_src.m"
}

#line 103 "split_parse_tree_src.m"
static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
#line 103 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__SplitNested_3)
#line 103 "split_parse_tree_src.m"
{
#line 106 "split_parse_tree_src.m"
  {
#line 106 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 106 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__Context_4;

#line 106 "split_parse_tree_src.m"
#line 106 "split_parse_tree_src.m"
    switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3)) {
#line 106 "split_parse_tree_src.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 106 "split_parse_tree_src.m"
      case (MR_Integer) 0:
#line 106 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__Context_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3), (MR_Integer) 0);
#line 106 "split_parse_tree_src.m"
        break;
#line 106 "split_parse_tree_src.m"
      case (MR_Integer) 1:
#line 107 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__Context_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3), (MR_Integer) 1);
#line 106 "split_parse_tree_src.m"
        break;
#line 106 "split_parse_tree_src.m"
      case (MR_Integer) 2:
#line 108 "split_parse_tree_src.m"
        parse_tree__split_parse_tree_src__Context_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3), (MR_Integer) 2);
#line 106 "split_parse_tree_src.m"
        break;
#line 106 "split_parse_tree_src.m"
      case (MR_Integer) 3:
#line 109 "split_parse_tree_src.m"
        {
#line 109 "split_parse_tree_src.m"
          MR_Word parse_tree__split_parse_tree_src__V_5_5;

#line 109 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 0)));
#line 109 "split_parse_tree_src.m"
          parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 1)));
#line 109 "split_parse_tree_src.m"
        }
#line 106 "split_parse_tree_src.m"
        break;
#line 106 "split_parse_tree_src.m"
    }
#line 106 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__Context_4;
#line 106 "split_parse_tree_src.m"
  }
#line 103 "split_parse_tree_src.m"
}

#line 211 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
#line 211 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__closure_arg)
#line 211 "split_parse_tree_src.m"
{
#line 211 "split_parse_tree_src.m"
  {
#line 211 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 211 "split_parse_tree_src.m"
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;

#line 211 "split_parse_tree_src.m"
    {
#line 211 "split_parse_tree_src.m"
      return parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__211__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 4))));
    }
#line 211 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 211 "split_parse_tree_src.m"
  }
#line 211 "split_parse_tree_src.m"
}

#line 209 "split_parse_tree_src.m"
static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
#line 209 "split_parse_tree_src.m"
  MR_Box parse_tree__split_parse_tree_src__closure_arg)
#line 209 "split_parse_tree_src.m"
{
#line 209 "split_parse_tree_src.m"
  {
#line 209 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 209 "split_parse_tree_src.m"
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;

#line 209 "split_parse_tree_src.m"
    {
#line 209 "split_parse_tree_src.m"
      return parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__209__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 4))));
    }
#line 209 "split_parse_tree_src.m"
    return parse_tree__split_parse_tree_src__succeeded;
#line 209 "split_parse_tree_src.m"
  }
#line 209 "split_parse_tree_src.m"
}

#line 35 "split_parse_tree_src.m"
void MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(
#line 35 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__ParseTreeSrc_5,
#line 35 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__RawCompUnits_6,
#line 35 "split_parse_tree_src.m"
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16,
#line 35 "split_parse_tree_src.m"
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17)
#line 35 "split_parse_tree_src.m"
{
#line 201 "split_parse_tree_src.m"
  {
#line 201 "split_parse_tree_src.m"
    MR_bool parse_tree__split_parse_tree_src__succeeded;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_34_34 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TypeInfo_36_36;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_37_37;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__SplitModuleMap_8;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__SubModulesMap_9;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__TopModuleName_10;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__RawCompUnitCord_15;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_19_19;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_20_20;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_22_22;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_28_28;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_29_29;
#line 201 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_33_33;
#line 204 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_11_11;
#line 204 "split_parse_tree_src.m"
    MR_Word parse_tree__split_parse_tree_src__V_12_12;

#line 203 "split_parse_tree_src.m"
    {
#line 203 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_19_19 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeCtorInfo_35_35);
    }
#line 8989 "parse_tree.split_parse_tree_src.c"
    parse_tree__split_parse_tree_src__TypeInfo_36_36 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0];
#line 203 "split_parse_tree_src.m"
    {
#line 203 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_20_20 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeInfo_36_36);
    }
#line 202 "split_parse_tree_src.m"
    {
#line 202 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__split_parse_tree_src__V_19_19, &parse_tree__split_parse_tree_src__SplitModuleMap_8, parse_tree__split_parse_tree_src__V_20_20, &parse_tree__split_parse_tree_src__SubModulesMap_9, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21);
    }
#line 204 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__TopModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 0)));
#line 204 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 1)));
#line 204 "split_parse_tree_src.m"
    parse_tree__split_parse_tree_src__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 2)));
#line 9007 "parse_tree.split_parse_tree_src.c"
    parse_tree__split_parse_tree_src__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 208 "split_parse_tree_src.m"
    {
#line 208 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_22_22 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_37_37);
    }
#line 205 "split_parse_tree_src.m"
    {
#line 205 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(parse_tree__split_parse_tree_src__TopModuleName_10, parse_tree__split_parse_tree_src__SplitModuleMap_8, &parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13, parse_tree__split_parse_tree_src__SubModulesMap_9, &parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14, parse_tree__split_parse_tree_src__V_22_22, &parse_tree__split_parse_tree_src__RawCompUnitCord_15, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17);
    }
#line 209 "split_parse_tree_src.m"
    {
#line 209 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_28_28 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeCtorInfo_35_35);
    }
#line 209 "split_parse_tree_src.m"
    {
#line 209 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 209 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[0]));
#line 209 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1));
#line 209 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 209 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13));
#line 209 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__V_28_28));
#line 209 "split_parse_tree_src.m"
    }
#line 209 "split_parse_tree_src.m"
    {
#line 209 "split_parse_tree_src.m"
      mercury__require__expect_4_p_0(parse_tree__split_parse_tree_src__V_24_24, (MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSplitModuleMap != map.init");
    }
#line 211 "split_parse_tree_src.m"
    {
#line 211 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_33_33 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeInfo_36_36);
    }
#line 211 "split_parse_tree_src.m"
    {
#line 211 "split_parse_tree_src.m"
      parse_tree__split_parse_tree_src__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 211 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[1]));
#line 211 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2));
#line 211 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 211 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14));
#line 211 "split_parse_tree_src.m"
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
#line 211 "split_parse_tree_src.m"
    }
#line 211 "split_parse_tree_src.m"
    {
#line 211 "split_parse_tree_src.m"
      mercury__require__expect_4_p_0(parse_tree__split_parse_tree_src__V_29_29, (MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSubModulesMap != map.init");
    }
#line 213 "split_parse_tree_src.m"
    {
#line 213 "split_parse_tree_src.m"
      *parse_tree__split_parse_tree_src__RawCompUnits_6 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_37_37, parse_tree__split_parse_tree_src__RawCompUnitCord_15);
    }
#line 201 "split_parse_tree_src.m"
  }
#line 35 "split_parse_tree_src.m"
}

void mercury__parse_tree__split_parse_tree_src__init(void)
{
}

void mercury__parse_tree__split_parse_tree_src__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_duplicated_section_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_to_submodules_map_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_parent_module_context_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_map_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0);
}

void mercury__parse_tree__split_parse_tree_src__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.split_parse_tree_src. */
