/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 96 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 99 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

#line 102 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0;

#line 105 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1;

#line 108 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2];

#line 111 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2];

#line 114 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2];

#line 117 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0;

#line 120 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1;

#line 123 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2];

#line 126 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2];

#line 129 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2];

#line 132 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
#line 135 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 137 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2);

#line 140 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
#line 143 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 145 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 147 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3);

#line 150 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
#line 153 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 155 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2);

#line 158 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
#line 161 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 163 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 165 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3);

#line 212 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 212 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 212 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

#line 210 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 210 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 210 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

#line 138 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 138 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 138 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

#line 136 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 136 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 136 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

#line 123 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
#line 123 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3);

#line 123 "comp_unit_interface.m"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2);

#line 379 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 379 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 379 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5);

#line 370 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 370 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 370 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 370 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);

#line 368 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 368 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 368 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 368 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 368 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 363 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 363 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_15,
#line 363 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 363 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11,
#line 363 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12);

#line 260 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
#line 260 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_3);

#line 359 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 359 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 359 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 359 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 359 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 350 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1);

#line 342 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 342 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 342 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 342 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 342 "comp_unit_interface.m"
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
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



#line 426 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 434 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

#line 442 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0 = {
  (MR_String) "dont_gather_noifile_items",
  (MR_Integer) 0
};

#line 448 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1 = {
  (MR_String) "gather_noifile_items",
  (MR_Integer) 1
};

#line 454 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 460 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 466 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 472 "parse_tree.comp_unit_interface.c"
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

#line 489 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0 = {
  (MR_String) "dont_include_impl_types",
  (MR_Integer) 0
};

#line 495 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1 = {
  (MR_String) "include_impl_types",
  (MR_Integer) 1
};

#line 501 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 507 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 513 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 519 "parse_tree.comp_unit_interface.c"
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

#line 536 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
#line 539 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 541 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 543 "parse_tree.comp_unit_interface.c"
{
#line 545 "parse_tree.comp_unit_interface.c"
  {
#line 547 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 550 "parse_tree.comp_unit_interface.c"
    {
#line 552 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 555 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 557 "parse_tree.comp_unit_interface.c"
  }
#line 559 "parse_tree.comp_unit_interface.c"
}

#line 562 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
#line 565 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 567 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 569 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 571 "parse_tree.comp_unit_interface.c"
{
#line 573 "parse_tree.comp_unit_interface.c"
  {
#line 575 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 578 "parse_tree.comp_unit_interface.c"
    {
#line 580 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 583 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 585 "parse_tree.comp_unit_interface.c"
  }
#line 587 "parse_tree.comp_unit_interface.c"
}

#line 590 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
#line 593 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 595 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 597 "parse_tree.comp_unit_interface.c"
{
#line 599 "parse_tree.comp_unit_interface.c"
  {
#line 601 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 604 "parse_tree.comp_unit_interface.c"
    {
#line 606 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 609 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 611 "parse_tree.comp_unit_interface.c"
  }
#line 613 "parse_tree.comp_unit_interface.c"
}

#line 616 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
#line 619 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 621 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 623 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 625 "parse_tree.comp_unit_interface.c"
{
#line 627 "parse_tree.comp_unit_interface.c"
  {
#line 629 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 632 "parse_tree.comp_unit_interface.c"
    {
#line 634 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 637 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 639 "parse_tree.comp_unit_interface.c"
  }
#line 641 "parse_tree.comp_unit_interface.c"
}

#line 212 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 212 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 212 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 212 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
#line 212 "comp_unit_interface.m"
{
#line 215 "comp_unit_interface.m"
  while (MR_TRUE)
#line 215 "comp_unit_interface.m"
    {
#line 215 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 215 "comp_unit_interface.m"
      {
#line 215 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 215 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "comp_unit_interface.m"
          {
#line 216 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 216 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 215 "comp_unit_interface.m"
          }
#line 215 "comp_unit_interface.m"
        else
#line 218 "comp_unit_interface.m"
          {
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 238 "comp_unit_interface.m"
#line 238 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_3) {
#line 238 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 238 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 239 "comp_unit_interface.m"
                {
#line 253 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__IFileItem_28;
#line 249 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__V_34_34;

#line 244 "comp_unit_interface.m"
                  {
#line 244 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                  }
#line 249 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
#line 249 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 249 "comp_unit_interface.m"
                    {
#line 250 "comp_unit_interface.m"
                      {
#line 250 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__V_34_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
#line 250 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__succeeded = ((MR_tag((MR_Word) parse_tree__comp_unit_interface__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 250 "comp_unit_interface.m"
                      if (parse_tree__comp_unit_interface__succeeded)
#line 250 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileItem_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__V_34_34, (MR_Integer) 0)));
#line 249 "comp_unit_interface.m"
                    }
#line 253 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 252 "comp_unit_interface.m"
                    {
#line 252 "comp_unit_interface.m"
                      {
#line 252 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
#line 252 "comp_unit_interface.m"
                    }
#line 253 "comp_unit_interface.m"
                  else
#line 253 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 239 "comp_unit_interface.m"
                }
#line 238 "comp_unit_interface.m"
                break;
#line 238 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 235 "comp_unit_interface.m"
                {
#line 235 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

#line 221 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 221 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 221 "comp_unit_interface.m"
                    {
#line 221 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
#line 224 "comp_unit_interface.m"
                      {
#line 224 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_41_41;
#line 224 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
#line 224 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

#line 224 "comp_unit_interface.m"
                        {
#line 224 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
#line 225 "comp_unit_interface.m"
                        {
#line 225 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 225 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
#line 225 "comp_unit_interface.m"
                        }
#line 793 "parse_tree.comp_unit_interface.c"
                        parse_tree__comp_unit_interface__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 226 "comp_unit_interface.m"
                        {
#line 226 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_41_41, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
#line 233 "comp_unit_interface.m"
                        {
#line 233 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_41_41, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                        }
#line 224 "comp_unit_interface.m"
                      }
#line 221 "comp_unit_interface.m"
                    }
#line 221 "comp_unit_interface.m"
                  else
#line 236 "comp_unit_interface.m"
                    {
#line 236 "comp_unit_interface.m"
                      {
#line 236 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
#line 236 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 236 "comp_unit_interface.m"
                    }
#line 235 "comp_unit_interface.m"
                }
#line 238 "comp_unit_interface.m"
                break;
#line 238 "comp_unit_interface.m"
            }
#line 257 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 257 "comp_unit_interface.m"
            {
#line 257 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4 = parse_tree__comp_unit_interface__Items_22;
#line 257 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 257 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 257 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7;
#line 257 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5;
#line 257 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4;
#line 257 "comp_unit_interface.m"
            }
#line 257 "comp_unit_interface.m"
            continue;
#line 218 "comp_unit_interface.m"
          }
#line 215 "comp_unit_interface.m"
      }
#line 215 "comp_unit_interface.m"
      break;
#line 215 "comp_unit_interface.m"
    }
#line 212 "comp_unit_interface.m"
}

#line 210 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 210 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 210 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 210 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
#line 210 "comp_unit_interface.m"
{
#line 215 "comp_unit_interface.m"
  while (MR_TRUE)
#line 215 "comp_unit_interface.m"
    {
#line 215 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 215 "comp_unit_interface.m"
      {
#line 215 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 215 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "comp_unit_interface.m"
          {
#line 216 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 216 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 215 "comp_unit_interface.m"
          }
#line 215 "comp_unit_interface.m"
        else
#line 218 "comp_unit_interface.m"
          {
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 218 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 238 "comp_unit_interface.m"
#line 238 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_3) {
#line 238 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 238 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 239 "comp_unit_interface.m"
                {
#line 253 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__IFileItem_28;
#line 249 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__V_34_34;

#line 241 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 249 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
#line 249 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 249 "comp_unit_interface.m"
                    {
#line 250 "comp_unit_interface.m"
                      {
#line 250 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__V_34_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
#line 250 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__succeeded = ((MR_tag((MR_Word) parse_tree__comp_unit_interface__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 250 "comp_unit_interface.m"
                      if (parse_tree__comp_unit_interface__succeeded)
#line 250 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileItem_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__V_34_34, (MR_Integer) 0)));
#line 249 "comp_unit_interface.m"
                    }
#line 253 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 252 "comp_unit_interface.m"
                    {
#line 252 "comp_unit_interface.m"
                      {
#line 252 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
#line 252 "comp_unit_interface.m"
                    }
#line 253 "comp_unit_interface.m"
                  else
#line 253 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 239 "comp_unit_interface.m"
                }
#line 238 "comp_unit_interface.m"
                break;
#line 238 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 235 "comp_unit_interface.m"
                {
#line 235 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

#line 221 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 221 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 221 "comp_unit_interface.m"
                    {
#line 221 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
#line 224 "comp_unit_interface.m"
                      {
#line 224 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
#line 224 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

#line 224 "comp_unit_interface.m"
                        {
#line 224 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
#line 225 "comp_unit_interface.m"
                        {
#line 225 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 225 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
#line 225 "comp_unit_interface.m"
                        }
#line 226 "comp_unit_interface.m"
                        {
#line 226 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
#line 230 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 224 "comp_unit_interface.m"
                      }
#line 221 "comp_unit_interface.m"
                    }
#line 221 "comp_unit_interface.m"
                  else
#line 236 "comp_unit_interface.m"
                    {
#line 236 "comp_unit_interface.m"
                      {
#line 236 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
#line 236 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 236 "comp_unit_interface.m"
                    }
#line 235 "comp_unit_interface.m"
                }
#line 238 "comp_unit_interface.m"
                break;
#line 238 "comp_unit_interface.m"
            }
#line 257 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 257 "comp_unit_interface.m"
            {
#line 257 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4 = parse_tree__comp_unit_interface__Items_22;
#line 257 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
#line 257 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

#line 257 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7;
#line 257 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5;
#line 257 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4;
#line 257 "comp_unit_interface.m"
            }
#line 257 "comp_unit_interface.m"
            continue;
#line 218 "comp_unit_interface.m"
          }
#line 215 "comp_unit_interface.m"
      }
#line 215 "comp_unit_interface.m"
      break;
#line 215 "comp_unit_interface.m"
    }
#line 210 "comp_unit_interface.m"
}

#line 138 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 138 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 138 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 138 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
#line 138 "comp_unit_interface.m"
{
#line 141 "comp_unit_interface.m"
  while (MR_TRUE)
#line 141 "comp_unit_interface.m"
    {
#line 141 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 141 "comp_unit_interface.m"
      {
#line 141 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 141 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "comp_unit_interface.m"
          {
#line 142 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 142 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 141 "comp_unit_interface.m"
          }
#line 141 "comp_unit_interface.m"
        else
#line 145 "comp_unit_interface.m"
          {
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_47_47;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 3)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 4)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileIncls_27;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileAvails_28;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileIncls_29;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileAvails_30;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_31;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_32;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItems_33;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_34;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_41_41;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_42_42;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 153 "comp_unit_interface.m"
#line 153 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_22) {
#line 153 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 154 "comp_unit_interface.m"
                {
#line 159 "comp_unit_interface.m"
#line 159 "comp_unit_interface.m"
                  switch (parse_tree__comp_unit_interface__IncludeImplTypes_1) {
#line 159 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 159 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 156 "comp_unit_interface.m"
                      {
#line 157 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 158 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "comp_unit_interface.m"
                      }
#line 159 "comp_unit_interface.m"
                      break;
#line 159 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 160 "comp_unit_interface.m"
                      {
#line 161 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 162 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 160 "comp_unit_interface.m"
                      }
#line 159 "comp_unit_interface.m"
                      break;
#line 159 "comp_unit_interface.m"
                  }
#line 170 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = parse_tree__comp_unit_interface__Incls_24;
#line 171 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = parse_tree__comp_unit_interface__Avails_25;
#line 154 "comp_unit_interface.m"
                }
#line 153 "comp_unit_interface.m"
                break;
#line 153 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 148 "comp_unit_interface.m"
                {
#line 149 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 150 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 151 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "comp_unit_interface.m"
                }
#line 153 "comp_unit_interface.m"
                break;
#line 153 "comp_unit_interface.m"
            }
#line 1215 "parse_tree.comp_unit_interface.c"
            parse_tree__comp_unit_interface__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 176 "comp_unit_interface.m"
            {
#line 176 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_41_41 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 176 "comp_unit_interface.m"
            {
#line 176 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_42_42 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 174 "comp_unit_interface.m"
            {
#line 174 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_26, parse_tree__comp_unit_interface__V_41_41, &parse_tree__comp_unit_interface__IFileItemsCord_31, parse_tree__comp_unit_interface__V_42_42, &parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 177 "comp_unit_interface.m"
            {
#line 177 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__IFileItems_33 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__IFileItemsCord_31);
            }
#line 178 "comp_unit_interface.m"
            {
#line 178 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__NoIFileItems_34 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 180 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileIncls_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 180 "comp_unit_interface.m"
              {
#line 181 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileAvails_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "comp_unit_interface.m"
                if (parse_tree__comp_unit_interface__succeeded)
#line 182 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileItems_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "comp_unit_interface.m"
              }
#line 185 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 185 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 185 "comp_unit_interface.m"
            else
#line 187 "comp_unit_interface.m"
              {
#line 187 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_35;

#line 186 "comp_unit_interface.m"
                {
#line 186 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileIncls_27));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 3) = ((MR_Box) (parse_tree__comp_unit_interface__IFileAvails_28));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 4) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_33));
#line 186 "comp_unit_interface.m"
                }
#line 188 "comp_unit_interface.m"
                {
#line 188 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_35)));
                }
#line 187 "comp_unit_interface.m"
              }
#line 192 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileIncls_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 192 "comp_unit_interface.m"
              {
#line 193 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileAvails_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "comp_unit_interface.m"
                if (parse_tree__comp_unit_interface__succeeded)
#line 194 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileItems_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "comp_unit_interface.m"
              }
#line 197 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 197 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 197 "comp_unit_interface.m"
            else
#line 199 "comp_unit_interface.m"
              {
#line 199 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_36;

#line 198 "comp_unit_interface.m"
                {
#line 198 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileIncls_29));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 3) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileAvails_30));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 4) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_34));
#line 198 "comp_unit_interface.m"
                }
#line 200 "comp_unit_interface.m"
                {
#line 200 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_36)));
                }
#line 199 "comp_unit_interface.m"
              }
#line 203 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 203 "comp_unit_interface.m"
            {
#line 203 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
#line 203 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 203 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 203 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6;
#line 203 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4;
#line 203 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3;
#line 203 "comp_unit_interface.m"
            }
#line 203 "comp_unit_interface.m"
            continue;
#line 145 "comp_unit_interface.m"
          }
#line 141 "comp_unit_interface.m"
      }
#line 141 "comp_unit_interface.m"
      break;
#line 141 "comp_unit_interface.m"
    }
#line 138 "comp_unit_interface.m"
}

#line 136 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 136 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 136 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 136 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
#line 136 "comp_unit_interface.m"
{
#line 141 "comp_unit_interface.m"
  while (MR_TRUE)
#line 141 "comp_unit_interface.m"
    {
#line 141 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 141 "comp_unit_interface.m"
      {
#line 141 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 141 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "comp_unit_interface.m"
          {
#line 142 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 142 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 141 "comp_unit_interface.m"
          }
#line 141 "comp_unit_interface.m"
        else
#line 145 "comp_unit_interface.m"
          {
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_47_47;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 3)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 4)));
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileIncls_27;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileAvails_28;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileIncls_29;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileAvails_30;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_31;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_32;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItems_33;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_34;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_41_41;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_42_42;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 145 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 153 "comp_unit_interface.m"
#line 153 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_22) {
#line 153 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 154 "comp_unit_interface.m"
                {
#line 159 "comp_unit_interface.m"
#line 159 "comp_unit_interface.m"
                  switch (parse_tree__comp_unit_interface__IncludeImplTypes_1) {
#line 159 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 159 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 156 "comp_unit_interface.m"
                      {
#line 157 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 158 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "comp_unit_interface.m"
                      }
#line 159 "comp_unit_interface.m"
                      break;
#line 159 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 160 "comp_unit_interface.m"
                      {
#line 161 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 162 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 160 "comp_unit_interface.m"
                      }
#line 159 "comp_unit_interface.m"
                      break;
#line 159 "comp_unit_interface.m"
                  }
#line 166 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 167 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 154 "comp_unit_interface.m"
                }
#line 153 "comp_unit_interface.m"
                break;
#line 153 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 148 "comp_unit_interface.m"
                {
#line 149 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
#line 150 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
#line 151 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "comp_unit_interface.m"
                }
#line 153 "comp_unit_interface.m"
                break;
#line 153 "comp_unit_interface.m"
            }
#line 1519 "parse_tree.comp_unit_interface.c"
            parse_tree__comp_unit_interface__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 176 "comp_unit_interface.m"
            {
#line 176 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_41_41 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 176 "comp_unit_interface.m"
            {
#line 176 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_42_42 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
#line 174 "comp_unit_interface.m"
            {
#line 174 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_26, parse_tree__comp_unit_interface__V_41_41, &parse_tree__comp_unit_interface__IFileItemsCord_31, parse_tree__comp_unit_interface__V_42_42, &parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 177 "comp_unit_interface.m"
            {
#line 177 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__IFileItems_33 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__IFileItemsCord_31);
            }
#line 178 "comp_unit_interface.m"
            {
#line 178 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__NoIFileItems_34 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
#line 180 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileIncls_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 180 "comp_unit_interface.m"
              {
#line 181 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileAvails_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "comp_unit_interface.m"
                if (parse_tree__comp_unit_interface__succeeded)
#line 182 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileItems_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "comp_unit_interface.m"
              }
#line 185 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 185 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 185 "comp_unit_interface.m"
            else
#line 187 "comp_unit_interface.m"
              {
#line 187 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_35;

#line 186 "comp_unit_interface.m"
                {
#line 186 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileIncls_27));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 3) = ((MR_Box) (parse_tree__comp_unit_interface__IFileAvails_28));
#line 186 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 4) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_33));
#line 186 "comp_unit_interface.m"
                }
#line 188 "comp_unit_interface.m"
                {
#line 188 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_35)));
                }
#line 187 "comp_unit_interface.m"
              }
#line 194 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileItems_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "comp_unit_interface.m"
            if (parse_tree__comp_unit_interface__succeeded)
#line 197 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 197 "comp_unit_interface.m"
            else
#line 199 "comp_unit_interface.m"
              {
#line 199 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_36;

#line 198 "comp_unit_interface.m"
                {
#line 198 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileIncls_29));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 3) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileAvails_30));
#line 198 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 4) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_34));
#line 198 "comp_unit_interface.m"
                }
#line 200 "comp_unit_interface.m"
                {
#line 200 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_36)));
                }
#line 199 "comp_unit_interface.m"
              }
#line 203 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 203 "comp_unit_interface.m"
            {
#line 203 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
#line 203 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
#line 203 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

#line 203 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6;
#line 203 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4;
#line 203 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3;
#line 203 "comp_unit_interface.m"
            }
#line 203 "comp_unit_interface.m"
            continue;
#line 145 "comp_unit_interface.m"
          }
#line 141 "comp_unit_interface.m"
      }
#line 141 "comp_unit_interface.m"
      break;
#line 141 "comp_unit_interface.m"
    }
#line 136 "comp_unit_interface.m"
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
#line 1703 "parse_tree.comp_unit_interface.c"
  {
#line 1705 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 1708 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 1710 "parse_tree.comp_unit_interface.c"
  }
#line 29 "comp_unit_interface.m"
}

#line 123 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
#line 123 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3)
#line 123 "comp_unit_interface.m"
{
#line 123 "comp_unit_interface.m"
  {
#line 123 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 123 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar1_4 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__2_2;
#line 123 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar2_5 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__3_3;

#line 123 "comp_unit_interface.m"
    {
#line 123 "comp_unit_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__comp_unit_interface__HeadVar__1_1, parse_tree__comp_unit_interface__Cast_HeadVar1_4, parse_tree__comp_unit_interface__Cast_HeadVar2_5);
#line 123 "comp_unit_interface.m"
      return;
    }
#line 123 "comp_unit_interface.m"
  }
#line 123 "comp_unit_interface.m"
}

#line 123 "comp_unit_interface.m"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 123 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2)
#line 123 "comp_unit_interface.m"
{
#line 1756 "parse_tree.comp_unit_interface.c"
  {
#line 1758 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 1761 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 1763 "parse_tree.comp_unit_interface.c"
  }
#line 123 "comp_unit_interface.m"
}

#line 379 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 379 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 379 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5)
#line 379 "comp_unit_interface.m"
{
#line 381 "comp_unit_interface.m"
  {
#line 381 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 381 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Item_6;
#line 381 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__FIM_9;
#line 381 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Info_10;
#line 381 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Pragma_11;
#line 381 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ItemPragma_12;
#line 381 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;

#line 384 "comp_unit_interface.m"
    {
#line 384 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__FIM_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__FIM_9, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Lang_5));
#line 384 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__FIM_9, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_4));
#line 384 "comp_unit_interface.m"
    }
#line 385 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__Info_10 = (MR_Word) parse_tree__comp_unit_interface__FIM_9;
#line 386 "comp_unit_interface.m"
    {
#line 386 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Pragma_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 386 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, 1) = ((MR_Box) (parse_tree__comp_unit_interface__Info_10));
#line 386 "comp_unit_interface.m"
    }
#line 387 "comp_unit_interface.m"
    {
#line 387 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = mercury__term__context_init_0_f_0();
    }
#line 387 "comp_unit_interface.m"
    {
#line 387 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__ItemPragma_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 387 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Pragma_11));
#line 387 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2])))));
#line 387 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 2) = ((MR_Box) (parse_tree__comp_unit_interface__V_15_15));
#line 387 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 3) = ((MR_Box) ((MR_Integer) -1));
#line 387 "comp_unit_interface.m"
    }
#line 388 "comp_unit_interface.m"
    {
#line 388 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 388 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemPragma_12));
#line 388 "comp_unit_interface.m"
    }
#line 381 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__Item_6;
#line 381 "comp_unit_interface.m"
  }
#line 379 "comp_unit_interface.m"
}

#line 370 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 370 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 370 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 370 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8)
#line 370 "comp_unit_interface.m"
{
#line 373 "comp_unit_interface.m"
  {
#line 373 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 373 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_6;

#line 374 "comp_unit_interface.m"
    {
#line 374 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__comp_unit_interface__Item_4);
    }
#line 375 "comp_unit_interface.m"
    {
#line 375 "comp_unit_interface.m"
      mercury__set__insert_list_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__comp_unit_interface__Langs_6, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);
#line 375 "comp_unit_interface.m"
      return;
    }
#line 373 "comp_unit_interface.m"
  }
#line 370 "comp_unit_interface.m"
}

#line 368 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 368 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 368 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 368 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 368 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 368 "comp_unit_interface.m"
{
#line 368 "comp_unit_interface.m"
  {
#line 368 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 368 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8;

#line 368 "comp_unit_interface.m"
    {
#line 368 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8);
    }
#line 368 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8));
#line 368 "comp_unit_interface.m"
  }
#line 368 "comp_unit_interface.m"
}

#line 363 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 363 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_15,
#line 363 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 363 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11,
#line 363 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12)
#line 363 "comp_unit_interface.m"
{
#line 366 "comp_unit_interface.m"
  {
#line 366 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 366 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 4)));
#line 367 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 0));
#line 367 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 1)));
#line 367 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 2)));
#line 367 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 3)));
#line 368 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12;

#line 368 "comp_unit_interface.m"
    {
#line 368 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) &parse_tree__comp_unit_interface_scalar_common_5[0], parse_tree__comp_unit_interface__Items_10, ((MR_Box) (parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11)), &parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12);
    }
#line 368 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12 = ((MR_Word) parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12);
#line 366 "comp_unit_interface.m"
  }
#line 363 "comp_unit_interface.m"
}

#line 260 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
#line 260 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_3)
#line 260 "comp_unit_interface.m"
{
#line 267 "comp_unit_interface.m"
  {
#line 267 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 267 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__MaybeIFileItem_4;

#line 267 "comp_unit_interface.m"
#line 267 "comp_unit_interface.m"
    switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_3)) {
#line 267 "comp_unit_interface.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "comp_unit_interface.m"
      case (MR_Integer) 0:
#line 267 "comp_unit_interface.m"
      case (MR_Integer) 2:
#line 335 "comp_unit_interface.m"
        parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "comp_unit_interface.m"
        break;
#line 267 "comp_unit_interface.m"
      case (MR_Integer) 1:
#line 267 "comp_unit_interface.m"
        {
#line 267 "comp_unit_interface.m"
          MR_Word parse_tree__comp_unit_interface__ItemTypeDefnInfo_5 = (MR_Word) MR_body(((MR_Word) parse_tree__comp_unit_interface__Item_3), (MR_Integer) 1);
#line 267 "comp_unit_interface.m"
          MR_Word parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6;
#line 267 "comp_unit_interface.m"
          MR_Word parse_tree__comp_unit_interface__AbstractItem_7;

#line 268 "comp_unit_interface.m"
          {
#line 268 "comp_unit_interface.m"
            parse_tree__item_util__maybe_make_abstract_type_defn_3_p_0((MR_Integer) 0, parse_tree__comp_unit_interface__ItemTypeDefnInfo_5, &parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6);
          }
#line 270 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__AbstractItem_7 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6);
#line 271 "comp_unit_interface.m"
          {
#line 271 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 271 "comp_unit_interface.m"
            MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_7));
#line 271 "comp_unit_interface.m"
          }
#line 267 "comp_unit_interface.m"
        }
#line 267 "comp_unit_interface.m"
        break;
#line 267 "comp_unit_interface.m"
      case (MR_Integer) 3:
#line 267 "comp_unit_interface.m"
#line 267 "comp_unit_interface.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 0)))) {
#line 267 "comp_unit_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 0:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 1:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 2:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 4:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 6:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 7:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 8:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 9:
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 10:
#line 335 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "comp_unit_interface.m"
            break;
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 3:
#line 278 "comp_unit_interface.m"
            {
#line 278 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
#line 278 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 0)));
#line 279 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 1)));
#line 279 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 2)));
#line 279 "comp_unit_interface.m"
              MR_Integer parse_tree__comp_unit_interface__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 3)));

#line 285 "comp_unit_interface.m"
#line 285 "comp_unit_interface.m"
              switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Pragma_11)) {
#line 285 "comp_unit_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 285 "comp_unit_interface.m"
                case (MR_Integer) 0:
#line 285 "comp_unit_interface.m"
                case (MR_Integer) 1:
#line 320 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "comp_unit_interface.m"
                  break;
#line 285 "comp_unit_interface.m"
                case (MR_Integer) 2:
#line 320 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "comp_unit_interface.m"
                  break;
#line 285 "comp_unit_interface.m"
                case (MR_Integer) 3:
#line 285 "comp_unit_interface.m"
#line 285 "comp_unit_interface.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, (MR_Integer) 0)))) {
#line 285 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 3:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 4:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 5:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 6:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 7:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 8:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 9:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 10:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 11:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 12:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 13:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 14:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 15:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 16:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 17:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 18:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 19:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 20:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 21:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 22:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 23:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 24:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 25:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 26:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 28:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 29:
#line 320 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "comp_unit_interface.m"
                      break;
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 2:
#line 285 "comp_unit_interface.m"
                    case (MR_Integer) 27:
#line 284 "comp_unit_interface.m"
                      {
#line 284 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 284 "comp_unit_interface.m"
                        MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Item_3));
#line 284 "comp_unit_interface.m"
                      }
#line 285 "comp_unit_interface.m"
                      break;
#line 285 "comp_unit_interface.m"
                  }
#line 285 "comp_unit_interface.m"
                  break;
#line 285 "comp_unit_interface.m"
              }
#line 278 "comp_unit_interface.m"
            }
#line 267 "comp_unit_interface.m"
            break;
#line 267 "comp_unit_interface.m"
          case (MR_Integer) 5:
#line 273 "comp_unit_interface.m"
            {
#line 273 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__ItemTypeClassInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
#line 273 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9;
#line 273 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__AbstractItem_60;

#line 274 "comp_unit_interface.m"
              {
#line 274 "comp_unit_interface.m"
                parse_tree__item_util__make_abstract_typeclass_2_p_0(parse_tree__comp_unit_interface__ItemTypeClassInfo_8, &parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9);
              }
#line 275 "comp_unit_interface.m"
              {
#line 275 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__AbstractItem_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "comp_unit_interface.m"
                MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 275 "comp_unit_interface.m"
                MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_60, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9));
#line 275 "comp_unit_interface.m"
              }
#line 276 "comp_unit_interface.m"
              {
#line 276 "comp_unit_interface.m"
                parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 276 "comp_unit_interface.m"
                MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_60));
#line 276 "comp_unit_interface.m"
              }
#line 273 "comp_unit_interface.m"
            }
#line 267 "comp_unit_interface.m"
            break;
#line 267 "comp_unit_interface.m"
        }
#line 267 "comp_unit_interface.m"
        break;
#line 267 "comp_unit_interface.m"
    }
#line 267 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__MaybeIFileItem_4;
#line 267 "comp_unit_interface.m"
  }
#line 260 "comp_unit_interface.m"
}

#line 359 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 359 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 359 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 359 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 359 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 359 "comp_unit_interface.m"
{
#line 359 "comp_unit_interface.m"
  {
#line 359 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 359 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12;

#line 359 "comp_unit_interface.m"
    {
#line 359 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12);
    }
#line 359 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12));
#line 359 "comp_unit_interface.m"
  }
#line 359 "comp_unit_interface.m"
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
#line 358 "comp_unit_interface.m"
  {
#line 358 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 358 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_12_12;
#line 358 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_14_14;
#line 358 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_5;
#line 358 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_6_6;
#line 358 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7;
#line 359 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_5;

#line 359 "comp_unit_interface.m"
    {
#line 359 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 359 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 359 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
#line 359 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 359 "comp_unit_interface.m"
    }
#line 2297 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_12_12 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 360 "comp_unit_interface.m"
    {
#line 360 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_7_7 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12);
    }
#line 2304 "parse_tree.comp_unit_interface.c"
    {
#line 2306 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2308 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 2310 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 2312 "parse_tree.comp_unit_interface.c"
    }
#line 359 "comp_unit_interface.m"
    {
#line 359 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_14_14, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_6_6, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks_3, ((MR_Box) (parse_tree__comp_unit_interface__V_7_7)), &parse_tree__comp_unit_interface__conv1_LangSet_5);
    }
#line 359 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_5 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_5);
#line 361 "comp_unit_interface.m"
    {
#line 361 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12, parse_tree__comp_unit_interface__LangSet_5, parse_tree__comp_unit_interface__Langs_4);
#line 361 "comp_unit_interface.m"
      return;
    }
#line 358 "comp_unit_interface.m"
  }
#line 71 "comp_unit_interface.m"
}

#line 350 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1)
#line 350 "comp_unit_interface.m"
{
#line 350 "comp_unit_interface.m"
  {
#line 350 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__wrapper_arg_2;
#line 350 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 350 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv2_Item_6;

#line 350 "comp_unit_interface.m"
    {
#line 350 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1));
    }
#line 350 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__wrapper_arg_2 = ((MR_Box) (parse_tree__comp_unit_interface__conv2_Item_6));
#line 350 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__wrapper_arg_2;
#line 350 "comp_unit_interface.m"
  }
#line 350 "comp_unit_interface.m"
}

#line 342 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 342 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 342 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 342 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 342 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 342 "comp_unit_interface.m"
{
#line 342 "comp_unit_interface.m"
  {
#line 342 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 342 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12;

#line 342 "comp_unit_interface.m"
    {
#line 342 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12);
    }
#line 342 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12));
#line 342 "comp_unit_interface.m"
  }
#line 342 "comp_unit_interface.m"
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
#line 341 "comp_unit_interface.m"
  {
#line 341 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_25_25;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_27_27;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_9;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_10;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 342 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_9;

#line 342 "comp_unit_interface.m"
    {
#line 342 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 342 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 342 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1));
#line 342 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 342 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_21));
#line 342 "comp_unit_interface.m"
    }
#line 2445 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_25_25 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 343 "comp_unit_interface.m"
    {
#line 343 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25);
    }
#line 2452 "parse_tree.comp_unit_interface.c"
    {
#line 2454 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2456 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_27_27, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 2458 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_27_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_21));
#line 2460 "parse_tree.comp_unit_interface.c"
    }
#line 342 "comp_unit_interface.m"
    {
#line 342 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_27_27, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_15_15, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks0_7, ((MR_Box) (parse_tree__comp_unit_interface__V_16_16)), &parse_tree__comp_unit_interface__conv1_LangSet_9);
    }
#line 342 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_9 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_9);
#line 344 "comp_unit_interface.m"
    {
#line 344 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25, parse_tree__comp_unit_interface__LangSet_9, &parse_tree__comp_unit_interface__Langs_10);
    }
#line 348 "comp_unit_interface.m"
    if ((parse_tree__comp_unit_interface__Langs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__ItemBlocks_8 = parse_tree__comp_unit_interface__ItemBlocks0_7;
#line 348 "comp_unit_interface.m"
    else
#line 349 "comp_unit_interface.m"
      {
#line 349 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItems_13;
#line 349 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItemBlock_14;
#line 349 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 349 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_18_18;

#line 350 "comp_unit_interface.m"
        {
#line 350 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 350 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
#line 350 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2));
#line 350 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 350 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 3) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_5));
#line 350 "comp_unit_interface.m"
        }
#line 350 "comp_unit_interface.m"
        {
#line 350 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItems_13 = mercury__list__map_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__V_17_17, parse_tree__comp_unit_interface__Langs_10);
        }
#line 351 "comp_unit_interface.m"
        {
#line 351 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_18_18 = mercury__term__context_init_0_f_0();
        }
#line 351 "comp_unit_interface.m"
        {
#line 351 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 0) = parse_tree__comp_unit_interface__Section_6;
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__V_18_18));
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 4) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItems_13));
#line 351 "comp_unit_interface.m"
        }
#line 353 "comp_unit_interface.m"
        {
#line 353 "comp_unit_interface.m"
          MR_Word base;
#line 353 "comp_unit_interface.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "comp_unit_interface.m"
          *parse_tree__comp_unit_interface__ItemBlocks_8 = base;
#line 353 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItemBlock_14));
#line 353 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemBlocks0_7));
#line 353 "comp_unit_interface.m"
        }
#line 349 "comp_unit_interface.m"
      }
#line 341 "comp_unit_interface.m"
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
#line 109 "comp_unit_interface.m"
  {
#line 109 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_19_19 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 0)));
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 2)));
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_12;
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13;
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_14;
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 109 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 110 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___ModuleNameContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 1)));

#line 114 "comp_unit_interface.m"
    {
#line 114 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
#line 114 "comp_unit_interface.m"
    {
#line 114 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_17_17 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
#line 112 "comp_unit_interface.m"
    {
#line 112 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(parse_tree__comp_unit_interface__IncludeImplTypes_5, parse_tree__comp_unit_interface__RawItemBlocks_11, parse_tree__comp_unit_interface__V_16_16, &parse_tree__comp_unit_interface__IFileItemBlocksCord_12, parse_tree__comp_unit_interface__V_17_17, &parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
#line 115 "comp_unit_interface.m"
    {
#line 115 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__IFileItemBlocks0_14 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__IFileItemBlocksCord_12);
    }
#line 116 "comp_unit_interface.m"
    {
#line 116 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__NoIFileItemBlocks_8 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
#line 118 "comp_unit_interface.m"
    {
#line 118 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_9, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_14, parse_tree__comp_unit_interface__IFileItemBlocks_7);
#line 118 "comp_unit_interface.m"
      return;
    }
#line 109 "comp_unit_interface.m"
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
#line 90 "comp_unit_interface.m"
  {
#line 90 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_18_18 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 0)));
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleNameContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 1)));
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 2)));
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_10;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_12;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks_13;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 98 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11;

#line 100 "comp_unit_interface.m"
    {
#line 100 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18);
    }
#line 100 "comp_unit_interface.m"
    {
#line 100 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18);
    }
#line 98 "comp_unit_interface.m"
    {
#line 98 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_4, parse_tree__comp_unit_interface__RawItemBlocks_9, parse_tree__comp_unit_interface__V_15_15, &parse_tree__comp_unit_interface__IFileItemBlocksCord_10, parse_tree__comp_unit_interface__V_16_16, &parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11);
    }
#line 101 "comp_unit_interface.m"
    {
#line 101 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__IFileItemBlocks0_12 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18, parse_tree__comp_unit_interface__IFileItemBlocksCord_10);
    }
#line 103 "comp_unit_interface.m"
    {
#line 103 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_7, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_12, &parse_tree__comp_unit_interface__IFileItemBlocks_13);
    }
#line 105 "comp_unit_interface.m"
    {
#line 105 "comp_unit_interface.m"
      MR_Word base;
#line 105 "comp_unit_interface.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 105 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__InterfaceRawCompUnit_6 = base;
#line 105 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_7));
#line 105 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleNameContext_8));
#line 105 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlocks_13));
#line 105 "comp_unit_interface.m"
    }
#line 90 "comp_unit_interface.m"
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
