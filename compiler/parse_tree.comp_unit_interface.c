/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2019-01-31
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.comp_unit_interface.
// :- implementation.

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
#include "multi_map.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_implicit_langs_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_NotagFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_implicit_langs_0;

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

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_avails_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_avails_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_avails_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_fims_0[1];

static const MR_NotagFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_need_fims_0;

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_fims_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_fims_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_avails_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_avails_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____implicit_langs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____implicit_langs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_LangSet_0_7,
  MR_Word * STATE_VARIABLE_LangSet_8);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word TypeInfo_for_MS_15,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_LangSet_0_11,
  MR_Word * STATE_VARIABLE_LangSet_12);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_for_item_blocks_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntAvails_0_4,
  MR_Word * STATE_VARIABLE_IntAvails_5,
  MR_Word STATE_VARIABLE_IntItems_0_6,
  MR_Word * STATE_VARIABLE_IntItems_7,
  MR_Word STATE_VARIABLE_StdFIMItems_0_8,
  MR_Word * STATE_VARIABLE_StdFIMItems_9,
  MR_Word STATE_VARIABLE_NeedAvails_0_10,
  MR_Word * STATE_VARIABLE_NeedAvails_11,
  MR_Word STATE_VARIABLE_NeedFIMs_0_12,
  MR_Word * STATE_VARIABLE_NeedFIMs_13,
  MR_Word STATE_VARIABLE_ImplicitLangs_0_14,
  MR_Word * STATE_VARIABLE_ImplicitLangs_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_for_items_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItems_0_2,
  MR_Word * STATE_VARIABLE_IntItems_3,
  MR_Word STATE_VARIABLE_StdFIMItems_0_4,
  MR_Word * STATE_VARIABLE_StdFIMItems_5,
  MR_Word STATE_VARIABLE_NeedAvails_0_6,
  MR_Word * STATE_VARIABLE_NeedAvails_7,
  MR_Word STATE_VARIABLE_NeedFIMs_0_8,
  MR_Word * STATE_VARIABLE_NeedFIMs_9,
  MR_Word STATE_VARIABLE_ImplicitLangs_0_10,
  MR_Word * STATE_VARIABLE_ImplicitLangs_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_8_p_0(
  MR_Word ItemTypeDefn_9,
  MR_Word * AbstractOrForeignItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_NeedAvails_0_36,
  MR_Word * STATE_VARIABLE_NeedAvails_37,
  MR_Word STATE_VARIABLE_NeedFIMs_0_38,
  MR_Word * STATE_VARIABLE_NeedFIMs_39,
  MR_Word STATE_VARIABLE_ImplicitLangs_0_40,
  MR_Word * STATE_VARIABLE_ImplicitLangs_41);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
  MR_Word IncludeImplTypes_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * STATE_VARIABLE_NoIFileItemBlocksCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
  MR_Word IncludeImplTypes_1,
  MR_Word Section_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * STATE_VARIABLE_IFileItemsCord_6,
  MR_Word STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * STATE_VARIABLE_NoIFileItemsCord_8);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word IncludeImplTypes_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * STATE_VARIABLE_NoIFileItemBlocksCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
  MR_Word IncludeImplTypes_1,
  MR_Word Section_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * STATE_VARIABLE_IFileItemsCord_6,
  MR_Word STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * STATE_VARIABLE_NoIFileItemsCord_8);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
  MR_Word Item_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____implicit_langs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____implicit_langs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_avails_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_avails_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_fims_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_fims_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[7][2];

static /* final */ const MR_Integer parse_tree__comp_unit_interface_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[1][3];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[7][2] = {
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
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
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
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_5[0])))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_implicit_langs_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_NotagFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_implicit_langs_0 = {
  (MR_String) "implicit_langs",
  (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_implicit_langs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____implicit_langs_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____implicit_langs_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "implicit_langs",
  {     &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_implicit_langs_0 },
  {     &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_implicit_langs_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_implicit_langs_0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_0 = {
  (MR_String) "dont_gather_noifile_items",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_gather_noifile_items_0_1 = {
  (MR_String) "gather_noifile_items",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_gather_noifile_items",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_gather_noifile_items_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_gather_noifile_items_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_gather_noifile_items_0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_0 = {
  (MR_String) "dont_include_impl_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_include_impl_types_0_1 = {
  (MR_String) "include_impl_types",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_include_impl_types",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_include_impl_types_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_include_impl_types_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_include_impl_types_0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0 = {
  (MR_String) "do_not_need_avails",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1 = {
  (MR_String) "do_need_avails",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_avails_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_avails_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_avails_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_avails_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____need_avails_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____need_avails_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "need_avails",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_avails_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_avails_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_avails_0
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_fims_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_need_fims_0 = {
  (MR_String) "need_fims",
  (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_fims_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____need_fims_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____need_fims_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "need_fims",
  {     &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_need_fims_0 },
  {     &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__notag_functor_desc_need_fims_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_fims_0
};

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_fims_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_fims_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_avails_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_avails_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____implicit_langs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____implicit_langs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_LangSet_0_7,
  MR_Word * STATE_VARIABLE_LangSet_8)
{
  {
    MR_Word Langs_6;

    Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(Item_4);
    mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_6, STATE_VARIABLE_LangSet_0_7, STATE_VARIABLE_LangSet_8);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_8;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word TypeInfo_for_MS_15,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_LangSet_0_11,
  MR_Word * STATE_VARIABLE_LangSet_12)
{
  {
    MR_Word Items_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_4, (MR_Integer) 4))));
    MR_Box conv1_STATE_VARIABLE_LangSet_12;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_6[0]), Items_10, ((MR_Box) (STATE_VARIABLE_LangSet_0_11)), &conv1_STATE_VARIABLE_LangSet_12);
    *STATE_VARIABLE_LangSet_12 = ((MR_Word) (conv1_STATE_VARIABLE_LangSet_12));
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  {
    MR_Word Item_6;
    MR_Word ItemFIM_7;
    MR_Word Var_8;

    Var_8 = mercury__term__context_init_0_f_0();
    {
      ItemFIM_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemFIM_7, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), ItemFIM_7, 1) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), ItemFIM_7, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), ItemFIM_7, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_6, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Item_6, 1) = ((MR_Box) (ItemFIM_7));
    }
    return Item_6;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_12;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_12));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0(
  MR_Word TypeInfo_for_MS_8,
  MR_Word ItemBlocks_3,
  MR_Word * Langs_4)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word LangSet_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Box conv1_LangSet_5;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_MS_8));
    }
    Var_7 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_MS_8));
    }
    mercury__list__foldl_4_p_0(TypeInfo_14_14, (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (Var_6), (MR_Word) (ItemBlocks_3), ((MR_Box) (Var_7)), &conv1_LangSet_5);
    LangSet_5 = ((MR_Word) (conv1_LangSet_5));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_5, Langs_4);
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Item_6;

    conv0_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Item_6));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0(
  MR_Word Globals_5,
  MR_Word RawCompUnit_6,
  MR_Word * ParseTreeInt_7,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 0))));
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 1))));
    MR_Word RawItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 2))));
    MR_Word IntInclsCord_12;
    MR_Word IntAvailsCord0_13;
    MR_Word IntItemsCord0_14;
    MR_Word StdFIMItemsCord_15;
    MR_Word NeedAvails_16;
    MR_Word NeedFIMs_17;
    MR_Word ImplicitLangs_18;
    MR_Word IntIncls_19;
    MR_Word IntAvails_20;
    MR_Word IntItems0_21;
    MR_Word NeedFIMLangs_22;
    MR_Word IntItems_23;
    MR_Word ParseTreeInt0_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word Var_39;
    MR_Word Var_40;

    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_33 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_34 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_39 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_36 = (MR_Word) (Var_39);
    Var_40 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_37 = (MR_Word) (Var_40);
    parse_tree__comp_unit_interface__get_short_interface_int3_for_item_blocks_17_p_0(RawItemBlocks_11, Var_31, &IntInclsCord_12, Var_32, &IntAvailsCord0_13, Var_33, &IntItemsCord0_14, Var_34, &StdFIMItemsCord_15, (MR_Integer) 0, &NeedAvails_16, Var_36, &NeedFIMs_17, Var_37, &ImplicitLangs_18, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_38_38);
    IntIncls_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_12);
    switch (NeedAvails_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntAvails_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord0_13);
        break;
      case (MR_Integer) 0:
        IntAvails_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    IntItems0_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord0_14);
    NeedFIMLangs_22 = (MR_Word) (NeedFIMs_17);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NeedFIMLangs_22);
    if (succeeded)
      IntItems_23 = IntItems0_21;
    else
    {
      MR_Word StdFIMItems_24;
      MR_Word ImplicitLangsSet_25;
      MR_Word ImplicitFIMItems_26;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;

      StdFIMItems_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), StdFIMItemsCord_15);
      ImplicitLangsSet_25 = (MR_Word) (ImplicitLangs_18);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleName_9));
      }
      Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImplicitLangsSet_25);
      ImplicitFIMItems_26 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_41, Var_42);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), StdFIMItems_24, ImplicitFIMItems_26);
      IntItems_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItems0_21, Var_43);
    }
    {
      ParseTreeInt0_28 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 2) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 4) = ((MR_Box) (IntIncls_19));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 6) = ((MR_Box) (IntAvails_20));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 8) = ((MR_Box) (IntItems_23));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_28, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(Globals_5, ParseTreeInt0_28, ParseTreeInt_7, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_for_item_blocks_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntAvails_0_4,
  MR_Word * STATE_VARIABLE_IntAvails_5,
  MR_Word STATE_VARIABLE_IntItems_0_6,
  MR_Word * STATE_VARIABLE_IntItems_7,
  MR_Word STATE_VARIABLE_StdFIMItems_0_8,
  MR_Word * STATE_VARIABLE_StdFIMItems_9,
  MR_Word STATE_VARIABLE_NeedAvails_0_10,
  MR_Word * STATE_VARIABLE_NeedAvails_11,
  MR_Word STATE_VARIABLE_NeedFIMs_0_12,
  MR_Word * STATE_VARIABLE_NeedFIMs_13,
  MR_Word STATE_VARIABLE_ImplicitLangs_0_14,
  MR_Word * STATE_VARIABLE_ImplicitLangs_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      *STATE_VARIABLE_ImplicitLangs_15 = STATE_VARIABLE_ImplicitLangs_0_14;
      *STATE_VARIABLE_NeedFIMs_13 = STATE_VARIABLE_NeedFIMs_0_12;
      *STATE_VARIABLE_NeedAvails_11 = STATE_VARIABLE_NeedAvails_0_10;
      *STATE_VARIABLE_StdFIMItems_9 = STATE_VARIABLE_StdFIMItems_0_8;
      *STATE_VARIABLE_IntItems_7 = STATE_VARIABLE_IntItems_0_6;
      *STATE_VARIABLE_IntAvails_5 = STATE_VARIABLE_IntAvails_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word RawItemBlock_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 0))));
      MR_Word Incls_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 2))));
      MR_Word Avails_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 3))));
      MR_Word Items_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_IntIncls_73_73;
      MR_Word STATE_VARIABLE_IntAvails_75_75;
      MR_Word STATE_VARIABLE_IntItems_77_77;
      MR_Word STATE_VARIABLE_StdFIMItems_78_78;
      MR_Word STATE_VARIABLE_NeedAvails_79_79;
      MR_Word STATE_VARIABLE_NeedFIMs_80_80;
      MR_Word STATE_VARIABLE_ImplicitLangs_81_81;
      MR_Word STATE_VARIABLE_Specs_82_82;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntAvails_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntItems_0_6;
      MR_Word next_value_of_STATE_VARIABLE_StdFIMItems_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NeedAvails_0_10;
      MR_Word next_value_of_STATE_VARIABLE_NeedFIMs_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitLangs_0_14;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_16;

      switch (Section_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_IntIncls_73_73 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntAvails_75_75 = STATE_VARIABLE_IntAvails_0_4;
            STATE_VARIABLE_IntItems_77_77 = STATE_VARIABLE_IntItems_0_6;
            STATE_VARIABLE_StdFIMItems_78_78 = STATE_VARIABLE_StdFIMItems_0_8;
            STATE_VARIABLE_NeedAvails_79_79 = STATE_VARIABLE_NeedAvails_0_10;
            STATE_VARIABLE_NeedFIMs_80_80 = STATE_VARIABLE_NeedFIMs_0_12;
            STATE_VARIABLE_ImplicitLangs_81_81 = STATE_VARIABLE_ImplicitLangs_0_14;
            STATE_VARIABLE_Specs_82_82 = STATE_VARIABLE_Specs_0_16;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_74;
            MR_Word Var_76;

            Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_54);
            STATE_VARIABLE_IntIncls_73_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Var_74);
            Var_76 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_55);
            STATE_VARIABLE_IntAvails_75_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvails_0_4, Var_76);
            parse_tree__comp_unit_interface__get_short_interface_int3_for_items_13_p_0(Items_56, STATE_VARIABLE_IntItems_0_6, &STATE_VARIABLE_IntItems_77_77, STATE_VARIABLE_StdFIMItems_0_8, &STATE_VARIABLE_StdFIMItems_78_78, STATE_VARIABLE_NeedAvails_0_10, &STATE_VARIABLE_NeedAvails_79_79, STATE_VARIABLE_NeedFIMs_0_12, &STATE_VARIABLE_NeedFIMs_80_80, STATE_VARIABLE_ImplicitLangs_0_14, &STATE_VARIABLE_ImplicitLangs_81_81, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_82_82);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_43;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_73_73;
      next_value_of_STATE_VARIABLE_IntAvails_0_4 = STATE_VARIABLE_IntAvails_75_75;
      next_value_of_STATE_VARIABLE_IntItems_0_6 = STATE_VARIABLE_IntItems_77_77;
      next_value_of_STATE_VARIABLE_StdFIMItems_0_8 = STATE_VARIABLE_StdFIMItems_78_78;
      next_value_of_STATE_VARIABLE_NeedAvails_0_10 = STATE_VARIABLE_NeedAvails_79_79;
      next_value_of_STATE_VARIABLE_NeedFIMs_0_12 = STATE_VARIABLE_NeedFIMs_80_80;
      next_value_of_STATE_VARIABLE_ImplicitLangs_0_14 = STATE_VARIABLE_ImplicitLangs_81_81;
      next_value_of_STATE_VARIABLE_Specs_0_16 = STATE_VARIABLE_Specs_82_82;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntAvails_0_4 = next_value_of_STATE_VARIABLE_IntAvails_0_4;
      STATE_VARIABLE_IntItems_0_6 = next_value_of_STATE_VARIABLE_IntItems_0_6;
      STATE_VARIABLE_StdFIMItems_0_8 = next_value_of_STATE_VARIABLE_StdFIMItems_0_8;
      STATE_VARIABLE_NeedAvails_0_10 = next_value_of_STATE_VARIABLE_NeedAvails_0_10;
      STATE_VARIABLE_NeedFIMs_0_12 = next_value_of_STATE_VARIABLE_NeedFIMs_0_12;
      STATE_VARIABLE_ImplicitLangs_0_14 = next_value_of_STATE_VARIABLE_ImplicitLangs_0_14;
      STATE_VARIABLE_Specs_0_16 = next_value_of_STATE_VARIABLE_Specs_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_for_items_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItems_0_2,
  MR_Word * STATE_VARIABLE_IntItems_3,
  MR_Word STATE_VARIABLE_StdFIMItems_0_4,
  MR_Word * STATE_VARIABLE_StdFIMItems_5,
  MR_Word STATE_VARIABLE_NeedAvails_0_6,
  MR_Word * STATE_VARIABLE_NeedAvails_7,
  MR_Word STATE_VARIABLE_NeedFIMs_0_8,
  MR_Word * STATE_VARIABLE_NeedFIMs_9,
  MR_Word STATE_VARIABLE_ImplicitLangs_0_10,
  MR_Word * STATE_VARIABLE_ImplicitLangs_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_ImplicitLangs_11 = STATE_VARIABLE_ImplicitLangs_0_10;
      *STATE_VARIABLE_NeedFIMs_9 = STATE_VARIABLE_NeedFIMs_0_8;
      *STATE_VARIABLE_NeedAvails_7 = STATE_VARIABLE_NeedAvails_0_6;
      *STATE_VARIABLE_StdFIMItems_5 = STATE_VARIABLE_StdFIMItems_0_4;
      *STATE_VARIABLE_IntItems_3 = STATE_VARIABLE_IntItems_0_2;
    }
    else
    {
      MR_Word Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_93_93;
      MR_Word STATE_VARIABLE_StdFIMItems_96_96;
      MR_Word STATE_VARIABLE_NeedAvails_105_105;
      MR_Word STATE_VARIABLE_NeedFIMs_106_106;
      MR_Word STATE_VARIABLE_ImplicitLangs_107_107;
      MR_Word STATE_VARIABLE_IntItems_108_108;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntItems_0_2;
      MR_Word next_value_of_STATE_VARIABLE_StdFIMItems_0_4;
      MR_Word next_value_of_STATE_VARIABLE_NeedAvails_0_6;
      MR_Word next_value_of_STATE_VARIABLE_NeedFIMs_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitLangs_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      switch (MR_tag((MR_Word) Item_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_57 = (MR_Word) ((MR_Word) (Item_32));
            MR_Word Context_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_57, (MR_Integer) 6))));
            MR_Word Spec_59;

            Spec_59 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_58);
            {
              STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (Spec_59));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
            }
            STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
            STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
            STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
            STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
            STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_40 = (MR_Word) (MR_body((MR_Word) (Item_32), (MR_Integer) 1));
            MR_Word AbstractOrForeignItemTypeDefnInfo_41;
            MR_Word AbstractOrForeignItem_42;

            parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_8_p_0(ItemTypeDefnInfo_40, &AbstractOrForeignItemTypeDefnInfo_41, STATE_VARIABLE_NeedAvails_0_6, &STATE_VARIABLE_NeedAvails_105_105, STATE_VARIABLE_NeedFIMs_0_8, &STATE_VARIABLE_NeedFIMs_106_106, STATE_VARIABLE_ImplicitLangs_0_10, &STATE_VARIABLE_ImplicitLangs_107_107);
            AbstractOrForeignItem_42 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (AbstractOrForeignItemTypeDefnInfo_41)));
            STATE_VARIABLE_IntItems_108_108 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (AbstractOrForeignItem_42)));
            STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
            STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_IntItems_108_108 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (Item_32)));
            STATE_VARIABLE_NeedAvails_105_105 = (MR_Integer) 1;
            STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
            STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
            STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
            STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_IntItems_108_108 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (Item_32)));
                STATE_VARIABLE_NeedAvails_105_105 = (MR_Integer) 1;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Pragma_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_60, (MR_Integer) 0))));
                MR_Word AllowedInInterface_64;
                MR_Word Langs_65;
                MR_Word ImplicitLangsSet0_66;
                MR_Word ImplicitLangsSet_67;
                MR_Word Context_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_60, (MR_Integer) 2))));

                AllowedInInterface_64 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_61);
                switch (AllowedInInterface_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_116;

                      Spec_116 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_118);
                      {
                        STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (Spec_116));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
                    break;
                }
                Langs_65 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_61);
                ImplicitLangsSet0_66 = (MR_Word) (STATE_VARIABLE_ImplicitLangs_0_10);
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_65, ImplicitLangsSet0_66, &ImplicitLangsSet_67);
                STATE_VARIABLE_ImplicitLangs_107_107 = (MR_Word) (ImplicitLangsSet_67);
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_44;
                MR_Word AbstractItem_45;
                MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 0))));
                MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 1))));
                MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 2))));
                MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 3))));
                MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 5))));
                MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 6))));
                MR_Integer Var_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_43, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 1) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 2) = ((MR_Box) (Var_125));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 3) = ((MR_Box) (Var_126));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 5) = ((MR_Box) (Var_128));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 6) = ((MR_Box) (Var_129));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_44, 7) = ((MR_Box) (Var_130));
                }
                {
                  AbstractItem_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_45, 1) = ((MR_Box) (AbstractItemTypeClassInfo_44));
                }
                STATE_VARIABLE_IntItems_108_108 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (AbstractItem_45)));
                STATE_VARIABLE_NeedAvails_105_105 = (MR_Integer) 1;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_47;
                MR_Word AbstractItem_115;
                MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 0))));
                MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 1))));
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 2))));
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 3))));
                MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 5))));
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 6))));
                MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 7))));
                MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_46, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_47 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 0) = ((MR_Box) (Var_131));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 1) = ((MR_Box) (Var_132));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 2) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 3) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 5) = ((MR_Box) (Var_136));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 6) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 7) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_47, 8) = ((MR_Box) (Var_139));
                }
                {
                  AbstractItem_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_115, 1) = ((MR_Box) (AbstractItemInstanceInfo_47));
                }
                STATE_VARIABLE_IntItems_108_108 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (AbstractItem_115)));
                STATE_VARIABLE_NeedAvails_105_105 = (MR_Integer) 1;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Langs_120;
                MR_Word ImplicitLangsSet0_121;
                MR_Word ImplicitLangsSet_122;

                Langs_120 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                ImplicitLangsSet0_121 = (MR_Word) (STATE_VARIABLE_ImplicitLangs_0_10);
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_120, ImplicitLangsSet0_121, &ImplicitLangsSet_122);
                STATE_VARIABLE_ImplicitLangs_107_107 = (MR_Word) (ImplicitLangsSet_122);
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word FIMInfo_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Lang_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMInfo_50, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Module_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMInfo_50, (MR_Integer) 1))));
                MR_Word StdFIMInfo_55;
                MR_Word StdItem_56;
                MR_Word Var_94;

                Var_94 = mercury__term__context_init_0_f_0();
                {
                  StdFIMInfo_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), StdFIMInfo_55, 0) = (MR_Box) ((MR_Unsigned) (Lang_51));
                  MR_hl_field(MR_mktag(0), StdFIMInfo_55, 1) = ((MR_Box) (Module_52));
                  MR_hl_field(MR_mktag(0), StdFIMInfo_55, 2) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(0), StdFIMInfo_55, 3) = ((MR_Box) ((MR_Integer) -1));
                }
                {
                  StdItem_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), StdItem_56, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(MR_mktag(3), StdItem_56, 1) = ((MR_Box) (StdFIMInfo_55));
                }
                STATE_VARIABLE_StdFIMItems_96_96 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_StdFIMItems_0_4, ((MR_Box) (StdItem_56)));
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_IntItems_108_108 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_StdFIMItems_96_96 = STATE_VARIABLE_StdFIMItems_0_4;
                STATE_VARIABLE_NeedAvails_105_105 = STATE_VARIABLE_NeedAvails_0_6;
                STATE_VARIABLE_NeedFIMs_106_106 = STATE_VARIABLE_NeedFIMs_0_8;
                STATE_VARIABLE_ImplicitLangs_107_107 = STATE_VARIABLE_ImplicitLangs_0_10;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_12;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_33;
      next_value_of_STATE_VARIABLE_IntItems_0_2 = STATE_VARIABLE_IntItems_108_108;
      next_value_of_STATE_VARIABLE_StdFIMItems_0_4 = STATE_VARIABLE_StdFIMItems_96_96;
      next_value_of_STATE_VARIABLE_NeedAvails_0_6 = STATE_VARIABLE_NeedAvails_105_105;
      next_value_of_STATE_VARIABLE_NeedFIMs_0_8 = STATE_VARIABLE_NeedFIMs_106_106;
      next_value_of_STATE_VARIABLE_ImplicitLangs_0_10 = STATE_VARIABLE_ImplicitLangs_107_107;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_93_93;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntItems_0_2 = next_value_of_STATE_VARIABLE_IntItems_0_2;
      STATE_VARIABLE_StdFIMItems_0_4 = next_value_of_STATE_VARIABLE_StdFIMItems_0_4;
      STATE_VARIABLE_NeedAvails_0_6 = next_value_of_STATE_VARIABLE_NeedAvails_0_6;
      STATE_VARIABLE_NeedFIMs_0_8 = next_value_of_STATE_VARIABLE_NeedFIMs_0_8;
      STATE_VARIABLE_ImplicitLangs_0_10 = next_value_of_STATE_VARIABLE_ImplicitLangs_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_8_p_0(
  MR_Word ItemTypeDefn_9,
  MR_Word * AbstractOrForeignItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_NeedAvails_0_36,
  MR_Word * STATE_VARIABLE_NeedAvails_37,
  MR_Word STATE_VARIABLE_NeedFIMs_0_38,
  MR_Word * STATE_VARIABLE_NeedFIMs_39,
  MR_Word STATE_VARIABLE_ImplicitLangs_0_40,
  MR_Word * STATE_VARIABLE_ImplicitLangs_41)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 2))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 0))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 3))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 4))));
    MR_Integer Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_15 = (MR_Word) ((MR_Word) (TypeDefn_14));
          MR_Word Ctors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_15, (MR_Integer) 0))));
          MR_Word MaybeCanonical_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_15, (MR_Integer) 1))));
          MR_Word AbstractDetails_20;
          MR_Word Var_49;
          MR_Integer NumBits_19;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Integer Var_63;

          succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_15, &NumBits_19);
          if (succeeded)
            {
              AbstractDetails_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AbstractDetails_20, 0) = ((MR_Box) (NumBits_19));
            }
          else
          {
            succeeded = parse_tree__prog_type__du_type_is_notag_2_p_0(Ctors_16, MaybeCanonical_17);
            if (succeeded)
              AbstractDetails_20 = (MR_Word) ((MR_Unsigned) 8U);
            else
            {
              succeeded = parse_tree__prog_type__du_type_is_dummy_1_p_0(DetailsDu_15);
              if (succeeded)
                AbstractDetails_20 = (MR_Word) ((MR_Unsigned) 4U);
              else
                AbstractDetails_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (AbstractDetails_20));
          }
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 0))));
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 1))));
          Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 3))));
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 4))));
          Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_9, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *AbstractOrForeignItemTypeDefnInfo_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_63));
          }
          *STATE_VARIABLE_NeedAvails_37 = STATE_VARIABLE_NeedAvails_0_36;
          *STATE_VARIABLE_NeedFIMs_39 = STATE_VARIABLE_NeedFIMs_0_38;
          *STATE_VARIABLE_ImplicitLangs_41 = STATE_VARIABLE_ImplicitLangs_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *AbstractOrForeignItemTypeDefnInfo_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[6])));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_57));
          }
          *STATE_VARIABLE_NeedAvails_37 = STATE_VARIABLE_NeedAvails_0_36;
          *STATE_VARIABLE_NeedFIMs_39 = STATE_VARIABLE_NeedFIMs_0_38;
          *STATE_VARIABLE_ImplicitLangs_41 = STATE_VARIABLE_ImplicitLangs_0_40;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsForeign_24 = (MR_Word) (MR_body((MR_Word) (TypeDefn_14), (MR_Integer) 2));
          MR_Word ForeignType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_24, (MR_Integer) 0))));
          MR_Word Assertions_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_24, (MR_Integer) 2))));
          MR_Word Lang_31;
          MR_Word NeedFIMLangs0_32;
          MR_Word NeedFIMLangs_33;
          MR_Word ImplicitLangsSet0_34;
          MR_Word ImplicitLangsSet_35;
          MR_Word MaybeCanonical_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_24, (MR_Integer) 1))));

          if ((MaybeCanonical_52 == (MR_Word) ((MR_Unsigned) 0U)))
            *AbstractOrForeignItemTypeDefnInfo_10 = ItemTypeDefn_9;
          else
          {
            MR_Word AbstractDetailsForeign_29;
            MR_Word AbstractForeignTypeDefn_30;

            {
              AbstractDetailsForeign_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_29, 0) = ((MR_Box) (ForeignType_25));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_5[1])));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_29, 2) = ((MR_Box) (Assertions_26));
            }
            AbstractForeignTypeDefn_30 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (AbstractDetailsForeign_29)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *AbstractOrForeignItemTypeDefnInfo_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractForeignTypeDefn_30));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_57));
            }
          }
          *STATE_VARIABLE_NeedAvails_37 = (MR_Integer) 1;
          Lang_31 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_25);
          NeedFIMLangs0_32 = (MR_Word) (STATE_VARIABLE_NeedFIMs_0_38);
          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_31)), NeedFIMLangs0_32, &NeedFIMLangs_33);
          *STATE_VARIABLE_NeedFIMs_39 = (MR_Word) (NeedFIMLangs_33);
          ImplicitLangsSet0_34 = (MR_Word) (STATE_VARIABLE_ImplicitLangs_0_40);
          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_31)), ImplicitLangsSet0_34, &ImplicitLangsSet_35);
          *STATE_VARIABLE_ImplicitLangs_41 = (MR_Word) (ImplicitLangsSet_35);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *AbstractOrForeignItemTypeDefnInfo_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[5])));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_57));
              }
              *STATE_VARIABLE_NeedAvails_37 = STATE_VARIABLE_NeedAvails_0_36;
              *STATE_VARIABLE_NeedFIMs_39 = STATE_VARIABLE_NeedFIMs_0_38;
              *STATE_VARIABLE_ImplicitLangs_41 = STATE_VARIABLE_ImplicitLangs_0_40;
            }
            break;
          case (MR_Integer) 1:
            {
              *AbstractOrForeignItemTypeDefnInfo_10 = ItemTypeDefn_9;
              *STATE_VARIABLE_NeedAvails_37 = STATE_VARIABLE_NeedAvails_0_36;
              *STATE_VARIABLE_NeedFIMs_39 = STATE_VARIABLE_NeedFIMs_0_38;
              *STATE_VARIABLE_ImplicitLangs_41 = STATE_VARIABLE_ImplicitLangs_0_40;
            }
            break;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0(
  MR_String ClauseOrPragma_4,
  MR_Word Context_5)
{
  {
    MR_Word Spec_6;
    MR_Word Pieces_7;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (ClauseOrPragma_4));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_1[4])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[2])));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Pieces_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_18));
    }
    return Spec_6;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_int_and_impl_4_p_0(
  MR_Word IncludeImplTypes_5,
  MR_Word RawCompUnit_6,
  MR_Word * IFileItemBlocks_7,
  MR_Word * NoIFileItemBlocks_8)
{
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 0))));
    MR_Word RawItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 2))));
    MR_Word IFileItemBlocksCord_12;
    MR_Word NoIFileItemBlocksCord_13;
    MR_Word IFileItemBlocks0_14;
    MR_Word Var_16;
    MR_Word Var_17;

    Var_16 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_17 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(IncludeImplTypes_5, RawItemBlocks_11, Var_16, &IFileItemBlocksCord_12, Var_17, &NoIFileItemBlocksCord_13);
    IFileItemBlocks0_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IFileItemBlocksCord_12);
    *NoIFileItemBlocks_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), NoIFileItemBlocksCord_13);
    parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_9, ((MR_Box) ((MR_Integer) 0)), IFileItemBlocks0_14, IFileItemBlocks_7);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_49_7_p_1(
  MR_Word IncludeImplTypes_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * STATE_VARIABLE_NoIFileItemBlocksCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoIFileItemBlocksCord_7 = STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
      *STATE_VARIABLE_IFileItemBlocksCord_5 = STATE_VARIABLE_IFileItemBlocksCord_0_4;
    }
    else
    {
      MR_Word RawItemBlock_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RawItemBlocks_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Section_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 0))));
      MR_Word SectionContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 1))));
      MR_Word Incls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 2))));
      MR_Word Avails_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 3))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 4))));
      MR_Word IFileIncls_27;
      MR_Word IFileAvails_28;
      MR_Word NoIFileIncls_29;
      MR_Word NoIFileAvails_30;
      MR_Word IFileItemsCord_31;
      MR_Word NoIFileItemsCord_32;
      MR_Word IFileItems_33;
      MR_Word NoIFileItems_34;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_IFileItemBlocksCord_43_43;
      MR_Word STATE_VARIABLE_NoIFileItemBlocksCord_44_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6;

      switch (Section_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            switch (IncludeImplTypes_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  IFileIncls_27 = (MR_Word) ((MR_Unsigned) 0U);
                  IFileAvails_28 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 1:
                {
                  IFileIncls_27 = Incls_24;
                  IFileAvails_28 = Avails_25;
                }
                break;
            }
            NoIFileIncls_29 = Incls_24;
            NoIFileAvails_30 = Avails_25;
          }
          break;
        case (MR_Integer) 0:
          {
            IFileIncls_27 = Incls_24;
            IFileAvails_28 = Avails_25;
            NoIFileIncls_29 = (MR_Word) ((MR_Unsigned) 0U);
            NoIFileAvails_30 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      Var_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
      Var_42 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(IncludeImplTypes_1, Section_22, Items_26, Var_41, &IFileItemsCord_31, Var_42, &NoIFileItemsCord_32);
      IFileItems_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IFileItemsCord_31);
      NoIFileItems_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NoIFileItemsCord_32);
      succeeded = (IFileIncls_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (IFileAvails_28 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (IFileItems_33 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        STATE_VARIABLE_IFileItemBlocksCord_43_43 = STATE_VARIABLE_IFileItemBlocksCord_0_4;
      else
      {
        MR_Word IFileItemBlock_35;

        {
          IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 0) = ((MR_Box) (Section_22));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 1) = ((MR_Box) (SectionContext_23));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 2) = ((MR_Box) (IFileIncls_27));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 3) = ((MR_Box) (IFileAvails_28));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 4) = ((MR_Box) (IFileItems_33));
        }
        STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (IFileItemBlock_35)));
      }
      succeeded = (NoIFileIncls_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (NoIFileAvails_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (NoIFileItems_34 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
      else
      {
        MR_Word NoIFileItemBlock_36;

        {
          NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 0) = ((MR_Box) (Section_22));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 1) = ((MR_Box) (SectionContext_23));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 2) = ((MR_Box) (NoIFileIncls_29));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 3) = ((MR_Box) (NoIFileAvails_30));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 4) = ((MR_Box) (NoIFileItems_34));
        }
        STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (NoIFileItemBlock_36)));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = RawItemBlocks_19;
      next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4 = STATE_VARIABLE_IFileItemBlocksCord_43_43;
      next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = STATE_VARIABLE_NoIFileItemBlocksCord_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_IFileItemBlocksCord_0_4 = next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4;
      STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_49_8_p_1(
  MR_Word IncludeImplTypes_1,
  MR_Word Section_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * STATE_VARIABLE_IFileItemsCord_6,
  MR_Word STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * STATE_VARIABLE_NoIFileItemsCord_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoIFileItemsCord_8 = STATE_VARIABLE_NoIFileItemsCord_0_7;
      *STATE_VARIABLE_IFileItemsCord_6 = STATE_VARIABLE_IFileItemsCord_0_5;
    }
    else
    {
      MR_Word Item_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Items_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IFileItemsCord_36_36;
      MR_Word STATE_VARIABLE_NoIFileItemsCord_37_37;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IFileItemsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7;

      switch (Section_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word IFileItem_28;
            MR_Word Var_34;

            STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (Item_21)));
            succeeded = (IncludeImplTypes_1 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(Item_21);
              succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                IFileItem_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (IFileItem_28)));
            }
            else
              STATE_VARIABLE_IFileItemsCord_36_36 = STATE_VARIABLE_IFileItemsCord_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ItemInstance_25;

            succeeded = ((((MR_tag((MR_Word) Item_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              ItemInstance_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_21, (MR_Integer) 1))));
              {
                MR_Word AbstractItemInstance_26;
                MR_Word AbstractItem_27;

                AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(ItemInstance_25);
                {
                  AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_27, 1) = ((MR_Box) (AbstractItemInstance_26));
                }
                STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (AbstractItem_27)));
                STATE_VARIABLE_NoIFileItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_NoIFileItemsCord_0_7, ((MR_Box) (Item_21)));
              }
            }
            else
            {
              STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (Item_21)));
              STATE_VARIABLE_NoIFileItemsCord_37_37 = STATE_VARIABLE_NoIFileItemsCord_0_7;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items_22;
      next_value_of_STATE_VARIABLE_IFileItemsCord_0_5 = STATE_VARIABLE_IFileItemsCord_36_36;
      next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7 = STATE_VARIABLE_NoIFileItemsCord_37_37;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IFileItemsCord_0_5 = next_value_of_STATE_VARIABLE_IFileItemsCord_0_5;
      STATE_VARIABLE_NoIFileItemsCord_0_7 = next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_interface_3_p_0(
  MR_Word IncludeImplTypes_4,
  MR_Word RawCompUnit_5,
  MR_Word * InterfaceRawCompUnit_6)
{
  {
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_5, (MR_Integer) 0))));
    MR_Word ModuleNameContext_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_5, (MR_Integer) 1))));
    MR_Word RawItemBlocks_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_5, (MR_Integer) 2))));
    MR_Word IFileItemBlocksCord_10;
    MR_Word IFileItemBlocks0_12;
    MR_Word IFileItemBlocks_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word _NoIFileItemBlocksCord_11;

    Var_15 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_16 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(IncludeImplTypes_4, RawItemBlocks_9, Var_15, &IFileItemBlocksCord_10, Var_16, &_NoIFileItemBlocksCord_11);
    IFileItemBlocks0_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IFileItemBlocksCord_10);
    parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_7, ((MR_Box) ((MR_Integer) 0)), IFileItemBlocks0_12, &IFileItemBlocks_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *InterfaceRawCompUnit_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IFileItemBlocks_13));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_114_97_119_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word IncludeImplTypes_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IFileItemBlocksCord_0_4,
  MR_Word * STATE_VARIABLE_IFileItemBlocksCord_5,
  MR_Word STATE_VARIABLE_NoIFileItemBlocksCord_0_6,
  MR_Word * STATE_VARIABLE_NoIFileItemBlocksCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoIFileItemBlocksCord_7 = STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
      *STATE_VARIABLE_IFileItemBlocksCord_5 = STATE_VARIABLE_IFileItemBlocksCord_0_4;
    }
    else
    {
      MR_Word RawItemBlock_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RawItemBlocks_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Section_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 0))));
      MR_Word SectionContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 1))));
      MR_Word Incls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 2))));
      MR_Word Avails_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 3))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_18, (MR_Integer) 4))));
      MR_Word IFileIncls_27;
      MR_Word IFileAvails_28;
      MR_Word NoIFileIncls_29;
      MR_Word NoIFileAvails_30;
      MR_Word IFileItemsCord_31;
      MR_Word NoIFileItemsCord_32;
      MR_Word IFileItems_33;
      MR_Word NoIFileItems_34;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_IFileItemBlocksCord_43_43;
      MR_Word STATE_VARIABLE_NoIFileItemBlocksCord_44_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6;

      switch (Section_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            switch (IncludeImplTypes_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  IFileIncls_27 = (MR_Word) ((MR_Unsigned) 0U);
                  IFileAvails_28 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 1:
                {
                  IFileIncls_27 = Incls_24;
                  IFileAvails_28 = Avails_25;
                }
                break;
            }
            NoIFileIncls_29 = (MR_Word) ((MR_Unsigned) 0U);
            NoIFileAvails_30 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 0:
          {
            IFileIncls_27 = Incls_24;
            IFileAvails_28 = Avails_25;
            NoIFileIncls_29 = (MR_Word) ((MR_Unsigned) 0U);
            NoIFileAvails_30 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      Var_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
      Var_42 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
      parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(IncludeImplTypes_1, Section_22, Items_26, Var_41, &IFileItemsCord_31, Var_42, &NoIFileItemsCord_32);
      IFileItems_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IFileItemsCord_31);
      NoIFileItems_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NoIFileItemsCord_32);
      succeeded = (IFileIncls_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (IFileAvails_28 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (IFileItems_33 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        STATE_VARIABLE_IFileItemBlocksCord_43_43 = STATE_VARIABLE_IFileItemBlocksCord_0_4;
      else
      {
        MR_Word IFileItemBlock_35;

        {
          IFileItemBlock_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 0) = ((MR_Box) (Section_22));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 1) = ((MR_Box) (SectionContext_23));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 2) = ((MR_Box) (IFileIncls_27));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 3) = ((MR_Box) (IFileAvails_28));
          MR_hl_field(MR_mktag(0), IFileItemBlock_35, 4) = ((MR_Box) (IFileItems_33));
        }
        STATE_VARIABLE_IFileItemBlocksCord_43_43 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), STATE_VARIABLE_IFileItemBlocksCord_0_4, ((MR_Box) (IFileItemBlock_35)));
      }
      succeeded = (NoIFileItems_34 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
      else
      {
        MR_Word NoIFileItemBlock_36;

        {
          NoIFileItemBlock_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 0) = ((MR_Box) (Section_22));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 1) = ((MR_Box) (SectionContext_23));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 2) = ((MR_Box) (NoIFileIncls_29));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 3) = ((MR_Box) (NoIFileAvails_30));
          MR_hl_field(MR_mktag(0), NoIFileItemBlock_36, 4) = ((MR_Box) (NoIFileItems_34));
        }
        STATE_VARIABLE_NoIFileItemBlocksCord_44_44 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), STATE_VARIABLE_NoIFileItemBlocksCord_0_6, ((MR_Box) (NoIFileItemBlock_36)));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = RawItemBlocks_19;
      next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4 = STATE_VARIABLE_IFileItemBlocksCord_43_43;
      next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = STATE_VARIABLE_NoIFileItemBlocksCord_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_IFileItemBlocksCord_0_4 = next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_4;
      STATE_VARIABLE_NoIFileItemBlocksCord_0_6 = next_value_of_STATE_VARIABLE_NoIFileItemBlocksCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_102_105_108_101_95_97_110_100_95_110_111_105_102_105_108_101_95_105_110_95_105_116_101_109_115_95_97_99_99_95_95_91_50_93_95_48_8_p_0(
  MR_Word IncludeImplTypes_1,
  MR_Word Section_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IFileItemsCord_0_5,
  MR_Word * STATE_VARIABLE_IFileItemsCord_6,
  MR_Word STATE_VARIABLE_NoIFileItemsCord_0_7,
  MR_Word * STATE_VARIABLE_NoIFileItemsCord_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoIFileItemsCord_8 = STATE_VARIABLE_NoIFileItemsCord_0_7;
      *STATE_VARIABLE_IFileItemsCord_6 = STATE_VARIABLE_IFileItemsCord_0_5;
    }
    else
    {
      MR_Word Item_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Items_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IFileItemsCord_36_36;
      MR_Word STATE_VARIABLE_NoIFileItemsCord_37_37;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IFileItemsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7;

      switch (Section_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word IFileItem_28;
            MR_Word Var_34;

            STATE_VARIABLE_NoIFileItemsCord_37_37 = STATE_VARIABLE_NoIFileItemsCord_0_7;
            succeeded = (IncludeImplTypes_1 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_34 = parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(Item_21);
              succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                IFileItem_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (IFileItem_28)));
            }
            else
              STATE_VARIABLE_IFileItemsCord_36_36 = STATE_VARIABLE_IFileItemsCord_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ItemInstance_25;

            succeeded = ((((MR_tag((MR_Word) Item_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              ItemInstance_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_21, (MR_Integer) 1))));
              {
                MR_Word AbstractItemInstance_26;
                MR_Word AbstractItem_27;

                AbstractItemInstance_26 = parse_tree__item_util__make_instance_abstract_1_f_0(ItemInstance_25);
                {
                  AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_27, 1) = ((MR_Box) (AbstractItemInstance_26));
                }
                STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (AbstractItem_27)));
                STATE_VARIABLE_NoIFileItemsCord_37_37 = STATE_VARIABLE_NoIFileItemsCord_0_7;
              }
            }
            else
            {
              STATE_VARIABLE_IFileItemsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_5, ((MR_Box) (Item_21)));
              STATE_VARIABLE_NoIFileItemsCord_37_37 = STATE_VARIABLE_NoIFileItemsCord_0_7;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items_22;
      next_value_of_STATE_VARIABLE_IFileItemsCord_0_5 = STATE_VARIABLE_IFileItemsCord_36_36;
      next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7 = STATE_VARIABLE_NoIFileItemsCord_37_37;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IFileItemsCord_0_5 = next_value_of_STATE_VARIABLE_IFileItemsCord_0_5;
      STATE_VARIABLE_NoIFileItemsCord_0_7 = next_value_of_STATE_VARIABLE_NoIFileItemsCord_0_7;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__include_in_int_file_implementation_1_f_0(
  MR_Word Item_3)
{
  {
    MR_Word MaybeIFileItem_4;

    switch (MR_tag((MR_Word) Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        MaybeIFileItem_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefnInfo_5 = (MR_Word) (MR_body((MR_Word) (Item_3), (MR_Integer) 1));
          MR_Word MaybeAbstractItemTypeDefnInfo_6;
          MR_Word AbstractItem_7;

          parse_tree__item_util__maybe_make_abstract_type_defn_for_int2_2_p_0(ItemTypeDefnInfo_5, &MaybeAbstractItemTypeDefnInfo_6);
          AbstractItem_7 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_6)));
          {
            MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeIFileItem_4, 0) = ((MR_Box) (AbstractItem_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 12:
            MaybeIFileItem_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            {
              MR_Word ItemPragma_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word Pragma_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_10, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) Pragma_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  MaybeIFileItem_4 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 0))))) {
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
                    case (MR_Integer) 29:
                      MaybeIFileItem_4 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 2:
                      {
                        MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeIFileItem_4, 0) = ((MR_Box) (Item_3));
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ItemTypeClassInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word AbstractItemTypeClassInfo_9;
              MR_Word AbstractItem_63;

              parse_tree__item_util__make_abstract_typeclass_2_p_0(ItemTypeClassInfo_8, &AbstractItemTypeClassInfo_9);
              {
                AbstractItem_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AbstractItem_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), AbstractItem_63, 1) = ((MR_Box) (AbstractItemTypeClassInfo_9));
              }
              {
                MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeIFileItem_4, 0) = ((MR_Box) (AbstractItem_63));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MaybeIFileItem_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeIFileItem_4, 0) = ((MR_Box) (Item_3));
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.include_in_int_file_implementation\'/1", (MR_String) "item_type_repn");
            }
            break;
        }
        break;
    }
    return MaybeIFileItem_4;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Item_6;

    conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Item_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_12;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_12));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0(
  MR_Word TypeInfo_for_MS_21,
  MR_Word ModuleName_5,
  MR_Box Section_6,
  MR_Word ItemBlocks0_7,
  MR_Word * ItemBlocks_8)
{
  {
    MR_Word TypeInfo_27_27;
    MR_Word LangSet_9;
    MR_Word Langs_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv1_LangSet_9;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_MS_21));
    }
    Var_16 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_MS_21));
    }
    mercury__list__foldl_4_p_0(TypeInfo_27_27, (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (Var_15), (MR_Word) (ItemBlocks0_7), ((MR_Box) (Var_16)), &conv1_LangSet_9);
    LangSet_9 = ((MR_Word) (conv1_LangSet_9));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_9, &Langs_10);
    if ((Langs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *ItemBlocks_8 = ItemBlocks0_7;
    else
    {
      MR_Word ImportItems_13;
      MR_Word ImportItemBlock_14;
      MR_Word Var_17;
      MR_Word Var_18;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleName_5));
      }
      ImportItems_13 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_17, Langs_10);
      Var_18 = mercury__term__context_init_0_f_0();
      {
        ImportItemBlock_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImportItemBlock_14, 0) = Section_6;
        MR_hl_field(MR_mktag(0), ImportItemBlock_14, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), ImportItemBlock_14, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImportItemBlock_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImportItemBlock_14, 4) = ((MR_Box) (ImportItems_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ItemBlocks_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImportItemBlock_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ItemBlocks0_7));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____implicit_langs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____implicit_langs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____implicit_langs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____implicit_langs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____maybe_gather_noifile_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____maybe_gather_noifile_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____maybe_include_impl_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____maybe_include_impl_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_avails_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____need_avails_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_avails_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____need_avails_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_fims_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____need_fims_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_fims_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____need_fims_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_implicit_langs_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_gather_noifile_items_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_include_impl_types_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_avails_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_fims_0);
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

// :- end_module parse_tree.comp_unit_interface.
