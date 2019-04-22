/*
** Automatically generated from `module_imports.m'
** by the Mercury compiler,
** version rotd-2019-04-22
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




static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

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

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[27];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[27];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_and_imports_0_0[27];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1];

static MR_Word MR_CALL 
parse_tree__module_imports__IntroducedFrom__func__make_module_dep_module_and_imports__626__1_1_f_0(
  MR_Word LambdaHeadVar__1_51);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__533__1_4_p_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_66,
  MR_Word LambdaHeadVar__2_67,
  MR_Word * LambdaHeadVar__3_68);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__498__1_4_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_99,
  MR_Word HeadVar__3_100,
  MR_Word * HeadVar__4_101);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__496__1_4_p_0(
  MR_Word HeadVar__1_62,
  MR_Word HeadVar__2_94,
  MR_Word HeadVar__3_95,
  MR_Word * HeadVar__4_96);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__482__1_4_p_0(
  MR_Word HeadVar__1_60,
  MR_Word HeadVar__2_88,
  MR_Word HeadVar__3_89,
  MR_Word * HeadVar__4_90);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__480__1_4_p_0(
  MR_Word HeadVar__1_58,
  MR_Word HeadVar__2_81,
  MR_Word HeadVar__3_82,
  MR_Word * HeadVar__4_83);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_set_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7);

static void MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__module_imports____Unify____module_names_contexts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_names_contexts_0_0_10001(
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

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[1][6];




static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[1]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[2]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[3]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_2[3]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_version_numbers_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[27] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_code_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[27] = {
  (MR_String) "mai_source_file_name",
  (MR_String) "mai_module_dir",
  (MR_String) "mai_source_file_module_name",
  (MR_String) "mai_module_name",
  (MR_String) "mai_module_name_context",
  (MR_String) "mai_ancestors",
  (MR_String) "mai_children",
  (MR_String) "mai_public_children",
  (MR_String) "mai_nested_children",
  (MR_String) "mai_int_deps_map",
  (MR_String) "mai_imp_deps_map",
  (MR_String) "mai_indirect_deps",
  (MR_String) "mai_fact_table_deps",
  (MR_String) "mai_foreign_import_modules",
  (MR_String) "mai_foreign_include_files",
  (MR_String) "mai_contains_foreign_code",
  (MR_String) "mai_contains_foreign_export",
  (MR_String) "mai_has_main",
  (MR_String) "mai_src_blocks",
  (MR_String) "mai_direct_int_blocks_cord",
  (MR_String) "mai_indirect_int_blocks_cord",
  (MR_String) "mai_opt_blocks_cord",
  (MR_String) "mai_int_for_opt_blocks_cord",
  (MR_String) "mai_version_numbers_map",
  (MR_String) "mai_maybe_timestamp_map",
  (MR_String) "mai_specs",
  (MR_String) "mai_errors"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_and_imports_0_0[27] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 18,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 19,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 20,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 21,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 22,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 23,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 24,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 25,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0 = {
  (MR_String) "module_and_imports",
  INT16_C(27),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_module_and_imports_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_and_imports",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_names_contexts_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_imports____Unify____module_names_contexts_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_names_contexts_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_names_contexts",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0),
  (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3] = {
  (MR_String) "mts_file_kind",
  (MR_String) "mts_timestamp",
  (MR_String) "mts_need_qualifier"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0 = {
  (MR_String) "module_timestamp",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Word MR_CALL 
parse_tree__module_imports__IntroducedFrom__func__make_module_dep_module_and_imports__626__1_1_f_0(
  MR_Word LambdaHeadVar__1_51)
{
  {
    MR_Word LambdaHeadVar__2_52;
    MR_Word Var_53;
    MR_Word Var_54;

    Var_54 = mercury__term__context_init_0_f_0();
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LambdaHeadVar__2_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_52, 0) = ((MR_Box) (LambdaHeadVar__1_51));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_52, 1) = ((MR_Box) (Var_53));
    }
    return LambdaHeadVar__2_52;
  }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__533__1_4_p_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_66,
  MR_Word LambdaHeadVar__2_67,
  MR_Word * LambdaHeadVar__3_68)
{
  parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(LambdaHeadVar__1_66, ModuleName_17, LambdaHeadVar__2_67, LambdaHeadVar__3_68);
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__498__1_4_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_99,
  MR_Word HeadVar__3_100,
  MR_Word * HeadVar__4_101)
{
  {
    mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_64)), ((MR_Box) (HeadVar__2_99)), HeadVar__3_100, HeadVar__4_101);
  }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__496__1_4_p_0(
  MR_Word HeadVar__1_62,
  MR_Word HeadVar__2_94,
  MR_Word HeadVar__3_95,
  MR_Word * HeadVar__4_96)
{
  {
    mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_62)), ((MR_Box) (HeadVar__2_94)), HeadVar__3_95, HeadVar__4_96);
  }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__482__1_4_p_0(
  MR_Word HeadVar__1_60,
  MR_Word HeadVar__2_88,
  MR_Word HeadVar__3_89,
  MR_Word * HeadVar__4_90)
{
  {
    mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_60)), ((MR_Box) (HeadVar__2_88)), HeadVar__3_89, HeadVar__4_90);
  }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__480__1_4_p_0(
  MR_Word HeadVar__1_58,
  MR_Word HeadVar__2_81,
  MR_Word HeadVar__3_82,
  MR_Word * HeadVar__4_83)
{
  {
    mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_58)), ((MR_Box) (HeadVar__2_81)), HeadVar__3_82, HeadVar__4_83);
  }
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      parse_tree__file_kind____Compare____file_kind_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        libs__timestamp____Compare____timestamp_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_17 < Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > Var_18);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

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
parse_tree__module_imports____Compare____module_names_contexts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_names_contexts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_84 == CastY_85);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX18_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgY18_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
      MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
      MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
      MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22))));
      MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23))));
      MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24))));
      MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__term____Compare____context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                              succeeded = (SubResult13_42 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&SubResult14_45, ArgX14_43, ArgY14_44);
                                succeeded = (SubResult14_45 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[6]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                  succeeded = (SubResult15_48 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;

                                    parse_tree__prog_item____Compare____contains_foreign_code_0_0(&SubResult16_51, ArgX16_49, ArgY16_50);
                                    succeeded = (SubResult16_51 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                    {
                                      MR_Word SubResult17_54;
                                      MR_Integer Var_113 = (MR_Integer) (ArgX17_52);
                                      MR_Integer Var_114 = (MR_Integer) (ArgY17_53);

                                      succeeded = (Var_113 < Var_114);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_113 > Var_114);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult17_54 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult17_54;
                                      else
                                      {
                                        MR_Word SubResult18_57;
                                        MR_Integer Var_115 = (MR_Integer) (ArgX18_55);
                                        MR_Integer Var_116 = (MR_Integer) (ArgY18_56);

                                        succeeded = (Var_115 < Var_116);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_115 > Var_116);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult18_57 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult18_57;
                                        else
                                        {
                                          MR_Word SubResult19_60;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[8]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                          succeeded = (SubResult19_60 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult19_60;
                                          else
                                          {
                                            MR_Word SubResult20_63;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[9]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                            succeeded = (SubResult20_63 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult20_63;
                                            else
                                            {
                                              MR_Word SubResult21_66;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[9]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                              succeeded = (SubResult21_66 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult21_66;
                                              else
                                              {
                                                MR_Word SubResult22_69;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[10]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                                succeeded = (SubResult22_69 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult22_69;
                                                else
                                                {
                                                  MR_Word SubResult23_72;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[11]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                  succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult23_72;
                                                  else
                                                  {
                                                    MR_Word SubResult24_75;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[2]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                    succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult24_75;
                                                    else
                                                    {
                                                      MR_Word SubResult25_78;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[12]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                      succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult25_78;
                                                      else
                                                      {
                                                        MR_Word SubResult26_81;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[13]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                        succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult26_81;
                                                        else
                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX18_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgY18_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
      MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
      MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
      MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22))));
      MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23))));
      MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24))));
      MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25))));
      MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_62_62 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_63_63 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_63, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_64_64 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_65_65 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_66_66 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_67_67 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_68_68 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[4]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_69_69 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[5]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(ArgX14_29, ArgY14_30);
                                if (succeeded)
                                {
                                  TypeInfo_71_71 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[6]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                  if (succeeded)
                                  {
                                    succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(ArgX16_33, ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          TypeInfo_73_73 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[8]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                          if (succeeded)
                                          {
                                            TypeInfo_74_74 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[9]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                            if (succeeded)
                                            {
                                              TypeInfo_75_75 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[9]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                              if (succeeded)
                                              {
                                                TypeInfo_76_76 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[10]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_77_77 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[11]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_78_78 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[2]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_79_79 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[12]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_80_80 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[13]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_81_81 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[14]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
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
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(
  MR_Word ModuleAndImports_5,
  MR_Word * AugCompUnit_6,
  MR_Word * Specs_7,
  MR_Word * Errors_8)
{
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 3))));
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 4))));
    MR_Word ModuleVersionNumbers_11;
    MR_Word SrcItemBlocks_12;
    MR_Word DirectIntItemBlocksCord_13;
    MR_Word IndirectIntItemBlocksCord_14;
    MR_Word OptItemBlocksCord_15;
    MR_Word IntForOptItemBlocksCord_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(ModuleAndImports_5, &ModuleVersionNumbers_11);
    parse_tree__module_imports__module_and_imports_get_src_blocks_2_p_0(ModuleAndImports_5, &SrcItemBlocks_12);
    parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(ModuleAndImports_5, &DirectIntItemBlocksCord_13);
    parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(ModuleAndImports_5, &IndirectIntItemBlocksCord_14);
    parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(ModuleAndImports_5, &OptItemBlocksCord_15);
    parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(ModuleAndImports_5, &IntForOptItemBlocksCord_16);
    Var_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), DirectIntItemBlocksCord_13);
    Var_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), IndirectIntItemBlocksCord_14);
    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), OptItemBlocksCord_15);
    Var_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), IntForOptItemBlocksCord_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *AugCompUnit_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SrcItemBlocks_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
    }
    parse_tree__module_imports__module_and_imports_get_specs_2_p_0(ModuleAndImports_5, Specs_7);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(ModuleAndImports_5, Errors_8);
  }
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24))));
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_d_file_19_p_0(
  MR_Word ModuleAndImports_20,
  MR_String * SourceFileName_21,
  MR_Word * SourceFileModuleName_22,
  MR_Word * ModuleName_23,
  MR_Word * Ancestors_24,
  MR_Word * PublicChildrenMap_25,
  MR_Word * NestedChildren_26,
  MR_Word * IntDepsMap_27,
  MR_Word * ImpDepsMap_28,
  MR_Word * IndirectDeps_29,
  MR_Word * FactDeps_30,
  MR_Word * ForeignImportModules_31,
  MR_Word * ForeignIncludeFilesCord_32,
  MR_Word * ContainsForeignCode_33,
  MR_Word * SrcItemBlocks_34,
  MR_Word * DirectIntItemBlocksCord_35,
  MR_Word * IndirectIntItemBlocksCord_36,
  MR_Word * OptItemBlocksCord_37,
  MR_Word * IntForOptItemBlocksCord_38)
{
  {
    *SourceFileName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports_20, (MR_Integer) 0))));
    *SourceFileModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_20, (MR_Integer) 2))));
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_20, ModuleName_23);
    parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports_20, Ancestors_24);
    parse_tree__module_imports__module_and_imports_get_public_children_map_2_p_0(ModuleAndImports_20, PublicChildrenMap_25);
    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports_20, NestedChildren_26);
    parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(ModuleAndImports_20, IntDepsMap_27);
    parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(ModuleAndImports_20, ImpDepsMap_28);
    parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(ModuleAndImports_20, IndirectDeps_29);
    parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(ModuleAndImports_20, FactDeps_30);
    parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(ModuleAndImports_20, ForeignImportModules_31);
    parse_tree__module_imports__module_and_imports_get_foreign_include_files_2_p_0(ModuleAndImports_20, ForeignIncludeFilesCord_32);
    parse_tree__module_imports__module_and_imports_get_contains_foreign_code_2_p_0(ModuleAndImports_20, ContainsForeignCode_33);
    parse_tree__module_imports__module_and_imports_get_src_blocks_2_p_0(ModuleAndImports_20, SrcItemBlocks_34);
    parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(ModuleAndImports_20, DirectIntItemBlocksCord_35);
    parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(ModuleAndImports_20, IndirectIntItemBlocksCord_36);
    parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(ModuleAndImports_20, OptItemBlocksCord_37);
    parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(ModuleAndImports_20, IntForOptItemBlocksCord_38);
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
    MR_Word Specs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24))));
    MR_Word Errors0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25))));
    MR_Word Specs_10;
    MR_Word Errors_11;
    MR_Word STATE_VARIABLE_ModuleAndImports_14_14;

    Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_5, Specs0_8);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors0_9, NewErrors_6, &Errors_11);
    parse_tree__module_imports__module_and_imports_set_specs_3_p_0(Specs_10, STATE_VARIABLE_ModuleAndImports_0_12, &STATE_VARIABLE_ModuleAndImports_14_14);
    parse_tree__module_imports__module_and_imports_set_errors_3_p_0(Errors_11, STATE_VARIABLE_ModuleAndImports_14_14, STATE_VARIABLE_ModuleAndImports_13);
  }
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_set_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
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
    MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    MR_Word Errors_7;
    MR_String Var_45;
    MR_String Var_46;
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
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Unsigned packed_word_1;

    mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors0_6, InterfaceErrors_4, &Errors_7);
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_7));
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
    MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    MR_Word Specs_7;
    MR_String Var_45;
    MR_String Var_46;
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
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Unsigned packed_word_1;

    Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_4, Specs0_6);
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_71));
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
  if ((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModuleAndImports_12 = STATE_VARIABLE_ModuleAndImports_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_String Var_49;
    MR_String Var_50;
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
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Unsigned packed_word_1;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0))));
    Var_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ModuleVersionNumbersMap_10));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_75));
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
    MR_Word IntItemBlocks0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_46;
    MR_String Var_47;
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
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Unsigned packed_word_1;

    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), IntItemBlocks0_6, Var_10);
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_72));
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
    MR_Word OptItemBlocks0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    MR_Word OptItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_46;
    MR_String Var_47;
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
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Unsigned packed_word_1;

    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), NewOptItemBlocks_4);
    OptItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), OptItemBlocks0_6, Var_10);
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (OptItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_72));
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
    MR_Word IntItemBlocks0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_46;
    MR_String Var_47;
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
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Unsigned packed_word_1;

    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), IntItemBlocks0_6, Var_10);
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_72));
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
    MR_Word IntItemBlocks0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_46;
    MR_String Var_47;
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
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Unsigned packed_word_1;

    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), IntItemBlocks0_6, Var_10);
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_72));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_indirect_dep_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word IndirectDeps0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    MR_Word IndirectDeps_7;
    MR_String Var_45;
    MR_String Var_46;
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
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Unsigned packed_word_1;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), IndirectDeps0_6, &IndirectDeps_7);
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_7));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_71));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_imp_dep_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_10,
  MR_Word * STATE_VARIABLE_ModuleAndImports_11)
{
  {
    MR_Word ImpDepsMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 10))));
    MR_Word ImpDepsMap_9;
    MR_String Var_48;
    MR_String Var_49;
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
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Unsigned packed_word_1;

    mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Context_6)), ImpDepsMap0_8, &ImpDepsMap_9);
    Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 0))));
    Var_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 1))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 2))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 3))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 4))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 5))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 6))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 7))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 8))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 9))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 11))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 12))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 13))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 14))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 16)));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 17))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 18))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 19))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 20))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 21))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 22))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 23))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 24))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDepsMap_9));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_74));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_ancestor_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word Ancestors0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    MR_Word Ancestors_7;
    MR_String Var_45;
    MR_String Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
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
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Unsigned packed_word_1;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), Ancestors0_6, &Ancestors_7);
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Ancestors_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_71));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * ImpDeps_4)
{
  {
    MR_Word ImpDepsMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10))));
    MR_Word Var_6;

    Var_6 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDepsMap_5);
    *ImpDeps_4 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * ImpDeps_4)
{
  {
    MR_Word ImpDepsMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10))));

    *ImpDeps_4 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDepsMap_5);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * IntDeps_4)
{
  {
    MR_Word IntDepsMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9))));
    MR_Word Var_6;

    Var_6 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_5);
    *IntDeps_4 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * IntDeps_4)
{
  {
    MR_Word IntDepsMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9))));

    *IntDeps_4 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_5);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * Children_4)
{
  {
    MR_Word ChildrenMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6))));
    MR_Word Var_6;

    Var_6 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ChildrenMap_5);
    *Children_4 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * Children_4)
{
  {
    MR_Word ChildrenMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6))));

    *Children_4 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ChildrenMap_5);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (X_4));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_maybe_timestamp_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_foreign_import_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
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
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_imp_deps_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_deps_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_ancestors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_errors_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_src_blocks_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_has_main_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_contains_foreign_export_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_contains_foreign_code_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_foreign_include_files_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_public_children_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_context_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_dir_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_String * X_4)
{
  *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_String * X_4)
{
  *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));
}

static void MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__prog_data_foreign__add_foreign_import_module_info_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_52;

    conv0_LambdaHeadVar__2_52 = parse_tree__module_imports__IntroducedFrom__func__make_module_dep_module_and_imports__626__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0(
  MR_String SourceFileName_17,
  MR_String ModuleDir_18,
  MR_Word SourceFileModuleName_19,
  MR_Word ModuleName_20,
  MR_Word Ancestors_21,
  MR_Word Children_22,
  MR_Word NestedChildren_23,
  MR_Word IntDeps_24,
  MR_Word ImpDeps_25,
  MR_Word FactDeps_26,
  MR_Word ForeignImports_27,
  MR_Word ForeignIncludes_28,
  MR_Word ContainsForeignCode_29,
  MR_Word ContainsForeignExport_30,
  MR_Word HasMain_31,
  MR_Word * ModuleAndImports_32)
{
  {
    MR_Word ModuleNameContext_33;
    MR_Word IntDepsContexts_36;
    MR_Word ImpDepsContexts_37;
    MR_Word IndirectDeps_38;
    MR_Word ChildrenContexts_39;
    MR_Word PublicChildrenContexts_40;
    MR_Word ForeignImportModules_41;
    MR_Word DirectIntItemBlocksCord_43;
    MR_Word IndirectIntItemBlocksCord_44;
    MR_Word OptItemBlocksCord_45;
    MR_Word IntForOptItemBlocksCord_46;
    MR_Word ModuleVersionNumbers_47;
    MR_Word Errors_49;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Box conv2_ForeignImportModules_41;

    ModuleNameContext_33 = mercury__term__context_init_0_f_0();
    Var_56 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[4]), IntDeps_24);
    mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_56, &IntDepsContexts_36);
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[4]), ImpDeps_25);
    mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_57, &ImpDepsContexts_37);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_38);
    Var_58 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[4]), Children_22);
    mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_58, &ChildrenContexts_39);
    mercury__multi_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &PublicChildrenContexts_40);
    Var_60 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[5]), ForeignImports_27, ((MR_Box) (Var_60)), &conv2_ForeignImportModules_41);
    ForeignImportModules_41 = ((MR_Word) (conv2_ForeignImportModules_41));
    DirectIntItemBlocksCord_43 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]));
    IndirectIntItemBlocksCord_44 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]));
    OptItemBlocksCord_45 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]));
    IntForOptItemBlocksCord_46 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &ModuleVersionNumbers_47);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_49);
    Var_61 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_21);
    Var_62 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildren_23);
    Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludes_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleDir_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleNameContext_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ChildrenContexts_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PublicChildrenContexts_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntDepsContexts_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDepsContexts_37));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_38));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (FactDeps_26));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignImportModules_41));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ContainsForeignCode_29));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (((((MR_Unsigned) (ContainsForeignExport_30) << 1)) | (MR_Unsigned) (HasMain_31)));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (DirectIntItemBlocksCord_43));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IndirectIntItemBlocksCord_44));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (OptItemBlocksCord_45));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntForOptItemBlocksCord_46));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ModuleVersionNumbers_47));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_49));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__make_module_and_imports_11_p_0(
  MR_String SourceFileName_12,
  MR_Word SourceFileModuleName_13,
  MR_Word ModuleName_14,
  MR_Word ModuleNameContext_15,
  MR_Word SrcItemBlocks_16,
  MR_Word PublicChildren_17,
  MR_Word NestedChildren_18,
  MR_Word FactDeps_19,
  MR_Word ForeignIncludeFiles_20,
  MR_Word MaybeTimestampMap_21,
  MR_Word * ModuleAndImports_22)
{
  {
    MR_Word Ancestors_23;
    MR_Word IntDeps_24;
    MR_Word ImpDeps_25;
    MR_Word IndirectDeps_26;
    MR_Word Children_27;
    MR_Word ForeignImports_28;
    MR_Word VersionNumbers_29;
    MR_Word Errors_31;
    MR_String Var_32;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Ancestors_23);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), &IntDeps_24);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), &ImpDeps_25);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_26);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), &Children_27);
    ForeignImports_28 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &VersionNumbers_29);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_31);
    Var_32 = mercury__dir__this_directory_0_f_0();
    Var_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]));
    Var_37 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]));
    Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]));
    Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleNameContext_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Ancestors_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Children_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PublicChildren_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (NestedChildren_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntDeps_24));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDeps_25));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_26));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (FactDeps_19));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignImports_28));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ForeignIncludeFiles_20));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (SrcItemBlocks_16));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (VersionNumbers_29));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (MaybeTimestampMap_21));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_31));
    }
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__3_68;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__533__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_LambdaHeadVar__3_68);
    *wrapper_arg_3 = ((MR_Box) (conv8_LambdaHeadVar__3_68));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__4_101;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__498__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__4_101);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_101));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_96;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__496__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_96);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_96));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_90;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__482__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_90);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_90));
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
    MR_Word conv0_HeadVar__4_83;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__480__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_83);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_83));
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
  MR_Word RawCompUnit_15,
  MR_Word * ModuleImports_16)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_15, (MR_Integer) 0))));
    MR_Word ModuleNameContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_15, (MR_Integer) 1))));
    MR_Word RawItemBlocks_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_15, (MR_Integer) 2))));
    MR_Word Ancestors_20;
    MR_Word ImpImportDeps0_21;
    MR_Word ImpUseDeps0_22;
    MR_Word ImplicitImpImportDeps_23;
    MR_Word ImplicitImpUseDeps_24;
    MR_Word ImpImportDeps_25;
    MR_Word ImpUseDeps_26;
    MR_Word ImpDeps_27;
    MR_Word InterfaceRawCompUnit_28;
    MR_Word InterfaceItemBlocks_31;
    MR_Word IntImportDeps0_32;
    MR_Word IntUseDeps0_33;
    MR_Word ImplicitIntImportDeps_34;
    MR_Word ImplicitIntUseDeps_35;
    MR_Word IntImportDeps_36;
    MR_Word IntUseDeps_37;
    MR_Word IntDeps_38;
    MR_Word IndirectDeps_39;
    MR_Word Children_40;
    MR_Word PublicChildren_41;
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
    MR_Word VersionNumbers_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Box conv1_ImpImportDeps_25;
    MR_Box conv3_ImpUseDeps_26;
    MR_Box conv5_IntImportDeps_36;
    MR_Box conv7_IntUseDeps_37;
    MR_Box conv9_ForeignImports_53;

    Ancestors_20 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_17);
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_19, &ImpImportDeps0_21, &ImpUseDeps0_22);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Globals_9, RawItemBlocks_19, &ImplicitImpImportDeps_23, &ImplicitImpUseDeps_24);
    Var_58 = mercury__term__context_init_0_f_0();
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Var_58));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), Var_57, ImplicitImpImportDeps_23, ((MR_Box) (ImpImportDeps0_21)), &conv1_ImpImportDeps_25);
    ImpImportDeps_25 = ((MR_Word) (conv1_ImpImportDeps_25));
    Var_60 = mercury__term__context_init_0_f_0();
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Var_60));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), Var_59, ImplicitImpUseDeps_24, ((MR_Box) (ImpUseDeps0_22)), &conv3_ImpUseDeps_26);
    ImpUseDeps_26 = ((MR_Word) (conv3_ImpUseDeps_26));
    mercury__multi_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportDeps_25, ImpUseDeps_26, &ImpDeps_27);
    parse_tree__comp_unit_interface__get_interface_2_p_0(RawCompUnit_15, &InterfaceRawCompUnit_28);
    InterfaceItemBlocks_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InterfaceRawCompUnit_28, (MR_Integer) 2))));
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), InterfaceItemBlocks_31, &IntImportDeps0_32, &IntUseDeps0_33);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Globals_9, InterfaceItemBlocks_31, &ImplicitIntImportDeps_34, &ImplicitIntUseDeps_35);
    Var_62 = mercury__term__context_init_0_f_0();
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Var_62));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), Var_61, ImplicitIntImportDeps_34, ((MR_Box) (IntImportDeps0_32)), &conv5_IntImportDeps_36);
    IntImportDeps_36 = ((MR_Word) (conv5_IntImportDeps_36));
    Var_64 = mercury__term__context_init_0_f_0();
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_4));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Var_64));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), Var_63, ImplicitIntUseDeps_35, ((MR_Box) (IntUseDeps0_33)), &conv7_IntUseDeps_37);
    IntUseDeps_37 = ((MR_Word) (conv7_IntUseDeps_37));
    mercury__multi_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportDeps_36, IntUseDeps_37, &IntDeps_38);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_39);
    parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_19, &Children_40);
    parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), InterfaceItemBlocks_31, &PublicChildren_41);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_17, SourceFileModuleName_11);
    if (succeeded)
      mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)), NestedModuleNames_12, &NestedDeps_42);
    else
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &NestedDeps_42);
    parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_19, &FactTableDeps_43);
    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Globals_9, RawItemBlocks_19, &LangSet_44, &ForeignImports0_45, &ForeignIncludeFiles_46, &ContainsForeignExport_47);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_44);
    if (succeeded)
      ContainsForeignCode_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        ContainsForeignCode_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ContainsForeignCode_48, 0) = ((MR_Box) (LangSet_44));
      }
    parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_19, &SelfImportLangs_49);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_5));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ModuleName_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0), Var_65, SelfImportLangs_49, ((MR_Box) (ForeignImports0_45)), &conv9_ForeignImports_53);
    ForeignImports_53 = ((MR_Word) (conv9_ForeignImports_53));
    parse_tree__module_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_95_102_111_114_95_109_97_105_110_95_112_114_101_100_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(RawItemBlocks_19, (MR_Integer) 1, &HasMain_54);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &VersionNumbers_55);
    Var_70 = mercury__dir__this_directory_0_f_0();
    Var_71 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_20);
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]));
    Var_74 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]));
    Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]));
    Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *ModuleImports_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Children_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PublicChildren_41));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (NestedDeps_42));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntDeps_38));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDeps_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_39));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (FactTableDeps_43));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignImports_53));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ForeignIncludeFiles_46));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ContainsForeignCode_48));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (((((MR_Unsigned) (ContainsForeignExport_47) << 1)) | (MR_Unsigned) (HasMain_54)));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (VersionNumbers_55));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Specs_13));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_14));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HasMain_3 = STATE_VARIABLE_HasMain_0_2;
    else
    {
      MR_Word ItemBlock_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_HasMain_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HasMain_0_2;

      parse_tree__module_imports__look_for_main_pred_in_items_3_p_0(Items_14, STATE_VARIABLE_HasMain_0_2, &STATE_VARIABLE_HasMain_17_17);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HasMain_3 = STATE_VARIABLE_HasMain_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HasMain_32_32;
      MR_Word ItemPredDecl_10;
      MR_Word Name_11;
      MR_Word ArgTypes_12;
      MR_Word WithType_14;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HasMain_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        ItemPredDecl_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 0))));
        Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 1))) & (MR_Integer) 1);
        ArgTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 2))));
        WithType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 4))));
        succeeded = (Var_28 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_11);
          succeeded = (strcmp(Var_29, (MR_String) "main") == 0);
          if (succeeded)
          {
            succeeded = (ArgTypes_12 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_12, (MR_Integer) 1))));
              succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = (WithType_14 == (MR_Word) ((MR_Unsigned) 0U));
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
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_HasMain_0_2 = STATE_VARIABLE_HasMain_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HasMain_0_2 = next_value_of_STATE_VARIABLE_HasMain_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__module_imports____Compare____module_and_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_names_contexts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_names_contexts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_names_contexts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_names_contexts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__module_imports____Compare____module_timestamp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = parse_tree__module_imports____Unify____module_timestamp_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__module_imports____Compare____module_timestamp_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_names_contexts_0);
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
