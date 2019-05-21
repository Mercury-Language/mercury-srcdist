/*
** Automatically generated from `module_qual.m'
** by the Mercury compiler,
** version rotd-2017-09-08
** configured for x86_64-pc-linux-gnu.
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


// :- module parse_tree.module_qual.
// :- implementation.

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

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[6][3];

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

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[6][3] = {
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
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
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
      MR_Word Var_20;

      parse_tree__module_qual____Compare____mq_sub_info_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, &Var_21, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, &Var_22, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, &Var_24, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0, &Var_25, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[1], &Var_26, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
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

void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_37 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_36 == CastY_37);
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
      MR_Word ArgX4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY10_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Integer ArgX11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgY11_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_26;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_26, ArgX1_4, ArgY1_5);
      succeeded = (Var_26 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_26;
      else
      {
        MR_Word Var_27;

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[4], &Var_27, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_27 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_27;
        else
        {
          MR_Word Var_28;

          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[4], &Var_28, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_28 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_28;
          else
          {
            MR_Word Var_29;
            MR_Integer Var_49 = (MR_Integer) ArgX4_10;
            MR_Integer Var_50 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_29, Var_49, Var_50);
            succeeded = (Var_29 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_29;
            else
            {
              MR_Word Var_30;
              MR_Integer Var_51 = (MR_Integer) ArgX5_12;
              MR_Integer Var_52 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_30, Var_51, Var_52);
              succeeded = (Var_30 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_30;
              else
              {
                MR_Word Var_31;
                MR_Integer Var_53 = (MR_Integer) ArgX6_14;
                MR_Integer Var_54 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, Var_53, Var_54);
                succeeded = (Var_31 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_31;
                else
                {
                  MR_Word Var_32;
                  MR_Integer Var_55 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_56 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_55, Var_56);
                  succeeded = (Var_32 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_32;
                  else
                  {
                    MR_Word Var_33;
                    MR_Integer Var_57 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_58 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_33, Var_57, Var_58);
                    succeeded = (Var_33 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_33;
                    else
                    {
                      MR_Word Var_34;
                      MR_Integer Var_59 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_60 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, Var_59, Var_60);
                      succeeded = (Var_34 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_34;
                      else
                      {
                        MR_Word Var_35;
                        MR_Integer Var_61 = (MR_Integer) ArgX10_22;
                        MR_Integer Var_62 = (MR_Integer) ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, Var_61, Var_62);
                        succeeded = (Var_35 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_35;
                        else
                          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX11_24, ArgY11_25);
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
parse_tree__module_qual____Unify____mq_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeCtorInfo_22_22;
      MR_Word TypeCtorInfo_23_23;
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
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

      succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0;
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_22_22 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0;
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeCtorInfo_23_23 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0;
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeCtorInfo_24_24 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0;
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeCtorInfo_25_25 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0;
                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_26_26 = (MR_Word) &parse_tree__module_qual_scalar_common_2[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_27_27 = (MR_Word) &parse_tree__module_qual_scalar_common_1[3];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_26 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Integer ArgX11_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer ArgY11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_28_28 = (MR_Word) &parse_tree__module_qual_scalar_common_1[4];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_29_29 = (MR_Word) &parse_tree__module_qual_scalar_common_1[4];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                          succeeded = (ArgX11_23 == ArgY11_24);
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
parse_tree__module_qual____Compare____mq_in_interface_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(
  MR_Word IdType_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  switch (IdType_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
        MR_Word Var_18;
        MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
        MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
        MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
        MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
        MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
        MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
        MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
        MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2)));
        MR_Word Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)));
        MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) ((Var_29 | ((((Var_30 << (MR_Integer) 1)) | ((((Var_31 << (MR_Integer) 2)) | ((((Var_32 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((Var_34 << (MR_Integer) 5)) | ((Var_35 << (MR_Integer) 6)))))))))))))));
          MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
        MR_Word Var_51;
        MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
        MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
        MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
        MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
        MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
        MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0)));
        MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1)));
        MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 2)));
        MR_Word Var_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Integer Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 4)));
        MR_Word Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) ((Var_62 | ((((Var_63 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((Var_65 << (MR_Integer) 3)) | ((((Var_66 << (MR_Integer) 4)) | ((((Var_67 << (MR_Integer) 5)) | ((Var_68 << (MR_Integer) 6)))))))))))))));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (Var_69));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_58));
        }
      }
      break;
    case (MR_Integer) 1:
      parse_tree__module_qual__mq_info_set_found_undef_mode_2_p_0(STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
      break;
    case (MR_Integer) 0:
      parse_tree__module_qual__mq_info_set_found_undef_type_2_p_0(STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
      break;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_typeclass_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) ((Var_20 | ((((Var_21 << (MR_Integer) 1)) | ((((Var_22 << (MR_Integer) 2)) | ((((Var_23 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((Var_25 << (MR_Integer) 5)) | ((Var_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_mode_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) ((Var_20 | ((((Var_21 << (MR_Integer) 1)) | ((((Var_22 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((Var_24 << (MR_Integer) 4)) | ((((Var_25 << (MR_Integer) 5)) | ((Var_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) ((Var_20 | ((((Var_21 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((Var_23 << (MR_Integer) 3)) | ((((Var_24 << (MR_Integer) 4)) | ((((Var_25 << (MR_Integer) 5)) | ((Var_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_type_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) ((Var_20 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((Var_22 << (MR_Integer) 2)) | ((((Var_23 << (MR_Integer) 3)) | ((((Var_24 << (MR_Integer) 4)) | ((((Var_25 << (MR_Integer) 5)) | ((Var_26 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) & (MR_Integer) 1);

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) ((X_4 | ((((Var_22 << (MR_Integer) 1)) | ((((Var_23 << (MR_Integer) 2)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 4)) | ((((Var_26 << (MR_Integer) 5)) | ((Var_27 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) ((Var_21 | ((((Var_22 << (MR_Integer) 1)) | ((((Var_23 << (MR_Integer) 2)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 4)) | ((((Var_26 << (MR_Integer) 5)) | ((Var_27 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) ((Var_21 | ((((Var_22 << (MR_Integer) 1)) | ((((Var_23 << (MR_Integer) 2)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 4)) | ((((Var_26 << (MR_Integer) 5)) | ((Var_27 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_classes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_modes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Integer Var_22;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_this_module_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_classes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_modes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_insts_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_module_used_4_p_0(
  MR_Word InInt_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    switch (InInt_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word AsYetUnused0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
          MR_Word STATE_VARIABLE_Info_16_16;
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
          MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
          MR_Word AsYetUnused_10;
          MR_Word Var_9;
          MR_Box conv0_Var_9;

          succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], ((MR_Box) (ModuleName_6)), &conv0_Var_9, AsYetUnused0_8, &AsYetUnused_10);
          if (succeeded)
          {
            Var_9 = ((MR_Word) conv0_Var_9);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));

            {
              STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (AsYetUnused_10));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 7) = ((MR_Box) (Var_41));
            }
          }
          else
            STATE_VARIABLE_Info_16_16 = STATE_VARIABLE_Info_0_14;
          if (((MR_tag((MR_Word) ModuleName_6)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ParentModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModuleName_6, (MR_Integer) 0)));
            MR_String Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ModuleName_6, (MR_Integer) 1)));
            MR_Word next_value_of_ModuleName_6 = ParentModule_11;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_14 = STATE_VARIABLE_Info_16_16;

            // direct tailcall eliminated
            ModuleName_6 = next_value_of_ModuleName_6;
            STATE_VARIABLE_Info_0_14 = next_value_of_STATE_VARIABLE_Info_0_14;
            continue;
          }
          else
            *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_16_16;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__update_recompilation_info_3_p_0(
  MR_Word Pred_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word MaybeRecompInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));

    if ((MaybeRecompInfo0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    else
    {
      MR_Word RecompInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRecompInfo0_6, (MR_Integer) 0)));
      MR_Word RecompInfo_8;
      MR_Word Var_11;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_4, (MR_Integer) 1)));
      MR_Box conv1_RecompInfo_8;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;

      func_0(((MR_Box) Pred_4), ((MR_Box) (RecompInfo0_7)), &conv1_RecompInfo_8);
      RecompInfo_8 = ((MR_Word) conv1_RecompInfo_8);
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (RecompInfo_8));
      }
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_4_p_0(
  MR_Word InInt_5,
  MR_Word ModuleName_6,
  MR_Word PartialQualInfo_7,
  MR_Word * PartialQualifiers_8)
{
  {
    MR_Word ModuleIdSet_9 = (MR_Word) PartialQualInfo_7;

    if (((MR_tag((MR_Word) ModuleName_6)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Parent_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModuleName_6, (MR_Integer) 0)));
      MR_String Child_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ModuleName_6, (MR_Integer) 1)));
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Child_12));
      }
      parse_tree__module_qual__get_partial_qualifiers_acc_6_p_0(InInt_5, Parent_11, Var_13, ModuleIdSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), PartialQualifiers_8);
    }
    else
      *PartialQualifiers_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_acc_6_p_0(
  MR_Word InInt_7,
  MR_Word ImplicitPart_8,
  MR_Word ExplicitPart_9,
  MR_Word ModuleIdSet_10,
  MR_Word STATE_VARIABLE_Qualifiers_0_17,
  MR_Word * STATE_VARIABLE_Qualifiers_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Qualifiers_19_19;

    // setup for tailcalls optimized into a loop
    succeeded = parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(InInt_7, ImplicitPart_8, ExplicitPart_9, ModuleIdSet_10);
    if (succeeded)
      {
        STATE_VARIABLE_Qualifiers_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Qualifiers_19_19, 0) = ((MR_Box) (ExplicitPart_9));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Qualifiers_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Qualifiers_0_17));
      }
    else
      STATE_VARIABLE_Qualifiers_19_19 = STATE_VARIABLE_Qualifiers_0_17;
    if (((MR_tag((MR_Word) ImplicitPart_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Child_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ImplicitPart_8, (MR_Integer) 1)));
      MR_Word NextImplicitPart_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ImplicitPart_8, (MR_Integer) 0)));
      MR_Word NextExplicitPart_15;
      MR_Word next_value_of_ImplicitPart_8;
      MR_Word next_value_of_ExplicitPart_9;
      MR_Word next_value_of_STATE_VARIABLE_Qualifiers_0_17;

      NextExplicitPart_15 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0(Child_13, ExplicitPart_9);
      // direct tailcall eliminated
      next_value_of_ImplicitPart_8 = NextImplicitPart_14;
      next_value_of_ExplicitPart_9 = NextExplicitPart_15;
      next_value_of_STATE_VARIABLE_Qualifiers_0_17 = STATE_VARIABLE_Qualifiers_19_19;
      ImplicitPart_8 = next_value_of_ImplicitPart_8;
      ExplicitPart_9 = next_value_of_ExplicitPart_9;
      STATE_VARIABLE_Qualifiers_0_17 = next_value_of_STATE_VARIABLE_Qualifiers_0_17;
      continue;
    }
    else
      *STATE_VARIABLE_Qualifiers_18 = STATE_VARIABLE_Qualifiers_19_19;
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(
  MR_Word MQInfo_3,
  MR_Word * QualifierInfo_4)
{
  {
    MR_Word ModuleIdSet_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 2)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 4)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 5)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 6)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), MQInfo_3, (MR_Integer) 7)));

    *QualifierInfo_4 = (MR_Word) ModuleIdSet_5;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (X_4));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_type_qualification_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Type0_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word ErrorContext_15;

    {
      ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ErrorContext_15, 1) = ((MR_Box) (Context_10));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_9, ErrorContext_15, Type0_11, Type_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_clause_mode_list_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Modes0_11,
  MR_Word * Modes_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word ErrorContext_15;

    {
      ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ErrorContext_15, 1) = ((MR_Box) (Context_10));
    }
    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_15, Modes0_11, Modes_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_lambda_mode_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Mode0_11,
  MR_Word * Mode_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word ErrorContext_15;

    {
      ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ErrorContext_15, 1) = ((MR_Box) (Context_10));
    }
    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_9, ErrorContext_15, Mode0_11, Mode_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) wrapper_arg_1), &conv3_HeadVar__2_2, &conv2_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(
  MR_Word Globals_6,
  MR_Word ParseTreeInt0_7,
  MR_Word * ParseTreeInt_8,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word TypeCtorInfo_55_55;
    MR_Word TypeCtorInfo_59_59;
    MR_Word ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 0)));
    MR_Word IntFileKind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 1)));
    MR_Word ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 2)));
    MR_Word MaybeVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 3)));
    MR_Word IntIncls_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 4)));
    MR_Word ImpIncls_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 5)));
    MR_Word IntAvails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 6)));
    MR_Word ImpAvails_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 7)));
    MR_Word IntItems0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 8)));
    MR_Word ImpItems0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt0_7, (MR_Integer) 9)));
    MR_Word IntSrcItemBlocks0_20;
    MR_Word ImpSrcItemBlocks0_21;
    MR_Word DummyItemBlocks_22;
    MR_Word IntItems_24;
    MR_Word ImpItems_27;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_IntInfo_42_42;
    MR_Word STATE_VARIABLE_IntInfo_44_44;
    MR_Word STATE_VARIABLE_Specs_46_46;
    MR_Word STATE_VARIABLE_ImpInfo_50_50;
    MR_Word STATE_VARIABLE_ImpInfo_52_52;
    MR_Word Var_25;
    MR_Word Var_28;

    Var_33 = mercury__term__context_init_0_f_0();
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (IntIncls_14));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (IntAvails_16));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (IntItems0_18));
    }
    {
      IntSrcItemBlocks0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IntSrcItemBlocks0_20, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), IntSrcItemBlocks0_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_37 = mercury__term__context_init_0_f_0();
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (ImpIncls_15));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ImpAvails_17));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (ImpItems0_19));
    }
    {
      ImpSrcItemBlocks0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpSrcItemBlocks0_21, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), ImpSrcItemBlocks0_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    DummyItemBlocks_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
    parse_tree__module_qual__init_mq_info_8_p_0(TypeCtorInfo_55_55, TypeCtorInfo_55_55, TypeCtorInfo_55_55, TypeCtorInfo_55_55, Globals_6, ModuleName_10, IntSrcItemBlocks0_20, DummyItemBlocks_22, DummyItemBlocks_22, DummyItemBlocks_22, (MR_Integer) 0, &STATE_VARIABLE_IntInfo_42_42);
    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(TypeCtorInfo_55_55, (MR_Word) &parse_tree__module_qual_scalar_common_2[4], IntSrcItemBlocks0_20, STATE_VARIABLE_IntInfo_42_42, &STATE_VARIABLE_IntInfo_44_44);
    parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0((MR_Integer) 1, IntItems0_18, &IntItems_24, STATE_VARIABLE_IntInfo_44_44, &Var_25, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_46_46);
    TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
    parse_tree__module_qual__init_mq_info_8_p_0(TypeCtorInfo_59_59, TypeCtorInfo_59_59, TypeCtorInfo_59_59, TypeCtorInfo_59_59, Globals_6, ModuleName_10, ImpSrcItemBlocks0_21, DummyItemBlocks_22, DummyItemBlocks_22, DummyItemBlocks_22, (MR_Integer) 0, &STATE_VARIABLE_ImpInfo_50_50);
    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(TypeCtorInfo_59_59, (MR_Word) &parse_tree__module_qual_scalar_common_2[5], ImpSrcItemBlocks0_21, STATE_VARIABLE_ImpInfo_50_50, &STATE_VARIABLE_ImpInfo_52_52);
    parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0((MR_Integer) 0, ImpItems0_19, &ImpItems_27, STATE_VARIABLE_ImpInfo_52_52, &Var_28, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IntFileKind_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_24));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_27));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(((MR_Word) wrapper_arg_1), &conv3_HeadVar__2_2, &conv2_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(
  MR_Word Globals_14,
  MR_Word AugCompUnit0_15,
  MR_Word * AugCompUnit_16,
  MR_Word EventSpecMap0_17,
  MR_Word * EventSpecMap_18,
  MR_String EventSpecFileName_19,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word * UndefTypes_21,
  MR_Word * UndefInsts_22,
  MR_Word * UndefModes_23,
  MR_Word * UndefTypeClasses_24,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_63_63;
    MR_Word TypeCtorInfo_64_64;
    MR_Word TypeCtorInfo_73_73;
    MR_Word TypeCtorInfo_74_74;
    MR_Word ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 0)));
    MR_Word ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 1)));
    MR_Word ModuleVersionNumbers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 2)));
    MR_Word SrcItemBlocks0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 3)));
    MR_Word DirectIntItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 4)));
    MR_Word IndirectIntItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 5)));
    MR_Word OptItemBlocks_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 6)));
    MR_Word IntForOptItemBlocks_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit0_15, (MR_Integer) 7)));
    MR_Word SrcItemBlocks_34;
    MR_Word EventSpecList0_35;
    MR_Word EventSpecList_36;
    MR_Word UnusedImportsMap0_37;
    MR_Word ModuleExportsInstances_38;
    MR_Word UnusedImportsMap_40;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word STATE_VARIABLE_Info_52_52;
    MR_Word STATE_VARIABLE_Specs_53_53;
    MR_Word STATE_VARIABLE_Specs_56_56;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_58;
    MR_Word Var_59;

    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__module_qual_scalar_common_1[0], DirectIntItemBlocks_30, IndirectIntItemBlocks_31);
    TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
    TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0;
    parse_tree__module_qual__init_mq_info_8_p_0(TypeCtorInfo_63_63, TypeCtorInfo_64_64, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, Globals_14, ModuleName_26, SrcItemBlocks0_29, Var_45, OptItemBlocks_32, IntForOptItemBlocks_33, (MR_Integer) 1, &STATE_VARIABLE_Info_47_47);
    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(TypeCtorInfo_63_63, (MR_Word) &parse_tree__module_qual_scalar_common_2[2], SrcItemBlocks0_29, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(TypeCtorInfo_64_64, (MR_Word) &parse_tree__module_qual_scalar_common_2[3], DirectIntItemBlocks_30, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
    parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(SrcItemBlocks0_29, &SrcItemBlocks_34, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_53_53);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *AugCompUnit_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleVersionNumbers_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SrcItemBlocks_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DirectIntItemBlocks_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IndirectIntItemBlocks_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (OptItemBlocks_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntForOptItemBlocks_33));
    }
    TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0;
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_73_73, TypeCtorInfo_74_74, EventSpecMap0_17, &EventSpecList0_35);
    parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0((MR_Integer) 0, EventSpecFileName_19, EventSpecList0_35, &EventSpecList_36, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_42, STATE_VARIABLE_Specs_53_53, &STATE_VARIABLE_Specs_56_56);
    mercury__map__from_assoc_list_2_p_0(TypeCtorInfo_73_73, TypeCtorInfo_74_74, EventSpecList_36, EventSpecMap_18);
    parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(*STATE_VARIABLE_Info_42, UndefTypes_21);
    parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(*STATE_VARIABLE_Info_42, UndefInsts_22);
    parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(*STATE_VARIABLE_Info_42, UndefModes_23);
    parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(*STATE_VARIABLE_Info_42, UndefTypeClasses_24);
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 0)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 1)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 2)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 3)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 4)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 5)));
    UnusedImportsMap0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 6)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_42, (MR_Integer) 7)));
    parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(*STATE_VARIABLE_Info_42, &ModuleExportsInstances_38);
    switch (ModuleExportsInstances_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnusedImportsMap_40 = UnusedImportsMap0_37;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_75_75;
          MR_Word InstanceImports_39;
          MR_Word Var_57;

          parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(*STATE_VARIABLE_Info_42, &InstanceImports_39);
          TypeCtorInfo_75_75 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          Var_57 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_75_75, InstanceImports_39);
          mercury__map__delete_list_3_p_0(TypeCtorInfo_75_75, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], Var_57, UnusedImportsMap0_37, &UnusedImportsMap_40);
        }
        break;
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], UnusedImportsMap_40);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_58 = (MR_Integer) 12;
      Var_59 = (MR_Integer) 1;
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_14, Var_58, Var_59);
    }
    if (succeeded)
    {
      MR_Word UnusedImports_41;
      MR_Word Var_60;
      MR_Box conv5_STATE_VARIABLE_Specs_44;

      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], UnusedImportsMap_40, &UnusedImports_41);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__module_qual_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleName_26));
      }
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[0], (MR_Word) &parse_tree__module_qual_scalar_common_1[2], Var_60, UnusedImports_41, ((MR_Box) (STATE_VARIABLE_Specs_56_56)), &conv5_STATE_VARIABLE_Specs_44);
      *STATE_VARIABLE_Specs_44 = ((MR_Word) conv5_STATE_VARIABLE_Specs_44);
    }
    else
      *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_56_56;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__init_mq_info_8_p_0(
  MR_Word TypeInfo_for_MS1_56,
  MR_Word TypeInfo_for_MS2_57,
  MR_Word TypeInfo_for_MS3_58,
  MR_Word TypeInfo_for_MS4_59,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word ItemBlocksA_11,
  MR_Word ItemBlocksB_12,
  MR_Word ItemBlocksC_13,
  MR_Word ItemBlocksD_14,
  MR_Word ReportErrors_15,
  MR_Word * Info_16)
{
  {
    MR_Word TypeCtorInfo_60_60;
    MR_Word ImportDepsA_17;
    MR_Word UseDepsA_18;
    MR_Word ImportDepsB_19;
    MR_Word UseDepsB_20;
    MR_Word ImportDepsC_21;
    MR_Word UseDepsC_22;
    MR_Word ImportDepsD_23;
    MR_Word UseDepsD_24;
    MR_Word ImportedModules_25;
    MR_Word InstanceModules_26;
    MR_Word WarnInterfaceImportsInParents_28;
    MR_Word WarnUnusedImportsInParents_29;
    MR_Word SubInfo_30;
    MR_Word ModuleIdSet_31;
    MR_Word TypeIdSet_32;
    MR_Word InstIdSet_33;
    MR_Word ModeIdSet_34;
    MR_Word ClassIdSet_35;
    MR_Word AsYetUnusedInterfaceModules_36;
    MR_Word SmartRecompilation_37;
    MR_Word MaybeRecompInfo_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;

    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeInfo_for_MS1_56, Globals_9, ItemBlocksA_11, &ImportDepsA_17, &UseDepsA_18);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeInfo_for_MS2_57, Globals_9, ItemBlocksB_12, &ImportDepsB_19, &UseDepsB_20);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeInfo_for_MS3_58, Globals_9, ItemBlocksC_13, &ImportDepsC_21, &UseDepsC_22);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeInfo_for_MS4_59, Globals_9, ItemBlocksD_14, &ImportDepsD_23, &UseDepsD_24);
    TypeCtorInfo_60_60 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (UseDepsD_24));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (UseDepsC_22));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (UseDepsB_20));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (UseDepsA_18));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ImportDepsD_23));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ImportDepsC_21));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ImportDepsB_19));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ImportDepsA_17));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    ImportedModules_25 = mercury__set__union_list_1_f_0(TypeCtorInfo_60_60, Var_39);
    mercury__set__init_1_p_0(TypeCtorInfo_60_60, &InstanceModules_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 13, &WarnInterfaceImportsInParents_28);
    switch (WarnInterfaceImportsInParents_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WarnUnusedImportsInParents_29 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        WarnUnusedImportsInParents_29 = (MR_Integer) 1;
        break;
    }
    {
      SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_30, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), SubInfo_30, 1) = ((MR_Box) (ImportedModules_25));
      MR_hl_field(MR_mktag(0), SubInfo_30, 2) = ((MR_Box) (InstanceModules_26));
      MR_hl_field(MR_mktag(0), SubInfo_30, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | ((((ReportErrors_15 << (MR_Integer) 5)) | ((WarnUnusedImportsInParents_29 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), SubInfo_30, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__module_qual__id_set__id_set_init_1_p_0(&ModuleIdSet_31);
    parse_tree__module_qual__id_set__id_set_init_1_p_0(&TypeIdSet_32);
    parse_tree__module_qual__id_set__id_set_init_1_p_0(&InstIdSet_33);
    parse_tree__module_qual__id_set__id_set_init_1_p_0(&ModeIdSet_34);
    parse_tree__module_qual__id_set__id_set_init_1_p_0(&ClassIdSet_35);
    mercury__map__init_1_p_0(TypeCtorInfo_60_60, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], &AsYetUnusedInterfaceModules_36);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 126, &SmartRecompilation_37);
    switch (SmartRecompilation_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeRecompInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_55;

          Var_55 = recompilation__init_recompilation_info_1_f_0(ModuleName_10);
          {
            MaybeRecompInfo_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeRecompInfo_38, 0) = ((MR_Box) (Var_55));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *Info_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubInfo_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleIdSet_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeIdSet_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InstIdSet_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModeIdSet_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClassIdSet_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (AsYetUnusedInterfaceModules_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeRecompInfo_38));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) & (MR_Integer) 1);
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____mq_in_interface_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____mq_in_interface_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____mq_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____mq_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____mq_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual____Unify____partial_qualifier_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual____Compare____partial_qualifier_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.module_qual.
