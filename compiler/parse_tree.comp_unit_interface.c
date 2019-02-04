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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2];

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2];

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__Section_3,
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__Section_3,
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
  MR_Word parse_tree__comp_unit_interface__Lang_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word parse_tree__comp_unit_interface__Item_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_15,
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
  MR_Word parse_tree__comp_unit_interface__Item_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0 = {
  (MR_String) "dont_gather_noifile_items",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1 = {
  (MR_String) "gather_noifile_items",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_gather_noifile_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0 = {
  (MR_String) "dont_include_impl_types",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1 = {
  (MR_String) "include_impl_types",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_include_impl_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;

    {
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
    return parse_tree__comp_unit_interface__succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
{
  {
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

    {
      parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;

    {
      parse_tree__comp_unit_interface__succeeded = parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2));
    }
    return parse_tree__comp_unit_interface__succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_3)
{
  {
    MR_Word parse_tree__comp_unit_interface__conv0_HeadVar__1_1;

    {
      parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(&parse_tree__comp_unit_interface__conv0_HeadVar__1_1, ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_3));
    }
    *parse_tree__comp_unit_interface__wrapper_arg_1 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__Section_3,
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__comp_unit_interface__succeeded;

        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
          }
        else
          {
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

            switch (parse_tree__comp_unit_interface__Section_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__comp_unit_interface__IFileItem_28;
                  MR_Word parse_tree__comp_unit_interface__Var_34;

                  {
                    parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                  }
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
                  if (parse_tree__comp_unit_interface__succeeded)
                    {
                      {
                        parse_tree__comp_unit_interface__Var_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
                      parse_tree__comp_unit_interface__succeeded = ((MR_tag((MR_Word) parse_tree__comp_unit_interface__Var_34)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__comp_unit_interface__succeeded)
                        parse_tree__comp_unit_interface__IFileItem_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__Var_34, (MR_Integer) 0)));
                    }
                  if (parse_tree__comp_unit_interface__succeeded)
                    {
                      {
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
                    }
                  else
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (parse_tree__comp_unit_interface__succeeded)
                    {
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
                      {
                        MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_41_41;
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

                        {
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
                        {
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
                        }
                        parse_tree__comp_unit_interface__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
                        {
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_41_41, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
                        {
                          parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_41_41, parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                        }
                      }
                    }
                  else
                    {
                      {
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
                    }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__comp_unit_interface__next_value_of_HeadVar__4_4 = parse_tree__comp_unit_interface__Items_22;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7;
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemsCord_0_5;
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__Section_3,
  MR_Word parse_tree__comp_unit_interface__HeadVar__4_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__comp_unit_interface__succeeded;

        if ((parse_tree__comp_unit_interface__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_8 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
          }
        else
          {
            MR_Word parse_tree__comp_unit_interface__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__comp_unit_interface__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

            switch (parse_tree__comp_unit_interface__Section_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__comp_unit_interface__IFileItem_28;
                  MR_Word parse_tree__comp_unit_interface__Var_34;

                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IncludeImplTypes_1 == (MR_Integer) 1);
                  if (parse_tree__comp_unit_interface__succeeded)
                    {
                      {
                        parse_tree__comp_unit_interface__Var_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(parse_tree__comp_unit_interface__Item_21);
                      }
                      parse_tree__comp_unit_interface__succeeded = ((MR_tag((MR_Word) parse_tree__comp_unit_interface__Var_34)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__comp_unit_interface__succeeded)
                        parse_tree__comp_unit_interface__IFileItem_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__Var_34, (MR_Integer) 0)));
                    }
                  if (parse_tree__comp_unit_interface__succeeded)
                    {
                      {
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__IFileItem_28)));
                      }
                    }
                  else
                    parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__comp_unit_interface__ItemInstance_25;

                  parse_tree__comp_unit_interface__succeeded = ((((MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (parse_tree__comp_unit_interface__succeeded)
                    {
                      parse_tree__comp_unit_interface__ItemInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_21, (MR_Integer) 1)));
                      {
                        MR_Word parse_tree__comp_unit_interface__AbstractItemInstance_26;
                        MR_Word parse_tree__comp_unit_interface__AbstractItem_27;

                        {
                          parse_tree__comp_unit_interface__AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__comp_unit_interface__ItemInstance_25);
                        }
                        {
                          parse_tree__comp_unit_interface__AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemInstance_26));
                        }
                        {
                          parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_27)));
                        }
                        parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
                      }
                    }
                  else
                    {
                      {
                        parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (parse_tree__comp_unit_interface__Item_21)));
                      }
                      parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7;
                    }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__comp_unit_interface__next_value_of_HeadVar__4_4 = parse_tree__comp_unit_interface__Items_22;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_36_36;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_37_37;

              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemsCord_0_7 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7;
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemsCord_0_5 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemsCord_0_5;
              parse_tree__comp_unit_interface__HeadVar__4_4 = parse_tree__comp_unit_interface__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__comp_unit_interface__succeeded;

        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
          }
        else
          {
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_47_47;
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
            MR_Word parse_tree__comp_unit_interface__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
            MR_Word parse_tree__comp_unit_interface__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 3)));
            MR_Word parse_tree__comp_unit_interface__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 4)));
            MR_Word parse_tree__comp_unit_interface__IFileIncls_27;
            MR_Word parse_tree__comp_unit_interface__IFileAvails_28;
            MR_Word parse_tree__comp_unit_interface__NoIFileIncls_29;
            MR_Word parse_tree__comp_unit_interface__NoIFileAvails_30;
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_31;
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_32;
            MR_Word parse_tree__comp_unit_interface__IFileItems_33;
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_34;
            MR_Word parse_tree__comp_unit_interface__Var_41;
            MR_Word parse_tree__comp_unit_interface__Var_42;
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

            switch (parse_tree__comp_unit_interface__Section_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  switch (parse_tree__comp_unit_interface__IncludeImplTypes_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        parse_tree__comp_unit_interface__IFileIncls_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        parse_tree__comp_unit_interface__IFileAvails_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
                        parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
                      }
                      break;
                  }
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = parse_tree__comp_unit_interface__Incls_24;
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = parse_tree__comp_unit_interface__Avails_25;
                }
                break;
              case (MR_Integer) 0:
                {
                  parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
                  parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
            }
            parse_tree__comp_unit_interface__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
            {
              parse_tree__comp_unit_interface__Var_41 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
            {
              parse_tree__comp_unit_interface__Var_42 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
            {
              parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_26, parse_tree__comp_unit_interface__Var_41, &parse_tree__comp_unit_interface__IFileItemsCord_31, parse_tree__comp_unit_interface__Var_42, &parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
            {
              parse_tree__comp_unit_interface__IFileItems_33 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__IFileItemsCord_31);
            }
            {
              parse_tree__comp_unit_interface__NoIFileItems_34 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileIncls_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__comp_unit_interface__succeeded)
              {
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileAvails_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__comp_unit_interface__succeeded)
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileItems_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (parse_tree__comp_unit_interface__succeeded)
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
            else
              {
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_35;

                {
                  parse_tree__comp_unit_interface__IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileIncls_27));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 3) = ((MR_Box) (parse_tree__comp_unit_interface__IFileAvails_28));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 4) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_33));
                }
                {
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_35)));
                }
              }
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileIncls_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__comp_unit_interface__succeeded)
              {
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileAvails_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__comp_unit_interface__succeeded)
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileItems_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (parse_tree__comp_unit_interface__succeeded)
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
            else
              {
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_36;

                {
                  parse_tree__comp_unit_interface__NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileIncls_29));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 3) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileAvails_30));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 4) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_34));
                }
                {
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_36)));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__comp_unit_interface__next_value_of_HeadVar__3_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4;
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__comp_unit_interface__succeeded;

        if ((parse_tree__comp_unit_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_7 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
            *parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_5 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
          }
        else
          {
            MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_47_47;
            MR_Word parse_tree__comp_unit_interface__RawItemBlock_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__comp_unit_interface__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__comp_unit_interface__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 0)));
            MR_Word parse_tree__comp_unit_interface__SectionContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 1)));
            MR_Word parse_tree__comp_unit_interface__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 2)));
            MR_Word parse_tree__comp_unit_interface__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 3)));
            MR_Word parse_tree__comp_unit_interface__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawItemBlock_18, (MR_Integer) 4)));
            MR_Word parse_tree__comp_unit_interface__IFileIncls_27;
            MR_Word parse_tree__comp_unit_interface__IFileAvails_28;
            MR_Word parse_tree__comp_unit_interface__NoIFileIncls_29;
            MR_Word parse_tree__comp_unit_interface__NoIFileAvails_30;
            MR_Word parse_tree__comp_unit_interface__IFileItemsCord_31;
            MR_Word parse_tree__comp_unit_interface__NoIFileItemsCord_32;
            MR_Word parse_tree__comp_unit_interface__IFileItems_33;
            MR_Word parse_tree__comp_unit_interface__NoIFileItems_34;
            MR_Word parse_tree__comp_unit_interface__Var_41;
            MR_Word parse_tree__comp_unit_interface__Var_42;
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
            MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

            switch (parse_tree__comp_unit_interface__Section_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  switch (parse_tree__comp_unit_interface__IncludeImplTypes_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        parse_tree__comp_unit_interface__IFileIncls_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        parse_tree__comp_unit_interface__IFileAvails_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
                        parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
                      }
                      break;
                  }
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 0:
                {
                  parse_tree__comp_unit_interface__IFileIncls_27 = parse_tree__comp_unit_interface__Incls_24;
                  parse_tree__comp_unit_interface__IFileAvails_28 = parse_tree__comp_unit_interface__Avails_25;
                  parse_tree__comp_unit_interface__NoIFileIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__comp_unit_interface__NoIFileAvails_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
            }
            parse_tree__comp_unit_interface__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
            {
              parse_tree__comp_unit_interface__Var_41 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
            {
              parse_tree__comp_unit_interface__Var_42 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47);
            }
            {
              parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_1, parse_tree__comp_unit_interface__Section_22, parse_tree__comp_unit_interface__Items_26, parse_tree__comp_unit_interface__Var_41, &parse_tree__comp_unit_interface__IFileItemsCord_31, parse_tree__comp_unit_interface__Var_42, &parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
            {
              parse_tree__comp_unit_interface__IFileItems_33 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__IFileItemsCord_31);
            }
            {
              parse_tree__comp_unit_interface__NoIFileItems_34 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_47_47, parse_tree__comp_unit_interface__NoIFileItemsCord_32);
            }
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileIncls_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__comp_unit_interface__succeeded)
              {
                parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileAvails_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__comp_unit_interface__succeeded)
                  parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__IFileItems_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (parse_tree__comp_unit_interface__succeeded)
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4;
            else
              {
                MR_Word parse_tree__comp_unit_interface__IFileItemBlock_35;

                {
                  parse_tree__comp_unit_interface__IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileIncls_27));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 3) = ((MR_Box) (parse_tree__comp_unit_interface__IFileAvails_28));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__IFileItemBlock_35, 4) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItems_33));
                }
                {
                  parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlock_35)));
                }
              }
            parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__NoIFileItems_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__comp_unit_interface__succeeded)
              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
            else
              {
                MR_Word parse_tree__comp_unit_interface__NoIFileItemBlock_36;

                {
                  parse_tree__comp_unit_interface__NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Section_22));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__SectionContext_23));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 2) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileIncls_29));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 3) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileAvails_30));
                  MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__NoIFileItemBlock_36, 4) = ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItems_34));
                }
                {
                  parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0], parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (parse_tree__comp_unit_interface__NoIFileItemBlock_36)));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__comp_unit_interface__next_value_of_HeadVar__3_3 = parse_tree__comp_unit_interface__RawItemBlocks_19;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_43_43;
              MR_Word parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_44_44;

              parse_tree__comp_unit_interface__STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
              parse_tree__comp_unit_interface__STATE_VARIABLE_IFileItemBlocksCord_0_4 = parse_tree__comp_unit_interface__next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4;
              parse_tree__comp_unit_interface__HeadVar__3_3 = parse_tree__comp_unit_interface__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar1_4 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__2_2;
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar2_5 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__comp_unit_interface__HeadVar__1_1, parse_tree__comp_unit_interface__Cast_HeadVar1_4, parse_tree__comp_unit_interface__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

    return parse_tree__comp_unit_interface__succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
  MR_Word * parse_tree__comp_unit_interface__HeadVar__1_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2,
  MR_Word parse_tree__comp_unit_interface__HeadVar__3_3)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar1_4 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__2_2;
    MR_Integer parse_tree__comp_unit_interface__Cast_HeadVar2_5 = (MR_Integer) parse_tree__comp_unit_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__comp_unit_interface__HeadVar__1_1, parse_tree__comp_unit_interface__Cast_HeadVar1_4, parse_tree__comp_unit_interface__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_1,
  MR_Word parse_tree__comp_unit_interface__HeadVar__2_2)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded = (parse_tree__comp_unit_interface__HeadVar__2_1 == parse_tree__comp_unit_interface__HeadVar__2_2);

    return parse_tree__comp_unit_interface__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
  MR_Word parse_tree__comp_unit_interface__ModuleName_4,
  MR_Word parse_tree__comp_unit_interface__Lang_5)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__Item_6;
    MR_Word parse_tree__comp_unit_interface__FIM_9;
    MR_Word parse_tree__comp_unit_interface__Info_10;
    MR_Word parse_tree__comp_unit_interface__Pragma_11;
    MR_Word parse_tree__comp_unit_interface__ItemPragma_12;
    MR_Word parse_tree__comp_unit_interface__Var_15;

    {
      parse_tree__comp_unit_interface__FIM_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__FIM_9, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Lang_5));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__FIM_9, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_4));
    }
    parse_tree__comp_unit_interface__Info_10 = (MR_Word) parse_tree__comp_unit_interface__FIM_9;
    {
      parse_tree__comp_unit_interface__Pragma_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, 1) = ((MR_Box) (parse_tree__comp_unit_interface__Info_10));
    }
    {
      parse_tree__comp_unit_interface__Var_15 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__comp_unit_interface__ItemPragma_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Pragma_11));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2])))));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 2) = ((MR_Box) (parse_tree__comp_unit_interface__Var_15));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_12, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      parse_tree__comp_unit_interface__Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemPragma_12));
    }
    return parse_tree__comp_unit_interface__Item_6;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word parse_tree__comp_unit_interface__Item_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__Langs_6;

    {
      parse_tree__comp_unit_interface__Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__comp_unit_interface__Item_4);
    }
    {
      mercury__set__insert_list_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__comp_unit_interface__Langs_6, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_7, parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_8);
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
{
  {
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8;

    {
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8);
    }
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_15,
  MR_Word parse_tree__comp_unit_interface__ItemBlock_4,
  MR_Word parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11,
  MR_Word * parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 4)));
    MR_Box parse_tree__comp_unit_interface__Var_6 = (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 0));
    MR_Word parse_tree__comp_unit_interface__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 1)));
    MR_Word parse_tree__comp_unit_interface__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 2)));
    MR_Word parse_tree__comp_unit_interface__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemBlock_4, (MR_Integer) 3)));
    MR_Box parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12;

    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) &parse_tree__comp_unit_interface_scalar_common_5[0], parse_tree__comp_unit_interface__Items_10, ((MR_Box) (parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_0_11)), &parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12);
    }
    *parse_tree__comp_unit_interface__STATE_VARIABLE_LangSet_12 = ((MR_Word) parse_tree__comp_unit_interface__conv1_STATE_VARIABLE_LangSet_12);
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
  MR_Word parse_tree__comp_unit_interface__Item_3)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__MaybeIFileItem_4;

    switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__comp_unit_interface__ItemTypeDefnInfo_5 = (MR_Word) MR_body(((MR_Word) parse_tree__comp_unit_interface__Item_3), (MR_Integer) 1);
          MR_Word parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6;
          MR_Word parse_tree__comp_unit_interface__AbstractItem_7;

          {
            parse_tree__item_util__maybe_make_abstract_type_defn_3_p_0((MR_Integer) 0, parse_tree__comp_unit_interface__ItemTypeDefnInfo_5, &parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6);
          }
          parse_tree__comp_unit_interface__AbstractItem_7 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__comp_unit_interface__MaybeAbstractItemTypeDefnInfo_6);
          {
            parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__comp_unit_interface__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
              MR_Word parse_tree__comp_unit_interface__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 0)));
              MR_Word parse_tree__comp_unit_interface__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 1)));
              MR_Word parse_tree__comp_unit_interface__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 2)));
              MR_Integer parse_tree__comp_unit_interface__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ItemPragma_10, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) parse_tree__comp_unit_interface__Pragma_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 2:
                  parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Pragma_11, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                    case (MR_Integer) 10:
                    case (MR_Integer) 11:
                    case (MR_Integer) 12:
                    case (MR_Integer) 13:
                    case (MR_Integer) 14:
                    case (MR_Integer) 15:
                    case (MR_Integer) 16:
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                    case (MR_Integer) 19:
                    case (MR_Integer) 20:
                    case (MR_Integer) 21:
                    case (MR_Integer) 22:
                    case (MR_Integer) 23:
                    case (MR_Integer) 24:
                    case (MR_Integer) 25:
                    case (MR_Integer) 26:
                    case (MR_Integer) 27:
                    case (MR_Integer) 28:
                    case (MR_Integer) 30:
                    case (MR_Integer) 31:
                      parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 29:
                      {
                        parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__Item_3));
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__comp_unit_interface__ItemTypeClassInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__Item_3, (MR_Integer) 1)));
              MR_Word parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9;
              MR_Word parse_tree__comp_unit_interface__AbstractItem_62;

              {
                parse_tree__item_util__make_abstract_typeclass_2_p_0(parse_tree__comp_unit_interface__ItemTypeClassInfo_8, &parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9);
              }
              {
                parse_tree__comp_unit_interface__AbstractItem_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__comp_unit_interface__AbstractItem_62, 1) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItemTypeClassInfo_9));
              }
              {
                parse_tree__comp_unit_interface__MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__comp_unit_interface__MaybeIFileItem_4, 0) = ((MR_Box) (parse_tree__comp_unit_interface__AbstractItem_62));
              }
            }
            break;
        }
        break;
    }
    return parse_tree__comp_unit_interface__MaybeIFileItem_4;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
{
  {
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12;

    {
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12);
    }
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0(
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_8,
  MR_Word parse_tree__comp_unit_interface__ItemBlocks_3,
  MR_Word * parse_tree__comp_unit_interface__Langs_4)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_12_12;
    MR_Word parse_tree__comp_unit_interface__TypeInfo_14_14;
    MR_Word parse_tree__comp_unit_interface__LangSet_5;
    MR_Word parse_tree__comp_unit_interface__Var_6;
    MR_Word parse_tree__comp_unit_interface__Var_7;
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_5;

    {
      parse_tree__comp_unit_interface__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_6, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
    }
    parse_tree__comp_unit_interface__TypeCtorInfo_12_12 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
    {
      parse_tree__comp_unit_interface__Var_7 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12);
    }
    {
      parse_tree__comp_unit_interface__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_8));
    }
    {
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_14_14, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__Var_6, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks_3, ((MR_Box) (parse_tree__comp_unit_interface__Var_7)), &parse_tree__comp_unit_interface__conv1_LangSet_5);
    }
    parse_tree__comp_unit_interface__LangSet_5 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_5);
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_12_12, parse_tree__comp_unit_interface__LangSet_5, parse_tree__comp_unit_interface__Langs_4);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1)
{
  {
    MR_Box parse_tree__comp_unit_interface__wrapper_arg_2;
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
    MR_Word parse_tree__comp_unit_interface__conv2_Item_6;

    {
      parse_tree__comp_unit_interface__conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1));
    }
    parse_tree__comp_unit_interface__wrapper_arg_2 = ((MR_Box) (parse_tree__comp_unit_interface__conv2_Item_6));
    return parse_tree__comp_unit_interface__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
  MR_Box parse_tree__comp_unit_interface__closure_arg,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_1,
  MR_Box parse_tree__comp_unit_interface__wrapper_arg_2,
  MR_Box * parse_tree__comp_unit_interface__wrapper_arg_3)
{
  {
    MR_Box parse_tree__comp_unit_interface__closure = parse_tree__comp_unit_interface__closure_arg;
    MR_Word parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12;

    {
      parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_1), ((MR_Word) parse_tree__comp_unit_interface__wrapper_arg_2), &parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12);
    }
    *parse_tree__comp_unit_interface__wrapper_arg_3 = ((MR_Box) (parse_tree__comp_unit_interface__conv0_STATE_VARIABLE_LangSet_12));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0(
  MR_Word parse_tree__comp_unit_interface__TypeInfo_for_MS_21,
  MR_Word parse_tree__comp_unit_interface__ModuleName_5,
  MR_Box parse_tree__comp_unit_interface__Section_6,
  MR_Word parse_tree__comp_unit_interface__ItemBlocks0_7,
  MR_Word * parse_tree__comp_unit_interface__ItemBlocks_8)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__TypeCtorInfo_25_25;
    MR_Word parse_tree__comp_unit_interface__TypeInfo_27_27;
    MR_Word parse_tree__comp_unit_interface__LangSet_9;
    MR_Word parse_tree__comp_unit_interface__Langs_10;
    MR_Word parse_tree__comp_unit_interface__Var_15;
    MR_Word parse_tree__comp_unit_interface__Var_16;
    MR_Box parse_tree__comp_unit_interface__conv1_LangSet_9;

    {
      parse_tree__comp_unit_interface__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_15, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_15, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_15, 3) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_21));
    }
    parse_tree__comp_unit_interface__TypeCtorInfo_25_25 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
    {
      parse_tree__comp_unit_interface__Var_16 = mercury__set__init_0_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25);
    }
    {
      parse_tree__comp_unit_interface__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_27_27, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__TypeInfo_27_27, 1) = ((MR_Box) (parse_tree__comp_unit_interface__TypeInfo_for_MS_21));
    }
    {
      mercury__list__foldl_4_p_0(parse_tree__comp_unit_interface__TypeInfo_27_27, (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[1], (MR_Word) parse_tree__comp_unit_interface__Var_15, (MR_Word) parse_tree__comp_unit_interface__ItemBlocks0_7, ((MR_Box) (parse_tree__comp_unit_interface__Var_16)), &parse_tree__comp_unit_interface__conv1_LangSet_9);
    }
    parse_tree__comp_unit_interface__LangSet_9 = ((MR_Word) parse_tree__comp_unit_interface__conv1_LangSet_9);
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25, parse_tree__comp_unit_interface__LangSet_9, &parse_tree__comp_unit_interface__Langs_10);
    }
    if ((parse_tree__comp_unit_interface__Langs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__comp_unit_interface__ItemBlocks_8 = parse_tree__comp_unit_interface__ItemBlocks0_7;
    else
      {
        MR_Word parse_tree__comp_unit_interface__ImportItems_13;
        MR_Word parse_tree__comp_unit_interface__ImportItemBlock_14;
        MR_Word parse_tree__comp_unit_interface__Var_17;
        MR_Word parse_tree__comp_unit_interface__Var_18;

        {
          parse_tree__comp_unit_interface__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_17, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_17, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2));
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__Var_17, 3) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_5));
        }
        {
          parse_tree__comp_unit_interface__ImportItems_13 = mercury__list__map_2_f_0(parse_tree__comp_unit_interface__TypeCtorInfo_25_25, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__comp_unit_interface__Var_17, parse_tree__comp_unit_interface__Langs_10);
        }
        {
          parse_tree__comp_unit_interface__Var_18 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__comp_unit_interface__ImportItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 0) = parse_tree__comp_unit_interface__Section_6;
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 1) = ((MR_Box) (parse_tree__comp_unit_interface__Var_18));
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__ImportItemBlock_14, 4) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItems_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__comp_unit_interface__ItemBlocks_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ImportItemBlock_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ItemBlocks0_7));
        }
      }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_int_and_impl_4_p_0(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_5,
  MR_Word parse_tree__comp_unit_interface__RawCompUnit_6,
  MR_Word * parse_tree__comp_unit_interface__IFileItemBlocks_7,
  MR_Word * parse_tree__comp_unit_interface__NoIFileItemBlocks_8)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__TypeInfo_19_19 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
    MR_Word parse_tree__comp_unit_interface__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 0)));
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 2)));
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_12;
    MR_Word parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13;
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_14;
    MR_Word parse_tree__comp_unit_interface__Var_16;
    MR_Word parse_tree__comp_unit_interface__Var_17;
    MR_Word parse_tree__comp_unit_interface___ModuleNameContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_6, (MR_Integer) 1)));

    {
      parse_tree__comp_unit_interface__Var_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
    {
      parse_tree__comp_unit_interface__Var_17 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19);
    }
    {
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(parse_tree__comp_unit_interface__IncludeImplTypes_5, parse_tree__comp_unit_interface__RawItemBlocks_11, parse_tree__comp_unit_interface__Var_16, &parse_tree__comp_unit_interface__IFileItemBlocksCord_12, parse_tree__comp_unit_interface__Var_17, &parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
    {
      parse_tree__comp_unit_interface__IFileItemBlocks0_14 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__IFileItemBlocksCord_12);
    }
    {
      *parse_tree__comp_unit_interface__NoIFileItemBlocks_8 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_19_19, parse_tree__comp_unit_interface__NoIFileItemBlocksCord_13);
    }
    {
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_9, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_14, parse_tree__comp_unit_interface__IFileItemBlocks_7);
    }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_interface_3_p_0(
  MR_Word parse_tree__comp_unit_interface__IncludeImplTypes_4,
  MR_Word parse_tree__comp_unit_interface__RawCompUnit_5,
  MR_Word * parse_tree__comp_unit_interface__InterfaceRawCompUnit_6)
{
  {
    MR_bool parse_tree__comp_unit_interface__succeeded;
    MR_Word parse_tree__comp_unit_interface__TypeInfo_18_18 = (MR_Word) &parse_tree__comp_unit_interface_scalar_common_1[0];
    MR_Word parse_tree__comp_unit_interface__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 0)));
    MR_Word parse_tree__comp_unit_interface__ModuleNameContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 1)));
    MR_Word parse_tree__comp_unit_interface__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__comp_unit_interface__RawCompUnit_5, (MR_Integer) 2)));
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocksCord_10;
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks0_12;
    MR_Word parse_tree__comp_unit_interface__IFileItemBlocks_13;
    MR_Word parse_tree__comp_unit_interface__Var_15;
    MR_Word parse_tree__comp_unit_interface__Var_16;
    MR_Word parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11;

    {
      parse_tree__comp_unit_interface__Var_15 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18);
    }
    {
      parse_tree__comp_unit_interface__Var_16 = mercury__cord__init_0_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18);
    }
    {
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(parse_tree__comp_unit_interface__IncludeImplTypes_4, parse_tree__comp_unit_interface__RawItemBlocks_9, parse_tree__comp_unit_interface__Var_15, &parse_tree__comp_unit_interface__IFileItemBlocksCord_10, parse_tree__comp_unit_interface__Var_16, &parse_tree__comp_unit_interface___NoIFileItemBlocksCord_11);
    }
    {
      parse_tree__comp_unit_interface__IFileItemBlocks0_12 = mercury__cord__list_1_f_0(parse_tree__comp_unit_interface__TypeInfo_18_18, parse_tree__comp_unit_interface__IFileItemBlocksCord_10);
    }
    {
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__comp_unit_interface__ModuleName_7, ((MR_Box) ((MR_Integer) 0)), parse_tree__comp_unit_interface__IFileItemBlocks0_12, &parse_tree__comp_unit_interface__IFileItemBlocks_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__comp_unit_interface__InterfaceRawCompUnit_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__comp_unit_interface__ModuleNameContext_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__comp_unit_interface__IFileItemBlocks_13));
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__comp_unit_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.comp_unit_interface. */
