/*
** Automatically generated from `module_imports.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module parse_tree.module_imports. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_imports__init
ENDINIT
*/

#include "parse_tree.module_imports.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[27];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[27];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1];

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box parse_tree__module_imports__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box parse_tree__module_imports__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001(
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001(
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box parse_tree__module_imports__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_HasMain_3);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__427__1_4_p_0(
  MR_Word parse_tree__module_imports__ModuleName_17,
  MR_Word parse_tree__module_imports__LambdaHeadVar__1_57,
  MR_Word parse_tree__module_imports__LambdaHeadVar__2_58,
  MR_Word * parse_tree__module_imports__LambdaHeadVar__3_59);

static void MR_CALL 
parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_HasMain_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_1(
  MR_Box parse_tree__module_imports__closure_arg,
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box * parse_tree__module_imports__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[14][2];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][7];




static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[1]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[2]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0
  }
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[27] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[27] = {
  (MR_String) "mai_source_file_name",
  (MR_String) "mai_source_file_module_name",
  (MR_String) "mai_module_name",
  (MR_String) "mai_module_name_context",
  (MR_String) "mai_parent_deps",
  (MR_String) "mai_int_deps",
  (MR_String) "mai_imp_deps",
  (MR_String) "mai_indirect_deps",
  (MR_String) "mai_children",
  (MR_String) "mai_public_children",
  (MR_String) "mai_nested_children",
  (MR_String) "mai_fact_table_deps",
  (MR_String) "mai_foreign_import_modules",
  (MR_String) "mai_foreign_include_files",
  (MR_String) "mai_has_foreign_code",
  (MR_String) "mai_contains_foreign_export",
  (MR_String) "mai_src_blocks",
  (MR_String) "mai_direct_int_blocks_cord",
  (MR_String) "mai_indirect_int_blocks_cord",
  (MR_String) "mai_opt_blocks_cord",
  (MR_String) "mai_int_for_opt_blocks_cord",
  (MR_String) "mai_module_version_numbers",
  (MR_String) "mai_specs",
  (MR_String) "mai_errors",
  (MR_String) "mai_maybe_timestamp_map",
  (MR_String) "mai_has_main",
  (MR_String) "mai_module_dir"
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0 = {
  (MR_String) "module_and_imports",
  (MR_Integer) 27,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_and_imports",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0,
  (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3] = {
  (MR_String) "mts_file_kind",
  (MR_String) "mts_timestamp",
  (MR_String) "mts_need_qualifier"
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0 = {
  (MR_String) "module_timestamp",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_imports__succeeded;

    {
      parse_tree__module_imports__succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2));
    }
    return parse_tree__module_imports__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box parse_tree__module_imports__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_imports__conv0_HeadVar__1_1;

    {
      parse_tree__module_imports____Compare____module_and_imports_0_0(&parse_tree__module_imports__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_imports__wrapper_arg_2), ((MR_Word) parse_tree__module_imports__wrapper_arg_3));
    }
    *parse_tree__module_imports__wrapper_arg_1 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_imports__succeeded;

    {
      parse_tree__module_imports__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2));
    }
    return parse_tree__module_imports__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box parse_tree__module_imports__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_imports__conv0_HeadVar__1_1;

    {
      parse_tree__module_imports____Compare____module_timestamp_0_0(&parse_tree__module_imports__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_imports__wrapper_arg_2), ((MR_Word) parse_tree__module_imports__wrapper_arg_3));
    }
    *parse_tree__module_imports__wrapper_arg_1 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001(
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_imports__succeeded;

    {
      parse_tree__module_imports__succeeded = parse_tree__module_imports____Unify____module_timestamp_map_0_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2));
    }
    return parse_tree__module_imports__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001(
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box parse_tree__module_imports__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_imports__conv0_HeadVar__1_1;

    {
      parse_tree__module_imports____Compare____module_timestamp_map_0_0(&parse_tree__module_imports__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_imports__wrapper_arg_2), ((MR_Word) parse_tree__module_imports__wrapper_arg_3));
    }
    *parse_tree__module_imports__wrapper_arg_1 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_HasMain_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_imports__succeeded;

        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_imports__STATE_VARIABLE_HasMain_3 = parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2;
        else
          {
            MR_Word parse_tree__module_imports__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_imports__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_imports__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemBlock_7, (MR_Integer) 4)));
            MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_17_17;
            MR_Box parse_tree__module_imports___Section_10 = (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemBlock_7, (MR_Integer) 0));
            MR_Word parse_tree__module_imports___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemBlock_7, (MR_Integer) 1)));
            MR_Word parse_tree__module_imports___Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemBlock_7, (MR_Integer) 2)));
            MR_Word parse_tree__module_imports___Imports_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemBlock_7, (MR_Integer) 3)));

            {
              parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(parse_tree__module_imports__Items_14, parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2, &parse_tree__module_imports__STATE_VARIABLE_HasMain_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__ItemBlocks_8;
              MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_0__tmp_copy_2 = parse_tree__module_imports__STATE_VARIABLE_HasMain_17_17;

              parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2 = parse_tree__module_imports__STATE_VARIABLE_HasMain_0__tmp_copy_2;
              parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__427__1_4_p_0(
  MR_Word parse_tree__module_imports__ModuleName_17,
  MR_Word parse_tree__module_imports__LambdaHeadVar__1_57,
  MR_Word parse_tree__module_imports__LambdaHeadVar__2_58,
  MR_Word * parse_tree__module_imports__LambdaHeadVar__3_59)
{
  {
    MR_bool parse_tree__module_imports__succeeded;

    {
      parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(parse_tree__module_imports__LambdaHeadVar__1_57, parse_tree__module_imports__ModuleName_17, parse_tree__module_imports__LambdaHeadVar__2_58, parse_tree__module_imports__LambdaHeadVar__3_59);
    }
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0(
  MR_Word * parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__HeadVar__2_2,
  MR_Word parse_tree__module_imports__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__Cast_HeadVar1_4 = parse_tree__module_imports__HeadVar__2_2;
    MR_Word parse_tree__module_imports__Cast_HeadVar2_5 = parse_tree__module_imports__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], parse_tree__module_imports__HeadVar__1_1, ((MR_Box) (parse_tree__module_imports__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_imports__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__Cast_HeadVar1_3 = parse_tree__module_imports__HeadVar__1_1;
    MR_Word parse_tree__module_imports__Cast_HeadVar2_4 = parse_tree__module_imports__HeadVar__2_2;

    {
      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], ((MR_Box) (parse_tree__module_imports__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_imports__Cast_HeadVar2_4)));
    }
    return parse_tree__module_imports__succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0(
  MR_Word * parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__HeadVar__2_2,
  MR_Word parse_tree__module_imports__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Integer parse_tree__module_imports__CastX_12 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;
    MR_Integer parse_tree__module_imports__CastY_13 = (MR_Integer) parse_tree__module_imports__HeadVar__3_3;

    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_12 == parse_tree__module_imports__CastY_13);
    if (parse_tree__module_imports__succeeded)
      *parse_tree__module_imports__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_10_10;

        {
          parse_tree__file_kind____Compare____file_kind_0_0(&parse_tree__module_imports__V_10_10, parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_7_7);
        }
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_10_10 == (MR_Integer) 0);
        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
        if (parse_tree__module_imports__succeeded)
          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_10_10;
        else
          {
            MR_Word parse_tree__module_imports__V_11_11;

            {
              libs__timestamp____Compare____timestamp_0_0(&parse_tree__module_imports__V_11_11, parse_tree__module_imports__V_5_5, parse_tree__module_imports__V_8_8);
            }
            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_11_11 == (MR_Integer) 0);
            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
            if (parse_tree__module_imports__succeeded)
              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_11_11;
            else
              {
                MR_Integer parse_tree__module_imports__V_17_17 = (MR_Integer) parse_tree__module_imports__V_6_6;
                MR_Integer parse_tree__module_imports__V_18_18 = (MR_Integer) parse_tree__module_imports__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_imports__HeadVar__1_1, parse_tree__module_imports__V_17_17, parse_tree__module_imports__V_18_18);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Integer parse_tree__module_imports__CastX_9 = (MR_Integer) parse_tree__module_imports__HeadVar__1_1;
    MR_Integer parse_tree__module_imports__CastY_10 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;

    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_9 == parse_tree__module_imports__CastY_10);
    if (parse_tree__module_imports__succeeded)
      parse_tree__module_imports__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_imports__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));

        {
          parse_tree__module_imports__succeeded = parse_tree__file_kind____Unify____file_kind_0_0(parse_tree__module_imports__V_3_3, parse_tree__module_imports__V_6_6);
        }
        if (parse_tree__module_imports__succeeded)
          {
            {
              parse_tree__module_imports__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_7_7);
            }
            if (parse_tree__module_imports__succeeded)
              parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_5_5 == parse_tree__module_imports__V_8_8);
          }
      }
    return parse_tree__module_imports__succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0(
  MR_Word * parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__HeadVar__2_2,
  MR_Word parse_tree__module_imports__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Integer parse_tree__module_imports__CastX_84 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;
    MR_Integer parse_tree__module_imports__CastY_85 = (MR_Integer) parse_tree__module_imports__HeadVar__3_3;

    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_84 == parse_tree__module_imports__CastY_85);
    if (parse_tree__module_imports__succeeded)
      *parse_tree__module_imports__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__module_imports__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 14)));
        MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 15)));
        MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 16)));
        MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 17)));
        MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 18)));
        MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 19)));
        MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 20)));
        MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 21)));
        MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 22)));
        MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 23)));
        MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 24)));
        MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 25)));
        MR_String parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 26)));
        MR_String parse_tree__module_imports__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 14)));
        MR_Word parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 15)));
        MR_Word parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 16)));
        MR_Word parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 17)));
        MR_Word parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 18)));
        MR_Word parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 19)));
        MR_Word parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 20)));
        MR_Word parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 21)));
        MR_Word parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 22)));
        MR_Word parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 23)));
        MR_Word parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 24)));
        MR_Word parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 25)));
        MR_String parse_tree__module_imports__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 26)));
        MR_Word parse_tree__module_imports__V_58_58;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_imports__V_58_58, parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_31_31);
        }
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_58_58 == (MR_Integer) 0);
        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
        if (parse_tree__module_imports__succeeded)
          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_58_58;
        else
          {
            MR_Word parse_tree__module_imports__V_59_59;

            {
              mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_imports__V_59_59, parse_tree__module_imports__V_5_5, parse_tree__module_imports__V_32_32);
            }
            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_59_59 == (MR_Integer) 0);
            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
            if (parse_tree__module_imports__succeeded)
              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_59_59;
            else
              {
                MR_Word parse_tree__module_imports__V_60_60;

                {
                  mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_imports__V_60_60, parse_tree__module_imports__V_6_6, parse_tree__module_imports__V_33_33);
                }
                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_60_60 == (MR_Integer) 0);
                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                if (parse_tree__module_imports__succeeded)
                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_60_60;
                else
                  {
                    MR_Word parse_tree__module_imports__V_61_61;

                    {
                      mercury__term____Compare____context_0_0(&parse_tree__module_imports__V_61_61, parse_tree__module_imports__V_7_7, parse_tree__module_imports__V_34_34);
                    }
                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_61_61 == (MR_Integer) 0);
                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                    if (parse_tree__module_imports__succeeded)
                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_61_61;
                    else
                      {
                        MR_Word parse_tree__module_imports__V_62_62;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_62_62, ((MR_Box) (parse_tree__module_imports__V_8_8)), ((MR_Box) (parse_tree__module_imports__V_35_35)));
                        }
                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_62_62 == (MR_Integer) 0);
                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                        if (parse_tree__module_imports__succeeded)
                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_62_62;
                        else
                          {
                            MR_Word parse_tree__module_imports__V_63_63;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_63_63, ((MR_Box) (parse_tree__module_imports__V_9_9)), ((MR_Box) (parse_tree__module_imports__V_36_36)));
                            }
                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_63_63 == (MR_Integer) 0);
                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                            if (parse_tree__module_imports__succeeded)
                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_63_63;
                            else
                              {
                                MR_Word parse_tree__module_imports__V_64_64;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_64_64, ((MR_Box) (parse_tree__module_imports__V_10_10)), ((MR_Box) (parse_tree__module_imports__V_37_37)));
                                }
                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_64_64 == (MR_Integer) 0);
                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                if (parse_tree__module_imports__succeeded)
                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_64_64;
                                else
                                  {
                                    MR_Word parse_tree__module_imports__V_65_65;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_65_65, ((MR_Box) (parse_tree__module_imports__V_11_11)), ((MR_Box) (parse_tree__module_imports__V_38_38)));
                                    }
                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_65_65 == (MR_Integer) 0);
                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                    if (parse_tree__module_imports__succeeded)
                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_65_65;
                                    else
                                      {
                                        MR_Word parse_tree__module_imports__V_66_66;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_66_66, ((MR_Box) (parse_tree__module_imports__V_12_12)), ((MR_Box) (parse_tree__module_imports__V_39_39)));
                                        }
                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_66_66 == (MR_Integer) 0);
                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                        if (parse_tree__module_imports__succeeded)
                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_66_66;
                                        else
                                          {
                                            MR_Word parse_tree__module_imports__V_67_67;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_67_67, ((MR_Box) (parse_tree__module_imports__V_13_13)), ((MR_Box) (parse_tree__module_imports__V_40_40)));
                                            }
                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_67_67 == (MR_Integer) 0);
                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                            if (parse_tree__module_imports__succeeded)
                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_67_67;
                                            else
                                              {
                                                MR_Word parse_tree__module_imports__V_68_68;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &parse_tree__module_imports__V_68_68, ((MR_Box) (parse_tree__module_imports__V_14_14)), ((MR_Box) (parse_tree__module_imports__V_41_41)));
                                                }
                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_68_68 == (MR_Integer) 0);
                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                if (parse_tree__module_imports__succeeded)
                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_68_68;
                                                else
                                                  {
                                                    MR_Word parse_tree__module_imports__V_69_69;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[4], &parse_tree__module_imports__V_69_69, ((MR_Box) (parse_tree__module_imports__V_15_15)), ((MR_Box) (parse_tree__module_imports__V_42_42)));
                                                    }
                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_69_69 == (MR_Integer) 0);
                                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                    if (parse_tree__module_imports__succeeded)
                                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_69_69;
                                                    else
                                                      {
                                                        MR_Word parse_tree__module_imports__V_70_70;

                                                        {
                                                          parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&parse_tree__module_imports__V_70_70, parse_tree__module_imports__V_16_16, parse_tree__module_imports__V_43_43);
                                                        }
                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_70_70 == (MR_Integer) 0);
                                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                        if (parse_tree__module_imports__succeeded)
                                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_70_70;
                                                        else
                                                          {
                                                            MR_Word parse_tree__module_imports__V_71_71;

                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[5], &parse_tree__module_imports__V_71_71, ((MR_Box) (parse_tree__module_imports__V_17_17)), ((MR_Box) (parse_tree__module_imports__V_44_44)));
                                                            }
                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_71_71 == (MR_Integer) 0);
                                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                            if (parse_tree__module_imports__succeeded)
                                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_71_71;
                                                            else
                                                              {
                                                                MR_Word parse_tree__module_imports__V_72_72;

                                                                {
                                                                  parse_tree__prog_item____Compare____contains_foreign_code_0_0(&parse_tree__module_imports__V_72_72, parse_tree__module_imports__V_18_18, parse_tree__module_imports__V_45_45);
                                                                }
                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_72_72 == (MR_Integer) 0);
                                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                if (parse_tree__module_imports__succeeded)
                                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_72_72;
                                                                else
                                                                  {
                                                                    MR_Word parse_tree__module_imports__V_73_73;
                                                                    MR_Integer parse_tree__module_imports__V_113_113 = (MR_Integer) parse_tree__module_imports__V_19_19;
                                                                    MR_Integer parse_tree__module_imports__V_114_114 = (MR_Integer) parse_tree__module_imports__V_46_46;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_imports__V_73_73, parse_tree__module_imports__V_113_113, parse_tree__module_imports__V_114_114);
                                                                    }
                                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_73_73 == (MR_Integer) 0);
                                                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                    if (parse_tree__module_imports__succeeded)
                                                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_73_73;
                                                                    else
                                                                      {
                                                                        MR_Word parse_tree__module_imports__V_74_74;

                                                                        {
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[7], &parse_tree__module_imports__V_74_74, ((MR_Box) (parse_tree__module_imports__V_20_20)), ((MR_Box) (parse_tree__module_imports__V_47_47)));
                                                                        }
                                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_74_74 == (MR_Integer) 0);
                                                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                        if (parse_tree__module_imports__succeeded)
                                                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_74_74;
                                                                        else
                                                                          {
                                                                            MR_Word parse_tree__module_imports__V_75_75;

                                                                            {
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[8], &parse_tree__module_imports__V_75_75, ((MR_Box) (parse_tree__module_imports__V_21_21)), ((MR_Box) (parse_tree__module_imports__V_48_48)));
                                                                            }
                                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_75_75 == (MR_Integer) 0);
                                                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                            if (parse_tree__module_imports__succeeded)
                                                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_75_75;
                                                                            else
                                                                              {
                                                                                MR_Word parse_tree__module_imports__V_76_76;

                                                                                {
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[8], &parse_tree__module_imports__V_76_76, ((MR_Box) (parse_tree__module_imports__V_22_22)), ((MR_Box) (parse_tree__module_imports__V_49_49)));
                                                                                }
                                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_76_76 == (MR_Integer) 0);
                                                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                if (parse_tree__module_imports__succeeded)
                                                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_76_76;
                                                                                else
                                                                                  {
                                                                                    MR_Word parse_tree__module_imports__V_77_77;

                                                                                    {
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[9], &parse_tree__module_imports__V_77_77, ((MR_Box) (parse_tree__module_imports__V_23_23)), ((MR_Box) (parse_tree__module_imports__V_50_50)));
                                                                                    }
                                                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_77_77 == (MR_Integer) 0);
                                                                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                    if (parse_tree__module_imports__succeeded)
                                                                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_77_77;
                                                                                    else
                                                                                      {
                                                                                        MR_Word parse_tree__module_imports__V_78_78;

                                                                                        {
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[10], &parse_tree__module_imports__V_78_78, ((MR_Box) (parse_tree__module_imports__V_24_24)), ((MR_Box) (parse_tree__module_imports__V_51_51)));
                                                                                        }
                                                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_78_78 == (MR_Integer) 0);
                                                                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                        if (parse_tree__module_imports__succeeded)
                                                                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_78_78;
                                                                                        else
                                                                                          {
                                                                                            MR_Word parse_tree__module_imports__V_79_79;

                                                                                            {
                                                                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[0], &parse_tree__module_imports__V_79_79, ((MR_Box) (parse_tree__module_imports__V_25_25)), ((MR_Box) (parse_tree__module_imports__V_52_52)));
                                                                                            }
                                                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_79_79 == (MR_Integer) 0);
                                                                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                            if (parse_tree__module_imports__succeeded)
                                                                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_79_79;
                                                                                            else
                                                                                              {
                                                                                                MR_Word parse_tree__module_imports__V_80_80;

                                                                                                {
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[11], &parse_tree__module_imports__V_80_80, ((MR_Box) (parse_tree__module_imports__V_26_26)), ((MR_Box) (parse_tree__module_imports__V_53_53)));
                                                                                                }
                                                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_80_80 == (MR_Integer) 0);
                                                                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                                if (parse_tree__module_imports__succeeded)
                                                                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_80_80;
                                                                                                else
                                                                                                  {
                                                                                                    MR_Word parse_tree__module_imports__V_81_81;

                                                                                                    {
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[12], &parse_tree__module_imports__V_81_81, ((MR_Box) (parse_tree__module_imports__V_27_27)), ((MR_Box) (parse_tree__module_imports__V_54_54)));
                                                                                                    }
                                                                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_81_81 == (MR_Integer) 0);
                                                                                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                                    if (parse_tree__module_imports__succeeded)
                                                                                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_81_81;
                                                                                                    else
                                                                                                      {
                                                                                                        MR_Word parse_tree__module_imports__V_82_82;

                                                                                                        {
                                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[13], &parse_tree__module_imports__V_82_82, ((MR_Box) (parse_tree__module_imports__V_28_28)), ((MR_Box) (parse_tree__module_imports__V_55_55)));
                                                                                                        }
                                                                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_82_82 == (MR_Integer) 0);
                                                                                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                                        if (parse_tree__module_imports__succeeded)
                                                                                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_82_82;
                                                                                                        else
                                                                                                          {
                                                                                                            MR_Word parse_tree__module_imports__V_83_83;
                                                                                                            MR_Integer parse_tree__module_imports__V_115_115 = (MR_Integer) parse_tree__module_imports__V_29_29;
                                                                                                            MR_Integer parse_tree__module_imports__V_116_116 = (MR_Integer) parse_tree__module_imports__V_56_56;

                                                                                                            {
                                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_imports__V_83_83, parse_tree__module_imports__V_115_115, parse_tree__module_imports__V_116_116);
                                                                                                            }
                                                                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_83_83 == (MR_Integer) 0);
                                                                                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
                                                                                                            if (parse_tree__module_imports__succeeded)
                                                                                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_83_83;
                                                                                                            else
                                                                                                              {
                                                                                                                mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__module_imports__HeadVar__1_1, parse_tree__module_imports__V_30_30, parse_tree__module_imports__V_57_57);
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Integer parse_tree__module_imports__CastX_57 = (MR_Integer) parse_tree__module_imports__HeadVar__1_1;
    MR_Integer parse_tree__module_imports__CastY_58 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;

    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_57 == parse_tree__module_imports__CastY_58);
    if (parse_tree__module_imports__succeeded)
      parse_tree__module_imports__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_imports__TypeInfo_62_62;
        MR_Word parse_tree__module_imports__TypeInfo_63_63;
        MR_Word parse_tree__module_imports__TypeInfo_64_64;
        MR_Word parse_tree__module_imports__TypeInfo_65_65;
        MR_Word parse_tree__module_imports__TypeInfo_66_66;
        MR_Word parse_tree__module_imports__TypeInfo_67_67;
        MR_Word parse_tree__module_imports__TypeInfo_68_68;
        MR_Word parse_tree__module_imports__TypeInfo_69_69;
        MR_Word parse_tree__module_imports__TypeInfo_71_71;
        MR_Word parse_tree__module_imports__TypeInfo_73_73;
        MR_Word parse_tree__module_imports__TypeInfo_74_74;
        MR_Word parse_tree__module_imports__TypeInfo_75_75;
        MR_Word parse_tree__module_imports__TypeInfo_76_76;
        MR_Word parse_tree__module_imports__TypeInfo_77_77;
        MR_Word parse_tree__module_imports__TypeInfo_78_78;
        MR_Word parse_tree__module_imports__TypeInfo_79_79;
        MR_Word parse_tree__module_imports__TypeInfo_80_80;
        MR_Word parse_tree__module_imports__TypeInfo_81_81;
        MR_String parse_tree__module_imports__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 14)));
        MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 15)));
        MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 16)));
        MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 17)));
        MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 18)));
        MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 19)));
        MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 20)));
        MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 21)));
        MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 22)));
        MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 23)));
        MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 24)));
        MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 25)));
        MR_String parse_tree__module_imports__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 26)));
        MR_String parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 14)));
        MR_Word parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 15)));
        MR_Word parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 16)));
        MR_Word parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 17)));
        MR_Word parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 18)));
        MR_Word parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 19)));
        MR_Word parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 20)));
        MR_Word parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 21)));
        MR_Word parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 22)));
        MR_Word parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 23)));
        MR_Word parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 24)));
        MR_Word parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 25)));
        MR_String parse_tree__module_imports__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 26)));

        parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_3_3, parse_tree__module_imports__V_30_30) == 0);
        if (parse_tree__module_imports__succeeded)
          {
            {
              parse_tree__module_imports__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_31_31);
            }
            if (parse_tree__module_imports__succeeded)
              {
                {
                  parse_tree__module_imports__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_imports__V_5_5, parse_tree__module_imports__V_32_32);
                }
                if (parse_tree__module_imports__succeeded)
                  {
                    {
                      parse_tree__module_imports__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_imports__V_6_6, parse_tree__module_imports__V_33_33);
                    }
                    if (parse_tree__module_imports__succeeded)
                      {
                        parse_tree__module_imports__TypeInfo_62_62 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                        {
                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_62_62, ((MR_Box) (parse_tree__module_imports__V_7_7)), ((MR_Box) (parse_tree__module_imports__V_34_34)));
                        }
                        if (parse_tree__module_imports__succeeded)
                          {
                            parse_tree__module_imports__TypeInfo_63_63 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                            {
                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_63_63, ((MR_Box) (parse_tree__module_imports__V_8_8)), ((MR_Box) (parse_tree__module_imports__V_35_35)));
                            }
                            if (parse_tree__module_imports__succeeded)
                              {
                                parse_tree__module_imports__TypeInfo_64_64 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                                {
                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_64_64, ((MR_Box) (parse_tree__module_imports__V_9_9)), ((MR_Box) (parse_tree__module_imports__V_36_36)));
                                }
                                if (parse_tree__module_imports__succeeded)
                                  {
                                    parse_tree__module_imports__TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                                    {
                                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_65_65, ((MR_Box) (parse_tree__module_imports__V_10_10)), ((MR_Box) (parse_tree__module_imports__V_37_37)));
                                    }
                                    if (parse_tree__module_imports__succeeded)
                                      {
                                        parse_tree__module_imports__TypeInfo_66_66 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                                        {
                                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_66_66, ((MR_Box) (parse_tree__module_imports__V_11_11)), ((MR_Box) (parse_tree__module_imports__V_38_38)));
                                        }
                                        if (parse_tree__module_imports__succeeded)
                                          {
                                            parse_tree__module_imports__TypeInfo_67_67 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                                            {
                                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_67_67, ((MR_Box) (parse_tree__module_imports__V_12_12)), ((MR_Box) (parse_tree__module_imports__V_39_39)));
                                            }
                                            if (parse_tree__module_imports__succeeded)
                                              {
                                                parse_tree__module_imports__TypeInfo_68_68 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                                                {
                                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_68_68, ((MR_Box) (parse_tree__module_imports__V_13_13)), ((MR_Box) (parse_tree__module_imports__V_40_40)));
                                                }
                                                if (parse_tree__module_imports__succeeded)
                                                  {
                                                    parse_tree__module_imports__TypeInfo_69_69 = (MR_Word) &parse_tree__module_imports_scalar_common_1[4];
                                                    {
                                                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_69_69, ((MR_Box) (parse_tree__module_imports__V_14_14)), ((MR_Box) (parse_tree__module_imports__V_41_41)));
                                                    }
                                                    if (parse_tree__module_imports__succeeded)
                                                      {
                                                        {
                                                          parse_tree__module_imports__succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(parse_tree__module_imports__V_15_15, parse_tree__module_imports__V_42_42);
                                                        }
                                                        if (parse_tree__module_imports__succeeded)
                                                          {
                                                            parse_tree__module_imports__TypeInfo_71_71 = (MR_Word) &parse_tree__module_imports_scalar_common_1[5];
                                                            {
                                                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_71_71, ((MR_Box) (parse_tree__module_imports__V_16_16)), ((MR_Box) (parse_tree__module_imports__V_43_43)));
                                                            }
                                                            if (parse_tree__module_imports__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__module_imports__succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(parse_tree__module_imports__V_17_17, parse_tree__module_imports__V_44_44);
                                                                }
                                                                if (parse_tree__module_imports__succeeded)
                                                                  {
                                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_18_18 == parse_tree__module_imports__V_45_45);
                                                                    if (parse_tree__module_imports__succeeded)
                                                                      {
                                                                        parse_tree__module_imports__TypeInfo_73_73 = (MR_Word) &parse_tree__module_imports_scalar_common_1[7];
                                                                        {
                                                                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_73_73, ((MR_Box) (parse_tree__module_imports__V_19_19)), ((MR_Box) (parse_tree__module_imports__V_46_46)));
                                                                        }
                                                                        if (parse_tree__module_imports__succeeded)
                                                                          {
                                                                            parse_tree__module_imports__TypeInfo_74_74 = (MR_Word) &parse_tree__module_imports_scalar_common_1[8];
                                                                            {
                                                                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_74_74, ((MR_Box) (parse_tree__module_imports__V_20_20)), ((MR_Box) (parse_tree__module_imports__V_47_47)));
                                                                            }
                                                                            if (parse_tree__module_imports__succeeded)
                                                                              {
                                                                                parse_tree__module_imports__TypeInfo_75_75 = (MR_Word) &parse_tree__module_imports_scalar_common_1[8];
                                                                                {
                                                                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_75_75, ((MR_Box) (parse_tree__module_imports__V_21_21)), ((MR_Box) (parse_tree__module_imports__V_48_48)));
                                                                                }
                                                                                if (parse_tree__module_imports__succeeded)
                                                                                  {
                                                                                    parse_tree__module_imports__TypeInfo_76_76 = (MR_Word) &parse_tree__module_imports_scalar_common_1[9];
                                                                                    {
                                                                                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_76_76, ((MR_Box) (parse_tree__module_imports__V_22_22)), ((MR_Box) (parse_tree__module_imports__V_49_49)));
                                                                                    }
                                                                                    if (parse_tree__module_imports__succeeded)
                                                                                      {
                                                                                        parse_tree__module_imports__TypeInfo_77_77 = (MR_Word) &parse_tree__module_imports_scalar_common_1[10];
                                                                                        {
                                                                                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_77_77, ((MR_Box) (parse_tree__module_imports__V_23_23)), ((MR_Box) (parse_tree__module_imports__V_50_50)));
                                                                                        }
                                                                                        if (parse_tree__module_imports__succeeded)
                                                                                          {
                                                                                            parse_tree__module_imports__TypeInfo_78_78 = (MR_Word) &parse_tree__module_imports_scalar_common_2[0];
                                                                                            {
                                                                                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_78_78, ((MR_Box) (parse_tree__module_imports__V_24_24)), ((MR_Box) (parse_tree__module_imports__V_51_51)));
                                                                                            }
                                                                                            if (parse_tree__module_imports__succeeded)
                                                                                              {
                                                                                                parse_tree__module_imports__TypeInfo_79_79 = (MR_Word) &parse_tree__module_imports_scalar_common_1[11];
                                                                                                {
                                                                                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_79_79, ((MR_Box) (parse_tree__module_imports__V_25_25)), ((MR_Box) (parse_tree__module_imports__V_52_52)));
                                                                                                }
                                                                                                if (parse_tree__module_imports__succeeded)
                                                                                                  {
                                                                                                    parse_tree__module_imports__TypeInfo_80_80 = (MR_Word) &parse_tree__module_imports_scalar_common_1[12];
                                                                                                    {
                                                                                                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_80_80, ((MR_Box) (parse_tree__module_imports__V_26_26)), ((MR_Box) (parse_tree__module_imports__V_53_53)));
                                                                                                    }
                                                                                                    if (parse_tree__module_imports__succeeded)
                                                                                                      {
                                                                                                        parse_tree__module_imports__TypeInfo_81_81 = (MR_Word) &parse_tree__module_imports_scalar_common_1[13];
                                                                                                        {
                                                                                                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_81_81, ((MR_Box) (parse_tree__module_imports__V_27_27)), ((MR_Box) (parse_tree__module_imports__V_54_54)));
                                                                                                        }
                                                                                                        if (parse_tree__module_imports__succeeded)
                                                                                                          {
                                                                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_28_28 == parse_tree__module_imports__V_55_55);
                                                                                                            if (parse_tree__module_imports__succeeded)
                                                                                                              parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_29_29, parse_tree__module_imports__V_56_56) == 0);
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__module_imports__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(
  MR_Word parse_tree__module_imports__HeadVar__1_1,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_HasMain_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_imports__succeeded;

        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_imports__STATE_VARIABLE_HasMain_3 = parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2;
        else
          {
            MR_Word parse_tree__module_imports__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_imports__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_32_32;
            MR_Word parse_tree__module_imports__ItemPredDecl_10;
            MR_Word parse_tree__module_imports__Name_11;
            MR_Word parse_tree__module_imports__ArgTypes_12;
            MR_Word parse_tree__module_imports__WithType_14;
            MR_Word parse_tree__module_imports__V_28_28;
            MR_String parse_tree__module_imports__V_29_29;
            MR_Word parse_tree__module_imports__V_30_30;
            MR_Word parse_tree__module_imports__V_31_31;
            MR_Word parse_tree__module_imports__V_13_13;
            MR_Word parse_tree__module_imports__V_15_15;
            MR_Word parse_tree__module_imports__V_16_16;
            MR_Word parse_tree__module_imports__V_17_17;
            MR_Word parse_tree__module_imports__V_18_18;
            MR_Word parse_tree__module_imports__V_19_19;
            MR_Word parse_tree__module_imports__V_20_20;
            MR_Word parse_tree__module_imports__V_21_21;
            MR_Word parse_tree__module_imports__V_22_22;
            MR_Integer parse_tree__module_imports__V_23_23;
            MR_Word parse_tree__module_imports__V_24_24;
            MR_Word parse_tree__module_imports__V_25_25;

            parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (parse_tree__module_imports__succeeded)
              {
                parse_tree__module_imports__ItemPredDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_7, (MR_Integer) 1)));
                parse_tree__module_imports__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 0)));
                parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 1)));
                parse_tree__module_imports__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 2)));
                parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 3)));
                parse_tree__module_imports__WithType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 4)));
                parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 5)));
                parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 6)));
                parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 7)));
                parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 8)));
                parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 9)));
                parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 10)));
                parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 11)));
                parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 12)));
                parse_tree__module_imports__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_10, (MR_Integer) 13)));
                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_28_28 == (MR_Integer) 0);
                if (parse_tree__module_imports__succeeded)
                  {
                    {
                      parse_tree__module_imports__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_imports__Name_11);
                    }
                    parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_29_29, (MR_String) "main") == 0);
                    if (parse_tree__module_imports__succeeded)
                      {
                        parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__ArgTypes_12)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__module_imports__succeeded)
                          {
                            parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__ArgTypes_12, (MR_Integer) 0)));
                            parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__ArgTypes_12, (MR_Integer) 1)));
                            parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__module_imports__succeeded)
                              {
                                parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_30_30, (MR_Integer) 0)));
                                parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_30_30, (MR_Integer) 1)));
                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (parse_tree__module_imports__succeeded)
                                  parse_tree__module_imports__succeeded = (parse_tree__module_imports__WithType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (parse_tree__module_imports__succeeded)
              parse_tree__module_imports__STATE_VARIABLE_HasMain_32_32 = (MR_Integer) 0;
            else
              parse_tree__module_imports__STATE_VARIABLE_HasMain_32_32 = parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_8;
              MR_Word parse_tree__module_imports__STATE_VARIABLE_HasMain_0__tmp_copy_2 = parse_tree__module_imports__STATE_VARIABLE_HasMain_32_32;

              parse_tree__module_imports__STATE_VARIABLE_HasMain_0_2 = parse_tree__module_imports__STATE_VARIABLE_HasMain_0__tmp_copy_2;
              parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_1(
  MR_Box parse_tree__module_imports__closure_arg,
  MR_Box parse_tree__module_imports__wrapper_arg_1,
  MR_Box parse_tree__module_imports__wrapper_arg_2,
  MR_Box * parse_tree__module_imports__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_imports__closure = parse_tree__module_imports__closure_arg;
    MR_Word parse_tree__module_imports__conv0_LambdaHeadVar__3_59;

    {
      parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__427__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2), &parse_tree__module_imports__conv0_LambdaHeadVar__3_59);
    }
    *parse_tree__module_imports__wrapper_arg_3 = ((MR_Box) (parse_tree__module_imports__conv0_LambdaHeadVar__3_59));
  }
}

void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0(
  MR_Word parse_tree__module_imports__Globals_9,
  MR_String parse_tree__module_imports__FileName_10,
  MR_Word parse_tree__module_imports__SourceFileModuleName_11,
  MR_Word parse_tree__module_imports__NestedModuleNames_12,
  MR_Word parse_tree__module_imports__Specs_13,
  MR_Word parse_tree__module_imports__Errors_14,
  MR_Word parse_tree__module_imports__RawCompUnit0_15,
  MR_Word * parse_tree__module_imports__ModuleImports_16)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__TypeCtorInfo_73_73;
    MR_Word parse_tree__module_imports__TypeCtorInfo_74_74;
    MR_Word parse_tree__module_imports__TypeInfo_78_78;
    MR_Word parse_tree__module_imports__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__RawCompUnit0_15, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__RawCompUnit0_15, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__RawCompUnit0_15, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__ParentDeps_20;
    MR_Word parse_tree__module_imports__ImplImportDeps0_21;
    MR_Word parse_tree__module_imports__ImplUseDeps0_22;
    MR_Word parse_tree__module_imports__ImplicitImplImportDeps_23;
    MR_Word parse_tree__module_imports__ImplicitImplUseDeps_24;
    MR_Word parse_tree__module_imports__ImplImportDeps_25;
    MR_Word parse_tree__module_imports__ImplUseDeps_26;
    MR_Word parse_tree__module_imports__ImplementationDeps_27;
    MR_Word parse_tree__module_imports__RawCompUnit_28;
    MR_Word parse_tree__module_imports__InterfaceItemBlocks_31;
    MR_Word parse_tree__module_imports__InterfaceImportDeps0_32;
    MR_Word parse_tree__module_imports__InterfaceUseDeps0_33;
    MR_Word parse_tree__module_imports__ImplicitInterfaceImportDeps_34;
    MR_Word parse_tree__module_imports__ImplicitInterfaceUseDeps_35;
    MR_Word parse_tree__module_imports__InterfaceImportDeps_36;
    MR_Word parse_tree__module_imports__InterfaceUseDeps_37;
    MR_Word parse_tree__module_imports__InterfaceDeps_38;
    MR_Word parse_tree__module_imports__IndirectDeps_39;
    MR_Word parse_tree__module_imports__IncludeDeps_40;
    MR_Word parse_tree__module_imports__InterfaceIncludeDeps_41;
    MR_Word parse_tree__module_imports__NestedDeps_42;
    MR_Word parse_tree__module_imports__FactTableDeps_43;
    MR_Word parse_tree__module_imports__LangSet_44;
    MR_Word parse_tree__module_imports__ForeignImports0_45;
    MR_Word parse_tree__module_imports__ForeignIncludeFiles_46;
    MR_Word parse_tree__module_imports__ContainsForeignExport_47;
    MR_Word parse_tree__module_imports__ContainsForeignCode_48;
    MR_Word parse_tree__module_imports__SelfImportLangs_49;
    MR_Word parse_tree__module_imports__ForeignImports_53;
    MR_Word parse_tree__module_imports__HasMain_54;
    MR_Word parse_tree__module_imports__V_56_56;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_63_63;
    MR_Word parse_tree__module_imports__V_64_64;
    MR_Word parse_tree__module_imports__V_65_65;
    MR_Word parse_tree__module_imports__V_66_66;
    MR_Word parse_tree__module_imports__V_67_67;
    MR_String parse_tree__module_imports__V_69_69;
    MR_Word parse_tree__module_imports__V_29_29;
    MR_Word parse_tree__module_imports__V_30_30;
    MR_Box parse_tree__module_imports__conv1_ForeignImports_53;

    {
      parse_tree__module_imports__ParentDeps_20 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__module_imports__ModuleName_17);
    }
    parse_tree__module_imports__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0;
    {
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__RawItemBlocks_19, &parse_tree__module_imports__ImplImportDeps0_21, &parse_tree__module_imports__ImplUseDeps0_22);
    }
    {
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__Globals_9, parse_tree__module_imports__RawItemBlocks_19, &parse_tree__module_imports__ImplicitImplImportDeps_23, &parse_tree__module_imports__ImplicitImplUseDeps_24);
    }
    parse_tree__module_imports__TypeCtorInfo_74_74 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__set__union_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__ImplicitImplImportDeps_23, parse_tree__module_imports__ImplImportDeps0_21, &parse_tree__module_imports__ImplImportDeps_25);
    }
    {
      mercury__set__union_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__ImplicitImplUseDeps_24, parse_tree__module_imports__ImplUseDeps0_22, &parse_tree__module_imports__ImplUseDeps_26);
    }
    {
      mercury__set__union_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__ImplImportDeps_25, parse_tree__module_imports__ImplUseDeps_26, &parse_tree__module_imports__ImplementationDeps_27);
    }
    {
      parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, parse_tree__module_imports__RawCompUnit0_15, &parse_tree__module_imports__RawCompUnit_28);
    }
    parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__RawCompUnit_28, (MR_Integer) 0)));
    parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__RawCompUnit_28, (MR_Integer) 1)));
    parse_tree__module_imports__InterfaceItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__RawCompUnit_28, (MR_Integer) 2)));
    {
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__InterfaceItemBlocks_31, &parse_tree__module_imports__InterfaceImportDeps0_32, &parse_tree__module_imports__InterfaceUseDeps0_33);
    }
    {
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__Globals_9, parse_tree__module_imports__InterfaceItemBlocks_31, &parse_tree__module_imports__ImplicitInterfaceImportDeps_34, &parse_tree__module_imports__ImplicitInterfaceUseDeps_35);
    }
    {
      mercury__set__union_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__ImplicitInterfaceImportDeps_34, parse_tree__module_imports__InterfaceImportDeps0_32, &parse_tree__module_imports__InterfaceImportDeps_36);
    }
    {
      mercury__set__union_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__ImplicitInterfaceUseDeps_35, parse_tree__module_imports__InterfaceUseDeps0_33, &parse_tree__module_imports__InterfaceUseDeps_37);
    }
    {
      mercury__set__union_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__InterfaceImportDeps_36, parse_tree__module_imports__InterfaceUseDeps_37, &parse_tree__module_imports__InterfaceDeps_38);
    }
    {
      mercury__set__init_1_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, &parse_tree__module_imports__IndirectDeps_39);
    }
    {
      parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__RawItemBlocks_19, &parse_tree__module_imports__IncludeDeps_40);
    }
    {
      parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__InterfaceItemBlocks_31, &parse_tree__module_imports__InterfaceIncludeDeps_41);
    }
    {
      parse_tree__module_imports__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_imports__ModuleName_17, parse_tree__module_imports__SourceFileModuleName_11);
    }
    if (parse_tree__module_imports__succeeded)
      {
        mercury__set__delete_3_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, ((MR_Box) (parse_tree__module_imports__ModuleName_17)), parse_tree__module_imports__NestedModuleNames_12, &parse_tree__module_imports__NestedDeps_42);
      }
    else
      {
        mercury__set__init_1_p_0(parse_tree__module_imports__TypeCtorInfo_74_74, &parse_tree__module_imports__NestedDeps_42);
      }
    {
      parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__RawItemBlocks_19, &parse_tree__module_imports__FactTableDeps_43);
    }
    {
      parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__Globals_9, parse_tree__module_imports__RawItemBlocks_19, &parse_tree__module_imports__LangSet_44, &parse_tree__module_imports__ForeignImports0_45, &parse_tree__module_imports__ForeignIncludeFiles_46, &parse_tree__module_imports__ContainsForeignExport_47);
    }
    {
      parse_tree__module_imports__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__module_imports__LangSet_44);
    }
    if (parse_tree__module_imports__succeeded)
      parse_tree__module_imports__ContainsForeignCode_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        parse_tree__module_imports__ContainsForeignCode_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__module_imports__ContainsForeignCode_48, 0) = ((MR_Box) (parse_tree__module_imports__LangSet_44));
      }
    {
      parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0(parse_tree__module_imports__TypeCtorInfo_73_73, parse_tree__module_imports__RawItemBlocks_19, &parse_tree__module_imports__SelfImportLangs_49);
    }
    {
      parse_tree__module_imports__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_56_56, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_56_56, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_56_56, 3) = ((MR_Box) (parse_tree__module_imports__ModuleName_17));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0, parse_tree__module_imports__V_56_56, parse_tree__module_imports__SelfImportLangs_49, ((MR_Box) (parse_tree__module_imports__ForeignImports0_45)), &parse_tree__module_imports__conv1_ForeignImports_53);
    }
    parse_tree__module_imports__ForeignImports_53 = ((MR_Word) parse_tree__module_imports__conv1_ForeignImports_53);
    {
      parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__module_imports__RawItemBlocks_19, (MR_Integer) 1, &parse_tree__module_imports__HasMain_54);
    }
    {
      parse_tree__module_imports__V_61_61 = mercury__set__list_to_set_1_f_0(parse_tree__module_imports__TypeCtorInfo_74_74, parse_tree__module_imports__ParentDeps_20);
    }
    parse_tree__module_imports__TypeInfo_78_78 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    {
      parse_tree__module_imports__V_63_63 = mercury__cord__init_0_f_0(parse_tree__module_imports__TypeInfo_78_78);
    }
    {
      parse_tree__module_imports__V_64_64 = mercury__cord__init_0_f_0(parse_tree__module_imports__TypeInfo_78_78);
    }
    {
      parse_tree__module_imports__V_65_65 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[1]);
    }
    {
      parse_tree__module_imports__V_66_66 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[2]);
    }
    {
      parse_tree__module_imports__V_67_67 = mercury__map__init_0_f_0(parse_tree__module_imports__TypeCtorInfo_74_74, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
    {
      parse_tree__module_imports__V_69_69 = mercury__dir__this_directory_0_f_0();
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__ModuleImports_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__FileName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__SourceFileModuleName_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__ModuleName_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__InterfaceDeps_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__ImplementationDeps_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__IndirectDeps_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__IncludeDeps_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__InterfaceIncludeDeps_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__NestedDeps_42));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__FactTableDeps_43));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__ForeignImports_53));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__ForeignIncludeFiles_46));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__ContainsForeignCode_48));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__ContainsForeignExport_47));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_63_63));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_64_64));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_65_65));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_66_66));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_67_67));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__Specs_13));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__Errors_14));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__HasMain_54));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_69_69));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(
  MR_Word parse_tree__module_imports__Module_5,
  MR_Word * parse_tree__module_imports__AugCompUnit_6,
  MR_Word * parse_tree__module_imports__Specs_7,
  MR_Word * parse_tree__module_imports__Errors_8)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__TypeInfo_281_281 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    MR_Word parse_tree__module_imports__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__ModuleNameContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__DirectIntItemBlocks_12;
    MR_Word parse_tree__module_imports__IndirectIntItemBlocks_13;
    MR_Word parse_tree__module_imports__OptItemBlocks_14;
    MR_Word parse_tree__module_imports__IntForOptItemBlocks_15;
    MR_Word parse_tree__module_imports__ModuleVersionNumbers_16;
    MR_Word parse_tree__module_imports__V_18_18;
    MR_Word parse_tree__module_imports__V_19_19;
    MR_Word parse_tree__module_imports__V_20_20;
    MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
    MR_String parse_tree__module_imports__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_125_125;
    MR_Word parse_tree__module_imports__V_126_126;
    MR_Word parse_tree__module_imports__V_127_127;
    MR_Word parse_tree__module_imports__V_128_128;
    MR_Word parse_tree__module_imports__V_129_129;
    MR_Word parse_tree__module_imports__V_130_130;
    MR_Word parse_tree__module_imports__V_131_131;
    MR_Word parse_tree__module_imports__V_132_132;
    MR_Word parse_tree__module_imports__V_133_133;
    MR_Word parse_tree__module_imports__V_134_134;
    MR_Word parse_tree__module_imports__V_135_135;
    MR_Word parse_tree__module_imports__V_136_136;
    MR_Word parse_tree__module_imports__V_137_137;
    MR_Word parse_tree__module_imports__V_138_138;
    MR_Word parse_tree__module_imports__V_139_139;
    MR_Word parse_tree__module_imports__V_140_140;
    MR_Word parse_tree__module_imports__V_141_141;
    MR_Word parse_tree__module_imports__V_142_142;
    MR_Word parse_tree__module_imports__V_143_143;
    MR_Word parse_tree__module_imports__V_144_144;
    MR_Word parse_tree__module_imports__V_145_145;
    MR_Word parse_tree__module_imports__V_146_146;
    MR_Word parse_tree__module_imports__V_147_147;
    MR_Word parse_tree__module_imports__V_148_148;
    MR_Word parse_tree__module_imports__V_149_149;
    MR_String parse_tree__module_imports__V_150_150;
    MR_String parse_tree__module_imports__V_151_151;
    MR_Word parse_tree__module_imports__V_152_152;
    MR_Word parse_tree__module_imports__V_153_153;
    MR_Word parse_tree__module_imports__V_154_154;
    MR_Word parse_tree__module_imports__V_155_155;
    MR_Word parse_tree__module_imports__V_156_156;
    MR_Word parse_tree__module_imports__V_157_157;
    MR_Word parse_tree__module_imports__V_158_158;
    MR_Word parse_tree__module_imports__V_159_159;
    MR_Word parse_tree__module_imports__V_160_160;
    MR_Word parse_tree__module_imports__V_161_161;
    MR_Word parse_tree__module_imports__V_162_162;
    MR_Word parse_tree__module_imports__V_163_163;
    MR_Word parse_tree__module_imports__V_164_164;
    MR_Word parse_tree__module_imports__V_165_165;
    MR_Word parse_tree__module_imports__V_166_166;
    MR_Word parse_tree__module_imports__V_167_167;
    MR_Word parse_tree__module_imports__V_168_168;
    MR_Word parse_tree__module_imports__V_169_169;
    MR_Word parse_tree__module_imports__V_170_170;
    MR_Word parse_tree__module_imports__V_171_171;
    MR_Word parse_tree__module_imports__V_172_172;
    MR_Word parse_tree__module_imports__V_173_173;
    MR_Word parse_tree__module_imports__V_174_174;
    MR_Word parse_tree__module_imports__V_175_175;
    MR_String parse_tree__module_imports__V_176_176;
    MR_String parse_tree__module_imports__V_177_177;
    MR_Word parse_tree__module_imports__V_178_178;
    MR_Word parse_tree__module_imports__V_179_179;
    MR_Word parse_tree__module_imports__V_180_180;
    MR_Word parse_tree__module_imports__V_181_181;
    MR_Word parse_tree__module_imports__V_182_182;
    MR_Word parse_tree__module_imports__V_183_183;
    MR_Word parse_tree__module_imports__V_184_184;
    MR_Word parse_tree__module_imports__V_185_185;
    MR_Word parse_tree__module_imports__V_186_186;
    MR_Word parse_tree__module_imports__V_187_187;
    MR_Word parse_tree__module_imports__V_188_188;
    MR_Word parse_tree__module_imports__V_189_189;
    MR_Word parse_tree__module_imports__V_190_190;
    MR_Word parse_tree__module_imports__V_191_191;
    MR_Word parse_tree__module_imports__V_192_192;
    MR_Word parse_tree__module_imports__V_193_193;
    MR_Word parse_tree__module_imports__V_194_194;
    MR_Word parse_tree__module_imports__V_195_195;
    MR_Word parse_tree__module_imports__V_196_196;
    MR_Word parse_tree__module_imports__V_197_197;
    MR_Word parse_tree__module_imports__V_198_198;
    MR_Word parse_tree__module_imports__V_199_199;
    MR_Word parse_tree__module_imports__V_200_200;
    MR_Word parse_tree__module_imports__V_201_201;
    MR_String parse_tree__module_imports__V_202_202;
    MR_String parse_tree__module_imports__V_203_203;
    MR_Word parse_tree__module_imports__V_204_204;
    MR_Word parse_tree__module_imports__V_205_205;
    MR_Word parse_tree__module_imports__V_206_206;
    MR_Word parse_tree__module_imports__V_207_207;
    MR_Word parse_tree__module_imports__V_208_208;
    MR_Word parse_tree__module_imports__V_209_209;
    MR_Word parse_tree__module_imports__V_210_210;
    MR_Word parse_tree__module_imports__V_211_211;
    MR_Word parse_tree__module_imports__V_212_212;
    MR_Word parse_tree__module_imports__V_213_213;
    MR_Word parse_tree__module_imports__V_214_214;
    MR_Word parse_tree__module_imports__V_215_215;
    MR_Word parse_tree__module_imports__V_216_216;
    MR_Word parse_tree__module_imports__V_217_217;
    MR_Word parse_tree__module_imports__V_218_218;
    MR_Word parse_tree__module_imports__V_219_219;
    MR_Word parse_tree__module_imports__V_220_220;
    MR_Word parse_tree__module_imports__V_221_221;
    MR_Word parse_tree__module_imports__V_222_222;
    MR_Word parse_tree__module_imports__V_223_223;
    MR_Word parse_tree__module_imports__V_226_226;
    MR_Word parse_tree__module_imports__V_227_227;
    MR_String parse_tree__module_imports__V_228_228;

    {
      parse_tree__module_imports__DirectIntItemBlocks_12 = mercury__cord__list_1_f_0(parse_tree__module_imports__TypeInfo_281_281, parse_tree__module_imports__V_37_37);
    }
    parse_tree__module_imports__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
    parse_tree__module_imports__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
    parse_tree__module_imports__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
    parse_tree__module_imports__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
    parse_tree__module_imports__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
    parse_tree__module_imports__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
    parse_tree__module_imports__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
    parse_tree__module_imports__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
    parse_tree__module_imports__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
    parse_tree__module_imports__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
    parse_tree__module_imports__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
    parse_tree__module_imports__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
    parse_tree__module_imports__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
    parse_tree__module_imports__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
    parse_tree__module_imports__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
    parse_tree__module_imports__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
    parse_tree__module_imports__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
    parse_tree__module_imports__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
    parse_tree__module_imports__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
    parse_tree__module_imports__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 20)));
    parse_tree__module_imports__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 21)));
    parse_tree__module_imports__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 22)));
    parse_tree__module_imports__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 23)));
    parse_tree__module_imports__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 24)));
    parse_tree__module_imports__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 25)));
    parse_tree__module_imports__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 26)));
    {
      parse_tree__module_imports__IndirectIntItemBlocks_13 = mercury__cord__list_1_f_0(parse_tree__module_imports__TypeInfo_281_281, parse_tree__module_imports__V_18_18);
    }
    parse_tree__module_imports__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
    parse_tree__module_imports__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
    parse_tree__module_imports__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
    parse_tree__module_imports__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
    parse_tree__module_imports__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
    parse_tree__module_imports__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
    parse_tree__module_imports__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
    parse_tree__module_imports__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
    parse_tree__module_imports__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
    parse_tree__module_imports__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
    parse_tree__module_imports__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
    parse_tree__module_imports__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
    parse_tree__module_imports__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
    parse_tree__module_imports__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
    parse_tree__module_imports__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
    parse_tree__module_imports__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
    parse_tree__module_imports__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
    parse_tree__module_imports__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
    parse_tree__module_imports__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
    parse_tree__module_imports__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 20)));
    parse_tree__module_imports__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 21)));
    parse_tree__module_imports__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 22)));
    parse_tree__module_imports__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 23)));
    parse_tree__module_imports__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 24)));
    parse_tree__module_imports__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 25)));
    parse_tree__module_imports__V_176_176 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 26)));
    {
      parse_tree__module_imports__OptItemBlocks_14 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[1], parse_tree__module_imports__V_19_19);
    }
    parse_tree__module_imports__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
    parse_tree__module_imports__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
    parse_tree__module_imports__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
    parse_tree__module_imports__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
    parse_tree__module_imports__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
    parse_tree__module_imports__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
    parse_tree__module_imports__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
    parse_tree__module_imports__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
    parse_tree__module_imports__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
    parse_tree__module_imports__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
    parse_tree__module_imports__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
    parse_tree__module_imports__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
    parse_tree__module_imports__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
    parse_tree__module_imports__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
    parse_tree__module_imports__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
    parse_tree__module_imports__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
    parse_tree__module_imports__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
    parse_tree__module_imports__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
    parse_tree__module_imports__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
    parse_tree__module_imports__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 20)));
    parse_tree__module_imports__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 21)));
    parse_tree__module_imports__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 22)));
    parse_tree__module_imports__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 23)));
    parse_tree__module_imports__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 24)));
    parse_tree__module_imports__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 25)));
    parse_tree__module_imports__V_202_202 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 26)));
    {
      parse_tree__module_imports__IntForOptItemBlocks_15 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[2], parse_tree__module_imports__V_20_20);
    }
    parse_tree__module_imports__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
    parse_tree__module_imports__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
    parse_tree__module_imports__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
    parse_tree__module_imports__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
    parse_tree__module_imports__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
    parse_tree__module_imports__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
    parse_tree__module_imports__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
    parse_tree__module_imports__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
    parse_tree__module_imports__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
    parse_tree__module_imports__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
    parse_tree__module_imports__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
    parse_tree__module_imports__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
    parse_tree__module_imports__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
    parse_tree__module_imports__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
    parse_tree__module_imports__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
    parse_tree__module_imports__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
    parse_tree__module_imports__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
    parse_tree__module_imports__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
    parse_tree__module_imports__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
    parse_tree__module_imports__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
    parse_tree__module_imports__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 20)));
    parse_tree__module_imports__ModuleVersionNumbers_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 21)));
    *parse_tree__module_imports__Specs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 22)));
    *parse_tree__module_imports__Errors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 23)));
    parse_tree__module_imports__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 24)));
    parse_tree__module_imports__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 25)));
    parse_tree__module_imports__V_228_228 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__AugCompUnit_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__ModuleName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__ModuleVersionNumbers_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__SrcItemBlocks_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__DirectIntItemBlocks_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__IndirectIntItemBlocks_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__OptItemBlocks_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__IntForOptItemBlocks_15));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(
  MR_Word parse_tree__module_imports__NewSpecs_5,
  MR_Word parse_tree__module_imports__NewErrors_6,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_13)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__Specs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__Errors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__Specs_10;
    MR_Word parse_tree__module_imports__Errors_11;
    MR_String parse_tree__module_imports__V_68_68;
    MR_Word parse_tree__module_imports__V_69_69;
    MR_Word parse_tree__module_imports__V_70_70;
    MR_Word parse_tree__module_imports__V_71_71;
    MR_Word parse_tree__module_imports__V_72_72;
    MR_Word parse_tree__module_imports__V_73_73;
    MR_Word parse_tree__module_imports__V_74_74;
    MR_Word parse_tree__module_imports__V_75_75;
    MR_Word parse_tree__module_imports__V_76_76;
    MR_Word parse_tree__module_imports__V_77_77;
    MR_Word parse_tree__module_imports__V_78_78;
    MR_Word parse_tree__module_imports__V_79_79;
    MR_Word parse_tree__module_imports__V_80_80;
    MR_Word parse_tree__module_imports__V_81_81;
    MR_Word parse_tree__module_imports__V_82_82;
    MR_Word parse_tree__module_imports__V_83_83;
    MR_Word parse_tree__module_imports__V_84_84;
    MR_Word parse_tree__module_imports__V_85_85;
    MR_Word parse_tree__module_imports__V_86_86;
    MR_Word parse_tree__module_imports__V_87_87;
    MR_Word parse_tree__module_imports__V_88_88;
    MR_Word parse_tree__module_imports__V_89_89;
    MR_Word parse_tree__module_imports__V_92_92;
    MR_Word parse_tree__module_imports__V_93_93;
    MR_String parse_tree__module_imports__V_94_94;
    MR_String parse_tree__module_imports__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));
    MR_Word parse_tree__module_imports__V_90_90;
    MR_Word parse_tree__module_imports__V_91_91;

    {
      parse_tree__module_imports__Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__module_imports__NewSpecs_5, parse_tree__module_imports__Specs0_8);
    }
    {
      mercury__set__union_3_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, parse_tree__module_imports__Errors0_9, parse_tree__module_imports__NewErrors_6, &parse_tree__module_imports__Errors_11);
    }
    parse_tree__module_imports__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
    parse_tree__module_imports__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
    parse_tree__module_imports__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
    parse_tree__module_imports__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
    parse_tree__module_imports__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
    parse_tree__module_imports__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
    parse_tree__module_imports__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
    parse_tree__module_imports__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
    parse_tree__module_imports__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
    parse_tree__module_imports__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
    parse_tree__module_imports__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
    parse_tree__module_imports__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
    parse_tree__module_imports__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
    parse_tree__module_imports__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
    parse_tree__module_imports__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
    parse_tree__module_imports__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
    parse_tree__module_imports__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
    parse_tree__module_imports__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
    parse_tree__module_imports__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
    parse_tree__module_imports__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
    parse_tree__module_imports__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
    parse_tree__module_imports__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
    parse_tree__module_imports__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
    parse_tree__module_imports__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
    parse_tree__module_imports__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
    parse_tree__module_imports__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
    parse_tree__module_imports__V_94_94 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_68_68));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_69_69));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_70_70));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_71_71));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_72_72));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_73_73));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_74_74));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_75_75));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_76_76));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_77_77));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_78_78));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_79_79));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_80_80));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_81_81));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_82_82));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_83_83));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_84_84));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_85_85));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_86_86));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_87_87));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_88_88));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_89_89));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__Specs_10));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__Errors_11));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_92_92));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_93_93));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_94_94));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(
  MR_Word parse_tree__module_imports__ModuleName_5,
  MR_Word parse_tree__module_imports__MaybeVersionNumbers_6,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_12)
{
  {
    MR_bool parse_tree__module_imports__succeeded;

    if ((parse_tree__module_imports__MaybeVersionNumbers_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_12 = parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11;
    else
      {
        MR_Word parse_tree__module_imports__VersionNumbers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeVersionNumbers_6, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__ModuleVersionNumbersMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
        MR_Word parse_tree__module_imports__ModuleVersionNumbersMap_10;
        MR_String parse_tree__module_imports__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
        MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
        MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
        MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
        MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
        MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
        MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
        MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
        MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
        MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
        MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
        MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
        MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
        MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
        MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
        MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
        MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
        MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
        MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
        MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
        MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
        MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
        MR_Word parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
        MR_String parse_tree__module_imports__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
        MR_String parse_tree__module_imports__V_40_40;
        MR_Word parse_tree__module_imports__V_41_41;
        MR_Word parse_tree__module_imports__V_42_42;
        MR_Word parse_tree__module_imports__V_43_43;
        MR_Word parse_tree__module_imports__V_44_44;
        MR_Word parse_tree__module_imports__V_45_45;
        MR_Word parse_tree__module_imports__V_46_46;
        MR_Word parse_tree__module_imports__V_47_47;
        MR_Word parse_tree__module_imports__V_48_48;
        MR_Word parse_tree__module_imports__V_49_49;
        MR_Word parse_tree__module_imports__V_50_50;
        MR_Word parse_tree__module_imports__V_51_51;
        MR_Word parse_tree__module_imports__V_52_52;
        MR_Word parse_tree__module_imports__V_53_53;
        MR_Word parse_tree__module_imports__V_54_54;
        MR_Word parse_tree__module_imports__V_55_55;
        MR_Word parse_tree__module_imports__V_56_56;
        MR_Word parse_tree__module_imports__V_57_57;
        MR_Word parse_tree__module_imports__V_58_58;
        MR_Word parse_tree__module_imports__V_59_59;
        MR_Word parse_tree__module_imports__V_60_60;
        MR_Word parse_tree__module_imports__V_62_62;
        MR_Word parse_tree__module_imports__V_63_63;
        MR_Word parse_tree__module_imports__V_64_64;
        MR_Word parse_tree__module_imports__V_65_65;
        MR_String parse_tree__module_imports__V_66_66;
        MR_Word parse_tree__module_imports__V_61_61;

        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (parse_tree__module_imports__ModuleName_5)), ((MR_Box) (parse_tree__module_imports__VersionNumbers_8)), parse_tree__module_imports__ModuleVersionNumbersMap0_9, &parse_tree__module_imports__ModuleVersionNumbersMap_10);
        }
        parse_tree__module_imports__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
        parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
        parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
        parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
        parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
        parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
        parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
        parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
        parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
        parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
        parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
        parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
        parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
        parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
        parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
        parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
        parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
        parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
        parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
        parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
        parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
        parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
        parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
        parse_tree__module_imports__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
        parse_tree__module_imports__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
        parse_tree__module_imports__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
        parse_tree__module_imports__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_40_40));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_41_41));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_42_42));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_43_43));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_44_44));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_45_45));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_46_46));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_47_47));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_48_48));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_49_49));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_50_50));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_51_51));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_52_52));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_53_53));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_54_54));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_55_55));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_56_56));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_57_57));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_58_58));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_59_59));
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_60_60));
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__ModuleVersionNumbersMap_10));
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_62_62));
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_63_63));
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_64_64));
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_65_65));
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_66_66));
        }
      }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(
  MR_Word parse_tree__module_imports__NewIntItemBlocks_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[2];
    MR_Word parse_tree__module_imports__IntItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__IntItemBlocks_7;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_String parse_tree__module_imports__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_38_38;
    MR_Word parse_tree__module_imports__V_39_39;
    MR_Word parse_tree__module_imports__V_40_40;
    MR_Word parse_tree__module_imports__V_41_41;
    MR_Word parse_tree__module_imports__V_42_42;
    MR_Word parse_tree__module_imports__V_43_43;
    MR_Word parse_tree__module_imports__V_44_44;
    MR_Word parse_tree__module_imports__V_45_45;
    MR_Word parse_tree__module_imports__V_46_46;
    MR_Word parse_tree__module_imports__V_47_47;
    MR_Word parse_tree__module_imports__V_48_48;
    MR_Word parse_tree__module_imports__V_49_49;
    MR_Word parse_tree__module_imports__V_50_50;
    MR_Word parse_tree__module_imports__V_51_51;
    MR_Word parse_tree__module_imports__V_52_52;
    MR_Word parse_tree__module_imports__V_53_53;
    MR_Word parse_tree__module_imports__V_54_54;
    MR_Word parse_tree__module_imports__V_55_55;
    MR_Word parse_tree__module_imports__V_56_56;
    MR_Word parse_tree__module_imports__V_57_57;
    MR_Word parse_tree__module_imports__V_59_59;
    MR_Word parse_tree__module_imports__V_60_60;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_62_62;
    MR_Word parse_tree__module_imports__V_63_63;
    MR_String parse_tree__module_imports__V_64_64;
    MR_Word parse_tree__module_imports__V_58_58;

    {
      parse_tree__module_imports__V_10_10 = mercury__cord__from_list_1_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__NewIntItemBlocks_4);
    }
    {
      parse_tree__module_imports__IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__IntItemBlocks0_6, parse_tree__module_imports__V_10_10);
    }
    parse_tree__module_imports__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    parse_tree__module_imports__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    parse_tree__module_imports__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_38_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_39_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_40_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_41_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_42_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_43_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_44_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_45_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_46_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_47_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_48_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_49_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_50_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_51_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_52_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_53_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_54_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_55_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_56_56));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_57_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_59_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_60_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_62_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_63_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_64_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(
  MR_Word parse_tree__module_imports__NewOptItemBlocks_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[1];
    MR_Word parse_tree__module_imports__OptItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__OptItemBlocks_7;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_String parse_tree__module_imports__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_38_38;
    MR_Word parse_tree__module_imports__V_39_39;
    MR_Word parse_tree__module_imports__V_40_40;
    MR_Word parse_tree__module_imports__V_41_41;
    MR_Word parse_tree__module_imports__V_42_42;
    MR_Word parse_tree__module_imports__V_43_43;
    MR_Word parse_tree__module_imports__V_44_44;
    MR_Word parse_tree__module_imports__V_45_45;
    MR_Word parse_tree__module_imports__V_46_46;
    MR_Word parse_tree__module_imports__V_47_47;
    MR_Word parse_tree__module_imports__V_48_48;
    MR_Word parse_tree__module_imports__V_49_49;
    MR_Word parse_tree__module_imports__V_50_50;
    MR_Word parse_tree__module_imports__V_51_51;
    MR_Word parse_tree__module_imports__V_52_52;
    MR_Word parse_tree__module_imports__V_53_53;
    MR_Word parse_tree__module_imports__V_54_54;
    MR_Word parse_tree__module_imports__V_55_55;
    MR_Word parse_tree__module_imports__V_56_56;
    MR_Word parse_tree__module_imports__V_58_58;
    MR_Word parse_tree__module_imports__V_59_59;
    MR_Word parse_tree__module_imports__V_60_60;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_62_62;
    MR_Word parse_tree__module_imports__V_63_63;
    MR_String parse_tree__module_imports__V_64_64;
    MR_Word parse_tree__module_imports__V_57_57;

    {
      parse_tree__module_imports__V_10_10 = mercury__cord__from_list_1_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__NewOptItemBlocks_4);
    }
    {
      parse_tree__module_imports__OptItemBlocks_7 = mercury__cord__f_43_43_2_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__OptItemBlocks0_6, parse_tree__module_imports__V_10_10);
    }
    parse_tree__module_imports__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    parse_tree__module_imports__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    parse_tree__module_imports__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_38_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_39_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_40_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_41_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_42_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_43_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_44_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_45_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_46_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_47_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_48_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_49_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_50_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_51_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_52_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_53_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_54_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_55_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_56_56));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__OptItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_58_58));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_59_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_60_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_62_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_63_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_64_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(
  MR_Word parse_tree__module_imports__NewIntItemBlocks_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    MR_Word parse_tree__module_imports__IntItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__IntItemBlocks_7;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_String parse_tree__module_imports__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_38_38;
    MR_Word parse_tree__module_imports__V_39_39;
    MR_Word parse_tree__module_imports__V_40_40;
    MR_Word parse_tree__module_imports__V_41_41;
    MR_Word parse_tree__module_imports__V_42_42;
    MR_Word parse_tree__module_imports__V_43_43;
    MR_Word parse_tree__module_imports__V_44_44;
    MR_Word parse_tree__module_imports__V_45_45;
    MR_Word parse_tree__module_imports__V_46_46;
    MR_Word parse_tree__module_imports__V_47_47;
    MR_Word parse_tree__module_imports__V_48_48;
    MR_Word parse_tree__module_imports__V_49_49;
    MR_Word parse_tree__module_imports__V_50_50;
    MR_Word parse_tree__module_imports__V_51_51;
    MR_Word parse_tree__module_imports__V_52_52;
    MR_Word parse_tree__module_imports__V_53_53;
    MR_Word parse_tree__module_imports__V_54_54;
    MR_Word parse_tree__module_imports__V_55_55;
    MR_Word parse_tree__module_imports__V_57_57;
    MR_Word parse_tree__module_imports__V_58_58;
    MR_Word parse_tree__module_imports__V_59_59;
    MR_Word parse_tree__module_imports__V_60_60;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_62_62;
    MR_Word parse_tree__module_imports__V_63_63;
    MR_String parse_tree__module_imports__V_64_64;
    MR_Word parse_tree__module_imports__V_56_56;

    {
      parse_tree__module_imports__V_10_10 = mercury__cord__from_list_1_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__NewIntItemBlocks_4);
    }
    {
      parse_tree__module_imports__IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__IntItemBlocks0_6, parse_tree__module_imports__V_10_10);
    }
    parse_tree__module_imports__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    parse_tree__module_imports__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    parse_tree__module_imports__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_38_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_39_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_40_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_41_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_42_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_43_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_44_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_45_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_46_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_47_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_48_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_49_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_50_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_51_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_52_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_53_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_54_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_55_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_57_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_58_58));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_59_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_60_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_62_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_63_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_64_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(
  MR_Word parse_tree__module_imports__NewIntItemBlocks_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    MR_Word parse_tree__module_imports__IntItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__IntItemBlocks_7;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_String parse_tree__module_imports__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_38_38;
    MR_Word parse_tree__module_imports__V_39_39;
    MR_Word parse_tree__module_imports__V_40_40;
    MR_Word parse_tree__module_imports__V_41_41;
    MR_Word parse_tree__module_imports__V_42_42;
    MR_Word parse_tree__module_imports__V_43_43;
    MR_Word parse_tree__module_imports__V_44_44;
    MR_Word parse_tree__module_imports__V_45_45;
    MR_Word parse_tree__module_imports__V_46_46;
    MR_Word parse_tree__module_imports__V_47_47;
    MR_Word parse_tree__module_imports__V_48_48;
    MR_Word parse_tree__module_imports__V_49_49;
    MR_Word parse_tree__module_imports__V_50_50;
    MR_Word parse_tree__module_imports__V_51_51;
    MR_Word parse_tree__module_imports__V_52_52;
    MR_Word parse_tree__module_imports__V_53_53;
    MR_Word parse_tree__module_imports__V_54_54;
    MR_Word parse_tree__module_imports__V_56_56;
    MR_Word parse_tree__module_imports__V_57_57;
    MR_Word parse_tree__module_imports__V_58_58;
    MR_Word parse_tree__module_imports__V_59_59;
    MR_Word parse_tree__module_imports__V_60_60;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_62_62;
    MR_Word parse_tree__module_imports__V_63_63;
    MR_String parse_tree__module_imports__V_64_64;
    MR_Word parse_tree__module_imports__V_55_55;

    {
      parse_tree__module_imports__V_10_10 = mercury__cord__from_list_1_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__NewIntItemBlocks_4);
    }
    {
      parse_tree__module_imports__IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0(parse_tree__module_imports__TypeInfo_65_65, parse_tree__module_imports__IntItemBlocks0_6, parse_tree__module_imports__V_10_10);
    }
    parse_tree__module_imports__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    parse_tree__module_imports__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    parse_tree__module_imports__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_38_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_39_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_40_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_41_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_42_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_43_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_44_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_45_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_46_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_47_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_48_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_49_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_50_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_51_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_52_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_53_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_54_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_56_56));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_57_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_58_58));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_59_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_60_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_62_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_63_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_64_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(
  MR_Word parse_tree__module_imports__InterfaceErrors_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__Errors_7;
    MR_String parse_tree__module_imports__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_37_37;
    MR_Word parse_tree__module_imports__V_38_38;
    MR_Word parse_tree__module_imports__V_39_39;
    MR_Word parse_tree__module_imports__V_40_40;
    MR_Word parse_tree__module_imports__V_41_41;
    MR_Word parse_tree__module_imports__V_42_42;
    MR_Word parse_tree__module_imports__V_43_43;
    MR_Word parse_tree__module_imports__V_44_44;
    MR_Word parse_tree__module_imports__V_45_45;
    MR_Word parse_tree__module_imports__V_46_46;
    MR_Word parse_tree__module_imports__V_47_47;
    MR_Word parse_tree__module_imports__V_48_48;
    MR_Word parse_tree__module_imports__V_49_49;
    MR_Word parse_tree__module_imports__V_50_50;
    MR_Word parse_tree__module_imports__V_51_51;
    MR_Word parse_tree__module_imports__V_52_52;
    MR_Word parse_tree__module_imports__V_53_53;
    MR_Word parse_tree__module_imports__V_54_54;
    MR_Word parse_tree__module_imports__V_55_55;
    MR_Word parse_tree__module_imports__V_56_56;
    MR_Word parse_tree__module_imports__V_57_57;
    MR_Word parse_tree__module_imports__V_58_58;
    MR_Word parse_tree__module_imports__V_59_59;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_62_62;
    MR_String parse_tree__module_imports__V_63_63;
    MR_Word parse_tree__module_imports__V_60_60;

    {
      mercury__set__union_3_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, parse_tree__module_imports__Errors0_6, parse_tree__module_imports__InterfaceErrors_4, &parse_tree__module_imports__Errors_7);
    }
    parse_tree__module_imports__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    parse_tree__module_imports__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_37_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_38_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_39_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_40_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_41_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_42_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_43_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_44_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_45_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_46_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_47_47));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_48_48));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_49_49));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_50_50));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_51_51));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_52_52));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_53_53));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_54_54));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_55_55));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_56_56));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_57_57));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_58_58));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_59_59));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__Errors_7));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_62_62));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_63_63));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_3_p_0(
  MR_Word parse_tree__module_imports__NewSpecs_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__Specs_7;
    MR_String parse_tree__module_imports__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String parse_tree__module_imports__V_37_37;
    MR_Word parse_tree__module_imports__V_38_38;
    MR_Word parse_tree__module_imports__V_39_39;
    MR_Word parse_tree__module_imports__V_40_40;
    MR_Word parse_tree__module_imports__V_41_41;
    MR_Word parse_tree__module_imports__V_42_42;
    MR_Word parse_tree__module_imports__V_43_43;
    MR_Word parse_tree__module_imports__V_44_44;
    MR_Word parse_tree__module_imports__V_45_45;
    MR_Word parse_tree__module_imports__V_46_46;
    MR_Word parse_tree__module_imports__V_47_47;
    MR_Word parse_tree__module_imports__V_48_48;
    MR_Word parse_tree__module_imports__V_49_49;
    MR_Word parse_tree__module_imports__V_50_50;
    MR_Word parse_tree__module_imports__V_51_51;
    MR_Word parse_tree__module_imports__V_52_52;
    MR_Word parse_tree__module_imports__V_53_53;
    MR_Word parse_tree__module_imports__V_54_54;
    MR_Word parse_tree__module_imports__V_55_55;
    MR_Word parse_tree__module_imports__V_56_56;
    MR_Word parse_tree__module_imports__V_57_57;
    MR_Word parse_tree__module_imports__V_58_58;
    MR_Word parse_tree__module_imports__V_60_60;
    MR_Word parse_tree__module_imports__V_61_61;
    MR_Word parse_tree__module_imports__V_62_62;
    MR_String parse_tree__module_imports__V_63_63;
    MR_Word parse_tree__module_imports__V_59_59;

    {
      parse_tree__module_imports__Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__module_imports__NewSpecs_4, parse_tree__module_imports__Specs0_6);
    }
    parse_tree__module_imports__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    parse_tree__module_imports__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    parse_tree__module_imports__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    parse_tree__module_imports__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    parse_tree__module_imports__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    parse_tree__module_imports__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    parse_tree__module_imports__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_37_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_38_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_39_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_40_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_41_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_42_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_43_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_44_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_45_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_46_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_47_47));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_48_48));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_49_49));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_50_50));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_51_51));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_52_52));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_53_53));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_54_54));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_55_55));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_56_56));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_57_57));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_58_58));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__Specs_7));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_60_60));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_61_61));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_62_62));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_63_63));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_errors_3_p_0(
  MR_Word parse_tree__module_imports__Errors_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_29_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_30_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_31_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__Errors_4));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_33_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_34_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_35_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(
  MR_Word parse_tree__module_imports__IndirectDeps_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__IndirectDeps_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_29_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_30_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_31_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_32_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_33_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_34_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_35_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(
  MR_Word parse_tree__module_imports__ImpDeps_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__ImpDeps_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_29_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_30_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_31_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_32_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_33_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_34_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_35_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(
  MR_Word parse_tree__module_imports__IntDeps_4,
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));
    MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String parse_tree__module_imports__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_imports__STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__IntDeps_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__module_imports__V_29_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__module_imports__V_30_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__module_imports__V_31_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__module_imports__V_32_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__module_imports__V_33_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__module_imports__V_34_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__module_imports__V_35_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_errors_2_p_0(
  MR_Word parse_tree__module_imports__Module_3,
  MR_Word * parse_tree__module_imports__X_4)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 20)));
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 21)));
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 22)));
    MR_Word parse_tree__module_imports__V_28_28;
    MR_Word parse_tree__module_imports__V_29_29;
    MR_String parse_tree__module_imports__V_30_30;

    *parse_tree__module_imports__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 23)));
    parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 24)));
    parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 25)));
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(
  MR_Word parse_tree__module_imports__Module_3,
  MR_Word * parse_tree__module_imports__X_4)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_imports__V_11_11;
    MR_Word parse_tree__module_imports__V_12_12;
    MR_Word parse_tree__module_imports__V_13_13;
    MR_Word parse_tree__module_imports__V_14_14;
    MR_Word parse_tree__module_imports__V_15_15;
    MR_Word parse_tree__module_imports__V_16_16;
    MR_Word parse_tree__module_imports__V_17_17;
    MR_Word parse_tree__module_imports__V_18_18;
    MR_Word parse_tree__module_imports__V_19_19;
    MR_Word parse_tree__module_imports__V_20_20;
    MR_Word parse_tree__module_imports__V_21_21;
    MR_Word parse_tree__module_imports__V_22_22;
    MR_Word parse_tree__module_imports__V_23_23;
    MR_Word parse_tree__module_imports__V_24_24;
    MR_Word parse_tree__module_imports__V_25_25;
    MR_Word parse_tree__module_imports__V_26_26;
    MR_Word parse_tree__module_imports__V_27_27;
    MR_Word parse_tree__module_imports__V_28_28;
    MR_Word parse_tree__module_imports__V_29_29;
    MR_String parse_tree__module_imports__V_30_30;

    *parse_tree__module_imports__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
    parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
    parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
    parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 20)));
    parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 21)));
    parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 22)));
    parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 23)));
    parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 24)));
    parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 25)));
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_context_2_p_0(
  MR_Word parse_tree__module_imports__Module_3,
  MR_Word * parse_tree__module_imports__X_4)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_imports__V_8_8;
    MR_Word parse_tree__module_imports__V_9_9;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_Word parse_tree__module_imports__V_11_11;
    MR_Word parse_tree__module_imports__V_12_12;
    MR_Word parse_tree__module_imports__V_13_13;
    MR_Word parse_tree__module_imports__V_14_14;
    MR_Word parse_tree__module_imports__V_15_15;
    MR_Word parse_tree__module_imports__V_16_16;
    MR_Word parse_tree__module_imports__V_17_17;
    MR_Word parse_tree__module_imports__V_18_18;
    MR_Word parse_tree__module_imports__V_19_19;
    MR_Word parse_tree__module_imports__V_20_20;
    MR_Word parse_tree__module_imports__V_21_21;
    MR_Word parse_tree__module_imports__V_22_22;
    MR_Word parse_tree__module_imports__V_23_23;
    MR_Word parse_tree__module_imports__V_24_24;
    MR_Word parse_tree__module_imports__V_25_25;
    MR_Word parse_tree__module_imports__V_26_26;
    MR_Word parse_tree__module_imports__V_27_27;
    MR_Word parse_tree__module_imports__V_28_28;
    MR_Word parse_tree__module_imports__V_29_29;
    MR_String parse_tree__module_imports__V_30_30;

    *parse_tree__module_imports__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
    parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
    parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
    parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
    parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
    parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
    parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 20)));
    parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 21)));
    parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 22)));
    parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 23)));
    parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 24)));
    parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 25)));
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(
  MR_Word parse_tree__module_imports__Module_3,
  MR_Word * parse_tree__module_imports__X_4)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_String parse_tree__module_imports__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_imports__V_7_7;
    MR_Word parse_tree__module_imports__V_8_8;
    MR_Word parse_tree__module_imports__V_9_9;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_Word parse_tree__module_imports__V_11_11;
    MR_Word parse_tree__module_imports__V_12_12;
    MR_Word parse_tree__module_imports__V_13_13;
    MR_Word parse_tree__module_imports__V_14_14;
    MR_Word parse_tree__module_imports__V_15_15;
    MR_Word parse_tree__module_imports__V_16_16;
    MR_Word parse_tree__module_imports__V_17_17;
    MR_Word parse_tree__module_imports__V_18_18;
    MR_Word parse_tree__module_imports__V_19_19;
    MR_Word parse_tree__module_imports__V_20_20;
    MR_Word parse_tree__module_imports__V_21_21;
    MR_Word parse_tree__module_imports__V_22_22;
    MR_Word parse_tree__module_imports__V_23_23;
    MR_Word parse_tree__module_imports__V_24_24;
    MR_Word parse_tree__module_imports__V_25_25;
    MR_Word parse_tree__module_imports__V_26_26;
    MR_Word parse_tree__module_imports__V_27_27;
    MR_Word parse_tree__module_imports__V_28_28;
    MR_Word parse_tree__module_imports__V_29_29;
    MR_String parse_tree__module_imports__V_30_30;

    *parse_tree__module_imports__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
    parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
    parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
    parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
    parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
    parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
    parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
    parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 20)));
    parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 21)));
    parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 22)));
    parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 23)));
    parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 24)));
    parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 25)));
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(
  MR_Word parse_tree__module_imports__Module_3,
  MR_String * parse_tree__module_imports__X_4)
{
  {
    MR_bool parse_tree__module_imports__succeeded;
    MR_Word parse_tree__module_imports__V_5_5;
    MR_Word parse_tree__module_imports__V_6_6;
    MR_Word parse_tree__module_imports__V_7_7;
    MR_Word parse_tree__module_imports__V_8_8;
    MR_Word parse_tree__module_imports__V_9_9;
    MR_Word parse_tree__module_imports__V_10_10;
    MR_Word parse_tree__module_imports__V_11_11;
    MR_Word parse_tree__module_imports__V_12_12;
    MR_Word parse_tree__module_imports__V_13_13;
    MR_Word parse_tree__module_imports__V_14_14;
    MR_Word parse_tree__module_imports__V_15_15;
    MR_Word parse_tree__module_imports__V_16_16;
    MR_Word parse_tree__module_imports__V_17_17;
    MR_Word parse_tree__module_imports__V_18_18;
    MR_Word parse_tree__module_imports__V_19_19;
    MR_Word parse_tree__module_imports__V_20_20;
    MR_Word parse_tree__module_imports__V_21_21;
    MR_Word parse_tree__module_imports__V_22_22;
    MR_Word parse_tree__module_imports__V_23_23;
    MR_Word parse_tree__module_imports__V_24_24;
    MR_Word parse_tree__module_imports__V_25_25;
    MR_Word parse_tree__module_imports__V_26_26;
    MR_Word parse_tree__module_imports__V_27_27;
    MR_Word parse_tree__module_imports__V_28_28;
    MR_Word parse_tree__module_imports__V_29_29;
    MR_String parse_tree__module_imports__V_30_30;

    *parse_tree__module_imports__X_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
    parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
    parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
    parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
    parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
    parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
    parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
    parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
    parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
    parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 20)));
    parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 21)));
    parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 22)));
    parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 23)));
    parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 24)));
    parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 25)));
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 26)));
  }
}

void mercury__parse_tree__module_imports__init(void)
{
}

void mercury__parse_tree__module_imports__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0);
}

void mercury__parse_tree__module_imports__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_imports__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.module_imports. */
