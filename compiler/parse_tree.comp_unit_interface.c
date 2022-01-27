/*
** Automatically generated from `comp_unit_interface.m'
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


/* :- module parse_tree.comp_unit_interface. */
/* :- implementation. */

/*
INIT mercury__parse_tree__comp_unit_interface__init
ENDINIT
*/

#include "parse_tree.comp_unit_interface.mih"


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
#include "parse_tree.item_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 100 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

#line 103 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0;

#line 106 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1;

#line 109 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2];

#line 112 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2];

#line 115 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2];

#line 118 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0;

#line 121 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1;

#line 124 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2];

#line 127 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2];

#line 130 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2];

#line 133 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
#line 136 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 138 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2);

#line 141 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
#line 144 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 146 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 148 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3);

#line 151 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
#line 154 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 156 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2);

#line 159 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
#line 162 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 164 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 166 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3);

#line 213 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 213 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 213 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

#line 211 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 211 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 211 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

#line 139 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 139 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 139 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

#line 137 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 137 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 137 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

#line 124 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
#line 124 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3);

#line 124 "comp_unit_interface.m"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2);

#line 391 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 391 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 391 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5);

#line 382 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 382 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 382 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 382 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);

#line 380 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 380 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 380 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 380 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 380 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 375 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 375 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_15,
#line 375 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 375 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11,
#line 375 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12);

#line 261 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
#line 261 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_3);

#line 371 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 371 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 371 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 371 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 371 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 351 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 351 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 351 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1);

#line 343 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 343 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 343 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 343 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 343 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[3][2];

static /* final */ const MR_Integer parse_tree__comp_unit_interface_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[1][3];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__comp_unit_interface_scalar_common_2[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 427 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 435 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

#line 443 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0 = {
  (MR_String) "dont_gather_noifile_items",
  (MR_Integer) 0
};

#line 449 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1 = {
  (MR_String) "gather_noifile_items",
  (MR_Integer) 1
};

#line 455 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 461 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 467 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 473 "parse_tree.comp_unit_interface.c"
const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_gather_noifile_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_gather_noifile_items",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0
};

#line 490 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0 = {
  (MR_String) "dont_include_impl_types",
  (MR_Integer) 0
};

#line 496 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1 = {
  (MR_String) "include_impl_types",
  (MR_Integer) 1
};

#line 502 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 508 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 514 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 520 "parse_tree.comp_unit_interface.c"
const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_include_impl_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_include_impl_types",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0
};

#line 537 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
#line 540 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 542 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 544 "parse_tree.comp_unit_interface.c"
{
#line 546 "parse_tree.comp_unit_interface.c"
  {
#line 548 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 551 "parse_tree.comp_unit_interface.c"
    {
#line 553 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 556 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 558 "parse_tree.comp_unit_interface.c"
  }
#line 560 "parse_tree.comp_unit_interface.c"
}

#line 563 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
#line 566 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 568 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 570 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 572 "parse_tree.comp_unit_interface.c"
{
#line 574 "parse_tree.comp_unit_interface.c"
  {
#line 576 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 579 "parse_tree.comp_unit_interface.c"
    {
#line 581 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 584 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 586 "parse_tree.comp_unit_interface.c"
  }
#line 588 "parse_tree.comp_unit_interface.c"
}

#line 591 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
#line 594 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 596 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 598 "parse_tree.comp_unit_interface.c"
{
#line 600 "parse_tree.comp_unit_interface.c"
  {
#line 602 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 605 "parse_tree.comp_unit_interface.c"
    {
#line 607 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 610 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 612 "parse_tree.comp_unit_interface.c"
  }
#line 614 "parse_tree.comp_unit_interface.c"
}

#line 617 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
#line 620 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 622 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 624 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 626 "parse_tree.comp_unit_interface.c"
{
#line 628 "parse_tree.comp_unit_interface.c"
  {
#line 630 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 633 "parse_tree.comp_unit_interface.c"
    {
#line 635 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 638 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 640 "parse_tree.comp_unit_interface.c"
  }
#line 642 "parse_tree.comp_unit_interface.c"
}

#line 213 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 213 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 213 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 213 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
#line 213 "comp_unit_interface.m"
{
#line 216 "comp_unit_interface.m"
  while (MR_TRUE)
#line 216 "comp_unit_interface.m"
    {
#line 216 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 216 "comp_unit_interface.m"
      {
#line 216 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 216 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "comp_unit_interface.m"
          {
#line 217 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 217 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 216 "comp_unit_interface.m"
          }
#line 216 "comp_unit_interface.m"
        else
#line 219 "comp_unit_interface.m"
          {
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 239 "comp_unit_interface.m"
#line 239 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_3) {
#line 239 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 239 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 240 "comp_unit_interface.m"
                {
#line 254 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__IFileItem_28;
#line 250 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__V_34_34;

#line 245 "comp_unit_interface.m"
                  {
#line 245 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                  }
#line 250 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
#line 250 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 250 "comp_unit_interface.m"
                    {
#line 251 "comp_unit_interface.m"
                      {
#line 251 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__V_34_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
#line 251 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__succeeded = ((MR_tag((MR_Word) parse_tree__comp_unit_interface__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 251 "comp_unit_interface.m"
                      if (parse_tree__comp_unit_interface__succeeded)
#line 251 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileItem_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__V_34_34, (MR_Integer) 0)));
#line 250 "comp_unit_interface.m"
                    }
#line 254 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 253 "comp_unit_interface.m"
                    {
#line 253 "comp_unit_interface.m"
                      {
#line 253 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
#line 253 "comp_unit_interface.m"
                    }
#line 254 "comp_unit_interface.m"
                  else
#line 254 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 240 "comp_unit_interface.m"
                }
#line 239 "comp_unit_interface.m"
                break;
#line 239 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 236 "comp_unit_interface.m"
                {
#line 236 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

#line 222 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 222 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 222 "comp_unit_interface.m"
                    {
#line 222 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
#line 225 "comp_unit_interface.m"
                      {
#line 225 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_41_41;
#line 225 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
#line 225 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

#line 225 "comp_unit_interface.m"
                        {
#line 225 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
#line 226 "comp_unit_interface.m"
                        {
#line 226 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 226 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
#line 226 "comp_unit_interface.m"
                        }
#line 794 "parse_tree.comp_unit_interface.c"
                        parse_tree__comp_unit_interface__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 227 "comp_unit_interface.m"
                        {
#line 227 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_41_41, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
#line 234 "comp_unit_interface.m"
                        {
#line 234 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_41_41, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                        }
#line 225 "comp_unit_interface.m"
                      }
#line 222 "comp_unit_interface.m"
                    }
#line 222 "comp_unit_interface.m"
                  else
#line 237 "comp_unit_interface.m"
                    {
#line 237 "comp_unit_interface.m"
                      {
#line 237 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
#line 237 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 237 "comp_unit_interface.m"
                    }
#line 236 "comp_unit_interface.m"
                }
#line 239 "comp_unit_interface.m"
                break;
#line 239 "comp_unit_interface.m"
            }
#line 258 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 258 "comp_unit_interface.m"
            {
#line 258 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4 = parse_tree__comp_unit_interface__Items_22;
#line 258 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 258 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 258 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7;
#line 258 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5;
#line 258 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4;
#line 258 "comp_unit_interface.m"
            }
#line 258 "comp_unit_interface.m"
            continue;
#line 219 "comp_unit_interface.m"
          }
#line 216 "comp_unit_interface.m"
      }
#line 216 "comp_unit_interface.m"
      break;
#line 216 "comp_unit_interface.m"
    }
#line 213 "comp_unit_interface.m"
}

#line 211 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 211 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 211 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 211 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
#line 211 "comp_unit_interface.m"
{
#line 216 "comp_unit_interface.m"
  while (MR_TRUE)
#line 216 "comp_unit_interface.m"
    {
#line 216 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 216 "comp_unit_interface.m"
      {
#line 216 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 216 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "comp_unit_interface.m"
          {
#line 217 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 217 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 216 "comp_unit_interface.m"
          }
#line 216 "comp_unit_interface.m"
        else
#line 219 "comp_unit_interface.m"
          {
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 219 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 239 "comp_unit_interface.m"
#line 239 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_3) {
#line 239 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 239 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 240 "comp_unit_interface.m"
                {
#line 254 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__IFileItem_28;
#line 250 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__V_34_34;

#line 242 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 250 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
#line 250 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 250 "comp_unit_interface.m"
                    {
#line 251 "comp_unit_interface.m"
                      {
#line 251 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__V_34_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
#line 251 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__succeeded = ((MR_tag((MR_Word) parse_tree__comp_unit_interface__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 251 "comp_unit_interface.m"
                      if (parse_tree__comp_unit_interface__succeeded)
#line 251 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileItem_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__V_34_34, (MR_Integer) 0)));
#line 250 "comp_unit_interface.m"
                    }
#line 254 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 253 "comp_unit_interface.m"
                    {
#line 253 "comp_unit_interface.m"
                      {
#line 253 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
#line 253 "comp_unit_interface.m"
                    }
#line 254 "comp_unit_interface.m"
                  else
#line 254 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 240 "comp_unit_interface.m"
                }
#line 239 "comp_unit_interface.m"
                break;
#line 239 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 236 "comp_unit_interface.m"
                {
#line 236 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

#line 222 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 222 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 222 "comp_unit_interface.m"
                    {
#line 222 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
#line 225 "comp_unit_interface.m"
                      {
#line 225 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
#line 225 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

#line 225 "comp_unit_interface.m"
                        {
#line 225 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
#line 226 "comp_unit_interface.m"
                        {
#line 226 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 226 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
#line 226 "comp_unit_interface.m"
                        }
#line 227 "comp_unit_interface.m"
                        {
#line 227 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
#line 231 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 225 "comp_unit_interface.m"
                      }
#line 222 "comp_unit_interface.m"
                    }
#line 222 "comp_unit_interface.m"
                  else
#line 237 "comp_unit_interface.m"
                    {
#line 237 "comp_unit_interface.m"
                      {
#line 237 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
#line 237 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 237 "comp_unit_interface.m"
                    }
#line 236 "comp_unit_interface.m"
                }
#line 239 "comp_unit_interface.m"
                break;
#line 239 "comp_unit_interface.m"
            }
#line 258 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 258 "comp_unit_interface.m"
            {
#line 258 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4 = parse_tree__comp_unit_interface__Items_22;
#line 258 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 258 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 258 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7;
#line 258 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5;
#line 258 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4;
#line 258 "comp_unit_interface.m"
            }
#line 258 "comp_unit_interface.m"
            continue;
#line 219 "comp_unit_interface.m"
          }
#line 216 "comp_unit_interface.m"
      }
#line 216 "comp_unit_interface.m"
      break;
#line 216 "comp_unit_interface.m"
    }
#line 211 "comp_unit_interface.m"
}

#line 139 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 139 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 139 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 139 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
#line 139 "comp_unit_interface.m"
{
#line 142 "comp_unit_interface.m"
  while (MR_TRUE)
#line 142 "comp_unit_interface.m"
    {
#line 142 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 142 "comp_unit_interface.m"
      {
#line 142 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 142 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "comp_unit_interface.m"
          {
#line 143 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 143 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 142 "comp_unit_interface.m"
          }
#line 142 "comp_unit_interface.m"
        else
#line 146 "comp_unit_interface.m"
          {
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_47_47;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 3)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 4)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileIncls_27;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileAvails_28;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileIncls_29;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileAvails_30;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_31;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_32;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItems_33;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_34;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_41_41;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_42_42;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 154 "comp_unit_interface.m"
#line 154 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_22) {
#line 154 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 154 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 155 "comp_unit_interface.m"
                {
#line 160 "comp_unit_interface.m"
#line 160 "comp_unit_interface.m"
                  switch (parse_tree__comp_unit_interface__IncludeImplTypes_1) {
#line 160 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 160 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 157 "comp_unit_interface.m"
                      {
#line 158 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 159 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 157 "comp_unit_interface.m"
                      }
#line 160 "comp_unit_interface.m"
                      break;
#line 160 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 161 "comp_unit_interface.m"
                      {
#line 162 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 163 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 161 "comp_unit_interface.m"
                      }
#line 160 "comp_unit_interface.m"
                      break;
#line 160 "comp_unit_interface.m"
                  }
#line 171 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = parse_tree__comp_unit_interface__Incls_24;
#line 172 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = parse_tree__comp_unit_interface__Avails_25;
#line 155 "comp_unit_interface.m"
                }
#line 154 "comp_unit_interface.m"
                break;
#line 154 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 149 "comp_unit_interface.m"
                {
#line 150 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 151 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 152 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 153 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 149 "comp_unit_interface.m"
                }
#line 154 "comp_unit_interface.m"
                break;
#line 154 "comp_unit_interface.m"
            }
#line 1216 "parse_tree.comp_unit_interface.c"
            parse_tree__comp_unit_interface__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 177 "comp_unit_interface.m"
            {
#line 177 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_41_41 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 177 "comp_unit_interface.m"
            {
#line 177 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_42_42 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 175 "comp_unit_interface.m"
            {
#line 175 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_26, parse_tree__comp_unit_interface__V_41_41, &parse_tree__comp_unit_interface__IFileItemsCord_31, parse_tree__comp_unit_interface__V_42_42, &parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 178 "comp_unit_interface.m"
            {
#line 178 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__IFileItems_33 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__IFileItemsCord_31);
            }
#line 179 "comp_unit_interface.m"
            {
#line 179 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__NoIFileItems_34 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 181 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileIncls_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 181 "comp_unit_interface.m"
              {
#line 182 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileAvails_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "comp_unit_interface.m"
                if (parse_tree__comp_unit_interface__succeeded)
#line 183 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileItems_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "comp_unit_interface.m"
              }
#line 186 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 186 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 186 "comp_unit_interface.m"
            else
#line 188 "comp_unit_interface.m"
              {
#line 188 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_35;

#line 187 "comp_unit_interface.m"
                {
#line 187 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileIncls_27));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 3) = ((MR_Box) (parse_tree__comp_unit_interface__IFileAvails_28));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 4) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_33));
#line 187 "comp_unit_interface.m"
                }
#line 189 "comp_unit_interface.m"
                {
#line 189 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_35)));
                }
#line 188 "comp_unit_interface.m"
              }
#line 193 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileIncls_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 193 "comp_unit_interface.m"
              {
#line 194 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileAvails_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "comp_unit_interface.m"
                if (parse_tree__comp_unit_interface__succeeded)
#line 195 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileItems_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "comp_unit_interface.m"
              }
#line 198 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 198 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 198 "comp_unit_interface.m"
            else
#line 200 "comp_unit_interface.m"
              {
#line 200 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_36;

#line 199 "comp_unit_interface.m"
                {
#line 199 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileIncls_29));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 3) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileAvails_30));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 4) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_34));
#line 199 "comp_unit_interface.m"
                }
#line 201 "comp_unit_interface.m"
                {
#line 201 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_36)));
                }
#line 200 "comp_unit_interface.m"
              }
#line 204 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 204 "comp_unit_interface.m"
            {
#line 204 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
#line 204 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 204 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 204 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6;
#line 204 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4;
#line 204 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3;
#line 204 "comp_unit_interface.m"
            }
#line 204 "comp_unit_interface.m"
            continue;
#line 146 "comp_unit_interface.m"
          }
#line 142 "comp_unit_interface.m"
      }
#line 142 "comp_unit_interface.m"
      break;
#line 142 "comp_unit_interface.m"
    }
#line 139 "comp_unit_interface.m"
}

#line 137 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 137 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 137 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 137 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
#line 137 "comp_unit_interface.m"
{
#line 142 "comp_unit_interface.m"
  while (MR_TRUE)
#line 142 "comp_unit_interface.m"
    {
#line 142 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 142 "comp_unit_interface.m"
      {
#line 142 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 142 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "comp_unit_interface.m"
          {
#line 143 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 143 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 142 "comp_unit_interface.m"
          }
#line 142 "comp_unit_interface.m"
        else
#line 146 "comp_unit_interface.m"
          {
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_47_47;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 3)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 4)));
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileIncls_27;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileAvails_28;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileIncls_29;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileAvails_30;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_31;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_32;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItems_33;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_34;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_41_41;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_42_42;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 146 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 154 "comp_unit_interface.m"
#line 154 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_22) {
#line 154 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 154 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 155 "comp_unit_interface.m"
                {
#line 160 "comp_unit_interface.m"
#line 160 "comp_unit_interface.m"
                  switch (parse_tree__comp_unit_interface__IncludeImplTypes_1) {
#line 160 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 160 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 157 "comp_unit_interface.m"
                      {
#line 158 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 159 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 157 "comp_unit_interface.m"
                      }
#line 160 "comp_unit_interface.m"
                      break;
#line 160 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 161 "comp_unit_interface.m"
                      {
#line 162 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 163 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 161 "comp_unit_interface.m"
                      }
#line 160 "comp_unit_interface.m"
                      break;
#line 160 "comp_unit_interface.m"
                  }
#line 167 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 155 "comp_unit_interface.m"
                }
#line 154 "comp_unit_interface.m"
                break;
#line 154 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 149 "comp_unit_interface.m"
                {
#line 150 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 151 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 152 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 153 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 149 "comp_unit_interface.m"
                }
#line 154 "comp_unit_interface.m"
                break;
#line 154 "comp_unit_interface.m"
            }
#line 1520 "parse_tree.comp_unit_interface.c"
            parse_tree__comp_unit_interface__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 177 "comp_unit_interface.m"
            {
#line 177 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_41_41 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 177 "comp_unit_interface.m"
            {
#line 177 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_42_42 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 175 "comp_unit_interface.m"
            {
#line 175 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_26, parse_tree__comp_unit_interface__V_41_41, &parse_tree__comp_unit_interface__IFileItemsCord_31, parse_tree__comp_unit_interface__V_42_42, &parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 178 "comp_unit_interface.m"
            {
#line 178 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__IFileItems_33 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__IFileItemsCord_31);
            }
#line 179 "comp_unit_interface.m"
            {
#line 179 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__NoIFileItems_34 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 181 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileIncls_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 181 "comp_unit_interface.m"
              {
#line 182 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileAvails_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "comp_unit_interface.m"
                if (parse_tree__comp_unit_interface__succeeded)
#line 183 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileItems_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "comp_unit_interface.m"
              }
#line 186 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 186 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 186 "comp_unit_interface.m"
            else
#line 188 "comp_unit_interface.m"
              {
#line 188 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_35;

#line 187 "comp_unit_interface.m"
                {
#line 187 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileIncls_27));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 3) = ((MR_Box) (parse_tree__comp_unit_interface__IFileAvails_28));
#line 187 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 4) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_33));
#line 187 "comp_unit_interface.m"
                }
#line 189 "comp_unit_interface.m"
                {
#line 189 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_35)));
                }
#line 188 "comp_unit_interface.m"
              }
#line 195 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileItems_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 198 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 198 "comp_unit_interface.m"
            else
#line 200 "comp_unit_interface.m"
              {
#line 200 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_36;

#line 199 "comp_unit_interface.m"
                {
#line 199 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileIncls_29));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 3) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileAvails_30));
#line 199 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 4) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_34));
#line 199 "comp_unit_interface.m"
                }
#line 201 "comp_unit_interface.m"
                {
#line 201 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_36)));
                }
#line 200 "comp_unit_interface.m"
              }
#line 204 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 204 "comp_unit_interface.m"
            {
#line 204 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
#line 204 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 204 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 204 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6;
#line 204 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4;
#line 204 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3;
#line 204 "comp_unit_interface.m"
            }
#line 204 "comp_unit_interface.m"
            continue;
#line 146 "comp_unit_interface.m"
          }
#line 142 "comp_unit_interface.m"
      }
#line 142 "comp_unit_interface.m"
      break;
#line 142 "comp_unit_interface.m"
    }
#line 137 "comp_unit_interface.m"
}

#line 29 "comp_unit_interface.m"
void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(
#line 29 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 29 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 29 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3)
#line 29 "comp_unit_interface.m"
{
#line 29 "comp_unit_interface.m"
  {
#line 29 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 29 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar1_4 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__2_2;
#line 29 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar2_5 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__3_3;

#line 29 "comp_unit_interface.m"
    {
#line 29 "comp_unit_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__comp_unit_interface__HeadVar__1_1, parse_tree__comp_unit_interface__Cast_HeadVar1_4, parse_tree__comp_unit_interface__Cast_HeadVar2_5);
#line 29 "comp_unit_interface.m"
      return;
    }
#line 29 "comp_unit_interface.m"
  }
#line 29 "comp_unit_interface.m"
}

#line 29 "comp_unit_interface.m"
MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(
#line 29 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 29 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2)
#line 29 "comp_unit_interface.m"
{
#line 1704 "parse_tree.comp_unit_interface.c"
  {
#line 1706 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 1709 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 1711 "parse_tree.comp_unit_interface.c"
  }
#line 29 "comp_unit_interface.m"
}

#line 124 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
#line 124 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3)
#line 124 "comp_unit_interface.m"
{
#line 124 "comp_unit_interface.m"
  {
#line 124 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 124 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar1_4 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__2_2;
#line 124 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar2_5 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__3_3;

#line 124 "comp_unit_interface.m"
    {
#line 124 "comp_unit_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__comp_unit_interface__HeadVar__1_1, parse_tree__comp_unit_interface__Cast_HeadVar1_4, parse_tree__comp_unit_interface__Cast_HeadVar2_5);
#line 124 "comp_unit_interface.m"
      return;
    }
#line 124 "comp_unit_interface.m"
  }
#line 124 "comp_unit_interface.m"
}

#line 124 "comp_unit_interface.m"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 124 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2)
#line 124 "comp_unit_interface.m"
{
#line 1757 "parse_tree.comp_unit_interface.c"
  {
#line 1759 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 1762 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 1764 "parse_tree.comp_unit_interface.c"
  }
#line 124 "comp_unit_interface.m"
}

#line 391 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 391 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 391 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5)
#line 391 "comp_unit_interface.m"
{
#line 393 "comp_unit_interface.m"
  {
#line 393 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 393 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Item_6;
#line 393 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Info_9;
#line 393 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Pragma_10;
#line 393 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ItemPragma_11;
#line 393 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_14_14;

#line 396 "comp_unit_interface.m"
    {
#line 396 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Info_9, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Lang_5));
#line 396 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Info_9, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_4));
#line 396 "comp_unit_interface.m"
    }
#line 397 "comp_unit_interface.m"
    {
#line 397 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Pragma_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 397 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_10, 1) = ((MR_Box) (parse_tree__comp_unit_interface__Info_9));
#line 397 "comp_unit_interface.m"
    }
#line 398 "comp_unit_interface.m"
    {
#line 398 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 398 "comp_unit_interface.m"
    {
#line 398 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__ItemPragma_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 398 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Pragma_10));
#line 398 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2])))));
#line 398 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 2) = ((MR_Box) (parse_tree__comp_unit_interface__V_14_14));
#line 398 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 3) = ((MR_Box) ((MR_Integer) -1));
#line 398 "comp_unit_interface.m"
    }
#line 399 "comp_unit_interface.m"
    {
#line 399 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 399 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemPragma_11));
#line 399 "comp_unit_interface.m"
    }
#line 393 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__Item_6;
#line 393 "comp_unit_interface.m"
  }
#line 391 "comp_unit_interface.m"
}

#line 382 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 382 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 382 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 382 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8)
#line 382 "comp_unit_interface.m"
{
#line 385 "comp_unit_interface.m"
  {
#line 385 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 385 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_6;

#line 386 "comp_unit_interface.m"
    {
#line 386 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__comp_unit_interface__Item_4);
    }
#line 387 "comp_unit_interface.m"
    {
#line 387 "comp_unit_interface.m"
      mercury__set__insert_list_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__comp_unit_interface__Langs_6, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);
#line 387 "comp_unit_interface.m"
      return;
    }
#line 385 "comp_unit_interface.m"
  }
#line 382 "comp_unit_interface.m"
}

#line 380 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 380 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 380 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 380 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 380 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 380 "comp_unit_interface.m"
{
#line 380 "comp_unit_interface.m"
  {
#line 380 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 380 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8;

#line 380 "comp_unit_interface.m"
    {
#line 380 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8);
    }
#line 380 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8));
#line 380 "comp_unit_interface.m"
  }
#line 380 "comp_unit_interface.m"
}

#line 375 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 375 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_15,
#line 375 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 375 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11,
#line 375 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12)
#line 375 "comp_unit_interface.m"
{
#line 378 "comp_unit_interface.m"
  {
#line 378 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 378 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 4)));
#line 379 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 0));
#line 379 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 1)));
#line 379 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 2)));
#line 379 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 3)));
#line 380 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12;

#line 380 "comp_unit_interface.m"
    {
#line 380 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) &parse_tree__comp_unit_interface_scalar_common_5[0], parse_tree__comp_unit_interface__Items_10, ((MR_Box) (parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11)), &parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12);
    }
#line 380 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12 = ((MR_Word) parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12);
#line 378 "comp_unit_interface.m"
  }
#line 375 "comp_unit_interface.m"
}

#line 261 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
#line 261 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_3)
#line 261 "comp_unit_interface.m"
{
#line 268 "comp_unit_interface.m"
  {
#line 268 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 268 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__MaybeIFileItem_4;

#line 268 "comp_unit_interface.m"
#line 268 "comp_unit_interface.m"
    switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_3)) {
#line 268 "comp_unit_interface.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 268 "comp_unit_interface.m"
      case (MR_Integer) 0:
#line 268 "comp_unit_interface.m"
      case (MR_Integer) 2:
#line 336 "comp_unit_interface.m"
        parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "comp_unit_interface.m"
        break;
#line 268 "comp_unit_interface.m"
      case (MR_Integer) 1:
#line 268 "comp_unit_interface.m"
        {
#line 268 "comp_unit_interface.m"
          MR_Word parse_tree__comp_unit_interface__ItemTypeDefnInfo_5 = (MR_Word) MR_body(((MR_Word) parse_tree__comp_unit_interface__Item_3), (MR_Integer) 1);
#line 268 "comp_unit_interface.m"
          MR_Word parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6;
#line 268 "comp_unit_interface.m"
          MR_Word parse_tree__comp_unit_interface__AbstractItem_7;

#line 269 "comp_unit_interface.m"
          {
#line 269 "comp_unit_interface.m"
            parse_tree__item_util__maybe_make_abstract_type_defn_3_p_0((MR_Integer) 0, parse_tree__comp_unit_interface__ItemTypeDefnInfo_5, &parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6);
          }
#line 271 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__AbstractItem_7 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6);
#line 272 "comp_unit_interface.m"
          {
#line 272 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "comp_unit_interface.m"
            MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_7));
#line 272 "comp_unit_interface.m"
          }
#line 268 "comp_unit_interface.m"
        }
#line 268 "comp_unit_interface.m"
        break;
#line 268 "comp_unit_interface.m"
      case (MR_Integer) 3:
#line 268 "comp_unit_interface.m"
#line 268 "comp_unit_interface.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 0)))) {
#line 268 "comp_unit_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 0:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 1:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 2:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 4:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 6:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 7:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 8:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 9:
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 10:
#line 336 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "comp_unit_interface.m"
            break;
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 3:
#line 279 "comp_unit_interface.m"
            {
#line 279 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
#line 279 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 0)));
#line 280 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 1)));
#line 280 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 2)));
#line 280 "comp_unit_interface.m"
              MR_Integer parse_tree__comp_unit_interface__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 3)));

#line 286 "comp_unit_interface.m"
#line 286 "comp_unit_interface.m"
              switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Pragma_11)) {
#line 286 "comp_unit_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 286 "comp_unit_interface.m"
                case (MR_Integer) 0:
#line 286 "comp_unit_interface.m"
                case (MR_Integer) 1:
#line 321 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "comp_unit_interface.m"
                  break;
#line 286 "comp_unit_interface.m"
                case (MR_Integer) 2:
#line 321 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "comp_unit_interface.m"
                  break;
#line 286 "comp_unit_interface.m"
                case (MR_Integer) 3:
#line 286 "comp_unit_interface.m"
#line 286 "comp_unit_interface.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, (MR_Integer) 0)))) {
#line 286 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 3:
#line 285 "comp_unit_interface.m"
                      {
#line 285 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "comp_unit_interface.m"
                        MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Item_3));
#line 285 "comp_unit_interface.m"
                      }
#line 286 "comp_unit_interface.m"
                      break;
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 2:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 4:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 5:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 6:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 7:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 8:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 9:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 10:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 11:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 12:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 13:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 14:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 15:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 16:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 17:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 18:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 19:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 20:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 21:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 22:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 23:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 24:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 25:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 26:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 27:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 28:
#line 286 "comp_unit_interface.m"
                    case (MR_Integer) 29:
#line 321 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "comp_unit_interface.m"
                      break;
#line 286 "comp_unit_interface.m"
                  }
#line 286 "comp_unit_interface.m"
                  break;
#line 286 "comp_unit_interface.m"
              }
#line 279 "comp_unit_interface.m"
            }
#line 268 "comp_unit_interface.m"
            break;
#line 268 "comp_unit_interface.m"
          case (MR_Integer) 5:
#line 274 "comp_unit_interface.m"
            {
#line 274 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__ItemTypeClassInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
#line 274 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9;
#line 274 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__AbstractItem_60;

#line 275 "comp_unit_interface.m"
              {
#line 275 "comp_unit_interface.m"
                parse_tree__item_util__make_abstract_typeclass_2_p_0(parse_tree__comp_unit_interface__ItemTypeClassInfo_8, &parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9);
              }
#line 276 "comp_unit_interface.m"
              {
#line 276 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__AbstractItem_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "comp_unit_interface.m"
                MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 276 "comp_unit_interface.m"
                MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_60, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9));
#line 276 "comp_unit_interface.m"
              }
#line 277 "comp_unit_interface.m"
              {
#line 277 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "comp_unit_interface.m"
                MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_60));
#line 277 "comp_unit_interface.m"
              }
#line 274 "comp_unit_interface.m"
            }
#line 268 "comp_unit_interface.m"
            break;
#line 268 "comp_unit_interface.m"
        }
#line 268 "comp_unit_interface.m"
        break;
#line 268 "comp_unit_interface.m"
    }
#line 268 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__MaybeIFileItem_4;
#line 268 "comp_unit_interface.m"
  }
#line 261 "comp_unit_interface.m"
}

#line 371 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 371 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 371 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 371 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 371 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 371 "comp_unit_interface.m"
{
#line 371 "comp_unit_interface.m"
  {
#line 371 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 371 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12;

#line 371 "comp_unit_interface.m"
    {
#line 371 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12);
    }
#line 371 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12));
#line 371 "comp_unit_interface.m"
  }
#line 371 "comp_unit_interface.m"
}

#line 71 "comp_unit_interface.m"
void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0(
#line 71 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_8,
#line 71 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlocks_3,
#line 71 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__Langs_4)
#line 71 "comp_unit_interface.m"
{
#line 370 "comp_unit_interface.m"
  {
#line 370 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 370 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_12_12;
#line 370 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_14_14;
#line 370 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_5;
#line 370 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_6_6;
#line 370 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7;
#line 371 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_5;

#line 371 "comp_unit_interface.m"
    {
#line 371 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 371 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
#line 371 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 371 "comp_unit_interface.m"
    }
#line 2294 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_12_12 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 372 "comp_unit_interface.m"
    {
#line 372 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_7_7 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12);
    }
#line 2301 "parse_tree.comp_unit_interface.c"
    {
#line 2303 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2305 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 2307 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 2309 "parse_tree.comp_unit_interface.c"
    }
#line 371 "comp_unit_interface.m"
    {
#line 371 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_14_14, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_6_6, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks_3, ((MR_Box) (parse_tree__comp_unit_interface__V_7_7)), &parse_tree__comp_unit_interface__conv1_LangSet_5);
    }
#line 371 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_5 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_5);
#line 373 "comp_unit_interface.m"
    {
#line 373 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12, parse_tree__comp_unit_interface__LangSet_5, parse_tree__comp_unit_interface__Langs_4);
#line 373 "comp_unit_interface.m"
      return;
    }
#line 370 "comp_unit_interface.m"
  }
#line 71 "comp_unit_interface.m"
}

#line 351 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 351 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 351 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1)
#line 351 "comp_unit_interface.m"
{
#line 351 "comp_unit_interface.m"
  {
#line 351 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__wrapper_arg_2;
#line 351 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 351 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv2_Item_6;

#line 351 "comp_unit_interface.m"
    {
#line 351 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1));
    }
#line 351 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__wrapper_arg_2 = ((MR_Box) (parse_tree__comp_unit_interface__conv2_Item_6));
#line 351 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__wrapper_arg_2;
#line 351 "comp_unit_interface.m"
  }
#line 351 "comp_unit_interface.m"
}

#line 343 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 343 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 343 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 343 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 343 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 343 "comp_unit_interface.m"
{
#line 343 "comp_unit_interface.m"
  {
#line 343 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 343 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12;

#line 343 "comp_unit_interface.m"
    {
#line 343 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12);
    }
#line 343 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12));
#line 343 "comp_unit_interface.m"
  }
#line 343 "comp_unit_interface.m"
}

#line 60 "comp_unit_interface.m"
void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0(
#line 60 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_21,
#line 60 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_5,
#line 60 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__Section_6,
#line 60 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlocks0_7,
#line 60 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__ItemBlocks_8)
#line 60 "comp_unit_interface.m"
{
#line 342 "comp_unit_interface.m"
  {
#line 342 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_25_25;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_27_27;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_9;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_10;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 343 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_9;

#line 343 "comp_unit_interface.m"
    {
#line 343 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 343 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 343 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1));
#line 343 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 343 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_21));
#line 343 "comp_unit_interface.m"
    }
#line 2442 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_25_25 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 344 "comp_unit_interface.m"
    {
#line 344 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25);
    }
#line 2449 "parse_tree.comp_unit_interface.c"
    {
#line 2451 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2453 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_27_27, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 2455 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_27_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_21));
#line 2457 "parse_tree.comp_unit_interface.c"
    }
#line 343 "comp_unit_interface.m"
    {
#line 343 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_27_27, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_15_15, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks0_7, ((MR_Box) (parse_tree__comp_unit_interface__V_16_16)), &parse_tree__comp_unit_interface__conv1_LangSet_9);
    }
#line 343 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_9 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_9);
#line 345 "comp_unit_interface.m"
    {
#line 345 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25, parse_tree__comp_unit_interface__LangSet_9, &parse_tree__comp_unit_interface__Langs_10);
    }
#line 349 "comp_unit_interface.m"
    if ((parse_tree__comp_unit_interface__Langs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__ItemBlocks_8 = parse_tree__comp_unit_interface__ItemBlocks0_7;
#line 349 "comp_unit_interface.m"
    else
#line 350 "comp_unit_interface.m"
      {
#line 350 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItems_13;
#line 350 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItemBlock_14;
#line 350 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 350 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_18_18;

#line 351 "comp_unit_interface.m"
        {
#line 351 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2));
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 3) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_5));
#line 351 "comp_unit_interface.m"
        }
#line 351 "comp_unit_interface.m"
        {
#line 351 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItems_13 = mercury__list__map_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__V_17_17, parse_tree__comp_unit_interface__Langs_10);
        }
#line 352 "comp_unit_interface.m"
        {
#line 352 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_18_18 = mercury__term__context_init_0_f_0();
        }
#line 352 "comp_unit_interface.m"
        {
#line 352 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 352 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 0) = parse_tree__comp_unit_interface__Section_6;
#line 352 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__V_18_18));
#line 352 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 4) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItems_13));
#line 352 "comp_unit_interface.m"
        }
#line 354 "comp_unit_interface.m"
        {
#line 354 "comp_unit_interface.m"
          MR_Word base;
#line 354 "comp_unit_interface.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "comp_unit_interface.m"
          *parse_tree__comp_unit_interface__ItemBlocks_8 = base;
#line 354 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItemBlock_14));
#line 354 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemBlocks0_7));
#line 354 "comp_unit_interface.m"
        }
#line 350 "comp_unit_interface.m"
      }
#line 342 "comp_unit_interface.m"
  }
#line 60 "comp_unit_interface.m"
}

#line 48 "comp_unit_interface.m"
void MR_CALL 
parse_tree__comp_unit_interface__get_int_and_impl_4_p_0(
#line 48 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_5,
#line 48 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__RawCompUnit_6,
#line 48 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__IFileItemBlocks_7,
#line 48 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__NoIFileItemBlocks_8)
#line 48 "comp_unit_interface.m"
{
#line 110 "comp_unit_interface.m"
  {
#line 110 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_19_19 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 0)));
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 2)));
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_12;
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13;
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_14;
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 111 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___ModuleNameContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 1)));

#line 115 "comp_unit_interface.m"
    {
#line 115 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
#line 115 "comp_unit_interface.m"
    {
#line 115 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_17_17 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
#line 113 "comp_unit_interface.m"
    {
#line 113 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(parse_tree__comp_unit_interface__IncludeImplTypes_5, parse_tree__comp_unit_interface__RawItemBlocks_11, parse_tree__comp_unit_interface__V_16_16, &parse_tree__comp_unit_interface__IFileItemBlocksCord_12, parse_tree__comp_unit_interface__V_17_17, &parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
#line 116 "comp_unit_interface.m"
    {
#line 116 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__IFileItemBlocks0_14 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__IFileItemBlocksCord_12);
    }
#line 117 "comp_unit_interface.m"
    {
#line 117 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__NoIFileItemBlocks_8 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
#line 119 "comp_unit_interface.m"
    {
#line 119 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_9, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_14, parse_tree__comp_unit_interface__IFileItemBlocks_7);
#line 119 "comp_unit_interface.m"
      return;
    }
#line 110 "comp_unit_interface.m"
  }
#line 48 "comp_unit_interface.m"
}

#line 42 "comp_unit_interface.m"
void MR_CALL 
parse_tree__comp_unit_interface__get_interface_3_p_0(
#line 42 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_4,
#line 42 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__RawCompUnit_5,
#line 42 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__InterfaceRawCompUnit_6)
#line 42 "comp_unit_interface.m"
{
#line 91 "comp_unit_interface.m"
  {
#line 91 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_18_18 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 0)));
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleNameContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 1)));
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 2)));
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_10;
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_12;
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks_13;
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 99 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11;

#line 101 "comp_unit_interface.m"
    {
#line 101 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18);
    }
#line 101 "comp_unit_interface.m"
    {
#line 101 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18);
    }
#line 99 "comp_unit_interface.m"
    {
#line 99 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_4, parse_tree__comp_unit_interface__RawItemBlocks_9, parse_tree__comp_unit_interface__V_15_15, &parse_tree__comp_unit_interface__IFileItemBlocksCord_10, parse_tree__comp_unit_interface__V_16_16, &parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11);
    }
#line 102 "comp_unit_interface.m"
    {
#line 102 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__IFileItemBlocks0_12 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18, parse_tree__comp_unit_interface__IFileItemBlocksCord_10);
    }
#line 104 "comp_unit_interface.m"
    {
#line 104 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_7, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_12, &parse_tree__comp_unit_interface__IFileItemBlocks_13);
    }
#line 106 "comp_unit_interface.m"
    {
#line 106 "comp_unit_interface.m"
      MR_Word base;
#line 106 "comp_unit_interface.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 106 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__InterfaceRawCompUnit_6 = base;
#line 106 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_7));
#line 106 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleNameContext_8));
#line 106 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlocks_13));
#line 106 "comp_unit_interface.m"
    }
#line 91 "comp_unit_interface.m"
  }
#line 42 "comp_unit_interface.m"
}

void mercury__parse_tree__comp_unit_interface__init(void)
{
}

void mercury__parse_tree__comp_unit_interface__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_gather_noifile_items_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_include_impl_types_0);
}

void mercury__parse_tree__comp_unit_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.comp_unit_interface. */
