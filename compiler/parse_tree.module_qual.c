/*
** Automatically generated from `module_qual.m'
** by the Mercury compiler,
** version rotd-2023-10-30
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


// :- module parse_tree.module_qual.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__init
ENDINIT
*/

#include "parse_tree.module_qual.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_inst_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_typeclass_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_should_report_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_suppress_found_undef_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_suppress_found_undef_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_suppress_found_undef_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_warn_unused_imports_in_parents_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_mq_in_interface_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0[2];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0[8];

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0[8];

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0[1];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_ctor_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_mode_ctor_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0[13];

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0[13];

static const MR_DuArgLocn parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0[13];

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0[1];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0[1];

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0[1];

static const MR_NotagFunctorDesc parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0;

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__maybe_report_qual_errors_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
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
parse_tree__module_qual____Unify____maybe_suppress_found_undef_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_suppress_found_undef_0_0_10001(
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


static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[8][2];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[5][3];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_5[1][4];




static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_4[2])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int0_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_5[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0 = {
  (MR_String) "did_not_find_undef_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1 = {
  (MR_String) "found_undef_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_inst_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_inst",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0 = {
  (MR_String) "did_not_find_undef_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1 = {
  (MR_String) "found_undef_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_mode_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_mode",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0 = {
  (MR_String) "did_not_find_undef_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1 = {
  (MR_String) "found_undef_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_type_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_type",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0 = {
  (MR_String) "did_not_find_undef_typeclass",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1 = {
  (MR_String) "found_undef_typeclass",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_typeclass_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_typeclass",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_found_undef_typeclass_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0 = {
  (MR_String) "should_not_report_errors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1 = {
  (MR_String) "should_report_errors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_should_report_errors_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_should_report_errors",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_should_report_errors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_0 = {
  (MR_String) "do_not_suppress_found_undef",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_1 = {
  (MR_String) "suppress_found_undef",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_suppress_found_undef_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_suppress_found_undef_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_suppress_found_undef_0_1
};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_suppress_found_undef_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_suppress_found_undef_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_suppress_found_undef_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_suppress_found_undef_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_suppress_found_undef",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_suppress_found_undef_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_suppress_found_undef_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_suppress_found_undef_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0 = {
  (MR_String) "should_not_warn_unused_imports_in_parents",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1 = {
  (MR_String) "should_warn_unused_imports_in_parents",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_warn_unused_imports_in_parents_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_warn_unused_imports_in_parents",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_maybe_warn_unused_imports_in_parents_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0 = {
  (MR_String) "mq_not_used_in_interface",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1 = {
  (MR_String) "mq_used_in_interface",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_mq_in_interface_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_in_interface_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_in_interface_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_in_interface",
  { parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0 },
  { parse_tree__module_qual__parse_tree__module_qual__enum_ordinal_ordered_mq_in_interface_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recompilation_info_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0)
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
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1] = { &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0 };

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0[1] = { &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0 };

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_info",
  { parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0 },
  { parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_mode_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0[13] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_mode_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_suppress_found_undef_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0[13] = {
  (MR_String) "mqsi_this_module",
  (MR_String) "mqsi_globals",
  (MR_String) "mqsi_imported_modules",
  (MR_String) "mqsi_imported_instance_modules",
  (MR_String) "mqsi_exported_instances_flag",
  (MR_String) "mqsi_undef_types",
  (MR_String) "mqsi_undef_insts",
  (MR_String) "mqsi_undef_modes",
  (MR_String) "mqsi_undef_typeclasses",
  (MR_String) "mqsi_suppress_found_undef",
  (MR_String) "mqsi_should_report_errors",
  (MR_String) "mqsi_warn_parents_imports",
  (MR_String) "mqsi_num_errors"
};

static const MR_DuArgLocn parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0[13] = {
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
    (MR_Integer) 1
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
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0 = {
  (MR_String) "mq_sub_info",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1] = { &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0 };

static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0[1] = { &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0 };

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_sub_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_sub_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_sub_info",
  { parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0 },
  { parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0,

};

static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 = {
  (MR_String) "partial_qualifier_info",
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "partial_qualifier_info",
  { &parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 },
  { &parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0,

};

void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    parse_tree__module_qual____Compare____mq_sub_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_2[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
  MR_bool succeeded;
  MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_42 == CastY_43);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))) & (MR_Integer) 1);
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      libs__globals____Compare____globals_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_57 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_58 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_57 < Var_58);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_57 > Var_58);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[5]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[6]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_1[7]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_59 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_60 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_59 < Var_60);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_59 > Var_60);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_61 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_62 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_61 < Var_62);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_61 > Var_62);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_63 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_64 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_63 < Var_64);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_63 > Var_64);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            succeeded = (ArgX13_40 < ArgY13_41);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX13_40 > ArgY13_41);
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
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_21_21 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
      succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeCtorInfo_25_25 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&parse_tree__module_qual_scalar_common_2[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[2]);
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_38_38;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))) & (MR_Integer) 1);
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = libs__globals____Unify____globals_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_33_33 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_34_34 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeInfo_35_35 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_36_36 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_37_37 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_38_38 = (MR_Word) (&parse_tree__module_qual_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                            succeeded = (ArgX13_27 == ArgY13_28);
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

void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_suppress_found_undef_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_suppress_found_undef_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__mq_info_record_undef_mq_id_4_p_0(
  MR_Word IdType_5,
  MR_Word Id_6,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word SuppressFoundUndef_8;
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 8))));

  SuppressFoundUndef_8 = ((((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 9))) >> 2)) & (MR_Integer) 1);
  switch (SuppressFoundUndef_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, Id_6, (MR_Integer) 0))));
        MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(0, Id_6, (MR_Integer) 1))));

        switch (IdType_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              MR_Word SNA_20;
              MR_Word UndefTypeclasses_22;
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
              MR_Integer Var_90;
              MR_Unsigned packed_word_3;

              {
                SNA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SNA_20, 0) = ((MR_Box) (SymName_9));
                MR_hl_field(0, SNA_20, 1) = ((MR_Box) (Arity_10));
              }
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ((MR_Box) (SNA_20)), Var_45, &UndefTypeclasses_22);
              Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
              Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
              Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
              Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
              Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
              Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
              Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
              Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 7))));
              Var_78 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 0))));
              Var_79 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 1))));
              Var_80 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 2))));
              Var_81 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 3))));
              Var_82 = ((MR_Unsigned) ((MR_hl_field(0, Var_69, (MR_Integer) 4))) & (MR_Integer) 1);
              Var_83 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 5))));
              Var_84 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 6))));
              Var_85 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 7))));
              packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Var_69, (MR_Integer) 9)));
              Var_90 = ((MR_Integer) ((MR_hl_field(0, Var_69, (MR_Integer) 10))));
              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_78));
                MR_hl_field(0, Var_70, 1) = ((MR_Box) (Var_79));
                MR_hl_field(0, Var_70, 2) = ((MR_Box) (Var_80));
                MR_hl_field(0, Var_70, 3) = ((MR_Box) (Var_81));
                MR_hl_field(0, Var_70, 4) = (MR_Box) ((MR_Unsigned) (Var_82));
                MR_hl_field(0, Var_70, 5) = ((MR_Box) (Var_83));
                MR_hl_field(0, Var_70, 6) = ((MR_Box) (Var_84));
                MR_hl_field(0, Var_70, 7) = ((MR_Box) (Var_85));
                MR_hl_field(0, Var_70, 8) = ((MR_Box) (UndefTypeclasses_22));
                MR_hl_field(0, Var_70, 9) = (MR_Box) (packed_word_3);
                MR_hl_field(0, Var_70, 10) = ((MR_Box) (Var_90));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_71));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_73));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_74));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_76));
                MR_hl_field(0, base, 7) = ((MR_Box) (Var_77));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstCtor_14;
              MR_Word UndefInsts0_15;
              MR_Word UndefInsts_16;

              {
                InstCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, InstCtor_14, 0) = ((MR_Box) (SymName_9));
                MR_hl_field(0, InstCtor_14, 1) = ((MR_Box) (Arity_10));
              }
              parse_tree__module_qual__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_0_23, &UndefInsts0_15);
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_14)), UndefInsts0_15, &UndefInsts_16);
              parse_tree__module_qual__mq_info_set_undef_insts_3_p_0(UndefInsts_16, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModeCtor_17;
              MR_Word UndefModes0_18;
              MR_Word UndefModes_19;

              {
                ModeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ModeCtor_17, 0) = ((MR_Box) (SymName_9));
                MR_hl_field(0, ModeCtor_17, 1) = ((MR_Box) (Arity_10));
              }
              parse_tree__module_qual__mq_info_get_undef_modes_2_p_0(STATE_VARIABLE_Info_0_23, &UndefModes0_18);
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), ((MR_Box) (ModeCtor_17)), UndefModes0_18, &UndefModes_19);
              parse_tree__module_qual__mq_info_set_undef_modes_3_p_0(UndefModes_19, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeCtor_11;
              MR_Word UndefTypes0_12;
              MR_Word UndefTypes_13;

              {
                TypeCtor_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeCtor_11, 0) = ((MR_Box) (SymName_9));
                MR_hl_field(0, TypeCtor_11, 1) = ((MR_Box) (Arity_10));
              }
              parse_tree__module_qual__mq_info_get_undef_types_2_p_0(STATE_VARIABLE_Info_0_23, &UndefTypes0_12);
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), UndefTypes0_12, &UndefTypes_13);
              parse_tree__module_qual__mq_info_set_undef_types_3_p_0(UndefTypes_13, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      break;
  }
}

void MR_CALL 
parse_tree__module_qual__get_mq_debug_output_stream_4_p_0(
  MR_Word Info_5,
  MR_Word * DebugStream_6)
{
  MR_Word Globals_8;
  MR_Word ModuleName_9;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 0))));

  ModuleName_9 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
  Globals_8 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
  libs__globals__get_debug_output_stream_5_p_0(Globals_8, ModuleName_9, DebugStream_6);
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_undef_typeclasses_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_undef_modes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_undef_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_undef_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_classes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_modes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 9))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 4))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 3))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_globals_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_this_module_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_classes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 5))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_modes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 4))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_insts_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 3))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 2))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));
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

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (InInt_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word AsYetUnused0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 6))));
          MR_Word STATE_VARIABLE_Info_16_16;
          MR_Word AsYetUnused_10;
          MR_Box conv0_Var_9;

          succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual_scalar_common_1[0]), ((MR_Box) (ModuleName_6)), &conv0_Var_9, AsYetUnused0_8, &AsYetUnused_10);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 1))));
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 4))));
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 5))));
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 7))));

            {
              STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (Var_26));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (Var_27));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (Var_28));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (Var_29));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (Var_30));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (Var_31));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (AsYetUnused_10));
              MR_hl_field(0, STATE_VARIABLE_Info_16_16, 7) = ((MR_Box) (Var_33));
            }
          }
          else
            STATE_VARIABLE_Info_16_16 = STATE_VARIABLE_Info_0_14;
          if (((MR_tag((MR_Word) ModuleName_6)) == (MR_Integer) 1))
          {
            MR_Word ParentModule_11 = ((MR_Word) ((MR_hl_field(1, ModuleName_6, (MR_Integer) 0))));
            MR_Word next_value_of_ModuleName_6 = ParentModule_11;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_14 = STATE_VARIABLE_Info_16_16;

            // direct tailcall eliminated
            ;
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
  MR_Word MaybeRecompInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));

  if ((MaybeRecompInfo0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
  else
  {
    MR_Word RecompInfo0_7 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo0_6, (MR_Integer) 0))));
    MR_Word RecompInfo_8;
    MR_Word Var_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, (MR_Integer) 1))));
    MR_Box conv1_RecompInfo_8;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    func_0(((MR_Box) (Pred_4)), ((MR_Box) (RecompInfo0_7)), &conv1_RecompInfo_8);
    RecompInfo_8 = ((MR_Word) (conv1_RecompInfo_8));
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (RecompInfo_8));
    }
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 3))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_11));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 9)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) (X_4) << 2))));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_suppress_found_undef_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 9))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 7))));
}

void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_4_p_0(
  MR_Word InInt_5,
  MR_Word ModuleName_6,
  MR_Word PartialQualInfo_7,
  MR_Word * PartialQualifiers_8)
{
  MR_Word ModuleIdSet_9 = (MR_Word) (PartialQualInfo_7);

  if (((MR_tag((MR_Word) ModuleName_6)) == (MR_Integer) 1))
  {
    MR_Word Parent_11 = ((MR_Word) ((MR_hl_field(1, ModuleName_6, (MR_Integer) 0))));
    MR_String Child_12 = ((MR_String) ((MR_hl_field(1, ModuleName_6, (MR_Integer) 1))));
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (Child_12));
    }
    parse_tree__module_qual__get_partial_qualifiers_acc_6_p_0(InInt_5, Parent_11, Var_13, ModuleIdSet_9, (MR_Word) ((MR_Unsigned) 0U), PartialQualifiers_8);
  }
  else
    *PartialQualifiers_8 = (MR_Word) ((MR_Unsigned) 0U);
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

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(InInt_7, ImplicitPart_8, ExplicitPart_9, ModuleIdSet_10);
    if (succeeded)
      {
        STATE_VARIABLE_Qualifiers_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Qualifiers_19_19, 0) = ((MR_Box) (ExplicitPart_9));
        MR_hl_field(1, STATE_VARIABLE_Qualifiers_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Qualifiers_0_17));
      }
    else
      STATE_VARIABLE_Qualifiers_19_19 = STATE_VARIABLE_Qualifiers_0_17;
    if (((MR_tag((MR_Word) ImplicitPart_8)) == (MR_Integer) 1))
    {
      MR_String Child_13 = ((MR_String) ((MR_hl_field(1, ImplicitPart_8, (MR_Integer) 1))));
      MR_Word NextImplicitPart_14 = ((MR_Word) ((MR_hl_field(1, ImplicitPart_8, (MR_Integer) 0))));
      MR_Word NextExplicitPart_15;
      MR_Word next_value_of_ImplicitPart_8;
      MR_Word next_value_of_ExplicitPart_9;
      MR_Word next_value_of_STATE_VARIABLE_Qualifiers_0_17;

      NextExplicitPart_15 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0(Child_13, ExplicitPart_9);
      // direct tailcall eliminated
      ;
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
  MR_Word ModuleIdSet_5 = ((MR_Word) ((MR_hl_field(0, MQInfo_3, (MR_Integer) 1))));

  *QualifierInfo_4 = (MR_Word) (ModuleIdSet_5);
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
  MR_Word ErrorContext_15;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_10));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_9, ErrorContext_15, Type0_11, Type_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
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
  MR_Word ErrorContext_15;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_10));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_15, Modes0_11, Modes_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
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
  MR_Word ErrorContext_15;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_10));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_9, ErrorContext_15, Mode0_11, Mode_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word OrigParseTreeInt3_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 0))));
  MR_Word Info0_11;
  MR_Word Info1_12;
  MR_Word _Info_13;

  parse_tree__module_qual__init_mq_info_4_p_0(Globals_6, ModuleName_10, (MR_Integer) 0, &Info0_11);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0((MR_Word) ((MR_Unsigned) 0U), OrigParseTreeInt3_7, Info0_11, &Info1_12);
  parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0(OrigParseTreeInt3_7, ParseTreeInt3_8, Info1_12, &_Info_13, STATE_VARIABLE_Specs_0_14, STATE_VARIABLE_Specs_15);
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int3_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(
  MR_Word Globals_6,
  MR_Word AugMakeIntUnit0_7,
  MR_Word * AugMakeIntUnit_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word ParseTreeModuleSrc0_10 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 0))));
  MR_Word AncestorInt0s_11 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 1))));
  MR_Word DirectInt3Specs_12 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 2))));
  MR_Word IndirectInt3Specs_13 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 3))));
  MR_Word ModuleVersionNumbers_14 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 4))));
  MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_10, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_17;
  MR_Word STATE_VARIABLE_Info_21_21;
  MR_Word STATE_VARIABLE_Info_22_22;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_Info_25_25;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Specs_31_31;
  MR_Box conv1_STATE_VARIABLE_Info_25_25;
  MR_Box conv3_STATE_VARIABLE_Info_29_29;

  parse_tree__module_qual__init_mq_info_4_p_0(Globals_6, ModuleName_16, (MR_Integer) 1, &STATE_VARIABLE_Info_21_21);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc0_10, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_22_22);
  Var_24 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), AncestorInt0s_11);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual_scalar_common_5[0]), Var_24, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv1_STATE_VARIABLE_Info_25_25);
  STATE_VARIABLE_Info_25_25 = ((MR_Word) (conv1_STATE_VARIABLE_Info_25_25));
  Var_28 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), DirectInt3Specs_12);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual_scalar_common_2[4]), Var_28, ((MR_Box) (STATE_VARIABLE_Info_25_25)), &conv3_STATE_VARIABLE_Info_29_29);
  STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_Info_29_29));
  parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0(ParseTreeModuleSrc0_10, &ParseTreeModuleSrc_17, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_31_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *AugMakeIntUnit_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorInt0s_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt3Specs_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt3Specs_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (ModuleVersionNumbers_14));
  }
  parse_tree__module_qual__maybe_report_qual_errors_5_p_0(Globals_6, STATE_VARIABLE_Info_30_30, ModuleName_16, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_19);
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(
  MR_Word Globals_14,
  MR_Word AugCompUnit0_15,
  MR_Word * AugCompUnit_16,
  MR_Word EventSpecMap0_17,
  MR_Word * EventSpecMap_18,
  MR_String EventSpecFileName_19,
  MR_Word * STATE_VARIABLE_Info_39,
  MR_Word * UndefTypes_21,
  MR_Word * UndefInsts_22,
  MR_Word * UndefModes_23,
  MR_Word * UndefTypeClasses_24,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_Word ParseTreeModuleSrc0_26 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_27 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_28 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_29 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 3))));
  MR_Word PlainOptSpecs_30 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 4))));
  MR_Word TransOptSpecs_31 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 5))));
  MR_Word IntForOptSpecs_32 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 6))));
  MR_Word TypeRepnSpecs_33 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 7))));
  MR_Word ModuleVersionNumbers_34 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 8))));
  MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_26, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_36;
  MR_Word EventSpecList0_37;
  MR_Word EventSpecList_38;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_Info_50_50;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Word STATE_VARIABLE_Specs_55_55;
  MR_Box conv1_STATE_VARIABLE_Info_47_47;
  MR_Box conv3_STATE_VARIABLE_Info_50_50;

  parse_tree__module_qual__init_mq_info_4_p_0(Globals_14, ModuleName_35, (MR_Integer) 1, &STATE_VARIABLE_Info_43_43);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc0_26, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_44_44);
  Var_46 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), AncestorIntSpecs_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual_scalar_common_2[2]), Var_46, ((MR_Box) (STATE_VARIABLE_Info_44_44)), &conv1_STATE_VARIABLE_Info_47_47);
  STATE_VARIABLE_Info_47_47 = ((MR_Word) (conv1_STATE_VARIABLE_Info_47_47));
  Var_49 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), DirectInt1Specs_28);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual_scalar_common_2[3]), Var_49, ((MR_Box) (STATE_VARIABLE_Info_47_47)), &conv3_STATE_VARIABLE_Info_50_50);
  STATE_VARIABLE_Info_50_50 = ((MR_Word) (conv3_STATE_VARIABLE_Info_50_50));
  parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0(ParseTreeModuleSrc0_26, &ParseTreeModuleSrc_36, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_52_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *AugCompUnit_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt1Specs_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt2Specs_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (PlainOptSpecs_30));
    MR_hl_field(0, base, 5) = ((MR_Box) (TransOptSpecs_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntForOptSpecs_32));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeRepnSpecs_33));
    MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbers_34));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_17, &EventSpecList0_37);
  parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0((MR_Integer) 0, EventSpecFileName_19, EventSpecList0_37, &EventSpecList_38, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_39, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_55_55);
  mercury__map__from_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_38, EventSpecMap_18);
  parse_tree__module_qual__mq_info_get_undef_types_2_p_0(*STATE_VARIABLE_Info_39, UndefTypes_21);
  parse_tree__module_qual__mq_info_get_undef_insts_2_p_0(*STATE_VARIABLE_Info_39, UndefInsts_22);
  parse_tree__module_qual__mq_info_get_undef_modes_2_p_0(*STATE_VARIABLE_Info_39, UndefModes_23);
  parse_tree__module_qual__mq_info_get_undef_typeclasses_2_p_0(*STATE_VARIABLE_Info_39, UndefTypeClasses_24);
  parse_tree__module_qual__maybe_report_qual_errors_5_p_0(Globals_14, *STATE_VARIABLE_Info_39, ModuleName_35, STATE_VARIABLE_Specs_55_55, STATE_VARIABLE_Specs_41);
}

void MR_CALL 
parse_tree__module_qual__init_mq_info_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6,
  MR_Word ReportErrors_7,
  MR_Word * Info_8)
{
  MR_Word InstanceModules_9;
  MR_Word WarnInterfaceImportsInParents_11;
  MR_Word WarnUnusedImportsInParents_12;
  MR_Word ImportedOrUsedModules_13;
  MR_Word SubInfo_14;
  MR_Word ModuleIdSet_15;
  MR_Word TypeIdSet_16;
  MR_Word InstIdSet_17;
  MR_Word ModeIdSet_18;
  MR_Word ClassIdSet_19;
  MR_Word AsYetUnusedInterfaceModules_20;
  MR_Word SmartRecompilation_21;
  MR_Word MaybeRecompInfo_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  InstanceModules_9 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 16, &WarnInterfaceImportsInParents_11);
  switch (WarnInterfaceImportsInParents_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnUnusedImportsInParents_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnUnusedImportsInParents_12 = (MR_Integer) 1;
      break;
  }
  Var_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  ImportedOrUsedModules_13 = mercury__set_tree234__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_24)));
  Var_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  Var_26 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
  Var_27 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0));
  Var_28 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
  {
    SubInfo_14 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_14, 0) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, SubInfo_14, 1) = ((MR_Box) (Globals_5));
    MR_hl_field(0, SubInfo_14, 2) = ((MR_Box) (ImportedOrUsedModules_13));
    MR_hl_field(0, SubInfo_14, 3) = ((MR_Box) (InstanceModules_9));
    MR_hl_field(0, SubInfo_14, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, SubInfo_14, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, SubInfo_14, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, SubInfo_14, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, SubInfo_14, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, SubInfo_14, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) (ReportErrors_7) << 1)) | (MR_Unsigned) (WarnUnusedImportsInParents_12)))));
    MR_hl_field(0, SubInfo_14, 10) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&ModuleIdSet_15);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&TypeIdSet_16);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&InstIdSet_17);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&ModeIdSet_18);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&ClassIdSet_19);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual_scalar_common_1[0]), &AsYetUnusedInterfaceModules_20);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 154, &SmartRecompilation_21);
  switch (SmartRecompilation_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeRecompInfo_22 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_32;

        Var_32 = recompilation__init_recompilation_info_1_f_0(ModuleName_6);
        {
          MaybeRecompInfo_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeRecompInfo_22, 0) = ((MR_Box) (Var_32));
        }
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SubInfo_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleIdSet_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeIdSet_16));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstIdSet_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (ModeIdSet_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (ClassIdSet_19));
    MR_hl_field(0, base, 6) = ((MR_Box) (AsYetUnusedInterfaceModules_20));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeRecompInfo_22));
  }
}

static void MR_CALL 
parse_tree__module_qual__maybe_report_qual_errors_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__module_qual__maybe_report_qual_errors_5_p_0(
  MR_Word Globals_6,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word UnusedImportsMap0_10 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 6))));
  MR_Word ModuleExportsInstances_11;
  MR_Word UnusedImportsMap_13;
  MR_Word WarnInterfaceImports_14;
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 3))));

  ModuleExportsInstances_11 = ((MR_Unsigned) ((MR_hl_field(0, Var_30, (MR_Integer) 4))) & (MR_Integer) 1);
  switch (ModuleExportsInstances_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnusedImportsMap_13 = UnusedImportsMap0_10;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_18;

        Var_18 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48);
        mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual_scalar_common_1[0]), Var_18, UnusedImportsMap0_10, &UnusedImportsMap_13);
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 15, &WarnInterfaceImports_14);
  switch (WarnInterfaceImports_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedImports_15;
        MR_Word Var_20;
        MR_Box conv1_STATE_VARIABLE_Specs_17;

        mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual_scalar_common_1[0]), UnusedImportsMap_13, &UnusedImports_15);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__module_qual__maybe_report_qual_errors_5_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (ModuleName_8));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual_scalar_common_1[1]), Var_20, UnusedImports_15, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv1_STATE_VARIABLE_Specs_17);
        *STATE_VARIABLE_Specs_17 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_17));
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_undef_typeclasses_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 8))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_undef_modes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_undef_insts_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
parse_tree__module_qual__mq_info_get_undef_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_suppress_found_undef_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_suppress_found_undef_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_suppress_found_undef_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_suppress_found_undef_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____mq_in_interface_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____mq_in_interface_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____mq_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____mq_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____mq_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual____Unify____partial_qualifier_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual____Compare____partial_qualifier_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_suppress_found_undef_0);
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
