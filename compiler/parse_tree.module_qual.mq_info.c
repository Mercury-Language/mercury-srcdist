/*
** Automatically generated from `module_qual.mq_info.m'
** by the Mercury compiler,
** version rotd-2026-08-13
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


// :- module parse_tree.module_qual.mq_info.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__mq_info__init
ENDINIT
*/

#include "parse_tree.module_qual.mq_info.mih"


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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_ordinal_ordered_is_undef_blocking_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_name_ordered_is_undef_blocking_0[2];

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_is_undef_blocking_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_ordinal_ordered_maybe_should_report_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_name_ordered_maybe_should_report_errors_0[2];

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_maybe_should_report_errors_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__maybe__ti_maybe_1recompilation__record_uses__type_ctor_info_recompilation_info_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_types_mq_info_0_0[8];

static const MR_ConstString parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_names_mq_info_0_0[8];

static const MR_DuFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_stag_ordered_mq_info_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_ptag_ordered_mq_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_name_ordered_mq_info_0[1];

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_mq_info_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_types_mq_sub_info_0_0[12];

static const MR_ConstString parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_names_mq_sub_info_0_0[12];

static const MR_DuArgLocn parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_locns_mq_sub_info_0_0[12];

static const MR_DuFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_sub_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_stag_ordered_mq_sub_info_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_ptag_ordered_mq_sub_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_name_ordered_mq_sub_info_0[1];

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_mq_sub_info_0[1];

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_partial_qualifier_info_0[1];

static const MR_NotagFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__notag_functor_desc_partial_qualifier_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____mq_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__mq_info__get_partial_qualifiers_acc_6_p_0(
  MR_Word InInt_7,
  MR_Word ModuleIdSet_8,
  MR_Word ImplicitPart_9,
  MR_Word ExplicitPart_10,
  MR_Word STATE_VARIABLE_Qualifiers_0_17,
  MR_Word * STATE_VARIABLE_Qualifiers_18);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____is_undef_blocking_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____is_undef_blocking_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____mq_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____mq_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____partial_qualifier_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____undef_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____undef_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__module_qual__mq_info_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__module_qual__mq_info_scalar_common_2[5][3];




static /* final */ const MR_Box parse_tree__module_qual__mq_info_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__mq_info_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info_scalar_common_1[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info_scalar_common_1[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info_scalar_common_1[3]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_0 = {
  (MR_String) "undef_is_blocking",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_1 = {
  (MR_String) "undef_is_not_blocking",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_ordinal_ordered_is_undef_blocking_0[2] = {
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_0,
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_name_ordered_is_undef_blocking_0[2] = {
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_0,
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_is_undef_blocking_0_1
};

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_is_undef_blocking_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_is_undef_blocking_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__mq_info____Unify____is_undef_blocking_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__mq_info____Compare____is_undef_blocking_0_0_10001)),
  (MR_String) "parse_tree.module_qual.mq_info",
  (MR_String) "is_undef_blocking",
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_name_ordered_is_undef_blocking_0 },
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_ordinal_ordered_is_undef_blocking_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_is_undef_blocking_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_0 = {
  (MR_String) "should_not_report_errors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_1 = {
  (MR_String) "should_report_errors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_ordinal_ordered_maybe_should_report_errors_0[2] = {
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_0,
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_name_ordered_maybe_should_report_errors_0[2] = {
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_0,
  &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_functor_desc_maybe_should_report_errors_0_1
};

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_maybe_should_report_errors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_maybe_should_report_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__mq_info____Unify____maybe_should_report_errors_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__mq_info____Compare____maybe_should_report_errors_0_0_10001)),
  (MR_String) "parse_tree.module_qual.mq_info",
  (MR_String) "maybe_should_report_errors",
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_name_ordered_maybe_should_report_errors_0 },
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__enum_ordinal_ordered_maybe_should_report_errors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_maybe_should_report_errors_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__maybe__ti_maybe_1recompilation__record_uses__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_types_mq_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_sub_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__maybe__ti_maybe_1recompilation__record_uses__type_ctor_info_recompilation_info_0)
};

static const MR_ConstString parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_names_mq_info_0_0[8] = {
  (MR_String) "mqi_sub_info",
  (MR_String) "mqi_modules",
  (MR_String) "mqi_types",
  (MR_String) "mqi_insts",
  (MR_String) "mqi_modes",
  (MR_String) "mqi_classes",
  (MR_String) "mqi_as_yet_unused_interface_modules",
  (MR_String) "mqi_maybe_recompilation_info"
};

static const MR_DuFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_info_0_0 = {
  (MR_String) "mq_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_types_mq_info_0_0,
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_names_mq_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_stag_ordered_mq_info_0_0[1] = { &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_info_0_0 };

static const MR_DuPtagLayout parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_ptag_ordered_mq_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_stag_ordered_mq_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_name_ordered_mq_info_0[1] = { &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_info_0_0 };

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_mq_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__mq_info____Unify____mq_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__mq_info____Compare____mq_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual.mq_info",
  (MR_String) "mq_info",
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_name_ordered_mq_info_0 },
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_ptag_ordered_mq_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_mq_info_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_TypeInfo) (&parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__mq_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_types_mq_sub_info_0_0[12] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_is_undef_blocking_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_maybe_should_report_errors_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_names_mq_sub_info_0_0[12] = {
  (MR_String) "mqsi_this_module",
  (MR_String) "mqsi_imported_modules",
  (MR_String) "mqsi_imported_instance_modules",
  (MR_String) "mqsi_exported_instances_flag",
  (MR_String) "mqsi_undef_types",
  (MR_String) "mqsi_undef_insts",
  (MR_String) "mqsi_undef_modes",
  (MR_String) "mqsi_undef_typeclasses",
  (MR_String) "mqsi_is_undef_blocking",
  (MR_String) "mqsi_nonblocking_undef_specs",
  (MR_String) "mqsi_should_report_errors",
  (MR_String) "mqsi_num_errors"
};

static const MR_DuArgLocn parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_locns_mq_sub_info_0_0[12] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_sub_info_0_0 = {
  (MR_String) "mq_sub_info",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_types_mq_sub_info_0_0,
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_names_mq_sub_info_0_0,
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__field_locns_mq_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_stag_ordered_mq_sub_info_0_0[1] = { &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_sub_info_0_0 };

static const MR_DuPtagLayout parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_ptag_ordered_mq_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_stag_ordered_mq_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_name_ordered_mq_sub_info_0[1] = { &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_functor_desc_mq_sub_info_0_0 };

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_mq_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__mq_info____Unify____mq_sub_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__mq_info____Compare____mq_sub_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual.mq_info",
  (MR_String) "mq_sub_info",
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_name_ordered_mq_sub_info_0 },
  { parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__du_ptag_ordered_mq_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_mq_sub_info_0,

};

static const MR_Integer parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_partial_qualifier_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__notag_functor_desc_partial_qualifier_info_0 = {
  (MR_String) "partial_qualifier_info",
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_partial_qualifier_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__module_qual__mq_info____Unify____partial_qualifier_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__mq_info____Compare____partial_qualifier_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual.mq_info",
  (MR_String) "partial_qualifier_info",
  { &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__notag_functor_desc_partial_qualifier_info_0 },
  { &parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__notag_functor_desc_partial_qualifier_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__functor_number_map_partial_qualifier_info_0,

};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__mq_info__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_undef_specs_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__module_qual__mq_info____Unify____undef_specs_1_0_10001)),
  ((MR_Box) (parse_tree__module_qual__mq_info____Compare____undef_specs_1_0_10001)),
  (MR_String) "parse_tree.module_qual.mq_info",
  (MR_String) "undef_specs",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__module_qual__mq_info____Compare____undef_specs_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_6, (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[3]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____undef_specs_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_5, (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[3]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__mq_info____Compare____partial_qualifier_info_0_0(
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
parse_tree__module_qual__mq_info____Unify____partial_qualifier_info_0_0(
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

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____mq_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 8))) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 10))) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 10))) & (MR_Integer) 1);
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_53 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_54 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_53 < Var_54);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_53 > Var_54);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[4]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_55 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_56 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_55 < Var_56);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_55 > Var_56);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[4]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_57 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_58 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_57 < Var_58);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_57 > Var_58);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          succeeded = (ArgX12_37 < ArgY12_38);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX12_37 > ArgY12_38);
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

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 8))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 10))) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 10))) & (MR_Integer) 1);
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 11))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_30_30 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_31_31 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_32_32 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      TypeInfo_36_36 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                          succeeded = (ArgX12_25 == ArgY12_26);
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
parse_tree__module_qual__mq_info____Compare____mq_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;
    MR_Integer CastX_72 = (MR_Integer) (ArgX1_4);
    MR_Integer CastY_73 = (MR_Integer) (ArgY1_5);

    succeeded = (CastX_72 == CastY_73);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 0))));
      MR_Word ArgY1_38 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 0))));
      MR_Word ArgX2_40 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 1))));
      MR_Word ArgY2_41 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 1))));
      MR_Word ArgX3_43 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 2))));
      MR_Word ArgY3_44 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 2))));
      MR_Word ArgX4_46 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_4, 3))) & (MR_Integer) 1);
      MR_Word ArgY4_47 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_5, 3))) & (MR_Integer) 1);
      MR_Word ArgX5_49 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 4))));
      MR_Word ArgY5_50 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 4))));
      MR_Word ArgX6_52 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 5))));
      MR_Word ArgY6_53 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 5))));
      MR_Word ArgX7_55 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 6))));
      MR_Word ArgY7_56 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 6))));
      MR_Word ArgX8_58 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 7))));
      MR_Word ArgY8_59 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 7))));
      MR_Word ArgX9_61 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_4, 8))) & (MR_Integer) 1);
      MR_Word ArgY9_62 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_5, 8))) & (MR_Integer) 1);
      MR_Word ArgX10_64 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 9))));
      MR_Word ArgY10_65 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 9))));
      MR_Word ArgX11_67 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_4, 10))) & (MR_Integer) 1);
      MR_Word ArgY11_68 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_5, 10))) & (MR_Integer) 1);
      MR_Integer ArgX12_70 = ((MR_Integer) ((MR_hl_field(0, ArgX1_4, 11))));
      MR_Integer ArgY12_71 = ((MR_Integer) ((MR_hl_field(0, ArgY1_5, 11))));
      MR_Word SubResult1_39;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_39, ArgX1_37, ArgY1_38);
      succeeded = (SubResult1_39 != (MR_Integer) 0);
      if (succeeded)
      {
        SubResult1_6 = SubResult1_39;
        succeeded = (SubResult1_6 != (MR_Integer) 0);
      }
      else
      {
        MR_Word SubResult2_42;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]), &SubResult2_42, ((MR_Box) (ArgX2_40)), ((MR_Box) (ArgY2_41)));
        succeeded = (SubResult2_42 != (MR_Integer) 0);
        if (succeeded)
        {
          SubResult1_6 = SubResult2_42;
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
        else
        {
          MR_Word SubResult3_45;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]), &SubResult3_45, ((MR_Box) (ArgX3_43)), ((MR_Box) (ArgY3_44)));
          succeeded = (SubResult3_45 != (MR_Integer) 0);
          if (succeeded)
          {
            SubResult1_6 = SubResult3_45;
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
          else
          {
            MR_Word SubResult4_48;
            MR_Integer Var_86 = (MR_Integer) (ArgX4_46);
            MR_Integer Var_87 = (MR_Integer) (ArgY4_47);

            succeeded = (Var_86 < Var_87);
            if (succeeded)
            {
              SubResult4_48 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_86 > Var_87);
              if (succeeded)
              {
                SubResult4_48 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              SubResult1_6 = SubResult4_48;
              succeeded = (SubResult1_6 != (MR_Integer) 0);
            }
            else
            {
              MR_Word SubResult5_51;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[1]), &SubResult5_51, ((MR_Box) (ArgX5_49)), ((MR_Box) (ArgY5_50)));
              succeeded = (SubResult5_51 != (MR_Integer) 0);
              if (succeeded)
              {
                SubResult1_6 = SubResult5_51;
                succeeded = (SubResult1_6 != (MR_Integer) 0);
              }
              else
              {
                MR_Word SubResult6_54;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[2]), &SubResult6_54, ((MR_Box) (ArgX6_52)), ((MR_Box) (ArgY6_53)));
                succeeded = (SubResult6_54 != (MR_Integer) 0);
                if (succeeded)
                {
                  SubResult1_6 = SubResult6_54;
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                }
                else
                {
                  MR_Word SubResult7_57;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[3]), &SubResult7_57, ((MR_Box) (ArgX7_55)), ((MR_Box) (ArgY7_56)));
                  succeeded = (SubResult7_57 != (MR_Integer) 0);
                  if (succeeded)
                  {
                    SubResult1_6 = SubResult7_57;
                    succeeded = (SubResult1_6 != (MR_Integer) 0);
                  }
                  else
                  {
                    MR_Word SubResult8_60;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[4]), &SubResult8_60, ((MR_Box) (ArgX8_58)), ((MR_Box) (ArgY8_59)));
                    succeeded = (SubResult8_60 != (MR_Integer) 0);
                    if (succeeded)
                    {
                      SubResult1_6 = SubResult8_60;
                      succeeded = (SubResult1_6 != (MR_Integer) 0);
                    }
                    else
                    {
                      MR_Word SubResult9_63;
                      MR_Integer Var_88 = (MR_Integer) (ArgX9_61);
                      MR_Integer Var_89 = (MR_Integer) (ArgY9_62);

                      succeeded = (Var_88 < Var_89);
                      if (succeeded)
                      {
                        SubResult9_63 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_88 > Var_89);
                        if (succeeded)
                        {
                          SubResult9_63 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                      {
                        SubResult1_6 = SubResult9_63;
                        succeeded = (SubResult1_6 != (MR_Integer) 0);
                      }
                      else
                      {
                        MR_Word SubResult10_66;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[4]), &SubResult10_66, ((MR_Box) (ArgX10_64)), ((MR_Box) (ArgY10_65)));
                        succeeded = (SubResult10_66 != (MR_Integer) 0);
                        if (succeeded)
                        {
                          SubResult1_6 = SubResult10_66;
                          succeeded = (SubResult1_6 != (MR_Integer) 0);
                        }
                        else
                        {
                          MR_Word SubResult11_69;
                          MR_Integer Var_90 = (MR_Integer) (ArgX11_67);
                          MR_Integer Var_91 = (MR_Integer) (ArgY11_68);

                          succeeded = (Var_90 < Var_91);
                          if (succeeded)
                          {
                            SubResult11_69 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_90 > Var_91);
                            if (succeeded)
                            {
                              SubResult11_69 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                          {
                            SubResult1_6 = SubResult11_69;
                            succeeded = (SubResult1_6 != (MR_Integer) 0);
                          }
                          else
                          {
                            succeeded = (ArgX12_70 < ArgY12_71);
                            if (succeeded)
                            {
                              SubResult1_6 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX12_70 > ArgY12_71);
                              if (succeeded)
                              {
                                SubResult1_6 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
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

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer CastX_52 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_53 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_52 == CastY_53);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_30_55;
      MR_Word TypeInfo_31_56;
      MR_Word TypeInfo_32_57;
      MR_Word TypeInfo_33_58;
      MR_Word TypeInfo_34_59;
      MR_Word TypeInfo_35_60;
      MR_Word TypeInfo_36_61;
      MR_Word ArgX1_28 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 0))));
      MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 0))));
      MR_Word ArgX2_30 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 1))));
      MR_Word ArgY2_31 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 1))));
      MR_Word ArgX3_32 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 2))));
      MR_Word ArgY3_33 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 2))));
      MR_Word ArgX4_34 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, 3))) & (MR_Integer) 1);
      MR_Word ArgY4_35 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, 3))) & (MR_Integer) 1);
      MR_Word ArgX5_36 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 4))));
      MR_Word ArgY5_37 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 4))));
      MR_Word ArgX6_38 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 5))));
      MR_Word ArgY6_39 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 5))));
      MR_Word ArgX7_40 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 6))));
      MR_Word ArgY7_41 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 6))));
      MR_Word ArgX8_42 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 7))));
      MR_Word ArgY8_43 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 7))));
      MR_Word ArgX9_44 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, 8))) & (MR_Integer) 1);
      MR_Word ArgY9_45 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, 8))) & (MR_Integer) 1);
      MR_Word ArgX10_46 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 9))));
      MR_Word ArgY10_47 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 9))));
      MR_Word ArgX11_48 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, 10))) & (MR_Integer) 1);
      MR_Word ArgY11_49 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, 10))) & (MR_Integer) 1);
      MR_Integer ArgX12_50 = ((MR_Integer) ((MR_hl_field(0, ArgX1_3, 11))));
      MR_Integer ArgY12_51 = ((MR_Integer) ((MR_hl_field(0, ArgY1_4, 11))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_28, ArgY1_29);
      if (succeeded)
      {
        TypeInfo_30_55 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_55, ((MR_Box) (ArgX2_30)), ((MR_Box) (ArgY2_31)));
        if (succeeded)
        {
          TypeInfo_31_56 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_56, ((MR_Box) (ArgX3_32)), ((MR_Box) (ArgY3_33)));
          if (succeeded)
          {
            succeeded = (ArgX4_34 == ArgY4_35);
            if (succeeded)
            {
              TypeInfo_32_57 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_57, ((MR_Box) (ArgX5_36)), ((MR_Box) (ArgY5_37)));
              if (succeeded)
              {
                TypeInfo_33_58 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_58, ((MR_Box) (ArgX6_38)), ((MR_Box) (ArgY6_39)));
                if (succeeded)
                {
                  TypeInfo_34_59 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_59, ((MR_Box) (ArgX7_40)), ((MR_Box) (ArgY7_41)));
                  if (succeeded)
                  {
                    TypeInfo_35_60 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_60, ((MR_Box) (ArgX8_42)), ((MR_Box) (ArgY8_43)));
                    if (succeeded)
                    {
                      succeeded = (ArgX9_44 == ArgY9_45);
                      if (succeeded)
                      {
                        TypeInfo_36_61 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[4]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_61, ((MR_Box) (ArgX10_46)), ((MR_Box) (ArgY10_47)));
                        if (succeeded)
                        {
                          succeeded = (ArgX11_48 == ArgY11_49);
                          if (succeeded)
                            succeeded = (ArgX12_50 == ArgY12_51);
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
                TypeInfo_26_26 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[1]);
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

void MR_CALL 
parse_tree__module_qual__mq_info____Compare____maybe_should_report_errors_0_0(
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
parse_tree__module_qual__mq_info____Unify____maybe_should_report_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__mq_info____Compare____is_undef_blocking_0_0(
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
parse_tree__module_qual__mq_info____Unify____is_undef_blocking_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__mq_info__get_err_specs_in_mq_info_4_p_0(
  MR_Word Info_5,
  MR_Word * InvalidTypeSpecs_6,
  MR_Word * InvalidInstModeSpecs_7,
  MR_Word * NonBlockingUndefSpecs_8)
{
  MR_Word UndefTypesMap_9;
  MR_Word UndefInstsMap_10;
  MR_Word UndefModesMap_11;
  MR_Word UndefTypeClassesMap_12;
  MR_Word UndefTypeSpecs_13;
  MR_Word UndefInstSpecs_14;
  MR_Word UndefModeSpecs_15;
  MR_Word UndefTypeClassSpecs_16;
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));

  UndefTypesMap_9 = ((MR_Word) ((MR_hl_field(0, Var_22, 4))));
  UndefInstsMap_10 = ((MR_Word) ((MR_hl_field(0, Var_22, 5))));
  UndefModesMap_11 = ((MR_Word) ((MR_hl_field(0, Var_22, 6))));
  UndefTypeClassesMap_12 = ((MR_Word) ((MR_hl_field(0, Var_22, 7))));
  mercury__one_or_more_map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UndefTypesMap_9, &UndefTypeSpecs_13);
  mercury__one_or_more_map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UndefInstsMap_10, &UndefInstSpecs_14);
  mercury__one_or_more_map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UndefModesMap_11, &UndefModeSpecs_15);
  mercury__one_or_more_map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UndefTypeClassesMap_12, &UndefTypeClassSpecs_16);
  *InvalidTypeSpecs_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UndefTypeSpecs_13, UndefTypeClassSpecs_16);
  *InvalidInstModeSpecs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UndefInstSpecs_14, UndefModeSpecs_15);
  parse_tree__module_qual__mq_info__mq_info_get_nonblocking_undef_specs_2_p_0(Info_5, NonBlockingUndefSpecs_8);
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(
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
          MR_Word AsYetUnused0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 6))));
          MR_Word STATE_VARIABLE_Info_1_16;
          MR_Word AsYetUnused_10;
          MR_Box conv0_Var_9;

          succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[0]), ((MR_Box) (ModuleName_6)), &conv0_Var_9, AsYetUnused0_8, &AsYetUnused_10);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 0))));
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 1))));
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 2))));
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 3))));
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 4))));
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 5))));
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 7))));

            {
              STATE_VARIABLE_Info_1_16 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 0) = ((MR_Box) (Var_26));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 1) = ((MR_Box) (Var_27));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 2) = ((MR_Box) (Var_28));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 3) = ((MR_Box) (Var_29));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 4) = ((MR_Box) (Var_30));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 5) = ((MR_Box) (Var_31));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 6) = ((MR_Box) (AsYetUnused_10));
              MR_hl_field(0, STATE_VARIABLE_Info_1_16, 7) = ((MR_Box) (Var_33));
            }
          }
          else
            STATE_VARIABLE_Info_1_16 = STATE_VARIABLE_Info_0_14;
          if (((MR_tag((MR_Word) ModuleName_6)) == (MR_Integer) 1))
          {
            MR_Word ParentModule_11 = ((MR_Word) ((MR_hl_field(1, ModuleName_6, 0))));
            MR_Word next_value_of_ModuleName_6 = ParentModule_11;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_14 = STATE_VARIABLE_Info_1_16;

            // direct tailcall eliminated
            ;
            ModuleName_6 = next_value_of_ModuleName_6;
            STATE_VARIABLE_Info_0_14 = next_value_of_STATE_VARIABLE_Info_0_14;
            continue;
          }
          else
            *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_1_16;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info__update_recompilation_info_3_p_0(
  MR_Word Pred_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word MaybeRecompInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 7))));

  if ((MaybeRecompInfo0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
  else
  {
    MR_Word RecompInfo0_7 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo0_6, 0))));
    MR_Word RecompInfo_8;
    MR_Word Var_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
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
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 2))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 3))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 4))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 5))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 6))));
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
parse_tree__module_qual__mq_info__get_partial_qualifiers_4_p_0(
  MR_Word InInt_5,
  MR_Word ModuleName_6,
  MR_Word PartialQualInfo_7,
  MR_Word * PartialQualifiers_8)
{
  MR_Word ModuleIdSet_9 = (MR_Word) (PartialQualInfo_7);

  if (((MR_tag((MR_Word) ModuleName_6)) == (MR_Integer) 1))
  {
    MR_Word Parent_11 = ((MR_Word) ((MR_hl_field(1, ModuleName_6, 0))));
    MR_String Child_12 = ((MR_String) ((MR_hl_field(1, ModuleName_6, 1))));
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (Child_12));
    }
    parse_tree__module_qual__mq_info__get_partial_qualifiers_acc_6_p_0(InInt_5, ModuleIdSet_9, Parent_11, Var_13, (MR_Word) ((MR_Unsigned) 0U), PartialQualifiers_8);
  }
  else
    *PartialQualifiers_8 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__module_qual__mq_info__get_partial_qualifiers_acc_6_p_0(
  MR_Word InInt_7,
  MR_Word ModuleIdSet_8,
  MR_Word ImplicitPart_9,
  MR_Word ExplicitPart_10,
  MR_Word STATE_VARIABLE_Qualifiers_0_17,
  MR_Word * STATE_VARIABLE_Qualifiers_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Qualifiers_1_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(InInt_7, ModuleIdSet_8, ImplicitPart_9, ExplicitPart_10);
    if (succeeded)
      {
        STATE_VARIABLE_Qualifiers_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Qualifiers_1_19, 0) = ((MR_Box) (ExplicitPart_10));
        MR_hl_field(1, STATE_VARIABLE_Qualifiers_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Qualifiers_0_17));
      }
    else
      STATE_VARIABLE_Qualifiers_1_19 = STATE_VARIABLE_Qualifiers_0_17;
    if (((MR_tag((MR_Word) ImplicitPart_9)) == (MR_Integer) 1))
    {
      MR_String Child_13 = ((MR_String) ((MR_hl_field(1, ImplicitPart_9, 1))));
      MR_Word NextImplicitPart_14 = ((MR_Word) ((MR_hl_field(1, ImplicitPart_9, 0))));
      MR_Word NextExplicitPart_15;
      MR_Word next_value_of_ImplicitPart_9;
      MR_Word next_value_of_ExplicitPart_10;
      MR_Word next_value_of_STATE_VARIABLE_Qualifiers_0_17;

      NextExplicitPart_15 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0(Child_13, ExplicitPart_10);
      // direct tailcall eliminated
      ;
      next_value_of_ImplicitPart_9 = NextImplicitPart_14;
      next_value_of_ExplicitPart_10 = NextExplicitPart_15;
      next_value_of_STATE_VARIABLE_Qualifiers_0_17 = STATE_VARIABLE_Qualifiers_1_19;
      ImplicitPart_9 = next_value_of_ImplicitPart_9;
      ExplicitPart_10 = next_value_of_ExplicitPart_10;
      STATE_VARIABLE_Qualifiers_0_17 = next_value_of_STATE_VARIABLE_Qualifiers_0_17;
      continue;
    }
    else
      *STATE_VARIABLE_Qualifiers_18 = STATE_VARIABLE_Qualifiers_1_19;
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_partial_qualifier_info_2_p_0(
  MR_Word MQInfo_3,
  MR_Word * QualifierInfo_4)
{
  MR_Word ModuleIdSet_5 = ((MR_Word) ((MR_hl_field(0, MQInfo_3, 1))));

  *QualifierInfo_4 = (MR_Word) (ModuleIdSet_5);
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_set_nonblocking_undef_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_is_undef_blocking_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_undef_typeclasses_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_undef_modes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_undef_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_exported_instances_flag_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_imported_instance_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_imported_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 3))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 8))) & (MR_Integer) 1);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 10))) & (MR_Integer) 1);
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, Var_9, 11))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
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
parse_tree__module_qual__mq_info__mq_info_set_recompilation_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));

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
parse_tree__module_qual__mq_info__mq_info_set_as_yet_unused_interface_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));

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
parse_tree__module_qual__mq_info__mq_info_set_classes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));

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
parse_tree__module_qual__mq_info__mq_info_set_modes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));

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
parse_tree__module_qual__mq_info__mq_info_set_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));

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
parse_tree__module_qual__mq_info__mq_info_set_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));

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
parse_tree__module_qual__mq_info__mq_info_set_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));

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
parse_tree__module_qual__mq_info__mq_info_get_should_report_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, 10))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_nonblocking_undef_specs_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 9))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_is_undef_blocking_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, 8))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_undef_typeclasses_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 7))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_undef_modes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 6))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 5))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_undef_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 4))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_exported_instances_flag_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, 3))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 2))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_imported_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 1))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_this_module_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 0))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_recompilation_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 7))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 6))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 5))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 4))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 3))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 2))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__mq_info_get_modules_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));
}

void MR_CALL 
parse_tree__module_qual__mq_info__init_mq_info_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6,
  MR_Word ReportErrors_7,
  MR_Word * Info_8)
{
  MR_Word InstanceModules_9;
  MR_Word ImportedOrUsedModules_11;
  MR_Word SubInfo_12;
  MR_Word ModuleIdSet_13;
  MR_Word TypeIdSet_14;
  MR_Word InstIdSet_15;
  MR_Word ModeIdSet_16;
  MR_Word ClassIdSet_17;
  MR_Word AsYetUnusedInterfaceModules_18;
  MR_Word SmartRecompilation_19;
  MR_Word MaybeRecompInfo_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  InstanceModules_9 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_21 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  ImportedOrUsedModules_11 = mercury__set_tree234__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_21)));
  Var_22 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0));
  Var_23 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0));
  Var_24 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0));
  Var_25 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0));
  {
    SubInfo_12 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_12, 0) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, SubInfo_12, 1) = ((MR_Box) (ImportedOrUsedModules_11));
    MR_hl_field(0, SubInfo_12, 2) = ((MR_Box) (InstanceModules_9));
    MR_hl_field(0, SubInfo_12, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, SubInfo_12, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, SubInfo_12, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, SubInfo_12, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, SubInfo_12, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, SubInfo_12, 8) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, SubInfo_12, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, SubInfo_12, 10) = (MR_Box) ((MR_Unsigned) (ReportErrors_7));
    MR_hl_field(0, SubInfo_12, 11) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&ModuleIdSet_13);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&TypeIdSet_14);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&InstIdSet_15);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&ModeIdSet_16);
  parse_tree__module_qual__id_set__id_set_init_1_p_0(&ClassIdSet_17);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__mq_info_scalar_common_1[0]), &AsYetUnusedInterfaceModules_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 655, &SmartRecompilation_19);
  switch (SmartRecompilation_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeRecompInfo_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_30;

        Var_30 = recompilation__record_uses__init_recompilation_info_1_f_0(ModuleName_6);
        {
          MaybeRecompInfo_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeRecompInfo_20, 0) = ((MR_Box) (Var_30));
        }
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SubInfo_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleIdSet_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeIdSet_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstIdSet_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (ModeIdSet_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (ClassIdSet_17));
    MR_hl_field(0, base, 6) = ((MR_Box) (AsYetUnusedInterfaceModules_18));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeRecompInfo_20));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____is_undef_blocking_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__mq_info____Unify____is_undef_blocking_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____is_undef_blocking_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__mq_info____Compare____is_undef_blocking_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____maybe_should_report_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__mq_info____Unify____maybe_should_report_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____maybe_should_report_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__mq_info____Compare____maybe_should_report_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__mq_info____Unify____mq_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____mq_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__mq_info____Compare____mq_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____mq_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__mq_info____Unify____mq_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____mq_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__mq_info____Compare____mq_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____partial_qualifier_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__mq_info____Unify____partial_qualifier_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____partial_qualifier_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__mq_info____Compare____partial_qualifier_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__mq_info____Unify____undef_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__mq_info____Unify____undef_specs_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__mq_info____Compare____undef_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__mq_info____Compare____undef_specs_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_qual__mq_info__init(void)
{
}

void mercury__parse_tree__module_qual__mq_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_is_undef_blocking_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_maybe_should_report_errors_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_sub_info_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_partial_qualifier_info_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_undef_specs_1);
}

void mercury__parse_tree__module_qual__mq_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__mq_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.mq_info.
