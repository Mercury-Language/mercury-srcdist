/*
** Automatically generated from `module_imports.m'
** by the Mercury compiler,
** version rotd-2018-03-14
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


// :- module parse_tree.module_imports.
// :- implementation.

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
#include "multi_map.mih"
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

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0;

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

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__463__1_4_p_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58,
  MR_Word * LambdaHeadVar__3_59);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HasMain_0_2,
  MR_Word * STATE_VARIABLE_HasMain_3);

static void MR_CALL 
parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HasMain_0_2,
  MR_Word * STATE_VARIABLE_HasMain_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[15][2];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][7];




static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[15][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[0]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[1]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[2]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 2 */
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

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0
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
  (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__463__1_4_p_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58,
  MR_Word * LambdaHeadVar__3_59)
{
  parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(LambdaHeadVar__1_57, ModuleName_17, LambdaHeadVar__2_58, LambdaHeadVar__3_59);
}

void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      parse_tree__file_kind____Compare____file_kind_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        libs__timestamp____Compare____timestamp_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_17 = (MR_Integer) ArgX3_8;
          MR_Integer Var_18 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, Var_18);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = parse_tree__file_kind____Unify____file_kind_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = libs__timestamp____Unify____timestamp_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_84 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_85 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_84 == CastY_85);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12)));
      MR_Word ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13)));
      MR_Word ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13)));
      MR_Word ArgX15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14)));
      MR_Word ArgY15_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14)));
      MR_Word ArgX16_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15)));
      MR_Word ArgY16_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15)));
      MR_Word ArgX17_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16)));
      MR_Word ArgY17_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16)));
      MR_Word ArgX18_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17)));
      MR_Word ArgY18_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17)));
      MR_Word ArgX19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18)));
      MR_Word ArgY19_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18)));
      MR_Word ArgX20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19)));
      MR_Word ArgY20_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19)));
      MR_Word ArgX21_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20)));
      MR_Word ArgY21_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20)));
      MR_Word ArgX22_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21)));
      MR_Word ArgY22_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21)));
      MR_Word ArgX23_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22)));
      MR_Word ArgY23_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22)));
      MR_Word ArgX24_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23)));
      MR_Word ArgY24_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23)));
      MR_Word ArgX25_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24)));
      MR_Word ArgY25_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24)));
      MR_Word ArgX26_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25)));
      MR_Word ArgY26_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25)));
      MR_String ArgX27_56 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26)));
      MR_String ArgY27_57 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 26)));
      MR_Word Var_58;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_58, ArgX1_4, ArgY1_5);
      succeeded = (Var_58 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_58;
      else
      {
        MR_Word Var_59;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_59, ArgX2_6, ArgY2_7);
        succeeded = (Var_59 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_59;
        else
        {
          MR_Word Var_60;

          mdbcomp__sym_name____Compare____sym_name_0_0(&Var_60, ArgX3_8, ArgY3_9);
          succeeded = (Var_60 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_60;
          else
          {
            MR_Word Var_61;

            mercury__term____Compare____context_0_0(&Var_61, ArgX4_10, ArgY4_11);
            succeeded = (Var_61 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_61;
            else
            {
              MR_Word Var_62;

              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &Var_62, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_62 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_62;
              else
              {
                MR_Word Var_63;

                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[0], &Var_63, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_63 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_63;
                else
                {
                  MR_Word Var_64;

                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[0], &Var_64, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_64 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_64;
                  else
                  {
                    MR_Word Var_65;

                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &Var_65, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_65 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_65;
                    else
                    {
                      MR_Word Var_66;

                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[0], &Var_66, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_66 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_66;
                      else
                      {
                        MR_Word Var_67;

                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[0], &Var_67, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
                        succeeded = (Var_67 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_67;
                        else
                        {
                          MR_Word Var_68;

                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[3], &Var_68, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_68 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_68;
                          else
                          {
                            MR_Word Var_69;

                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[5], &Var_69, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_69 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_69;
                            else
                            {
                              MR_Word Var_70;

                              parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&Var_70, ArgX13_28, ArgY13_29);
                              succeeded = (Var_70 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_70;
                              else
                              {
                                MR_Word Var_71;

                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[6], &Var_71, ((MR_Box) (ArgX14_30)), ((MR_Box) (ArgY14_31)));
                                succeeded = (Var_71 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_71;
                                else
                                {
                                  MR_Word Var_72;

                                  parse_tree__prog_item____Compare____contains_foreign_code_0_0(&Var_72, ArgX15_32, ArgY15_33);
                                  succeeded = (Var_72 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_72;
                                  else
                                  {
                                    MR_Word Var_73;
                                    MR_Integer Var_113 = (MR_Integer) ArgX16_34;
                                    MR_Integer Var_114 = (MR_Integer) ArgY16_35;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_73, Var_113, Var_114);
                                    succeeded = (Var_73 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_73;
                                    else
                                    {
                                      MR_Word Var_74;

                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[8], &Var_74, ((MR_Box) (ArgX17_36)), ((MR_Box) (ArgY17_37)));
                                      succeeded = (Var_74 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_74;
                                      else
                                      {
                                        MR_Word Var_75;

                                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[9], &Var_75, ((MR_Box) (ArgX18_38)), ((MR_Box) (ArgY18_39)));
                                        succeeded = (Var_75 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_75;
                                        else
                                        {
                                          MR_Word Var_76;

                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[9], &Var_76, ((MR_Box) (ArgX19_40)), ((MR_Box) (ArgY19_41)));
                                          succeeded = (Var_76 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_76;
                                          else
                                          {
                                            MR_Word Var_77;

                                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[10], &Var_77, ((MR_Box) (ArgX20_42)), ((MR_Box) (ArgY20_43)));
                                            succeeded = (Var_77 == (MR_Integer) 0);
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                              *HeadVar__1_1 = Var_77;
                                            else
                                            {
                                              MR_Word Var_78;

                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[11], &Var_78, ((MR_Box) (ArgX21_44)), ((MR_Box) (ArgY21_45)));
                                              succeeded = (Var_78 == (MR_Integer) 0);
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                                *HeadVar__1_1 = Var_78;
                                              else
                                              {
                                                MR_Word Var_79;

                                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &Var_79, ((MR_Box) (ArgX22_46)), ((MR_Box) (ArgY22_47)));
                                                succeeded = (Var_79 == (MR_Integer) 0);
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                  *HeadVar__1_1 = Var_79;
                                                else
                                                {
                                                  MR_Word Var_80;

                                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[12], &Var_80, ((MR_Box) (ArgX23_48)), ((MR_Box) (ArgY23_49)));
                                                  succeeded = (Var_80 == (MR_Integer) 0);
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = Var_80;
                                                  else
                                                  {
                                                    MR_Word Var_81;

                                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[13], &Var_81, ((MR_Box) (ArgX24_50)), ((MR_Box) (ArgY24_51)));
                                                    succeeded = (Var_81 == (MR_Integer) 0);
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = Var_81;
                                                    else
                                                    {
                                                      MR_Word Var_82;

                                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[14], &Var_82, ((MR_Box) (ArgX25_52)), ((MR_Box) (ArgY25_53)));
                                                      succeeded = (Var_82 == (MR_Integer) 0);
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = Var_82;
                                                      else
                                                      {
                                                        MR_Word Var_83;
                                                        MR_Integer Var_115 = (MR_Integer) ArgX26_54;
                                                        MR_Integer Var_116 = (MR_Integer) ArgY26_55;

                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_83, Var_115, Var_116);
                                                        succeeded = (Var_83 == (MR_Integer) 0);
                                                        succeeded = !(succeeded);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = Var_83;
                                                        else
                                                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX27_56, ArgY27_57);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_57 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_58 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_57 == CastY_58);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_62_62;
      MR_Word TypeInfo_63_63;
      MR_Word TypeInfo_64_64;
      MR_Word TypeInfo_65_65;
      MR_Word TypeInfo_66_66;
      MR_Word TypeInfo_67_67;
      MR_Word TypeInfo_68_68;
      MR_Word TypeInfo_69_69;
      MR_Word TypeInfo_71_71;
      MR_Word TypeInfo_73_73;
      MR_Word TypeInfo_74_74;
      MR_Word TypeInfo_75_75;
      MR_Word TypeInfo_76_76;
      MR_Word TypeInfo_77_77;
      MR_Word TypeInfo_78_78;
      MR_Word TypeInfo_79_79;
      MR_Word TypeInfo_80_80;
      MR_Word TypeInfo_81_81;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Word ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13)));
      MR_Word ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13)));
      MR_Word ArgX15_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14)));
      MR_Word ArgY15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14)));
      MR_Word ArgX16_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15)));
      MR_Word ArgY16_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15)));
      MR_Word ArgX17_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16)));
      MR_Word ArgY17_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16)));
      MR_Word ArgX18_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17)));
      MR_Word ArgY18_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17)));
      MR_Word ArgX19_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18)));
      MR_Word ArgY19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18)));
      MR_Word ArgX20_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19)));
      MR_Word ArgY20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19)));
      MR_Word ArgX21_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20)));
      MR_Word ArgY21_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20)));
      MR_Word ArgX22_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21)));
      MR_Word ArgY22_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21)));
      MR_Word ArgX23_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22)));
      MR_Word ArgY23_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22)));
      MR_Word ArgX24_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23)));
      MR_Word ArgY24_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23)));
      MR_Word ArgX25_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24)));
      MR_Word ArgY25_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24)));
      MR_Word ArgX26_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25)));
      MR_Word ArgY26_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25)));
      MR_String ArgX27_55 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 26)));
      MR_String ArgY27_56 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_62_62 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_63_63 = (MR_Word) &parse_tree__module_imports_scalar_common_2[0];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_63, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_64_64 = (MR_Word) &parse_tree__module_imports_scalar_common_2[0];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_66_66 = (MR_Word) &parse_tree__module_imports_scalar_common_2[0];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_67_67 = (MR_Word) &parse_tree__module_imports_scalar_common_2[0];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_68_68 = (MR_Word) &parse_tree__module_imports_scalar_common_1[3];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_69_69 = (MR_Word) &parse_tree__module_imports_scalar_common_1[5];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(ArgX13_27, ArgY13_28);
                              if (succeeded)
                              {
                                TypeInfo_71_71 = (MR_Word) &parse_tree__module_imports_scalar_common_1[6];
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                                if (succeeded)
                                {
                                  succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(ArgX15_31, ArgY15_32);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                    if (succeeded)
                                    {
                                      TypeInfo_73_73 = (MR_Word) &parse_tree__module_imports_scalar_common_1[8];
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                      if (succeeded)
                                      {
                                        TypeInfo_74_74 = (MR_Word) &parse_tree__module_imports_scalar_common_1[9];
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                        if (succeeded)
                                        {
                                          TypeInfo_75_75 = (MR_Word) &parse_tree__module_imports_scalar_common_1[9];
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                          if (succeeded)
                                          {
                                            TypeInfo_76_76 = (MR_Word) &parse_tree__module_imports_scalar_common_1[10];
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                            if (succeeded)
                                            {
                                              TypeInfo_77_77 = (MR_Word) &parse_tree__module_imports_scalar_common_1[11];
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                              if (succeeded)
                                              {
                                                TypeInfo_78_78 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_79_79 = (MR_Word) &parse_tree__module_imports_scalar_common_1[12];
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_80_80 = (MR_Word) &parse_tree__module_imports_scalar_common_1[13];
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_81_81 = (MR_Word) &parse_tree__module_imports_scalar_common_1[14];
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (ArgX26_53 == ArgY26_54);
                                                        if (succeeded)
                                                          succeeded = (strcmp(ArgX27_55, ArgY27_56) == 0);
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
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_59;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__463__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_LambdaHeadVar__3_59);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_59));
  }
}

void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_Word SourceFileModuleName_11,
  MR_Word NestedModuleNames_12,
  MR_Word Specs_13,
  MR_Word Errors_14,
  MR_Word RawCompUnit0_15,
  MR_Word * ModuleImports_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_73_73;
    MR_Word TypeCtorInfo_74_74;
    MR_Word TypeCtorInfo_75_75;
    MR_Word TypeInfo_79_79;
    MR_Word ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit0_15, (MR_Integer) 0)));
    MR_Word ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit0_15, (MR_Integer) 1)));
    MR_Word RawItemBlocks_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit0_15, (MR_Integer) 2)));
    MR_Word ParentDeps_20;
    MR_Word ImplImportDeps0_21;
    MR_Word ImplUseDeps0_22;
    MR_Word ImplicitImplImportDeps_23;
    MR_Word ImplicitImplUseDeps_24;
    MR_Word ImplImportDeps_25;
    MR_Word ImplUseDeps_26;
    MR_Word ImplementationDeps_27;
    MR_Word RawCompUnit_28;
    MR_Word InterfaceItemBlocks_31;
    MR_Word InterfaceImportDeps0_32;
    MR_Word InterfaceUseDeps0_33;
    MR_Word ImplicitInterfaceImportDeps_34;
    MR_Word ImplicitInterfaceUseDeps_35;
    MR_Word InterfaceImportDeps_36;
    MR_Word InterfaceUseDeps_37;
    MR_Word InterfaceDeps_38;
    MR_Word IndirectDeps_39;
    MR_Word IncludeDeps_40;
    MR_Word InterfaceIncludeDeps_41;
    MR_Word NestedDeps_42;
    MR_Word FactTableDeps_43;
    MR_Word LangSet_44;
    MR_Word ForeignImports0_45;
    MR_Word ForeignIncludeFiles_46;
    MR_Word ContainsForeignExport_47;
    MR_Word ContainsForeignCode_48;
    MR_Word SelfImportLangs_49;
    MR_Word ForeignImports_53;
    MR_Word HasMain_54;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_String Var_69;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Box conv1_ForeignImports_53;

    ParentDeps_20 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_17);
    TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0;
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(TypeCtorInfo_73_73, RawItemBlocks_19, &ImplImportDeps0_21, &ImplUseDeps0_22);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeCtorInfo_73_73, Globals_9, RawItemBlocks_19, &ImplicitImplImportDeps_23, &ImplicitImplUseDeps_24);
    TypeCtorInfo_74_74 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
    mercury__multi_map__merge_3_p_0(TypeCtorInfo_74_74, TypeCtorInfo_75_75, ImplicitImplImportDeps_23, ImplImportDeps0_21, &ImplImportDeps_25);
    mercury__multi_map__merge_3_p_0(TypeCtorInfo_74_74, TypeCtorInfo_75_75, ImplicitImplUseDeps_24, ImplUseDeps0_22, &ImplUseDeps_26);
    mercury__multi_map__merge_3_p_0(TypeCtorInfo_74_74, TypeCtorInfo_75_75, ImplImportDeps_25, ImplUseDeps_26, &ImplementationDeps_27);
    parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, RawCompUnit0_15, &RawCompUnit_28);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_28, (MR_Integer) 0)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_28, (MR_Integer) 1)));
    InterfaceItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_28, (MR_Integer) 2)));
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(TypeCtorInfo_73_73, InterfaceItemBlocks_31, &InterfaceImportDeps0_32, &InterfaceUseDeps0_33);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeCtorInfo_73_73, Globals_9, InterfaceItemBlocks_31, &ImplicitInterfaceImportDeps_34, &ImplicitInterfaceUseDeps_35);
    mercury__multi_map__merge_3_p_0(TypeCtorInfo_74_74, TypeCtorInfo_75_75, ImplicitInterfaceImportDeps_34, InterfaceImportDeps0_32, &InterfaceImportDeps_36);
    mercury__multi_map__merge_3_p_0(TypeCtorInfo_74_74, TypeCtorInfo_75_75, ImplicitInterfaceUseDeps_35, InterfaceUseDeps0_33, &InterfaceUseDeps_37);
    mercury__multi_map__merge_3_p_0(TypeCtorInfo_74_74, TypeCtorInfo_75_75, InterfaceImportDeps_36, InterfaceUseDeps_37, &InterfaceDeps_38);
    mercury__set__init_1_p_0(TypeCtorInfo_74_74, &IndirectDeps_39);
    parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(TypeCtorInfo_73_73, RawItemBlocks_19, &IncludeDeps_40);
    parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(TypeCtorInfo_73_73, InterfaceItemBlocks_31, &InterfaceIncludeDeps_41);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_17, SourceFileModuleName_11);
    if (succeeded)
      mercury__set__delete_3_p_0(TypeCtorInfo_74_74, ((MR_Box) (ModuleName_17)), NestedModuleNames_12, &NestedDeps_42);
    else
      mercury__set__init_1_p_0(TypeCtorInfo_74_74, &NestedDeps_42);
    parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(TypeCtorInfo_73_73, RawItemBlocks_19, &FactTableDeps_43);
    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0(TypeCtorInfo_73_73, Globals_9, RawItemBlocks_19, &LangSet_44, &ForeignImports0_45, &ForeignIncludeFiles_46, &ContainsForeignExport_47);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, LangSet_44);
    if (succeeded)
      ContainsForeignCode_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        ContainsForeignCode_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ContainsForeignCode_48, 0) = ((MR_Box) (LangSet_44));
      }
    parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0(TypeCtorInfo_73_73, RawItemBlocks_19, &SelfImportLangs_49);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleName_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0, Var_56, SelfImportLangs_49, ((MR_Box) (ForeignImports0_45)), &conv1_ForeignImports_53);
    ForeignImports_53 = ((MR_Word) conv1_ForeignImports_53);
    parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(RawItemBlocks_19, (MR_Integer) 1, &HasMain_54);
    Var_61 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_74_74, ParentDeps_20);
    TypeInfo_79_79 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    Var_63 = mercury__cord__init_0_f_0(TypeInfo_79_79);
    Var_64 = mercury__cord__init_0_f_0(TypeInfo_79_79);
    Var_65 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[1]);
    Var_66 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[2]);
    Var_67 = mercury__map__init_0_f_0(TypeCtorInfo_74_74, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    Var_69 = mercury__dir__this_directory_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *ModuleImports_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SourceFileModuleName_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InterfaceDeps_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImplementationDeps_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IndirectDeps_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IncludeDeps_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (InterfaceIncludeDeps_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (NestedDeps_42));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (FactTableDeps_43));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ForeignImports_53));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignIncludeFiles_46));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ContainsForeignCode_48));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ContainsForeignExport_47));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Specs_13));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Errors_14));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (HasMain_54));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_69));
    }
  }
}

static void MR_CALL 
parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HasMain_0_2,
  MR_Word * STATE_VARIABLE_HasMain_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_HasMain_3 = STATE_VARIABLE_HasMain_0_2;
    else
    {
      MR_Word ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 4)));
      MR_Word STATE_VARIABLE_HasMain_17_17;
      MR_Box _Section_10 = (MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 0));
      MR_Word _Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 1)));
      MR_Word _Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 2)));
      MR_Word _Imports_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 3)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HasMain_0_2;

      parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(Items_14, STATE_VARIABLE_HasMain_0_2, &STATE_VARIABLE_HasMain_17_17);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ItemBlocks_8;
      next_value_of_STATE_VARIABLE_HasMain_0_2 = STATE_VARIABLE_HasMain_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HasMain_0_2 = next_value_of_STATE_VARIABLE_HasMain_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HasMain_0_2,
  MR_Word * STATE_VARIABLE_HasMain_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_HasMain_3 = STATE_VARIABLE_HasMain_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_HasMain_32_32;
      MR_Word ItemPredDecl_10;
      MR_Word Name_11;
      MR_Word ArgTypes_12;
      MR_Word WithType_14;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_13;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Integer Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HasMain_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        ItemPredDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1)));
        Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 0)));
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 1)));
        ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 2)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 3)));
        WithType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 4)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 5)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 6)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 7)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 8)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 9)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 10)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 11)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 12)));
        Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 13)));
        succeeded = (Var_28 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_11);
          succeeded = (strcmp(Var_29, (MR_String) "main") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ArgTypes_12)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_12, (MR_Integer) 0)));
              Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_12, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
                Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
                succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                  succeeded = (WithType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
        STATE_VARIABLE_HasMain_32_32 = (MR_Integer) 0;
      else
        STATE_VARIABLE_HasMain_32_32 = STATE_VARIABLE_HasMain_0_2;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_HasMain_0_2 = STATE_VARIABLE_HasMain_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HasMain_0_2 = next_value_of_STATE_VARIABLE_HasMain_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(
  MR_Word Module_5,
  MR_Word * AugCompUnit_6,
  MR_Word * Specs_7,
  MR_Word * Errors_8)
{
  {
    MR_Word TypeInfo_281_281 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    MR_Word ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 2)));
    MR_Word ModuleNameContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 3)));
    MR_Word SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 16)));
    MR_Word DirectIntItemBlocks_12;
    MR_Word IndirectIntItemBlocks_13;
    MR_Word OptItemBlocks_14;
    MR_Word IntForOptItemBlocks_15;
    MR_Word ModuleVersionNumbers_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 17)));
    MR_String Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 7)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 8)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 9)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 10)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 11)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 12)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 13)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 14)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 15)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 18)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 19)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 20)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 21)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 22)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 23)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 24)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 25)));
    MR_String Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 26)));
    MR_String Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_String Var_150;
    MR_String Var_151;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_String Var_176;
    MR_String Var_177;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_187;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_198;
    MR_Word Var_199;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_String Var_202;
    MR_String Var_203;
    MR_Word Var_204;
    MR_Word Var_205;
    MR_Word Var_206;
    MR_Word Var_207;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_210;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_214;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_String Var_228;

    DirectIntItemBlocks_12 = mercury__cord__list_1_f_0(TypeInfo_281_281, Var_37);
    Var_125 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 0)));
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 1)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 2)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 3)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 4)));
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 5)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 6)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 7)));
    Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 8)));
    Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 9)));
    Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 10)));
    Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 11)));
    Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 12)));
    Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 13)));
    Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 14)));
    Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 15)));
    Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 16)));
    Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 17)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 18)));
    Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 19)));
    Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 20)));
    Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 21)));
    Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 22)));
    Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 23)));
    Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 24)));
    Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 25)));
    Var_150 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 26)));
    IndirectIntItemBlocks_13 = mercury__cord__list_1_f_0(TypeInfo_281_281, Var_18);
    Var_151 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 0)));
    Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 1)));
    Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 2)));
    Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 3)));
    Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 4)));
    Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 5)));
    Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 6)));
    Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 7)));
    Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 8)));
    Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 9)));
    Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 10)));
    Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 11)));
    Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 12)));
    Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 13)));
    Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 14)));
    Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 15)));
    Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 16)));
    Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 17)));
    Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 18)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 19)));
    Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 20)));
    Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 21)));
    Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 22)));
    Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 23)));
    Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 24)));
    Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 25)));
    Var_176 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 26)));
    OptItemBlocks_14 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[1], Var_19);
    Var_177 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 0)));
    Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 1)));
    Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 2)));
    Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 3)));
    Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 4)));
    Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 5)));
    Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 6)));
    Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 7)));
    Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 8)));
    Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 9)));
    Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 10)));
    Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 11)));
    Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 12)));
    Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 13)));
    Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 14)));
    Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 15)));
    Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 16)));
    Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 17)));
    Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 18)));
    Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 19)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 20)));
    Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 21)));
    Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 22)));
    Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 23)));
    Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 24)));
    Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 25)));
    Var_202 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 26)));
    IntForOptItemBlocks_15 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__module_imports_scalar_common_1[2], Var_20);
    Var_203 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 0)));
    Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 1)));
    Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 2)));
    Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 3)));
    Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 4)));
    Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 5)));
    Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 6)));
    Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 7)));
    Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 8)));
    Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 9)));
    Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 10)));
    Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 11)));
    Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 12)));
    Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 13)));
    Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 14)));
    Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 15)));
    Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 16)));
    Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 17)));
    Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 18)));
    Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 19)));
    Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 20)));
    ModuleVersionNumbers_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 21)));
    *Specs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 22)));
    *Errors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 23)));
    Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 24)));
    Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 25)));
    Var_228 = ((MR_String) (MR_hl_field(MR_mktag(0), Module_5, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *AugCompUnit_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleVersionNumbers_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SrcItemBlocks_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DirectIntItemBlocks_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IndirectIntItemBlocks_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (OptItemBlocks_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntForOptItemBlocks_15));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(
  MR_Word NewSpecs_5,
  MR_Word NewErrors_6,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_12,
  MR_Word * STATE_VARIABLE_ModuleAndImports_13)
{
  {
    MR_Word Specs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
    MR_Word Errors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
    MR_Word Specs_10;
    MR_Word Errors_11;
    MR_String Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_String Var_94;
    MR_String Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
    MR_String Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));
    MR_Word Var_90;
    MR_Word Var_91;

    Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_5, Specs0_8);
    mercury__set__union_3_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, Errors0_9, NewErrors_6, &Errors_11);
    Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
    Var_94 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Specs_10));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Errors_11));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_94));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12)
{
  if ((MaybeVersionNumbers_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *STATE_VARIABLE_ModuleAndImports_12 = STATE_VARIABLE_ModuleAndImports_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVersionNumbers_6, (MR_Integer) 0)));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
    MR_Word ModuleVersionNumbersMap_10;
    MR_String Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
    MR_String Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Word Var_61;

    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
    Var_66 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ModuleVersionNumbersMap_10));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_66));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(
  MR_Word NewIntItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[2];
    MR_Word IntItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Word Var_58;

    Var_10 = mercury__cord__from_list_1_f_0(TypeInfo_65_65, NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_65_65, IntItemBlocks0_6, Var_10);
    Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(
  MR_Word NewOptItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[1];
    MR_Word OptItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word OptItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Word Var_57;

    Var_10 = mercury__cord__from_list_1_f_0(TypeInfo_65_65, NewOptItemBlocks_4);
    OptItemBlocks_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_65_65, OptItemBlocks0_6, Var_10);
    Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (OptItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(
  MR_Word NewIntItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    MR_Word IntItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Word Var_56;

    Var_10 = mercury__cord__from_list_1_f_0(TypeInfo_65_65, NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_65_65, IntItemBlocks0_6, Var_10);
    Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(
  MR_Word NewIntItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word TypeInfo_65_65 = (MR_Word) &parse_tree__module_imports_scalar_common_1[0];
    MR_Word IntItemBlocks0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Word Var_55;

    Var_10 = mercury__cord__from_list_1_f_0(TypeInfo_65_65, NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_65_65, IntItemBlocks0_6, Var_10);
    Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(
  MR_Word InterfaceErrors_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word Errors_7;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_60;

    mercury__set__union_3_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, Errors0_6, InterfaceErrors_4, &Errors_7);
    Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Errors_7));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_63));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    MR_Word Specs_7;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    MR_String Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    MR_String Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_59;

    Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_4, Specs0_6);
    Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25)));
    Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_63));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25)));
    MR_String Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_errors_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  {
    MR_String Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22)));
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25)));
    Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  {
    MR_String Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5)));
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25)));
    Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_context_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  {
    MR_String Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2)));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25)));
    Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  {
    MR_String Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1)));
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25)));
    Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 26)));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_String * X_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;

    *X_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0)));
    Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25)));
    Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 26)));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_and_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_timestamp_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_timestamp_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_timestamp_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.module_imports.
