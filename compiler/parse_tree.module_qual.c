/*
** Automatically generated from `module_qual.m'
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


/* :- module parse_tree.module_qual. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_qual__init
ENDINIT
*/

#include "parse_tree.module_qual.mih"


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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_inst_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_typeclass_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_should_report_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_warn_unused_imports_in_parents_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_mq_in_interface_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0[8];

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0[8];

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0[1];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0[11];

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0[11];

static const MR_DuArgLocn parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0[11];

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0[1];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0[1];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0[1];

static const MR_NotagFunctorDesc parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0;

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_3[2][6];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_4[1][7];




static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0 = {
  (MR_String) "did_not_find_undef_inst",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1 = {
  (MR_String) "found_undef_inst",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_inst_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_inst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_inst",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0 = {
  (MR_String) "did_not_find_undef_mode",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1 = {
  (MR_String) "found_undef_mode",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_mode_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_mode",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0 = {
  (MR_String) "did_not_find_undef_type",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1 = {
  (MR_String) "found_undef_type",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_type_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_type",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0 = {
  (MR_String) "did_not_find_undef_typeclass",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1 = {
  (MR_String) "found_undef_typeclass",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_typeclass_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_typeclass_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_typeclass",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_typeclass_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0 = {
  (MR_String) "should_not_report_errors",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1 = {
  (MR_String) "should_report_errors",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_should_report_errors_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_should_report_errors",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_should_report_errors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0 = {
  (MR_String) "should_not_warn_unused_imports_in_parents",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1 = {
  (MR_String) "should_warn_unused_imports_in_parents",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_warn_unused_imports_in_parents_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_warn_unused_imports_in_parents",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_warn_unused_imports_in_parents_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0 = {
  (MR_String) "mq_not_used_in_interface",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1 = {
  (MR_String) "mq_used_in_interface",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_mq_in_interface_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_in_interface_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_in_interface_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_in_interface",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_mq_in_interface_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_recompilation_info_0
  }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0[8] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0
};

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0[8] = {
  (MR_String) "mqi_sub_info",
  (MR_String) "mqi_modules",
  (MR_String) "mqi_types",
  (MR_String) "mqi_insts",
  (MR_String) "mqi_modes",
  (MR_String) "mqi_classes",
  (MR_String) "mqi_as_yet_unused_interface_modules",
  (MR_String) "mqi_maybe_recompilation_info"
};

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0 = {
  (MR_String) "mq_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_info",
  {     parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0[11] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_type_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_inst_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_typeclass_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0[11] = {
  (MR_String) "mqsi_this_module",
  (MR_String) "mqsi_imported_modules",
  (MR_String) "mqsi_imported_instance_modules",
  (MR_String) "mqsi_exported_instances_flag",
  (MR_String) "mqsi_found_undef_type",
  (MR_String) "mqsi_found_undef_inst",
  (MR_String) "mqsi_found_undef_mode",
  (MR_String) "mqsi_found_undef_typeclass",
  (MR_String) "mqsi_should_report_errors",
  (MR_String) "mqsi_warn_parents_imports",
  (MR_String) "mqsi_num_errors"
};

static const MR_DuArgLocn parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0[11] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0 = {
  (MR_String) "mq_sub_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_sub_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_sub_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_sub_info",
  {     parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 = {
  (MR_String) "partial_qualifier_info",
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "partial_qualifier_info",
  {     &parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 },
  {     &parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0
};

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_in_interface_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____mq_in_interface_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_info_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____mq_info_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____mq_sub_info_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    {
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____partial_qualifier_info_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
    return parse_tree__module_qual__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual____Compare____partial_qualifier_info_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__CastX_6 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__CastY_7 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_6 == parse_tree__module_qual__CastY_7);
    if (parse_tree__module_qual__succeeded)
      *parse_tree__module_qual__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_qual__V_4_4 = (MR_Word) parse_tree__module_qual__HeadVar__2_2;
        MR_Word parse_tree__module_qual__V_5_5 = (MR_Word) parse_tree__module_qual__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], parse_tree__module_qual__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__V_4_4)), ((MR_Box) (parse_tree__module_qual__V_5_5)));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0(
  MR_Word parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__CastX_5 = (MR_Integer) parse_tree__module_qual__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__CastY_6 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;

    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_5 == parse_tree__module_qual__CastY_6);
    if (parse_tree__module_qual__succeeded)
      parse_tree__module_qual__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_qual__V_3_3 = (MR_Word) parse_tree__module_qual__HeadVar__1_1;
        MR_Word parse_tree__module_qual__V_4_4 = (MR_Word) parse_tree__module_qual__HeadVar__2_2;

        {
          parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], ((MR_Box) (parse_tree__module_qual__V_3_3)), ((MR_Box) (parse_tree__module_qual__V_4_4)));
        }
      }
    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__CastX_36 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__CastY_37 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_36 == parse_tree__module_qual__CastY_37);
    if (parse_tree__module_qual__succeeded)
      *parse_tree__module_qual__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Integer parse_tree__module_qual__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Integer parse_tree__module_qual__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_26_26;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__V_26_26, parse_tree__module_qual__V_4_4, parse_tree__module_qual__V_15_15);
        }
        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_26_26 == (MR_Integer) 0);
        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
        if (parse_tree__module_qual__succeeded)
          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_26_26;
        else
          {
            MR_Word parse_tree__module_qual__V_27_27;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[4], &parse_tree__module_qual__V_27_27, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
            }
            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_27_27 == (MR_Integer) 0);
            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
            if (parse_tree__module_qual__succeeded)
              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_27_27;
            else
              {
                MR_Word parse_tree__module_qual__V_28_28;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[4], &parse_tree__module_qual__V_28_28, ((MR_Box) (parse_tree__module_qual__V_6_6)), ((MR_Box) (parse_tree__module_qual__V_17_17)));
                }
                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_28_28 == (MR_Integer) 0);
                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                if (parse_tree__module_qual__succeeded)
                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_28_28;
                else
                  {
                    MR_Word parse_tree__module_qual__V_29_29;
                    MR_Integer parse_tree__module_qual__V_49_49 = (MR_Integer) parse_tree__module_qual__V_7_7;
                    MR_Integer parse_tree__module_qual__V_50_50 = (MR_Integer) parse_tree__module_qual__V_18_18;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_29_29, parse_tree__module_qual__V_49_49, parse_tree__module_qual__V_50_50);
                    }
                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_29_29 == (MR_Integer) 0);
                    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                    if (parse_tree__module_qual__succeeded)
                      *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_29_29;
                    else
                      {
                        MR_Word parse_tree__module_qual__V_30_30;
                        MR_Integer parse_tree__module_qual__V_51_51 = (MR_Integer) parse_tree__module_qual__V_8_8;
                        MR_Integer parse_tree__module_qual__V_52_52 = (MR_Integer) parse_tree__module_qual__V_19_19;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_30_30, parse_tree__module_qual__V_51_51, parse_tree__module_qual__V_52_52);
                        }
                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_30_30 == (MR_Integer) 0);
                        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                        if (parse_tree__module_qual__succeeded)
                          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_30_30;
                        else
                          {
                            MR_Word parse_tree__module_qual__V_31_31;
                            MR_Integer parse_tree__module_qual__V_53_53 = (MR_Integer) parse_tree__module_qual__V_9_9;
                            MR_Integer parse_tree__module_qual__V_54_54 = (MR_Integer) parse_tree__module_qual__V_20_20;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_31_31, parse_tree__module_qual__V_53_53, parse_tree__module_qual__V_54_54);
                            }
                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_31_31 == (MR_Integer) 0);
                            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                            if (parse_tree__module_qual__succeeded)
                              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_31_31;
                            else
                              {
                                MR_Word parse_tree__module_qual__V_32_32;
                                MR_Integer parse_tree__module_qual__V_55_55 = (MR_Integer) parse_tree__module_qual__V_10_10;
                                MR_Integer parse_tree__module_qual__V_56_56 = (MR_Integer) parse_tree__module_qual__V_21_21;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_32_32, parse_tree__module_qual__V_55_55, parse_tree__module_qual__V_56_56);
                                }
                                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_32_32 == (MR_Integer) 0);
                                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                                if (parse_tree__module_qual__succeeded)
                                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_32_32;
                                else
                                  {
                                    MR_Word parse_tree__module_qual__V_33_33;
                                    MR_Integer parse_tree__module_qual__V_57_57 = (MR_Integer) parse_tree__module_qual__V_11_11;
                                    MR_Integer parse_tree__module_qual__V_58_58 = (MR_Integer) parse_tree__module_qual__V_22_22;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_33_33, parse_tree__module_qual__V_57_57, parse_tree__module_qual__V_58_58);
                                    }
                                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_33_33 == (MR_Integer) 0);
                                    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                                    if (parse_tree__module_qual__succeeded)
                                      *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_33_33;
                                    else
                                      {
                                        MR_Word parse_tree__module_qual__V_34_34;
                                        MR_Integer parse_tree__module_qual__V_59_59 = (MR_Integer) parse_tree__module_qual__V_12_12;
                                        MR_Integer parse_tree__module_qual__V_60_60 = (MR_Integer) parse_tree__module_qual__V_23_23;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_34_34, parse_tree__module_qual__V_59_59, parse_tree__module_qual__V_60_60);
                                        }
                                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_34_34 == (MR_Integer) 0);
                                        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                                        if (parse_tree__module_qual__succeeded)
                                          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_34_34;
                                        else
                                          {
                                            MR_Word parse_tree__module_qual__V_35_35;
                                            MR_Integer parse_tree__module_qual__V_61_61 = (MR_Integer) parse_tree__module_qual__V_13_13;
                                            MR_Integer parse_tree__module_qual__V_62_62 = (MR_Integer) parse_tree__module_qual__V_24_24;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_35_35, parse_tree__module_qual__V_61_61, parse_tree__module_qual__V_62_62);
                                            }
                                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_35_35 == (MR_Integer) 0);
                                            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                                            if (parse_tree__module_qual__succeeded)
                                              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_35_35;
                                            else
                                              {
                                                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__V_14_14, parse_tree__module_qual__V_25_25);
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
parse_tree__module_qual____Unify____mq_sub_info_0_0(
  MR_Word parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__CastX_25 = (MR_Integer) parse_tree__module_qual__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__CastY_26 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;

    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_25 == parse_tree__module_qual__CastY_26);
    if (parse_tree__module_qual__succeeded)
      parse_tree__module_qual__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_qual__TypeInfo_28_28;
        MR_Word parse_tree__module_qual__TypeInfo_29_29;
        MR_Word parse_tree__module_qual__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Integer parse_tree__module_qual__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Integer parse_tree__module_qual__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));

        {
          parse_tree__module_qual__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__V_3_3, parse_tree__module_qual__V_14_14);
        }
        if (parse_tree__module_qual__succeeded)
          {
            parse_tree__module_qual__TypeInfo_28_28 = (MR_Word) &parse_tree__module_qual_scalar_common_1[4];
            {
              parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_28_28, ((MR_Box) (parse_tree__module_qual__V_4_4)), ((MR_Box) (parse_tree__module_qual__V_15_15)));
            }
            if (parse_tree__module_qual__succeeded)
              {
                parse_tree__module_qual__TypeInfo_29_29 = (MR_Word) &parse_tree__module_qual_scalar_common_1[4];
                {
                  parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_29_29, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
                }
                if (parse_tree__module_qual__succeeded)
                  {
                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_6_6 == parse_tree__module_qual__V_17_17);
                    if (parse_tree__module_qual__succeeded)
                      {
                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_7_7 == parse_tree__module_qual__V_18_18);
                        if (parse_tree__module_qual__succeeded)
                          {
                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_8_8 == parse_tree__module_qual__V_19_19);
                            if (parse_tree__module_qual__succeeded)
                              {
                                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_9_9 == parse_tree__module_qual__V_20_20);
                                if (parse_tree__module_qual__succeeded)
                                  {
                                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_10_10 == parse_tree__module_qual__V_21_21);
                                    if (parse_tree__module_qual__succeeded)
                                      {
                                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_11_11 == parse_tree__module_qual__V_22_22);
                                        if (parse_tree__module_qual__succeeded)
                                          {
                                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_12_12 == parse_tree__module_qual__V_23_23);
                                            if (parse_tree__module_qual__succeeded)
                                              parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_13_13 == parse_tree__module_qual__V_24_24);
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
    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__CastX_27 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__CastY_28 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_27 == parse_tree__module_qual__CastY_28);
    if (parse_tree__module_qual__succeeded)
      *parse_tree__module_qual__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word parse_tree__module_qual__V_20_20;

        {
          parse_tree__module_qual____Compare____mq_sub_info_0_0(&parse_tree__module_qual__V_20_20, parse_tree__module_qual__V_4_4, parse_tree__module_qual__V_12_12);
        }
        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_20_20 == (MR_Integer) 0);
        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
        if (parse_tree__module_qual__succeeded)
          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_20_20;
        else
          {
            MR_Word parse_tree__module_qual__V_21_21;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_21_21, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_13_13)));
            }
            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_21_21 == (MR_Integer) 0);
            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
            if (parse_tree__module_qual__succeeded)
              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_21_21;
            else
              {
                MR_Word parse_tree__module_qual__V_22_22;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_22_22, ((MR_Box) (parse_tree__module_qual__V_6_6)), ((MR_Box) (parse_tree__module_qual__V_14_14)));
                }
                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_22_22 == (MR_Integer) 0);
                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                if (parse_tree__module_qual__succeeded)
                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_22_22;
                else
                  {
                    MR_Word parse_tree__module_qual__V_23_23;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_23_23, ((MR_Box) (parse_tree__module_qual__V_7_7)), ((MR_Box) (parse_tree__module_qual__V_15_15)));
                    }
                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_23_23 == (MR_Integer) 0);
                    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                    if (parse_tree__module_qual__succeeded)
                      *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_23_23;
                    else
                      {
                        MR_Word parse_tree__module_qual__V_24_24;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_24_24, ((MR_Box) (parse_tree__module_qual__V_8_8)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
                        }
                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_24_24 == (MR_Integer) 0);
                        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                        if (parse_tree__module_qual__succeeded)
                          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_24_24;
                        else
                          {
                            MR_Word parse_tree__module_qual__V_25_25;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_25_25, ((MR_Box) (parse_tree__module_qual__V_9_9)), ((MR_Box) (parse_tree__module_qual__V_17_17)));
                            }
                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_25_25 == (MR_Integer) 0);
                            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                            if (parse_tree__module_qual__succeeded)
                              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_25_25;
                            else
                              {
                                MR_Word parse_tree__module_qual__V_26_26;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[4], &parse_tree__module_qual__V_26_26, ((MR_Box) (parse_tree__module_qual__V_10_10)), ((MR_Box) (parse_tree__module_qual__V_18_18)));
                                }
                                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_26_26 == (MR_Integer) 0);
                                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
                                if (parse_tree__module_qual__succeeded)
                                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_26_26;
                                else
                                  {
                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[3], parse_tree__module_qual__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__V_11_11)), ((MR_Box) (parse_tree__module_qual__V_19_19)));
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
parse_tree__module_qual____Unify____mq_info_0_0(
  MR_Word parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__CastX_19 = (MR_Integer) parse_tree__module_qual__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__CastY_20 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;

    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_19 == parse_tree__module_qual__CastY_20);
    if (parse_tree__module_qual__succeeded)
      parse_tree__module_qual__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_qual__TypeInfo_21_21;
        MR_Word parse_tree__module_qual__TypeInfo_22_22;
        MR_Word parse_tree__module_qual__TypeInfo_23_23;
        MR_Word parse_tree__module_qual__TypeInfo_24_24;
        MR_Word parse_tree__module_qual__TypeInfo_25_25;
        MR_Word parse_tree__module_qual__TypeInfo_26_26;
        MR_Word parse_tree__module_qual__TypeInfo_27_27;
        MR_Word parse_tree__module_qual__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 7)));

        {
          parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(parse_tree__module_qual__V_3_3, parse_tree__module_qual__V_11_11);
        }
        if (parse_tree__module_qual__succeeded)
          {
            parse_tree__module_qual__TypeInfo_21_21 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
            {
              parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_21_21, ((MR_Box) (parse_tree__module_qual__V_4_4)), ((MR_Box) (parse_tree__module_qual__V_12_12)));
            }
            if (parse_tree__module_qual__succeeded)
              {
                parse_tree__module_qual__TypeInfo_22_22 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
                {
                  parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_22_22, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_13_13)));
                }
                if (parse_tree__module_qual__succeeded)
                  {
                    parse_tree__module_qual__TypeInfo_23_23 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
                    {
                      parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_23_23, ((MR_Box) (parse_tree__module_qual__V_6_6)), ((MR_Box) (parse_tree__module_qual__V_14_14)));
                    }
                    if (parse_tree__module_qual__succeeded)
                      {
                        parse_tree__module_qual__TypeInfo_24_24 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
                        {
                          parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_24_24, ((MR_Box) (parse_tree__module_qual__V_7_7)), ((MR_Box) (parse_tree__module_qual__V_15_15)));
                        }
                        if (parse_tree__module_qual__succeeded)
                          {
                            parse_tree__module_qual__TypeInfo_25_25 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
                            {
                              parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_25_25, ((MR_Box) (parse_tree__module_qual__V_8_8)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
                            }
                            if (parse_tree__module_qual__succeeded)
                              {
                                parse_tree__module_qual__TypeInfo_26_26 = (MR_Word) &parse_tree__module_qual_scalar_common_2[4];
                                {
                                  parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_26_26, ((MR_Box) (parse_tree__module_qual__V_9_9)), ((MR_Box) (parse_tree__module_qual__V_17_17)));
                                }
                                if (parse_tree__module_qual__succeeded)
                                  {
                                    parse_tree__module_qual__TypeInfo_27_27 = (MR_Word) &parse_tree__module_qual_scalar_common_1[3];
                                    {
                                      parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_27_27, ((MR_Box) (parse_tree__module_qual__V_10_10)), ((MR_Box) (parse_tree__module_qual__V_18_18)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2,
  MR_Word parse_tree__module_qual__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(
  MR_Word parse_tree__module_qual__HeadVar__2_1,
  MR_Word parse_tree__module_qual__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

    return parse_tree__module_qual__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(
  MR_Word parse_tree__module_qual__IdType_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;

    switch (parse_tree__module_qual__IdType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__V_18_18;
          MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
          MR_Word parse_tree__module_qual__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
          MR_Word parse_tree__module_qual__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
          MR_Word parse_tree__module_qual__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          MR_Integer parse_tree__module_qual__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

          {
            parse_tree__module_qual__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 0) = ((MR_Box) (parse_tree__module_qual__V_26_26));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 1) = ((MR_Box) (parse_tree__module_qual__V_27_27));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 2) = ((MR_Box) (parse_tree__module_qual__V_28_28));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 3) = ((MR_Box) ((parse_tree__module_qual__V_29_29 | ((((parse_tree__module_qual__V_30_30 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_31_31 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_32_32 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_34_34 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_35_35 << (MR_Integer) 6)))))))))))))));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 4) = ((MR_Box) (parse_tree__module_qual__V_36_36));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_19_19));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_20_20));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_21_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_22_22));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_23_23));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_24_24));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_25_25));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__V_51_51;
          MR_Word parse_tree__module_qual__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
          MR_Word parse_tree__module_qual__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
          MR_Word parse_tree__module_qual__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
          MR_Word parse_tree__module_qual__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          MR_Word parse_tree__module_qual__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          MR_Integer parse_tree__module_qual__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

          {
            parse_tree__module_qual__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 0) = ((MR_Box) (parse_tree__module_qual__V_59_59));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 1) = ((MR_Box) (parse_tree__module_qual__V_60_60));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 2) = ((MR_Box) (parse_tree__module_qual__V_61_61));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 3) = ((MR_Box) ((parse_tree__module_qual__V_62_62 | ((((parse_tree__module_qual__V_63_63 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_65_65 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_66_66 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_67_67 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_68_68 << (MR_Integer) 6)))))))))))))));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 4) = ((MR_Box) (parse_tree__module_qual__V_69_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_51_51));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_52_52));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_53_53));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_54_54));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_55_55));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_56_56));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_57_57));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_58_58));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__module_qual__mq_info_set_found_undef_mode_2_p_0(parse_tree__module_qual__STATE_VARIABLE_Info_0_6, parse_tree__module_qual__STATE_VARIABLE_Info_7);
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__module_qual__mq_info_set_found_undef_type_2_p_0(parse_tree__module_qual__STATE_VARIABLE_Info_0_6, parse_tree__module_qual__STATE_VARIABLE_Info_7);
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_typeclass_2_p_0(
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

    {
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | ((((parse_tree__module_qual__V_21_21 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_mode_2_p_0(
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    {
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | ((((parse_tree__module_qual__V_21_21 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | ((((parse_tree__module_qual__V_21_21 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_type_2_p_0(
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) & (MR_Integer) 1);

    {
      parse_tree__module_qual__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 1) = ((MR_Box) (parse_tree__module_qual__V_19_19));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 2) = ((MR_Box) (parse_tree__module_qual__V_20_20));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 3) = ((MR_Box) ((parse_tree__module_qual__X_4 | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_26_26 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_27_27 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 4) = ((MR_Box) (parse_tree__module_qual__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_16_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_17_17));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 1)));

    {
      parse_tree__module_qual__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 1) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 2) = ((MR_Box) (parse_tree__module_qual__V_20_20));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 3) = ((MR_Box) ((parse_tree__module_qual__V_21_21 | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_26_26 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_27_27 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 4) = ((MR_Box) (parse_tree__module_qual__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_16_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_17_17));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 2)));

    {
      parse_tree__module_qual__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 1) = ((MR_Box) (parse_tree__module_qual__V_19_19));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 2) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 3) = ((MR_Box) ((parse_tree__module_qual__V_21_21 | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_26_26 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_27_27 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 4) = ((MR_Box) (parse_tree__module_qual__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_16_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_17_17));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_classes_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_modes_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_insts_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_types_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_modules_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16;
    MR_Word parse_tree__module_qual__V_17_17;
    MR_Word parse_tree__module_qual__V_18_18;
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15;
    MR_Word parse_tree__module_qual__V_16_16;
    MR_Word parse_tree__module_qual__V_17_17;
    MR_Word parse_tree__module_qual__V_18_18;
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    parse_tree__module_qual__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14;
    MR_Word parse_tree__module_qual__V_15_15;
    MR_Word parse_tree__module_qual__V_16_16;
    MR_Word parse_tree__module_qual__V_17_17;
    MR_Word parse_tree__module_qual__V_18_18;
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    parse_tree__module_qual__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_this_module_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13;
    MR_Word parse_tree__module_qual__V_14_14;
    MR_Word parse_tree__module_qual__V_15_15;
    MR_Word parse_tree__module_qual__V_16_16;
    MR_Word parse_tree__module_qual__V_17_17;
    MR_Word parse_tree__module_qual__V_18_18;
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    parse_tree__module_qual__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_classes_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_modes_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_insts_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8;
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_types_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7;
    MR_Word parse_tree__module_qual__V_8_8;
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_modules_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6;
    MR_Word parse_tree__module_qual__V_7_7;
    MR_Word parse_tree__module_qual__V_8_8;
    MR_Word parse_tree__module_qual__V_9_9;
    MR_Word parse_tree__module_qual__V_10_10;
    MR_Word parse_tree__module_qual__V_11_11;

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__init_mq_info_8_p_0(
  MR_Word parse_tree__module_qual__TypeInfo_for_MS1_56,
  MR_Word parse_tree__module_qual__TypeInfo_for_MS2_57,
  MR_Word parse_tree__module_qual__TypeInfo_for_MS3_58,
  MR_Word parse_tree__module_qual__TypeInfo_for_MS4_59,
  MR_Word parse_tree__module_qual__Globals_9,
  MR_Word parse_tree__module_qual__ModuleName_10,
  MR_Word parse_tree__module_qual__ItemBlocksA_11,
  MR_Word parse_tree__module_qual__ItemBlocksB_12,
  MR_Word parse_tree__module_qual__ItemBlocksC_13,
  MR_Word parse_tree__module_qual__ItemBlocksD_14,
  MR_Word parse_tree__module_qual__ReportErrors_15,
  MR_Word * parse_tree__module_qual__Info_16)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__TypeCtorInfo_60_60;
    MR_Word parse_tree__module_qual__ImportDepsA_17;
    MR_Word parse_tree__module_qual__UseDepsA_18;
    MR_Word parse_tree__module_qual__ImportDepsB_19;
    MR_Word parse_tree__module_qual__UseDepsB_20;
    MR_Word parse_tree__module_qual__ImportDepsC_21;
    MR_Word parse_tree__module_qual__UseDepsC_22;
    MR_Word parse_tree__module_qual__ImportDepsD_23;
    MR_Word parse_tree__module_qual__UseDepsD_24;
    MR_Word parse_tree__module_qual__ImportedModules_25;
    MR_Word parse_tree__module_qual__InstanceModules_26;
    MR_Word parse_tree__module_qual__WarnInterfaceImportsInParents_28;
    MR_Word parse_tree__module_qual__WarnUnusedImportsInParents_29;
    MR_Word parse_tree__module_qual__SubInfo_30;
    MR_Word parse_tree__module_qual__ModuleIdSet_31;
    MR_Word parse_tree__module_qual__TypeIdSet_32;
    MR_Word parse_tree__module_qual__InstIdSet_33;
    MR_Word parse_tree__module_qual__ModeIdSet_34;
    MR_Word parse_tree__module_qual__ClassIdSet_35;
    MR_Word parse_tree__module_qual__AsYetUnusedInterfaceModules_36;
    MR_Word parse_tree__module_qual__SmartRecompilation_37;
    MR_Word parse_tree__module_qual__MaybeRecompInfo_38;
    MR_Word parse_tree__module_qual__V_39_39;
    MR_Word parse_tree__module_qual__V_40_40;
    MR_Word parse_tree__module_qual__V_41_41;
    MR_Word parse_tree__module_qual__V_42_42;
    MR_Word parse_tree__module_qual__V_43_43;
    MR_Word parse_tree__module_qual__V_44_44;
    MR_Word parse_tree__module_qual__V_45_45;
    MR_Word parse_tree__module_qual__V_46_46;

    {
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS1_56, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksA_11, &parse_tree__module_qual__ImportDepsA_17, &parse_tree__module_qual__UseDepsA_18);
    }
    {
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS2_57, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksB_12, &parse_tree__module_qual__ImportDepsB_19, &parse_tree__module_qual__UseDepsB_20);
    }
    {
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS3_58, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksC_13, &parse_tree__module_qual__ImportDepsC_21, &parse_tree__module_qual__UseDepsC_22);
    }
    {
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS4_59, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksD_14, &parse_tree__module_qual__ImportDepsD_23, &parse_tree__module_qual__UseDepsD_24);
    }
    parse_tree__module_qual__TypeCtorInfo_60_60 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      parse_tree__module_qual__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_46_46, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsD_24));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_45_45, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsC_22));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_45_45, 1) = ((MR_Box) (parse_tree__module_qual__V_46_46));
    }
    {
      parse_tree__module_qual__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_44_44, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsB_20));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_44_44, 1) = ((MR_Box) (parse_tree__module_qual__V_45_45));
    }
    {
      parse_tree__module_qual__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_43_43, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsA_18));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_43_43, 1) = ((MR_Box) (parse_tree__module_qual__V_44_44));
    }
    {
      parse_tree__module_qual__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_42_42, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsD_23));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_42_42, 1) = ((MR_Box) (parse_tree__module_qual__V_43_43));
    }
    {
      parse_tree__module_qual__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_41_41, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsC_21));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_41_41, 1) = ((MR_Box) (parse_tree__module_qual__V_42_42));
    }
    {
      parse_tree__module_qual__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_40_40, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsB_19));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_40_40, 1) = ((MR_Box) (parse_tree__module_qual__V_41_41));
    }
    {
      parse_tree__module_qual__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_39_39, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsA_17));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_39_39, 1) = ((MR_Box) (parse_tree__module_qual__V_40_40));
    }
    {
      parse_tree__module_qual__ImportedModules_25 = mercury__set__union_list_1_f_0(parse_tree__module_qual__TypeCtorInfo_60_60, parse_tree__module_qual__V_39_39);
    }
    {
      mercury__set__init_1_p_0(parse_tree__module_qual__TypeCtorInfo_60_60, &parse_tree__module_qual__InstanceModules_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_qual__Globals_9, (MR_Integer) 12, &parse_tree__module_qual__WarnInterfaceImportsInParents_28);
    }
    switch (parse_tree__module_qual__WarnInterfaceImportsInParents_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_qual__WarnUnusedImportsInParents_29 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        parse_tree__module_qual__WarnUnusedImportsInParents_29 = (MR_Integer) 1;
        break;
    }
    {
      parse_tree__module_qual__SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 0) = ((MR_Box) (parse_tree__module_qual__ModuleName_10));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 1) = ((MR_Box) (parse_tree__module_qual__ImportedModules_25));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 2) = ((MR_Box) (parse_tree__module_qual__InstanceModules_26));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | ((((parse_tree__module_qual__ReportErrors_15 << (MR_Integer) 5)) | ((parse_tree__module_qual__WarnUnusedImportsInParents_29 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__ModuleIdSet_31);
    }
    {
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__TypeIdSet_32);
    }
    {
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__InstIdSet_33);
    }
    {
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__ModeIdSet_34);
    }
    {
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__ClassIdSet_35);
    }
    {
      mercury__map__init_1_p_0(parse_tree__module_qual__TypeCtorInfo_60_60, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], &parse_tree__module_qual__AsYetUnusedInterfaceModules_36);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_qual__Globals_9, (MR_Integer) 117, &parse_tree__module_qual__SmartRecompilation_37);
    }
    switch (parse_tree__module_qual__SmartRecompilation_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_qual__MaybeRecompInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__V_55_55;

          {
            parse_tree__module_qual__V_55_55 = recompilation__init_recompilation_info_1_f_0(parse_tree__module_qual__ModuleName_10);
          }
          {
            parse_tree__module_qual__MaybeRecompInfo_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__MaybeRecompInfo_38, 0) = ((MR_Box) (parse_tree__module_qual__V_55_55));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__Info_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__SubInfo_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__ModuleIdSet_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__TypeIdSet_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__InstIdSet_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__ModeIdSet_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__ClassIdSet_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__AsYetUnusedInterfaceModules_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__MaybeRecompInfo_38));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_module_used_4_p_0(
  MR_Word parse_tree__module_qual__InInt_5,
  MR_Word parse_tree__module_qual__ModuleName_6,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_14,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__succeeded;

        switch (parse_tree__module_qual__InInt_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__module_qual__STATE_VARIABLE_Info_15 = parse_tree__module_qual__STATE_VARIABLE_Info_0_14;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__AsYetUnused0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
              MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_16_16;
              MR_Word parse_tree__module_qual__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
              MR_Word parse_tree__module_qual__AsYetUnused_10;
              MR_Word parse_tree__module_qual__V_9_9;
              MR_Box parse_tree__module_qual__conv0_V_9_9;

              {
                parse_tree__module_qual__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], ((MR_Box) (parse_tree__module_qual__ModuleName_6)), &parse_tree__module_qual__conv0_V_9_9, parse_tree__module_qual__AsYetUnused0_8, &parse_tree__module_qual__AsYetUnused_10);
              }
              if (parse_tree__module_qual__succeeded)
                {
                  parse_tree__module_qual__V_9_9 = ((MR_Word) parse_tree__module_qual__conv0_V_9_9);
                  parse_tree__module_qual__succeeded = MR_TRUE;
                }
              if (parse_tree__module_qual__succeeded)
                {
                  MR_Word parse_tree__module_qual__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
                  MR_Word parse_tree__module_qual__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
                  MR_Word parse_tree__module_qual__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));

                  {
                    parse_tree__module_qual__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (parse_tree__module_qual__V_34_34));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (parse_tree__module_qual__V_35_35));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (parse_tree__module_qual__V_36_36));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (parse_tree__module_qual__V_37_37));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (parse_tree__module_qual__V_38_38));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (parse_tree__module_qual__V_39_39));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (parse_tree__module_qual__AsYetUnused_10));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 7) = ((MR_Box) (parse_tree__module_qual__V_41_41));
                  }
                }
              else
                parse_tree__module_qual__STATE_VARIABLE_Info_16_16 = parse_tree__module_qual__STATE_VARIABLE_Info_0_14;
              if (((MR_tag((MR_Word) parse_tree__module_qual__ModuleName_6)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word parse_tree__module_qual__ParentModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_6, (MR_Integer) 0)));
                  MR_String parse_tree__module_qual__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__ModuleName__tmp_copy_6 = parse_tree__module_qual__ParentModule_11;
                    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0__tmp_copy_14 = parse_tree__module_qual__STATE_VARIABLE_Info_16_16;

                    parse_tree__module_qual__STATE_VARIABLE_Info_0_14 = parse_tree__module_qual__STATE_VARIABLE_Info_0__tmp_copy_14;
                    parse_tree__module_qual__ModuleName_6 = parse_tree__module_qual__ModuleName__tmp_copy_6;
                  }
                  continue;
                }
              else
                *parse_tree__module_qual__STATE_VARIABLE_Info_15 = parse_tree__module_qual__STATE_VARIABLE_Info_16_16;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
parse_tree__module_qual__update_recompilation_info_3_p_0(
  MR_Word parse_tree__module_qual__Pred_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_9,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_10)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__MaybeRecompInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));

    if ((parse_tree__module_qual__MaybeRecompInfo0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__module_qual__STATE_VARIABLE_Info_10 = parse_tree__module_qual__STATE_VARIABLE_Info_0_9;
    else
      {
        MR_Word parse_tree__module_qual__RecompInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__MaybeRecompInfo0_6, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__RecompInfo_8;
        MR_Word parse_tree__module_qual__V_11_11;
        void MR_CALL (* parse_tree__module_qual__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Pred_4, (MR_Integer) 1)));
        MR_Box parse_tree__module_qual__conv1_RecompInfo_8;
        MR_Word parse_tree__module_qual__V_27_27;
        MR_Word parse_tree__module_qual__V_28_28;
        MR_Word parse_tree__module_qual__V_29_29;
        MR_Word parse_tree__module_qual__V_30_30;
        MR_Word parse_tree__module_qual__V_31_31;
        MR_Word parse_tree__module_qual__V_32_32;
        MR_Word parse_tree__module_qual__V_33_33;
        MR_Word parse_tree__module_qual__V_34_34;

        {
          parse_tree__module_qual__func_0(((MR_Box) parse_tree__module_qual__Pred_4), ((MR_Box) (parse_tree__module_qual__RecompInfo0_7)), &parse_tree__module_qual__conv1_RecompInfo_8);
        }
        parse_tree__module_qual__RecompInfo_8 = ((MR_Word) parse_tree__module_qual__conv1_RecompInfo_8);
        {
          parse_tree__module_qual__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_11_11, 0) = ((MR_Box) (parse_tree__module_qual__RecompInfo_8));
        }
        parse_tree__module_qual__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
        parse_tree__module_qual__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
        parse_tree__module_qual__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
        parse_tree__module_qual__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
        parse_tree__module_qual__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
        parse_tree__module_qual__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
        parse_tree__module_qual__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
        parse_tree__module_qual__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__module_qual__STATE_VARIABLE_Info_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_27_27));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_28_28));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_29_29));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_30_30));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_31_31));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_32_32));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_33_33));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_11_11));
        }
      }
  }
}

void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_acc_6_p_0(
  MR_Word parse_tree__module_qual__InInt_7,
  MR_Word parse_tree__module_qual__ImplicitPart_8,
  MR_Word parse_tree__module_qual__ExplicitPart_9,
  MR_Word parse_tree__module_qual__ModuleIdSet_10,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_17,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Qualifiers_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__succeeded;
        MR_Word parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19;

        {
          parse_tree__module_qual__succeeded = parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(parse_tree__module_qual__InInt_7, parse_tree__module_qual__ImplicitPart_8, parse_tree__module_qual__ExplicitPart_9, parse_tree__module_qual__ModuleIdSet_10);
        }
        if (parse_tree__module_qual__succeeded)
          {
            parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19, 0) = ((MR_Box) (parse_tree__module_qual__ExplicitPart_9));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19, 1) = ((MR_Box) (parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_17));
          }
        else
          parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_17;
        if (((MR_tag((MR_Word) parse_tree__module_qual__ImplicitPart_8)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String parse_tree__module_qual__Child_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImplicitPart_8, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__NextImplicitPart_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImplicitPart_8, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__NextExplicitPart_15;

            {
              parse_tree__module_qual__NextExplicitPart_15 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0(parse_tree__module_qual__Child_13, parse_tree__module_qual__ExplicitPart_9);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__ImplicitPart__tmp_copy_8 = parse_tree__module_qual__NextImplicitPart_14;
              MR_Word parse_tree__module_qual__ExplicitPart__tmp_copy_9 = parse_tree__module_qual__NextExplicitPart_15;
              MR_Word parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0__tmp_copy_17 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19;

              parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_17 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0__tmp_copy_17;
              parse_tree__module_qual__ExplicitPart_9 = parse_tree__module_qual__ExplicitPart__tmp_copy_9;
              parse_tree__module_qual__ImplicitPart_8 = parse_tree__module_qual__ImplicitPart__tmp_copy_8;
            }
            continue;
          }
        else
          *parse_tree__module_qual__STATE_VARIABLE_Qualifiers_18 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_19_19;
      }
      break;
    }
}

void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_4_p_0(
  MR_Word parse_tree__module_qual__InInt_5,
  MR_Word parse_tree__module_qual__ModuleName_6,
  MR_Word parse_tree__module_qual__PartialQualInfo_7,
  MR_Word * parse_tree__module_qual__PartialQualifiers_8)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__ModuleIdSet_9 = (MR_Word) parse_tree__module_qual__PartialQualInfo_7;

    if (((MR_tag((MR_Word) parse_tree__module_qual__ModuleName_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_qual__Parent_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_6, (MR_Integer) 0)));
        MR_String parse_tree__module_qual__Child_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_6, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__V_13_13;

        {
          parse_tree__module_qual__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_13_13, 0) = ((MR_Box) (parse_tree__module_qual__Child_12));
        }
        {
          parse_tree__module_qual__get_partial_qualifiers_acc_6_p_0(parse_tree__module_qual__InInt_5, parse_tree__module_qual__Parent_11, parse_tree__module_qual__V_13_13, parse_tree__module_qual__ModuleIdSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_qual__PartialQualifiers_8);
        }
      }
    else
      *parse_tree__module_qual__PartialQualifiers_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(
  MR_Word parse_tree__module_qual__MQInfo_3,
  MR_Word * parse_tree__module_qual__QualifierInfo_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__ModuleIdSet_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 7)));

    *parse_tree__module_qual__QualifierInfo_4 = (MR_Word) parse_tree__module_qual__ModuleIdSet_5;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(
  MR_Word parse_tree__module_qual__X_4,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__X_4));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));

    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_18_18;
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(
  MR_Word parse_tree__module_qual__Info_3,
  MR_Word * parse_tree__module_qual__X_4)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word parse_tree__module_qual__V_17_17;
    MR_Word parse_tree__module_qual__V_18_18;
    MR_Word parse_tree__module_qual__V_19_19;
    MR_Word parse_tree__module_qual__V_20_20;
    MR_Word parse_tree__module_qual__V_21_21;
    MR_Integer parse_tree__module_qual__V_22_22;

    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_type_qualification_8_p_0(
  MR_Word parse_tree__module_qual__InInt_9,
  MR_Word parse_tree__module_qual__Context_10,
  MR_Word parse_tree__module_qual__Type0_11,
  MR_Word * parse_tree__module_qual__Type_12,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_16,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_17,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_18,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__ErrorContext_15;

    {
      parse_tree__module_qual__ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 1) = ((MR_Box) (parse_tree__module_qual__Context_10));
    }
    {
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__InInt_9, parse_tree__module_qual__ErrorContext_15, parse_tree__module_qual__Type0_11, parse_tree__module_qual__Type_12, parse_tree__module_qual__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__STATE_VARIABLE_Info_17, parse_tree__module_qual__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__STATE_VARIABLE_Specs_19);
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_clause_mode_list_8_p_0(
  MR_Word parse_tree__module_qual__InInt_9,
  MR_Word parse_tree__module_qual__Context_10,
  MR_Word parse_tree__module_qual__Modes0_11,
  MR_Word * parse_tree__module_qual__Modes_12,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_16,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_17,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_18,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__ErrorContext_15;

    {
      parse_tree__module_qual__ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 1) = ((MR_Box) (parse_tree__module_qual__Context_10));
    }
    {
      parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__InInt_9, parse_tree__module_qual__ErrorContext_15, parse_tree__module_qual__Modes0_11, parse_tree__module_qual__Modes_12, parse_tree__module_qual__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__STATE_VARIABLE_Info_17, parse_tree__module_qual__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__STATE_VARIABLE_Specs_19);
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_lambda_mode_8_p_0(
  MR_Word parse_tree__module_qual__InInt_9,
  MR_Word parse_tree__module_qual__Context_10,
  MR_Word parse_tree__module_qual__Mode0_11,
  MR_Word * parse_tree__module_qual__Mode_12,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_16,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_17,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_18,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__ErrorContext_15;

    {
      parse_tree__module_qual__ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 1) = ((MR_Box) (parse_tree__module_qual__Context_10));
    }
    {
      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(parse_tree__module_qual__InInt_9, parse_tree__module_qual__ErrorContext_15, parse_tree__module_qual__Mode0_11, parse_tree__module_qual__Mode_12, parse_tree__module_qual__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__STATE_VARIABLE_Info_17, parse_tree__module_qual__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__STATE_VARIABLE_Specs_19);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
    MR_Word parse_tree__module_qual__conv3_HeadVar__2_2;
    MR_Word parse_tree__module_qual__conv2_HeadVar__3_3;

    {
      parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv3_HeadVar__2_2, &parse_tree__module_qual__conv2_HeadVar__3_3);
    }
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv3_HeadVar__2_2));
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
    MR_Word parse_tree__module_qual__conv1_HeadVar__2_2;
    MR_Word parse_tree__module_qual__conv0_HeadVar__3_3;

    {
      parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv1_HeadVar__2_2, &parse_tree__module_qual__conv0_HeadVar__3_3);
    }
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv1_HeadVar__2_2));
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(
  MR_Word parse_tree__module_qual__Globals_6,
  MR_Word parse_tree__module_qual__ParseTreeInt0_7,
  MR_Word * parse_tree__module_qual__ParseTreeInt_8,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_29,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__TypeCtorInfo_55_55;
    MR_Word parse_tree__module_qual__TypeCtorInfo_59_59;
    MR_Word parse_tree__module_qual__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__IntFileKind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__MaybeVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__IntIncls_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__ImpIncls_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__IntAvails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__ImpAvails_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__IntItems0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 8)));
    MR_Word parse_tree__module_qual__ImpItems0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 9)));
    MR_Word parse_tree__module_qual__IntSrcItemBlocks0_20;
    MR_Word parse_tree__module_qual__ImpSrcItemBlocks0_21;
    MR_Word parse_tree__module_qual__DummyItemBlocks_22;
    MR_Word parse_tree__module_qual__IntItems_24;
    MR_Word parse_tree__module_qual__ImpItems_27;
    MR_Word parse_tree__module_qual__V_31_31;
    MR_Word parse_tree__module_qual__V_33_33;
    MR_Word parse_tree__module_qual__V_35_35;
    MR_Word parse_tree__module_qual__V_37_37;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_IntInfo_42_42;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_IntInfo_44_44;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_46_46;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_ImpInfo_50_50;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_ImpInfo_52_52;
    MR_Word parse_tree__module_qual__V_25_25;
    MR_Word parse_tree__module_qual__V_28_28;

    {
      parse_tree__module_qual__V_33_33 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__module_qual__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__V_33_33));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 2) = ((MR_Box) (parse_tree__module_qual__IntIncls_14));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 3) = ((MR_Box) (parse_tree__module_qual__IntAvails_16));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 4) = ((MR_Box) (parse_tree__module_qual__IntItems0_18));
    }
    {
      parse_tree__module_qual__IntSrcItemBlocks0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__IntSrcItemBlocks0_20, 0) = ((MR_Box) (parse_tree__module_qual__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__IntSrcItemBlocks0_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__V_37_37 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__module_qual__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 1) = ((MR_Box) (parse_tree__module_qual__V_37_37));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 2) = ((MR_Box) (parse_tree__module_qual__ImpIncls_15));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 3) = ((MR_Box) (parse_tree__module_qual__ImpAvails_17));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 4) = ((MR_Box) (parse_tree__module_qual__ImpItems0_19));
    }
    {
      parse_tree__module_qual__ImpSrcItemBlocks0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImpSrcItemBlocks0_21, 0) = ((MR_Box) (parse_tree__module_qual__V_35_35));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImpSrcItemBlocks0_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__module_qual__DummyItemBlocks_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__module_qual__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
    {
      parse_tree__module_qual__init_mq_info_8_p_0(parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__Globals_6, parse_tree__module_qual__ModuleName_10, parse_tree__module_qual__IntSrcItemBlocks0_20, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, (MR_Integer) 0, &parse_tree__module_qual__STATE_VARIABLE_IntInfo_42_42);
    }
    {
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_55_55, (MR_Word) &parse_tree__module_qual_scalar_common_2[7], parse_tree__module_qual__IntSrcItemBlocks0_20, parse_tree__module_qual__STATE_VARIABLE_IntInfo_42_42, &parse_tree__module_qual__STATE_VARIABLE_IntInfo_44_44);
    }
    {
      parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0((MR_Integer) 1, parse_tree__module_qual__IntItems0_18, &parse_tree__module_qual__IntItems_24, parse_tree__module_qual__STATE_VARIABLE_IntInfo_44_44, &parse_tree__module_qual__V_25_25, parse_tree__module_qual__STATE_VARIABLE_Specs_0_29, &parse_tree__module_qual__STATE_VARIABLE_Specs_46_46);
    }
    parse_tree__module_qual__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
    {
      parse_tree__module_qual__init_mq_info_8_p_0(parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__Globals_6, parse_tree__module_qual__ModuleName_10, parse_tree__module_qual__ImpSrcItemBlocks0_21, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, (MR_Integer) 0, &parse_tree__module_qual__STATE_VARIABLE_ImpInfo_50_50);
    }
    {
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_59_59, (MR_Word) &parse_tree__module_qual_scalar_common_2[8], parse_tree__module_qual__ImpSrcItemBlocks0_21, parse_tree__module_qual__STATE_VARIABLE_ImpInfo_50_50, &parse_tree__module_qual__STATE_VARIABLE_ImpInfo_52_52);
    }
    {
      parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0((MR_Integer) 0, parse_tree__module_qual__ImpItems0_19, &parse_tree__module_qual__ImpItems_27, parse_tree__module_qual__STATE_VARIABLE_ImpInfo_52_52, &parse_tree__module_qual__V_28_28, parse_tree__module_qual__STATE_VARIABLE_Specs_46_46, parse_tree__module_qual__STATE_VARIABLE_Specs_30);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__ParseTreeInt_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__IntFileKind_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__MaybeVersionNumbers_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__IntIncls_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__ImpIncls_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__IntAvails_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__ImpAvails_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_qual__IntItems_24));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_qual__ImpItems_27));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
    MR_Word parse_tree__module_qual__conv4_HeadVar__4_4;

    {
      parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2), &parse_tree__module_qual__conv4_HeadVar__4_4);
    }
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv4_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
    MR_Word parse_tree__module_qual__conv3_HeadVar__2_2;
    MR_Word parse_tree__module_qual__conv2_HeadVar__3_3;

    {
      parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv3_HeadVar__2_2, &parse_tree__module_qual__conv2_HeadVar__3_3);
    }
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv3_HeadVar__2_2));
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box parse_tree__module_qual__closure_arg,
  MR_Box parse_tree__module_qual__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
    MR_Word parse_tree__module_qual__conv1_HeadVar__2_2;
    MR_Word parse_tree__module_qual__conv0_HeadVar__3_3;

    {
      parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv1_HeadVar__2_2, &parse_tree__module_qual__conv0_HeadVar__3_3);
    }
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv1_HeadVar__2_2));
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(
  MR_Word parse_tree__module_qual__Globals_14,
  MR_Word parse_tree__module_qual__AugCompUnit0_15,
  MR_Word * parse_tree__module_qual__AugCompUnit_16,
  MR_Word parse_tree__module_qual__EventSpecMap0_17,
  MR_Word * parse_tree__module_qual__EventSpecMap_18,
  MR_String parse_tree__module_qual__EventSpecFileName_19,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_42,
  MR_Word * parse_tree__module_qual__UndefTypes_21,
  MR_Word * parse_tree__module_qual__UndefInsts_22,
  MR_Word * parse_tree__module_qual__UndefModes_23,
  MR_Word * parse_tree__module_qual__UndefTypeClasses_24,
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_43,
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_44)
{
  {
    MR_bool parse_tree__module_qual__succeeded;
    MR_Word parse_tree__module_qual__TypeCtorInfo_63_63;
    MR_Word parse_tree__module_qual__TypeCtorInfo_64_64;
    MR_Word parse_tree__module_qual__TypeCtorInfo_73_73;
    MR_Word parse_tree__module_qual__TypeCtorInfo_74_74;
    MR_Word parse_tree__module_qual__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__ModuleVersionNumbers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__SrcItemBlocks0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__DirectIntItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__IndirectIntItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__OptItemBlocks_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__IntForOptItemBlocks_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__SrcItemBlocks_34;
    MR_Word parse_tree__module_qual__EventSpecList0_35;
    MR_Word parse_tree__module_qual__EventSpecList_36;
    MR_Word parse_tree__module_qual__UnusedImportsMap0_37;
    MR_Word parse_tree__module_qual__ModuleExportsInstances_38;
    MR_Word parse_tree__module_qual__UnusedImportsMap_40;
    MR_Word parse_tree__module_qual__V_45_45;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_47_47;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_49_49;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_51_51;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_52_52;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_53_53;
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_56_56;
    MR_Word parse_tree__module_qual__V_88_88;
    MR_Word parse_tree__module_qual__V_89_89;
    MR_Word parse_tree__module_qual__V_90_90;
    MR_Word parse_tree__module_qual__V_91_91;
    MR_Word parse_tree__module_qual__V_92_92;
    MR_Word parse_tree__module_qual__V_93_93;
    MR_Word parse_tree__module_qual__V_94_94;
    MR_Word parse_tree__module_qual__V_58_58;
    MR_Word parse_tree__module_qual__V_59_59;

    {
      parse_tree__module_qual__V_45_45 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__module_qual_scalar_common_1[0], parse_tree__module_qual__DirectIntItemBlocks_30, parse_tree__module_qual__IndirectIntItemBlocks_31);
    }
    parse_tree__module_qual__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
    parse_tree__module_qual__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0;
    {
      parse_tree__module_qual__init_mq_info_8_p_0(parse_tree__module_qual__TypeCtorInfo_63_63, parse_tree__module_qual__TypeCtorInfo_64_64, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__module_qual__Globals_14, parse_tree__module_qual__ModuleName_26, parse_tree__module_qual__SrcItemBlocks0_29, parse_tree__module_qual__V_45_45, parse_tree__module_qual__OptItemBlocks_32, parse_tree__module_qual__IntForOptItemBlocks_33, (MR_Integer) 1, &parse_tree__module_qual__STATE_VARIABLE_Info_47_47);
    }
    {
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_63_63, (MR_Word) &parse_tree__module_qual_scalar_common_2[5], parse_tree__module_qual__SrcItemBlocks0_29, parse_tree__module_qual__STATE_VARIABLE_Info_47_47, &parse_tree__module_qual__STATE_VARIABLE_Info_49_49);
    }
    {
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_64_64, (MR_Word) &parse_tree__module_qual_scalar_common_2[6], parse_tree__module_qual__DirectIntItemBlocks_30, parse_tree__module_qual__STATE_VARIABLE_Info_49_49, &parse_tree__module_qual__STATE_VARIABLE_Info_51_51);
    }
    {
      parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(parse_tree__module_qual__SrcItemBlocks0_29, &parse_tree__module_qual__SrcItemBlocks_34, parse_tree__module_qual__STATE_VARIABLE_Info_51_51, &parse_tree__module_qual__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__STATE_VARIABLE_Specs_0_43, &parse_tree__module_qual__STATE_VARIABLE_Specs_53_53);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__AugCompUnit_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__ModuleName_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__ModuleNameContext_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__ModuleVersionNumbers_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__SrcItemBlocks_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__DirectIntItemBlocks_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__IndirectIntItemBlocks_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__OptItemBlocks_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__IntForOptItemBlocks_33));
    }
    parse_tree__module_qual__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    parse_tree__module_qual__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0;
    {
      mercury__map__to_assoc_list_2_p_0(parse_tree__module_qual__TypeCtorInfo_73_73, parse_tree__module_qual__TypeCtorInfo_74_74, parse_tree__module_qual__EventSpecMap0_17, &parse_tree__module_qual__EventSpecList0_35);
    }
    {
      parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0((MR_Integer) 0, parse_tree__module_qual__EventSpecFileName_19, parse_tree__module_qual__EventSpecList0_35, &parse_tree__module_qual__EventSpecList_36, parse_tree__module_qual__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__STATE_VARIABLE_Specs_53_53, &parse_tree__module_qual__STATE_VARIABLE_Specs_56_56);
    }
    {
      mercury__map__from_assoc_list_2_p_0(parse_tree__module_qual__TypeCtorInfo_73_73, parse_tree__module_qual__TypeCtorInfo_74_74, parse_tree__module_qual__EventSpecList_36, parse_tree__module_qual__EventSpecMap_18);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefTypes_21);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefInsts_22);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefModes_23);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefTypeClasses_24);
    }
    parse_tree__module_qual__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 0)));
    parse_tree__module_qual__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 1)));
    parse_tree__module_qual__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 2)));
    parse_tree__module_qual__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 3)));
    parse_tree__module_qual__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 4)));
    parse_tree__module_qual__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 5)));
    parse_tree__module_qual__UnusedImportsMap0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 6)));
    parse_tree__module_qual__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 7)));
    {
      parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, &parse_tree__module_qual__ModuleExportsInstances_38);
    }
    switch (parse_tree__module_qual__ModuleExportsInstances_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_qual__UnusedImportsMap_40 = parse_tree__module_qual__UnusedImportsMap0_37;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__TypeCtorInfo_75_75;
          MR_Word parse_tree__module_qual__InstanceImports_39;
          MR_Word parse_tree__module_qual__V_57_57;

          {
            parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, &parse_tree__module_qual__InstanceImports_39);
          }
          parse_tree__module_qual__TypeCtorInfo_75_75 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          {
            parse_tree__module_qual__V_57_57 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_qual__TypeCtorInfo_75_75, parse_tree__module_qual__InstanceImports_39);
          }
          {
            mercury__map__delete_list_3_p_0(parse_tree__module_qual__TypeCtorInfo_75_75, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], parse_tree__module_qual__V_57_57, parse_tree__module_qual__UnusedImportsMap0_37, &parse_tree__module_qual__UnusedImportsMap_40);
          }
        }
        break;
    }
    {
      parse_tree__module_qual__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], parse_tree__module_qual__UnusedImportsMap_40);
    }
    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
    if (parse_tree__module_qual__succeeded)
      {
        parse_tree__module_qual__V_58_58 = (MR_Integer) 11;
        parse_tree__module_qual__V_59_59 = (MR_Integer) 1;
        {
          parse_tree__module_qual__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_qual__Globals_14, parse_tree__module_qual__V_58_58, parse_tree__module_qual__V_59_59);
        }
      }
    if (parse_tree__module_qual__succeeded)
      {
        MR_Word parse_tree__module_qual__UnusedImports_41;
        MR_Word parse_tree__module_qual__V_60_60;
        MR_Box parse_tree__module_qual__conv5_STATE_VARIABLE_Specs_44;

        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], parse_tree__module_qual__UnusedImportsMap_40, &parse_tree__module_qual__UnusedImports_41);
        }
        {
          parse_tree__module_qual__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 0) = ((MR_Box) (&parse_tree__module_qual_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 1) = ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 3) = ((MR_Box) (parse_tree__module_qual__ModuleName_26));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[0], (MR_Word) &parse_tree__module_qual_scalar_common_1[2], parse_tree__module_qual__V_60_60, parse_tree__module_qual__UnusedImports_41, ((MR_Box) (parse_tree__module_qual__STATE_VARIABLE_Specs_56_56)), &parse_tree__module_qual__conv5_STATE_VARIABLE_Specs_44);
        }
        *parse_tree__module_qual__STATE_VARIABLE_Specs_44 = ((MR_Word) parse_tree__module_qual__conv5_STATE_VARIABLE_Specs_44);
      }
    else
      *parse_tree__module_qual__STATE_VARIABLE_Specs_44 = parse_tree__module_qual__STATE_VARIABLE_Specs_56_56;
  }
}

void mercury__parse_tree__module_qual__init(void)
{
}

void mercury__parse_tree__module_qual__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_inst_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_mode_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_type_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_typeclass_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0);
}

void mercury__parse_tree__module_qual__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.module_qual. */
