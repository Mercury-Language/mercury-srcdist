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

#line 360 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 360 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 360 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5);

#line 351 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 351 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 351 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 351 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);

#line 349 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 349 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 349 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 349 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 349 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 344 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 344 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_13,
#line 344 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 344 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_9,
#line 344 "comp_unit_interface.m"
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

#line 340 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 340 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 340 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 340 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 340 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

#line 321 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 321 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 321 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1);

#line 313 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 313 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 313 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 313 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 313 "comp_unit_interface.m"
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



#line 399 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 407 "parse_tree.comp_unit_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

#line 415 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0 = {
  (MR_String) "dont_gather_noifile_items",
  (MR_Integer) 0
};

#line 421 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1 = {
  (MR_String) "gather_noifile_items",
  (MR_Integer) 1
};

#line 427 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 433 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

#line 439 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 445 "parse_tree.comp_unit_interface.c"
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

#line 462 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0 = {
  (MR_String) "dont_include_impl_types",
  (MR_Integer) 0
};

#line 468 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1 = {
  (MR_String) "include_impl_types",
  (MR_Integer) 1
};

#line 474 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 480 "parse_tree.comp_unit_interface.c"
static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

#line 486 "parse_tree.comp_unit_interface.c"
static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 492 "parse_tree.comp_unit_interface.c"
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

#line 509 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
#line 512 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 514 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 516 "parse_tree.comp_unit_interface.c"
{
#line 518 "parse_tree.comp_unit_interface.c"
  {
#line 520 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 523 "parse_tree.comp_unit_interface.c"
    {
#line 525 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 528 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 530 "parse_tree.comp_unit_interface.c"
  }
#line 532 "parse_tree.comp_unit_interface.c"
}

#line 535 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
#line 538 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 540 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 542 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 544 "parse_tree.comp_unit_interface.c"
{
#line 546 "parse_tree.comp_unit_interface.c"
  {
#line 548 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 551 "parse_tree.comp_unit_interface.c"
    {
#line 553 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 556 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 558 "parse_tree.comp_unit_interface.c"
  }
#line 560 "parse_tree.comp_unit_interface.c"
}

#line 563 "parse_tree.comp_unit_interface.c"
static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
#line 566 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 568 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
#line 570 "parse_tree.comp_unit_interface.c"
{
#line 572 "parse_tree.comp_unit_interface.c"
  {
#line 574 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded;

#line 577 "parse_tree.comp_unit_interface.c"
    {
#line 579 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
#line 582 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 584 "parse_tree.comp_unit_interface.c"
  }
#line 586 "parse_tree.comp_unit_interface.c"
}

#line 589 "parse_tree.comp_unit_interface.c"
static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
#line 592 "parse_tree.comp_unit_interface.c"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
#line 594 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 596 "parse_tree.comp_unit_interface.c"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
#line 598 "parse_tree.comp_unit_interface.c"
{
#line 600 "parse_tree.comp_unit_interface.c"
  {
#line 602 "parse_tree.comp_unit_interface.c"
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

#line 605 "parse_tree.comp_unit_interface.c"
    {
#line 607 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
#line 610 "parse_tree.comp_unit_interface.c"
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
#line 612 "parse_tree.comp_unit_interface.c"
  }
#line 614 "parse_tree.comp_unit_interface.c"
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
#line 658 "parse_tree.comp_unit_interface.c"
  {
#line 660 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 663 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 665 "parse_tree.comp_unit_interface.c"
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
#line 711 "parse_tree.comp_unit_interface.c"
  {
#line 713 "parse_tree.comp_unit_interface.c"
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

#line 716 "parse_tree.comp_unit_interface.c"
    return parse_tree__comp_unit_interface__succeeded;
#line 718 "parse_tree.comp_unit_interface.c"
  }
#line 121 "comp_unit_interface.m"
}

#line 360 "comp_unit_interface.m"
static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
#line 360 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
#line 360 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Lang_5)
#line 360 "comp_unit_interface.m"
{
#line 362 "comp_unit_interface.m"
  {
#line 362 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 362 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Item_6;
#line 362 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Info_9;
#line 362 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Pragma_10;
#line 362 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__ItemPragma_11;
#line 362 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_14_14;

#line 365 "comp_unit_interface.m"
    {
#line 365 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Info_9, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Lang_5));
#line 365 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Info_9, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_4));
#line 365 "comp_unit_interface.m"
    }
#line 366 "comp_unit_interface.m"
    {
#line 366 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Pragma_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 366 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_10, 1) = ((MR_Box) (parse_tree__comp_unit_interface__Info_9));
#line 366 "comp_unit_interface.m"
    }
#line 367 "comp_unit_interface.m"
    {
#line 367 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 367 "comp_unit_interface.m"
    {
#line 367 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__ItemPragma_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 367 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Pragma_10));
#line 367 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2])))));
#line 367 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 2) = ((MR_Box) (parse_tree__comp_unit_interface__V_14_14));
#line 367 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_11, 3) = ((MR_Box) ((MR_Integer) -1));
#line 367 "comp_unit_interface.m"
    }
#line 368 "comp_unit_interface.m"
    {
#line 368 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 368 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemPragma_11));
#line 368 "comp_unit_interface.m"
    }
#line 362 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__Item_6;
#line 362 "comp_unit_interface.m"
  }
#line 360 "comp_unit_interface.m"
}

#line 351 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
#line 351 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__Item_4,
#line 351 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
#line 351 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8)
#line 351 "comp_unit_interface.m"
{
#line 354 "comp_unit_interface.m"
  {
#line 354 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 354 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_6;

#line 355 "comp_unit_interface.m"
    {
#line 355 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__comp_unit_interface__Item_4);
    }
#line 356 "comp_unit_interface.m"
    {
#line 356 "comp_unit_interface.m"
      mercury__set__insert_list_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__comp_unit_interface__Langs_6, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);
#line 356 "comp_unit_interface.m"
      return;
    }
#line 354 "comp_unit_interface.m"
  }
#line 351 "comp_unit_interface.m"
}

#line 349 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
#line 349 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 349 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 349 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 349 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 349 "comp_unit_interface.m"
{
#line 349 "comp_unit_interface.m"
  {
#line 349 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 349 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8;

#line 349 "comp_unit_interface.m"
    {
#line 349 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8);
    }
#line 349 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8));
#line 349 "comp_unit_interface.m"
  }
#line 349 "comp_unit_interface.m"
}

#line 344 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
#line 344 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_13,
#line 344 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
#line 344 "comp_unit_interface.m"
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_9,
#line 344 "comp_unit_interface.m"
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_10)
#line 344 "comp_unit_interface.m"
{
#line 347 "comp_unit_interface.m"
  {
#line 347 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 347 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 2)));
#line 348 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 0));
#line 348 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 1)));
#line 349 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_10;

#line 349 "comp_unit_interface.m"
    {
#line 349 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) &parse_tree__comp_unit_interface_scalar_common_5[0], parse_tree__comp_unit_interface__Items_8, ((MR_Box) (parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_9)), &parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_10);
    }
#line 349 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_10 = ((MR_Word) parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_10);
#line 347 "comp_unit_interface.m"
  }
#line 344 "comp_unit_interface.m"
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
#line 246 "comp_unit_interface.m"
        parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 1;
#line 235 "comp_unit_interface.m"
        break;
#line 235 "comp_unit_interface.m"
      case (MR_Integer) 1:
#line 306 "comp_unit_interface.m"
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
#line 306 "comp_unit_interface.m"
            parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 235 "comp_unit_interface.m"
            break;
#line 235 "comp_unit_interface.m"
          case (MR_Integer) 4:
#line 249 "comp_unit_interface.m"
            {
#line 249 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__ItemPragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
#line 249 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__Pragma_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_14, (MR_Integer) 0)));
#line 250 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_14, (MR_Integer) 1)));
#line 250 "comp_unit_interface.m"
              MR_Word parse_tree__comp_unit_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_14, (MR_Integer) 2)));
#line 250 "comp_unit_interface.m"
              MR_Integer parse_tree__comp_unit_interface__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_14, (MR_Integer) 3)));

#line 256 "comp_unit_interface.m"
#line 256 "comp_unit_interface.m"
              switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Pragma_15)) {
#line 256 "comp_unit_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 256 "comp_unit_interface.m"
                case (MR_Integer) 0:
#line 256 "comp_unit_interface.m"
                case (MR_Integer) 1:
#line 291 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 256 "comp_unit_interface.m"
                  break;
#line 256 "comp_unit_interface.m"
                case (MR_Integer) 2:
#line 291 "comp_unit_interface.m"
                  parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 256 "comp_unit_interface.m"
                  break;
#line 256 "comp_unit_interface.m"
                case (MR_Integer) 3:
#line 256 "comp_unit_interface.m"
#line 256 "comp_unit_interface.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_15, (MR_Integer) 0)))) {
#line 256 "comp_unit_interface.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 0:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 3:
#line 255 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 1;
#line 256 "comp_unit_interface.m"
                      break;
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 1:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 2:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 4:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 5:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 6:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 7:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 8:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 9:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 10:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 11:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 12:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 13:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 14:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 15:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 16:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 17:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 18:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 19:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 20:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 21:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 22:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 23:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 24:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 25:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 26:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 27:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 28:
#line 256 "comp_unit_interface.m"
                    case (MR_Integer) 29:
#line 291 "comp_unit_interface.m"
                      parse_tree__comp_unit_interface__Include_4 = (MR_Integer) 0;
#line 256 "comp_unit_interface.m"
                      break;
#line 256 "comp_unit_interface.m"
                  }
#line 256 "comp_unit_interface.m"
                  break;
#line 256 "comp_unit_interface.m"
              }
#line 249 "comp_unit_interface.m"
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
#line 1316 "parse_tree.comp_unit_interface.c"
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

#line 340 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
#line 340 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 340 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 340 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 340 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 340 "comp_unit_interface.m"
{
#line 340 "comp_unit_interface.m"
  {
#line 340 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 340 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10;

#line 340 "comp_unit_interface.m"
    {
#line 340 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10);
    }
#line 340 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10));
#line 340 "comp_unit_interface.m"
  }
#line 340 "comp_unit_interface.m"
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
#line 339 "comp_unit_interface.m"
  {
#line 339 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 339 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_12_12;
#line 339 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_14_14;
#line 339 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_5;
#line 339 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_6_6;
#line 339 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_7_7;
#line 340 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_5;

#line 340 "comp_unit_interface.m"
    {
#line 340 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 340 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 340 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
#line 340 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_6_6, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 340 "comp_unit_interface.m"
    }
#line 1664 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_12_12 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 341 "comp_unit_interface.m"
    {
#line 341 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_7_7 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12);
    }
#line 1671 "parse_tree.comp_unit_interface.c"
    {
#line 1673 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1675 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 1677 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
#line 1679 "parse_tree.comp_unit_interface.c"
    }
#line 340 "comp_unit_interface.m"
    {
#line 340 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_14_14, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_6_6, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks_3, ((MR_Box) (parse_tree__comp_unit_interface__V_7_7)), &parse_tree__comp_unit_interface__conv1_LangSet_5);
    }
#line 340 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_5 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_5);
#line 342 "comp_unit_interface.m"
    {
#line 342 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12, parse_tree__comp_unit_interface__LangSet_5, parse_tree__comp_unit_interface__Langs_4);
#line 342 "comp_unit_interface.m"
      return;
    }
#line 339 "comp_unit_interface.m"
  }
#line 71 "comp_unit_interface.m"
}

#line 321 "comp_unit_interface.m"
static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
#line 321 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 321 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1)
#line 321 "comp_unit_interface.m"
{
#line 321 "comp_unit_interface.m"
  {
#line 321 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__wrapper_arg_2;
#line 321 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 321 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv2_Item_6;

#line 321 "comp_unit_interface.m"
    {
#line 321 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1));
    }
#line 321 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__wrapper_arg_2 = ((MR_Box) (parse_tree__comp_unit_interface__conv2_Item_6));
#line 321 "comp_unit_interface.m"
    return parse_tree__comp_unit_interface__wrapper_arg_2;
#line 321 "comp_unit_interface.m"
  }
#line 321 "comp_unit_interface.m"
}

#line 313 "comp_unit_interface.m"
static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
#line 313 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__closure_arg,
#line 313 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
#line 313 "comp_unit_interface.m"
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
#line 313 "comp_unit_interface.m"
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
#line 313 "comp_unit_interface.m"
{
#line 313 "comp_unit_interface.m"
  {
#line 313 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
#line 313 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10;

#line 313 "comp_unit_interface.m"
    {
#line 313 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10);
    }
#line 313 "comp_unit_interface.m"
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_10));
#line 313 "comp_unit_interface.m"
  }
#line 313 "comp_unit_interface.m"
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
#line 312 "comp_unit_interface.m"
  {
#line 312 "comp_unit_interface.m"
    MR_bool parse_tree__comp_unit_interface__succeeded;
#line 312 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_23_23;
#line 312 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__TypeInfo_25_25;
#line 312 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__LangSet_9;
#line 312 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__Langs_10;
#line 312 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_15_15;
#line 312 "comp_unit_interface.m"
    MR_Word parse_tree__comp_unit_interface__V_16_16;
#line 313 "comp_unit_interface.m"
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_9;

#line 313 "comp_unit_interface.m"
    {
#line 313 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
#line 313 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1));
#line 313 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 313 "comp_unit_interface.m"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_15_15, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_19));
#line 313 "comp_unit_interface.m"
    }
#line 1812 "parse_tree.comp_unit_interface.c"
    parse_tree__comp_unit_interface__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 314 "comp_unit_interface.m"
    {
#line 314 "comp_unit_interface.m"
      parse_tree__comp_unit_interface__V_16_16 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_23_23);
    }
#line 1819 "parse_tree.comp_unit_interface.c"
    {
#line 1821 "parse_tree.comp_unit_interface.c"
      parse_tree__comp_unit_interface__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1823 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_25_25, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 1825 "parse_tree.comp_unit_interface.c"
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_25_25, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_19));
#line 1827 "parse_tree.comp_unit_interface.c"
    }
#line 313 "comp_unit_interface.m"
    {
#line 313 "comp_unit_interface.m"
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_25_25, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__V_15_15, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks0_7, ((MR_Box) (parse_tree__comp_unit_interface__V_16_16)), &parse_tree__comp_unit_interface__conv1_LangSet_9);
    }
#line 313 "comp_unit_interface.m"
    parse_tree__comp_unit_interface__LangSet_9 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_9);
#line 315 "comp_unit_interface.m"
    {
#line 315 "comp_unit_interface.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_23_23, parse_tree__comp_unit_interface__LangSet_9, &parse_tree__comp_unit_interface__Langs_10);
    }
#line 319 "comp_unit_interface.m"
    if ((parse_tree__comp_unit_interface__Langs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "comp_unit_interface.m"
      *parse_tree__comp_unit_interface__ItemBlocks_8 = parse_tree__comp_unit_interface__ItemBlocks0_7;
#line 319 "comp_unit_interface.m"
    else
#line 320 "comp_unit_interface.m"
      {
#line 320 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItems_13;
#line 320 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__ImportItemBlock_14;
#line 320 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_17_17;
#line 320 "comp_unit_interface.m"
        MR_Word parse_tree__comp_unit_interface__V_18_18;

#line 321 "comp_unit_interface.m"
        {
#line 321 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 321 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
#line 321 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2));
#line 321 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__V_17_17, 3) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_5));
#line 321 "comp_unit_interface.m"
        }
#line 321 "comp_unit_interface.m"
        {
#line 321 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItems_13 = mercury__list__map_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_23_23, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__V_17_17, parse_tree__comp_unit_interface__Langs_10);
        }
#line 322 "comp_unit_interface.m"
        {
#line 322 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__V_18_18 = mercury__term__context_init_0_f_0();
        }
#line 322 "comp_unit_interface.m"
        {
#line 322 "comp_unit_interface.m"
          parse_tree__comp_unit_interface__ImportItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 0) = parse_tree__comp_unit_interface__Section_6;
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__V_18_18));
#line 322 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 2) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItems_13));
#line 322 "comp_unit_interface.m"
        }
#line 323 "comp_unit_interface.m"
        {
#line 323 "comp_unit_interface.m"
          MR_Word base;
#line 323 "comp_unit_interface.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "comp_unit_interface.m"
          *parse_tree__comp_unit_interface__ItemBlocks_8 = base;
#line 323 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItemBlock_14));
#line 323 "comp_unit_interface.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemBlocks0_7));
#line 323 "comp_unit_interface.m"
        }
#line 320 "comp_unit_interface.m"
      }
#line 312 "comp_unit_interface.m"
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
