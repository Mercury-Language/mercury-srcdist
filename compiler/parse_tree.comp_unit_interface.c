/*
** Automatically generated from `comp_unit_interface.m'
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
#include "parse_tree.item_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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

#line 121 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
#line 121 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3);

#line 121 "comp_unit_interface.m"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2);

#line 361 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 361 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 361 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5);

#line 352 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 352 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 352 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 352 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);

#line 350 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 350 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 345 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 345 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_13,
#line 345 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 345 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_9,
#line 345 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_10);

#line 226 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
#line 226 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_3);

#line 164 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_and_noifile_in_items_acc_8_p_0(
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__GatherNoIFileItems_2,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 164 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 164 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

#line 127 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_and_noifile_in_raw_item_blocks_acc_7_p_0(
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__GatherNoIFileItems_2,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 127 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 127 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

#line 341 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 341 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 341 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 341 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 341 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 322 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 322 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 322 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1);

#line 314 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 314 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 314 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 314 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 314 "comp_unit_interface.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 398 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 406 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

#line 414 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0 = {
  (MR_String) "dont_gather_noifile_items",
  (MR_Integer) 0
};

#line 420 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1 = {
  (MR_String) "gather_noifile_items",
  (MR_Integer) 1
};

#line 426 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 432 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 438 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 444 "parse_tree.comp_unit_interface.c"
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

#line 461 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0 = {
  (MR_String) "dont_include_impl_types",
  (MR_Integer) 0
};

#line 467 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1 = {
  (MR_String) "include_impl_types",
  (MR_Integer) 1
};

#line 473 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 479 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 485 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 491 "parse_tree.comp_unit_interface.c"
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

#line 508 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
#line 511 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 513 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 515 "parse_tree.comp_unit_interface.c"
{
#line 517 "parse_tree.comp_unit_interface.c"
  {
#line 519 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 522 "parse_tree.comp_unit_interface.c"
    {
#line 524 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 527 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 529 "parse_tree.comp_unit_interface.c"
  }
#line 531 "parse_tree.comp_unit_interface.c"
}

#line 534 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
#line 537 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 539 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 541 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 543 "parse_tree.comp_unit_interface.c"
{
#line 545 "parse_tree.comp_unit_interface.c"
  {
#line 547 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 550 "parse_tree.comp_unit_interface.c"
    {
#line 552 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 555 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 557 "parse_tree.comp_unit_interface.c"
  }
#line 559 "parse_tree.comp_unit_interface.c"
}

#line 562 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
#line 565 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 567 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 569 "parse_tree.comp_unit_interface.c"
{
#line 571 "parse_tree.comp_unit_interface.c"
  {
#line 573 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 576 "parse_tree.comp_unit_interface.c"
    {
#line 578 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 581 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 583 "parse_tree.comp_unit_interface.c"
  }
#line 585 "parse_tree.comp_unit_interface.c"
}

#line 588 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
#line 591 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 593 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 595 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 597 "parse_tree.comp_unit_interface.c"
{
#line 599 "parse_tree.comp_unit_interface.c"
  {
#line 601 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 604 "parse_tree.comp_unit_interface.c"
    {
#line 606 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 609 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 611 "parse_tree.comp_unit_interface.c"
  }
#line 613 "parse_tree.comp_unit_interface.c"
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
#line 657 "parse_tree.comp_unit_interface.c"
  {
#line 659 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 662 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 664 "parse_tree.comp_unit_interface.c"
  }
#line 29 "comp_unit_interface.m"
}

#line 121 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
#line 121 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3)
#line 121 "comp_unit_interface.m"
{
#line 121 "comp_unit_interface.m"
  {
#line 121 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 121 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar1_4 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__2_2;
#line 121 "comp_unit_interface.m"
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar2_5 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__3_3;

#line 121 "comp_unit_interface.m"
    {
#line 121 "comp_unit_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__comp_unit_interface__HeadVar__1_1, parse_tree__comp_unit_interface__Cast_HeadVar1_4, parse_tree__comp_unit_interface__Cast_HeadVar2_5);
#line 121 "comp_unit_interface.m"
      return;
    }
#line 121 "comp_unit_interface.m"
  }
#line 121 "comp_unit_interface.m"
}

#line 121 "comp_unit_interface.m"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
#line 121 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2)
#line 121 "comp_unit_interface.m"
{
#line 710 "parse_tree.comp_unit_interface.c"
  {
#line 712 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 715 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 717 "parse_tree.comp_unit_interface.c"
  }
#line 121 "comp_unit_interface.m"
}

#line 361 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 361 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 361 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5)
#line 361 "comp_unit_interface.m"
{
#line 363 "comp_unit_interface.m"
  {
#line 363 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 363 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Item_6;
#line 363 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Info_9;
#line 363 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Pragma_10;
#line 363 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ItemPragma_11;
#line 363 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_14_14;

#line 366 "comp_unit_interface.m"
    {
#line 366 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Info_9, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Lang_5));
#line 366 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Info_9, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_4));
#line 366 "comp_unit_interface.m"
    }
#line 367 "comp_unit_interface.m"
    {
#line 367 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Pragma_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 367 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_10, 1) = ((MR_Box) (parse_tree__comp_unit_interface__Info_9));
#line 367 "comp_unit_interface.m"
    }
#line 368 "comp_unit_interface.m"
    {
#line 368 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 368 "comp_unit_interface.m"
    {
#line 368 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__ItemPragma_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 368 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Pragma_10));
#line 368 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2])))));
#line 368 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 2) = ((MR_Box) (parse_tree__comp_unit_interface__V_14_14));
#line 368 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 3) = ((MR_Box) ((MR_Integer) -1));
#line 368 "comp_unit_interface.m"
    }
#line 369 "comp_unit_interface.m"
    {
#line 369 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 369 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemPragma_11));
#line 369 "comp_unit_interface.m"
    }
#line 363 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__Item_6;
#line 363 "comp_unit_interface.m"
  }
#line 361 "comp_unit_interface.m"
}

#line 352 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 352 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 352 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 352 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8)
#line 352 "comp_unit_interface.m"
{
#line 355 "comp_unit_interface.m"
  {
#line 355 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 355 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_6;

#line 356 "comp_unit_interface.m"
    {
#line 356 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__comp_unit_interface__Item_4);
    }
#line 357 "comp_unit_interface.m"
    {
#line 357 "comp_unit_interface.m"
      mercury__set__insert_list_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__comp_unit_interface__Langs_6, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);
#line 357 "comp_unit_interface.m"
      return;
    }
#line 355 "comp_unit_interface.m"
  }
#line 352 "comp_unit_interface.m"
}

#line 350 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 350 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 350 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 350 "comp_unit_interface.m"
{
#line 350 "comp_unit_interface.m"
  {
#line 350 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 350 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8;

#line 350 "comp_unit_interface.m"
    {
#line 350 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8);
    }
#line 350 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8));
#line 350 "comp_unit_interface.m"
  }
#line 350 "comp_unit_interface.m"
}

#line 345 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 345 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_13,
#line 345 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 345 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_9,
#line 345 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_10)
#line 345 "comp_unit_interface.m"
{
#line 348 "comp_unit_interface.m"
  {
#line 348 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 348 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 2)));
#line 349 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 0));
#line 349 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 1)));
#line 350 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_10;

#line 350 "comp_unit_interface.m"
    {
#line 350 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) &parse_tree__comp_unit_interface_scalar_common_5[0], parse_tree__comp_unit_interface__Items_8, ((MR_Box) (parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_9)), &parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_10);
    }
#line 350 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_10 = ((MR_Word) parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_10);
#line 348 "comp_unit_interface.m"
  }
#line 345 "comp_unit_interface.m"
}

#line 226 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
#line 226 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_3)
#line 226 "comp_unit_interface.m"
{
#line 235 "comp_unit_interface.m"
  {
#line 235 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 235 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Include_4;

#line 235 "comp_unit_interface.m"
#line 235 "comp_unit_interface.m"
    switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_3)) {
#line 235 "comp_unit_interface.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 235 "comp_unit_interface.m"
      case (MR_Integer) 0:
#line 247 "comp_unit_interface.m"
        parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 1;
#line 235 "comp_unit_interface.m"
        break;
#line 235 "comp_unit_interface.m"
      case (MR_Integer) 1:
#line 307 "comp_unit_interface.m"
        parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 235 "comp_unit_interface.m"
        break;
#line 235 "comp_unit_interface.m"
      case (MR_Integer) 2:
#line 236 "comp_unit_interface.m"
        parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 1;
#line 235 "comp_unit_interface.m"
        break;
#line 235 "comp_unit_interface.m"
      case (MR_Integer) 3:
#line 235 "comp_unit_interface.m"
#line 235 "comp_unit_interface.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 0)))) {
#line 235 "comp_unit_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 0:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 1:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 2:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 3:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 5:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 7:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 8:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 9:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 10:
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 11:
#line 307 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 235 "comp_unit_interface.m"
            break;
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 4:
#line 250 "comp_unit_interface.m"
            {
#line 250 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__ItemPragma_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
#line 250 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__Pragma_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_16, (MR_Integer) 0)));
#line 251 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_16, (MR_Integer) 1)));
#line 251 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_16, (MR_Integer) 2)));
#line 251 "comp_unit_interface.m"
              MR_Integer parse_tree__comp_unit_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_16, (MR_Integer) 3)));

#line 257 "comp_unit_interface.m"
#line 257 "comp_unit_interface.m"
              switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Pragma_17)) {
#line 257 "comp_unit_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 257 "comp_unit_interface.m"
                case (MR_Integer) 0:
#line 257 "comp_unit_interface.m"
                case (MR_Integer) 1:
#line 292 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 257 "comp_unit_interface.m"
                  break;
#line 257 "comp_unit_interface.m"
                case (MR_Integer) 2:
#line 292 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 257 "comp_unit_interface.m"
                  break;
#line 257 "comp_unit_interface.m"
                case (MR_Integer) 3:
#line 257 "comp_unit_interface.m"
#line 257 "comp_unit_interface.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_17, (MR_Integer) 0)))) {
#line 257 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 3:
#line 256 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 1;
#line 257 "comp_unit_interface.m"
                      break;
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 2:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 4:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 5:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 6:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 7:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 8:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 9:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 10:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 11:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 12:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 13:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 14:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 15:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 16:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 17:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 18:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 19:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 20:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 21:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 22:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 23:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 24:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 25:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 26:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 27:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 28:
#line 257 "comp_unit_interface.m"
                    case (MR_Integer) 29:
#line 292 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 257 "comp_unit_interface.m"
                      break;
#line 257 "comp_unit_interface.m"
                  }
#line 257 "comp_unit_interface.m"
                  break;
#line 257 "comp_unit_interface.m"
              }
#line 250 "comp_unit_interface.m"
            }
#line 235 "comp_unit_interface.m"
            break;
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 6:
#line 236 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 1;
#line 235 "comp_unit_interface.m"
            break;
#line 235 "comp_unit_interface.m"
        }
#line 235 "comp_unit_interface.m"
        break;
#line 235 "comp_unit_interface.m"
    }
#line 235 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__Include_4;
#line 235 "comp_unit_interface.m"
  }
#line 226 "comp_unit_interface.m"
}

#line 164 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_and_noifile_in_items_acc_8_p_0(
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__GatherNoIFileItems_2,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Section_3,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
#line 164 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
#line 164 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
#line 164 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
#line 164 "comp_unit_interface.m"
{
#line 168 "comp_unit_interface.m"
  while (MR_TRUE)
#line 168 "comp_unit_interface.m"
    {
#line 168 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 168 "comp_unit_interface.m"
      {
#line 168 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 168 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "comp_unit_interface.m"
          {
#line 169 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 169 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 168 "comp_unit_interface.m"
          }
#line 168 "comp_unit_interface.m"
        else
#line 171 "comp_unit_interface.m"
          {
#line 171 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
#line 171 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
#line 171 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_38_38;
#line 171 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39;

#line 191 "comp_unit_interface.m"
#line 191 "comp_unit_interface.m"
            switch (parse_tree__comp_unit_interface__Section_3) {
#line 191 "comp_unit_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 191 "comp_unit_interface.m"
              case (MR_Integer) 1:
#line 192 "comp_unit_interface.m"
                {
#line 204 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__V_34_34;

#line 195 "comp_unit_interface.m"
#line 195 "comp_unit_interface.m"
                  switch (parse_tree__comp_unit_interface__GatherNoIFileItems_2) {
#line 195 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 195 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 194 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 195 "comp_unit_interface.m"
                      break;
#line 195 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 196 "comp_unit_interface.m"
                      {
#line 197 "comp_unit_interface.m"
                        {
#line 197 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                        }
#line 196 "comp_unit_interface.m"
                      }
#line 195 "comp_unit_interface.m"
                      break;
#line 195 "comp_unit_interface.m"
                  }
#line 204 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
#line 204 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 204 "comp_unit_interface.m"
                    {
#line 205 "comp_unit_interface.m"
                      {
#line 205 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__V_34_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
#line 205 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__V_34_34 == (MR_Integer) 1);
#line 204 "comp_unit_interface.m"
                    }
#line 219 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 217 "comp_unit_interface.m"
                    {
#line 217 "comp_unit_interface.m"
                      MR_Word parse_tree__comp_unit_interface__IFileItem_28;
#line 211 "comp_unit_interface.m"
                      MR_Word parse_tree__comp_unit_interface__AbstractItem_44;

#line 208 "comp_unit_interface.m"
                      {
#line 208 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__succeeded = parse_tree__item_util__make_abstract_defn_3_p_0(parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0, &parse_tree__comp_unit_interface__AbstractItem_44);
                      }
#line 211 "comp_unit_interface.m"
                      if (parse_tree__comp_unit_interface__succeeded)
#line 210 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__IFileItem_28 = parse_tree__comp_unit_interface__AbstractItem_44;
#line 211 "comp_unit_interface.m"
                      else
#line 215 "comp_unit_interface.m"
                        {
#line 215 "comp_unit_interface.m"
                          MR_Word parse_tree__comp_unit_interface__AbstractItem_43;

#line 212 "comp_unit_interface.m"
                          {
#line 212 "comp_unit_interface.m"
                            parse_tree__comp_unit_interface__succeeded = parse_tree__item_util__make_abstract_unify_compare_3_p_0(parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0, &parse_tree__comp_unit_interface__AbstractItem_43);
                          }
#line 215 "comp_unit_interface.m"
                          if (parse_tree__comp_unit_interface__succeeded)
#line 214 "comp_unit_interface.m"
                            parse_tree__comp_unit_interface__IFileItem_28 = parse_tree__comp_unit_interface__AbstractItem_43;
#line 215 "comp_unit_interface.m"
                          else
#line 216 "comp_unit_interface.m"
                            parse_tree__comp_unit_interface__IFileItem_28 = parse_tree__comp_unit_interface__Item_21;
#line 215 "comp_unit_interface.m"
                        }
#line 218 "comp_unit_interface.m"
                      {
#line 218 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_38_38 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
#line 217 "comp_unit_interface.m"
                    }
#line 219 "comp_unit_interface.m"
                  else
#line 219 "comp_unit_interface.m"
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_38_38 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
#line 192 "comp_unit_interface.m"
                }
#line 191 "comp_unit_interface.m"
                break;
#line 191 "comp_unit_interface.m"
              case (MR_Integer) 0:
#line 188 "comp_unit_interface.m"
                {
#line 188 "comp_unit_interface.m"
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

#line 174 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 174 "comp_unit_interface.m"
                  if (parse_tree__comp_unit_interface__succeeded)
#line 174 "comp_unit_interface.m"
                    {
#line 174 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
#line 177 "comp_unit_interface.m"
                      {
#line 177 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_48_48;
#line 177 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
#line 177 "comp_unit_interface.m"
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

#line 177 "comp_unit_interface.m"
                        {
#line 177 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
#line 178 "comp_unit_interface.m"
                        {
#line 178 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 178 "comp_unit_interface.m"
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
#line 178 "comp_unit_interface.m"
                        }
#line 1315 "parse_tree.comp_unit_interface.c"
                        parse_tree__comp_unit_interface__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 179 "comp_unit_interface.m"
                        {
#line 179 "comp_unit_interface.m"
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_38_38 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_48_48, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
#line 184 "comp_unit_interface.m"
#line 184 "comp_unit_interface.m"
                        switch (parse_tree__comp_unit_interface__GatherNoIFileItems_2) {
#line 184 "comp_unit_interface.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 184 "comp_unit_interface.m"
                          case (MR_Integer) 0:
#line 183 "comp_unit_interface.m"
                            parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 184 "comp_unit_interface.m"
                            break;
#line 184 "comp_unit_interface.m"
                          case (MR_Integer) 1:
#line 186 "comp_unit_interface.m"
                            {
#line 186 "comp_unit_interface.m"
                              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_48_48, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                            }
#line 184 "comp_unit_interface.m"
                            break;
#line 184 "comp_unit_interface.m"
                        }
#line 177 "comp_unit_interface.m"
                      }
#line 174 "comp_unit_interface.m"
                    }
#line 174 "comp_unit_interface.m"
                  else
#line 189 "comp_unit_interface.m"
                    {
#line 189 "comp_unit_interface.m"
                      {
#line 189 "comp_unit_interface.m"
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_38_38 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
#line 189 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
#line 189 "comp_unit_interface.m"
                    }
#line 188 "comp_unit_interface.m"
                }
#line 191 "comp_unit_interface.m"
                break;
#line 191 "comp_unit_interface.m"
            }
#line 223 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 223 "comp_unit_interface.m"
            {
#line 223 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4 = parse_tree__comp_unit_interface__Items_22;
#line 223 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_38_38;
#line 223 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_39_39;

#line 223 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0__tmp_copy_7;
#line 223 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0__tmp_copy_5;
#line 223 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__HeadVar__4__tmp_copy_4;
#line 223 "comp_unit_interface.m"
            }
#line 223 "comp_unit_interface.m"
            continue;
#line 171 "comp_unit_interface.m"
          }
#line 168 "comp_unit_interface.m"
      }
#line 168 "comp_unit_interface.m"
      break;
#line 168 "comp_unit_interface.m"
    }
#line 164 "comp_unit_interface.m"
}

#line 127 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_and_noifile_in_raw_item_blocks_acc_7_p_0(
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__GatherNoIFileItems_2,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
#line 127 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
#line 127 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
#line 127 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
#line 127 "comp_unit_interface.m"
{
#line 133 "comp_unit_interface.m"
  while (MR_TRUE)
#line 133 "comp_unit_interface.m"
    {
#line 133 "comp_unit_interface.m"
      /* tailcall optimized into a loop */
#line 133 "comp_unit_interface.m"
      {
#line 133 "comp_unit_interface.m"
        MR_bool parse_tree__comp_unit_interface__succeeded;

#line 133 "comp_unit_interface.m"
        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 133 "comp_unit_interface.m"
          {
#line 134 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 134 "comp_unit_interface.m"
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 133 "comp_unit_interface.m"
          }
#line 133 "comp_unit_interface.m"
        else
#line 137 "comp_unit_interface.m"
          {
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__Items_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_25;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_26;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__IFileItems_27;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_28;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_39_39;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__V_40_40;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_41_41;
#line 137 "comp_unit_interface.m"
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_42_42;

#line 141 "comp_unit_interface.m"
            {
#line 141 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_39_39 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_45_45);
            }
#line 141 "comp_unit_interface.m"
            {
#line 141 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__V_40_40 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_45_45);
            }
#line 139 "comp_unit_interface.m"
            {
#line 139 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__get_ifile_and_noifile_in_items_acc_8_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__GatherNoIFileItems_2, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_24, parse_tree__comp_unit_interface__V_39_39, &parse_tree__comp_unit_interface__IFileItemsCord_25, parse_tree__comp_unit_interface__V_40_40, &parse_tree__comp_unit_interface__NoIFileItemsCord_26);
            }
#line 142 "comp_unit_interface.m"
            {
#line 142 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__IFileItems_27 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_45_45, parse_tree__comp_unit_interface__IFileItemsCord_25);
            }
#line 143 "comp_unit_interface.m"
            {
#line 143 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__NoIFileItems_28 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_45_45, parse_tree__comp_unit_interface__NoIFileItemsCord_26);
            }
#line 146 "comp_unit_interface.m"
            if ((parse_tree__comp_unit_interface__IFileItems_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_41_41 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
#line 146 "comp_unit_interface.m"
            else
#line 147 "comp_unit_interface.m"
              {
#line 147 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_31;

#line 148 "comp_unit_interface.m"
                {
#line 148 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__IFileItemBlock_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_31, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 148 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_31, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 148 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_31, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_27));
#line 148 "comp_unit_interface.m"
                }
#line 149 "comp_unit_interface.m"
                {
#line 149 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_41_41 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_31)));
                }
#line 147 "comp_unit_interface.m"
              }
#line 154 "comp_unit_interface.m"
            if ((parse_tree__comp_unit_interface__NoIFileItems_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_42_42 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
#line 154 "comp_unit_interface.m"
            else
#line 155 "comp_unit_interface.m"
              {
#line 155 "comp_unit_interface.m"
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_34;

#line 156 "comp_unit_interface.m"
                {
#line 156 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__NoIFileItemBlock_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 156 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_34, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
#line 156 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_34, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
#line 156 "comp_unit_interface.m"
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_34, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_28));
#line 156 "comp_unit_interface.m"
                }
#line 157 "comp_unit_interface.m"
                {
#line 157 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_42_42 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_34)));
                }
#line 155 "comp_unit_interface.m"
              }
#line 160 "comp_unit_interface.m"
            /* direct tailcall eliminated */
#line 160 "comp_unit_interface.m"
            {
#line 160 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
#line 160 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_41_41;
#line 160 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_42_42;

#line 160 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0__tmp_copy_6;
#line 160 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0__tmp_copy_4;
#line 160 "comp_unit_interface.m"
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__HeadVar__3__tmp_copy_3;
#line 160 "comp_unit_interface.m"
            }
#line 160 "comp_unit_interface.m"
            continue;
#line 137 "comp_unit_interface.m"
          }
#line 133 "comp_unit_interface.m"
      }
#line 133 "comp_unit_interface.m"
      break;
#line 133 "comp_unit_interface.m"
    }
#line 127 "comp_unit_interface.m"
}

#line 341 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 341 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 341 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 341 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 341 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 341 "comp_unit_interface.m"
{
#line 341 "comp_unit_interface.m"
  {
#line 341 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 341 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10;

#line 341 "comp_unit_interface.m"
    {
#line 341 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10);
    }
#line 341 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10));
#line 341 "comp_unit_interface.m"
  }
#line 341 "comp_unit_interface.m"
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
#line 340 "comp_unit_interface.m"
  {
#line 340 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 340 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_12_12;
#line 340 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_14_14;
#line 340 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_5;
#line 340 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_6_6;
#line 340 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7;
#line 341 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_5;

#line 341 "comp_unit_interface.m"
    {
#line 341 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 341 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 341 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
#line 341 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 341 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 341 "comp_unit_interface.m"
    }
#line 1663 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_12_12 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 342 "comp_unit_interface.m"
    {
#line 342 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_7_7 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12);
    }
#line 1670 "parse_tree.comp_unit_interface.c"
    {
#line 1672 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1674 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 1676 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 1678 "parse_tree.comp_unit_interface.c"
    }
#line 341 "comp_unit_interface.m"
    {
#line 341 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_14_14, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_6_6, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks_3, ((MR_Box) (parse_tree__comp_unit_interface__V_7_7)), &parse_tree__comp_unit_interface__conv1_LangSet_5);
    }
#line 341 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_5 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_5);
#line 343 "comp_unit_interface.m"
    {
#line 343 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12, parse_tree__comp_unit_interface__LangSet_5, parse_tree__comp_unit_interface__Langs_4);
#line 343 "comp_unit_interface.m"
      return;
    }
#line 340 "comp_unit_interface.m"
  }
#line 71 "comp_unit_interface.m"
}

#line 322 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 322 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 322 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1)
#line 322 "comp_unit_interface.m"
{
#line 322 "comp_unit_interface.m"
  {
#line 322 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__wrapper_arg_2;
#line 322 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 322 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv2_Item_6;

#line 322 "comp_unit_interface.m"
    {
#line 322 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1));
    }
#line 322 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__wrapper_arg_2 = ((MR_Box) (parse_tree__comp_unit_interface__conv2_Item_6));
#line 322 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__wrapper_arg_2;
#line 322 "comp_unit_interface.m"
  }
#line 322 "comp_unit_interface.m"
}

#line 314 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 314 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 314 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 314 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 314 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 314 "comp_unit_interface.m"
{
#line 314 "comp_unit_interface.m"
  {
#line 314 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 314 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10;

#line 314 "comp_unit_interface.m"
    {
#line 314 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10);
    }
#line 314 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10));
#line 314 "comp_unit_interface.m"
  }
#line 314 "comp_unit_interface.m"
}

#line 60 "comp_unit_interface.m"
void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0(
#line 60 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_19,
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
#line 313 "comp_unit_interface.m"
  {
#line 313 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_23_23;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_25_25;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_9;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_10;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 314 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_9;

#line 314 "comp_unit_interface.m"
    {
#line 314 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 314 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 314 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1));
#line 314 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_19));
#line 314 "comp_unit_interface.m"
    }
#line 1811 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 315 "comp_unit_interface.m"
    {
#line 315 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_23_23);
    }
#line 1818 "parse_tree.comp_unit_interface.c"
    {
#line 1820 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1822 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_25_25, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 1824 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_25_25, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_19));
#line 1826 "parse_tree.comp_unit_interface.c"
    }
#line 314 "comp_unit_interface.m"
    {
#line 314 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_25_25, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_15_15, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks0_7, ((MR_Box) (parse_tree__comp_unit_interface__V_16_16)), &parse_tree__comp_unit_interface__conv1_LangSet_9);
    }
#line 314 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_9 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_9);
#line 316 "comp_unit_interface.m"
    {
#line 316 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_23_23, parse_tree__comp_unit_interface__LangSet_9, &parse_tree__comp_unit_interface__Langs_10);
    }
#line 320 "comp_unit_interface.m"
    if ((parse_tree__comp_unit_interface__Langs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__ItemBlocks_8 = parse_tree__comp_unit_interface__ItemBlocks0_7;
#line 320 "comp_unit_interface.m"
    else
#line 321 "comp_unit_interface.m"
      {
#line 321 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItems_13;
#line 321 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItemBlock_14;
#line 321 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 321 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_18_18;

#line 322 "comp_unit_interface.m"
        {
#line 322 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2));
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 3) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_5));
#line 322 "comp_unit_interface.m"
        }
#line 322 "comp_unit_interface.m"
        {
#line 322 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItems_13 = mercury__list__map_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_23_23, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__V_17_17, parse_tree__comp_unit_interface__Langs_10);
        }
#line 323 "comp_unit_interface.m"
        {
#line 323 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_18_18 = mercury__term__context_init_0_f_0();
        }
#line 323 "comp_unit_interface.m"
        {
#line 323 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 323 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 0) = parse_tree__comp_unit_interface__Section_6;
#line 323 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__V_18_18));
#line 323 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 2) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItems_13));
#line 323 "comp_unit_interface.m"
        }
#line 324 "comp_unit_interface.m"
        {
#line 324 "comp_unit_interface.m"
          MR_Word base;
#line 324 "comp_unit_interface.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "comp_unit_interface.m"
          *parse_tree__comp_unit_interface__ItemBlocks_8 = base;
#line 324 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItemBlock_14));
#line 324 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemBlocks0_7));
#line 324 "comp_unit_interface.m"
        }
#line 321 "comp_unit_interface.m"
      }
#line 313 "comp_unit_interface.m"
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
#line 107 "comp_unit_interface.m"
  {
#line 107 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_19_19 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 0)));
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 2)));
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_12;
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13;
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_14;
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 107 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 108 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___ModuleNameContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 1)));

#line 112 "comp_unit_interface.m"
    {
#line 112 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
#line 112 "comp_unit_interface.m"
    {
#line 112 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_17_17 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
#line 110 "comp_unit_interface.m"
    {
#line 110 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__get_ifile_and_noifile_in_raw_item_blocks_acc_7_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_5, (MR_Integer) 1, parse_tree__comp_unit_interface__RawItemBlocks_11, parse_tree__comp_unit_interface__V_16_16, &parse_tree__comp_unit_interface__IFileItemBlocksCord_12, parse_tree__comp_unit_interface__V_17_17, &parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
#line 113 "comp_unit_interface.m"
    {
#line 113 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__IFileItemBlocks0_14 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__IFileItemBlocksCord_12);
    }
#line 114 "comp_unit_interface.m"
    {
#line 114 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__NoIFileItemBlocks_8 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
#line 116 "comp_unit_interface.m"
    {
#line 116 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_9, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_14, parse_tree__comp_unit_interface__IFileItemBlocks_7);
#line 116 "comp_unit_interface.m"
      return;
    }
#line 107 "comp_unit_interface.m"
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
  MR_Word * parse_tree__comp_unit_interface__IFileItemBlocks_6)
#line 42 "comp_unit_interface.m"
{
#line 90 "comp_unit_interface.m"
  {
#line 90 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_17_17 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 0)));
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 2)));
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_10;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_12;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_14_14;
#line 90 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 91 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___ModuleNameContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 1)));
#line 98 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11;

#line 100 "comp_unit_interface.m"
    {
#line 100 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_14_14 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_17_17);
    }
#line 100 "comp_unit_interface.m"
    {
#line 100 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_17_17);
    }
#line 98 "comp_unit_interface.m"
    {
#line 98 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__get_ifile_and_noifile_in_raw_item_blocks_acc_7_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_4, (MR_Integer) 0, parse_tree__comp_unit_interface__RawItemBlocks_9, parse_tree__comp_unit_interface__V_14_14, &parse_tree__comp_unit_interface__IFileItemBlocksCord_10, parse_tree__comp_unit_interface__V_15_15, &parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11);
    }
#line 101 "comp_unit_interface.m"
    {
#line 101 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__IFileItemBlocks0_12 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_17_17, parse_tree__comp_unit_interface__IFileItemBlocksCord_10);
    }
#line 103 "comp_unit_interface.m"
    {
#line 103 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_7, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_12, parse_tree__comp_unit_interface__IFileItemBlocks_6);
#line 103 "comp_unit_interface.m"
      return;
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
