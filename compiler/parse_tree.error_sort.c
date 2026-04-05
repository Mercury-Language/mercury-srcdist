/*
** Automatically generated from `error_sort.m'
** by the Mercury compiler,
** version rotd-2026-04-05
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


// :- module parse_tree.error_sort.
// :- implementation.

/*
INIT mercury__parse_tree__error_sort__init
ENDINIT
*/

#include "parse_tree.error_sort.mih"


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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__error_sort__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_sort__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_std_error_msg_component_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_sort__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_PseudoTypeInfo parse_tree__error_sort__parse_tree__error_sort__field_types_error_msg_group_0_0[2];

static const MR_DuFunctorDesc parse_tree__error_sort__parse_tree__error_sort__du_functor_desc_error_msg_group_0_0;

static const MR_DuFunctorDescPtr parse_tree__error_sort__parse_tree__error_sort__du_stag_ordered_error_msg_group_0_0[1];

static const MR_DuPtagLayout parse_tree__error_sort__parse_tree__error_sort__du_ptag_ordered_error_msg_group_0[1];

static const MR_DuFunctorDescPtr parse_tree__error_sort__parse_tree__error_sort__du_name_ordered_error_msg_group_0[1];

static const MR_Integer parse_tree__error_sort__parse_tree__error_sort__functor_number_map_error_msg_group_0[1];

static void MR_CALL 
parse_tree__error_sort__compare_error_msg_groups_3_p_0(
  MR_Word GroupA_4,
  MR_Word GroupB_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__error_sort__compare_std_error_specs_4_p_0(
  MR_Word ReverseErrorOrder_5,
  MR_Word SpecA_6,
  MR_Word SpecB_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__error_sort__compare_std_error_msg_lists_4_p_0(
  MR_Word ReverseErrorOrder_5,
  MR_Word MsgsA_6,
  MR_Word MsgsB_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__error_sort__compare_error_msgs_4_p_0(
  MR_Word ReverseErrorOrder_5,
  MR_Word MsgA_6,
  MR_Word MsgB_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(
  MR_Word OptionTable_5,
  MR_Word Component_6,
  MR_Word STATE_VARIABLE_StdComponentCord_0_18,
  MR_Word * STATE_VARIABLE_StdComponentCord_19);

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Msg0_5,
  MR_Word * StdMsg_6);

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Spec0_5,
  MR_Word * StdSpec_6);

static void MR_CALL 
parse_tree__error_sort__sort_error_msgs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__error_sort__flatten_error_msg_groups_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__error_sort__sort_error_msg_groups_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__error_sort__sort_std_error_specs_opt_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__error_sort__sort_std_error_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_sort__standardize_error_specs_option_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__error_sort__standardize_error_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__error_sort____Unify____error_msg_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_sort____Compare____error_msg_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_sort_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_3[3][6];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_4[3][7];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_7[1][4];




static /* final */ const MR_Box parse_tree__error_sort_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__error_sort_scalar_common_2[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__error_sort_scalar_common_1[3]))) },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_3[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_sort__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0)),
    ((MR_Box) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_sort__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_sort__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0)),
    ((MR_Box) (&parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_std_error_msg_component_0)),
    ((MR_Box) (&parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_std_error_msg_component_0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_5[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__error_sort_scalar_common_3[1])),
    ((MR_Box) (parse_tree__error_sort__sort_error_msg_groups_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__error_sort_scalar_common_6[0])),
    ((MR_Box) (parse_tree__error_sort__flatten_error_msg_groups_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0)),
    ((MR_Box) (&parse_tree__error_sort__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_7[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__error_sort_scalar_common_4[1])),
    ((MR_Box) (parse_tree__error_sort__sort_error_msgs_2_p_0_1)),
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


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__error_sort__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_sort__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_std_error_msg_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_sort__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_PseudoTypeInfo parse_tree__error_sort__parse_tree__error_sort__field_types_error_msg_group_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_sort__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0)
};

static const MR_DuFunctorDesc parse_tree__error_sort__parse_tree__error_sort__du_functor_desc_error_msg_group_0_0 = {
  (MR_String) "error_msg_group",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_sort__parse_tree__error_sort__field_types_error_msg_group_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_sort__parse_tree__error_sort__du_stag_ordered_error_msg_group_0_0[1] = { &parse_tree__error_sort__parse_tree__error_sort__du_functor_desc_error_msg_group_0_0 };

static const MR_DuPtagLayout parse_tree__error_sort__parse_tree__error_sort__du_ptag_ordered_error_msg_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_sort__parse_tree__error_sort__du_stag_ordered_error_msg_group_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_sort__parse_tree__error_sort__du_name_ordered_error_msg_group_0[1] = { &parse_tree__error_sort__parse_tree__error_sort__du_functor_desc_error_msg_group_0_0 };

static const MR_Integer parse_tree__error_sort__parse_tree__error_sort__functor_number_map_error_msg_group_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_sort____Unify____error_msg_group_0_0_10001)),
  ((MR_Box) (parse_tree__error_sort____Compare____error_msg_group_0_0_10001)),
  (MR_String) "parse_tree.error_sort",
  (MR_String) "error_msg_group",
  { parse_tree__error_sort__parse_tree__error_sort__du_name_ordered_error_msg_group_0 },
  { parse_tree__error_sort__parse_tree__error_sort__du_ptag_ordered_error_msg_group_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__error_sort__parse_tree__error_sort__functor_number_map_error_msg_group_0,

};

void MR_CALL 
parse_tree__error_sort____Compare____error_msg_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__error_spec____Compare____error_msg_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_sort_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__error_sort____Unify____error_msg_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__error_spec____Unify____error_msg_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__error_sort_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__error_sort__compare_error_msg_groups_3_p_0(
  MR_Word GroupA_4,
  MR_Word GroupB_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    MR_Word HeadMsgA_7 = ((MR_Word) ((MR_hl_field(0, GroupA_4, 0))));
    MR_Word TailMsgsA_8 = ((MR_Word) ((MR_hl_field(0, GroupA_4, 1))));
    MR_Word HeadMsgB_9 = ((MR_Word) ((MR_hl_field(0, GroupB_5, 0))));
    MR_Word TailMsgsB_10 = ((MR_Word) ((MR_hl_field(0, GroupB_5, 1))));
    MR_Word Result0_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__error_sort__compare_error_msgs_4_p_0((MR_Integer) 0, HeadMsgA_7, HeadMsgB_9, &Result0_11);
    switch (Result0_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Result_6 = Result0_11;
        break;
      case (MR_Integer) 0:
        if ((TailMsgsA_8 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((TailMsgsB_10 == (MR_Word) ((MR_Unsigned) 0U)))
            *Result_6 = (MR_Integer) 0;
          else
            *Result_6 = (MR_Integer) 1;
        else
        {
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, TailMsgsA_8, 1))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, TailMsgsA_8, 0))));

          if ((TailMsgsB_10 == (MR_Word) ((MR_Unsigned) 0U)))
            *Result_6 = (MR_Integer) 2;
          else
          {
            MR_Word HeadTailMsgB_18 = ((MR_Word) ((MR_hl_field(1, TailMsgsB_10, 0))));
            MR_Word TailTailMsgsB_19 = ((MR_Word) ((MR_hl_field(1, TailMsgsB_10, 1))));
            MR_Word TailGroupA_20;
            MR_Word TailGroupB_21;
            MR_Word next_value_of_GroupA_4;
            MR_Word next_value_of_GroupB_5;

            {
              TailGroupA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TailGroupA_20, 0) = ((MR_Box) (Var_24));
              MR_hl_field(0, TailGroupA_20, 1) = ((MR_Box) (Var_23));
            }
            {
              TailGroupB_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TailGroupB_21, 0) = ((MR_Box) (HeadTailMsgB_18));
              MR_hl_field(0, TailGroupB_21, 1) = ((MR_Box) (TailTailMsgsB_19));
            }
            // direct tailcall eliminated
            ;
            next_value_of_GroupA_4 = TailGroupA_20;
            next_value_of_GroupB_5 = TailGroupB_21;
            GroupA_4 = next_value_of_GroupA_4;
            GroupB_5 = next_value_of_GroupB_5;
            continue;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__error_sort__compare_std_error_specs_4_p_0(
  MR_Word ReverseErrorOrder_5,
  MR_Word SpecA_6,
  MR_Word SpecB_7,
  MR_Word * Result_8)
{
  MR_Word MsgsA_12 = ((MR_Word) ((MR_hl_field(2, SpecA_6, 3))));
  MR_Word MsgsB_16 = ((MR_Word) ((MR_hl_field(2, SpecB_7, 3))));
  MR_Word MsgsResult_17;

  parse_tree__error_sort__compare_std_error_msg_lists_4_p_0(ReverseErrorOrder_5, MsgsA_12, MsgsB_16, &MsgsResult_17);
  switch (MsgsResult_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Result_8 = MsgsResult_17;
      break;
    case (MR_Integer) 0:
      parse_tree__error_spec____Compare____std_error_spec_0_0(Result_8, SpecA_6, SpecB_7);
      break;
  }
}

static void MR_CALL 
parse_tree__error_sort__compare_std_error_msg_lists_4_p_0(
  MR_Word ReverseErrorOrder_5,
  MR_Word MsgsA_6,
  MR_Word MsgsB_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MsgsA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MsgsB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_8 = (MR_Integer) 0;
      else
        *Result_8 = (MR_Integer) 1;
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, MsgsA_6, 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, MsgsA_6, 0))));

      if ((MsgsB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_8 = (MR_Integer) 2;
      else
      {
        MR_Word HeadMsgB_15 = ((MR_Word) ((MR_hl_field(1, MsgsB_7, 0))));
        MR_Word TailMsgsB_16 = ((MR_Word) ((MR_hl_field(1, MsgsB_7, 1))));
        MR_Word HeadResult_17;
        MR_Word Var_18 = (MR_Word) (Var_21);
        MR_Word Var_19 = (MR_Word) (HeadMsgB_15);

        parse_tree__error_sort__compare_error_msgs_4_p_0(ReverseErrorOrder_5, Var_18, Var_19, &HeadResult_17);
        switch (HeadResult_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Result_8 = HeadResult_17;
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_MsgsA_6 = Var_20;
              MR_Word next_value_of_MsgsB_7 = TailMsgsB_16;

              // direct tailcall eliminated
              ;
              MsgsA_6 = next_value_of_MsgsA_6;
              MsgsB_7 = next_value_of_MsgsB_7;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__error_sort__compare_error_msgs_4_p_0(
  MR_Word ReverseErrorOrder_5,
  MR_Word MsgA_6,
  MR_Word MsgB_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word MaybeContextA_9;
  MR_Word MaybeContextB_10;
  MR_Word ContextResult_13;
  MR_Word ContextA_11;
  MR_Word ContextB_12;

  parse_tree__error_spec__extract_msg_maybe_context_2_p_0(MsgA_6, &MaybeContextA_9);
  parse_tree__error_spec__extract_msg_maybe_context_2_p_0(MsgB_7, &MaybeContextB_10);
  succeeded = (MaybeContextA_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ContextA_11 = ((MR_Word) ((MR_hl_field(1, MaybeContextA_9, 0))));
    succeeded = (MaybeContextB_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      ContextB_12 = ((MR_Word) ((MR_hl_field(1, MaybeContextB_10, 0))));
  }
  if (succeeded)
    mercury__term_context____Compare____term_context_0_0(&ContextResult_13, ContextA_11, ContextB_12);
  else
    ContextResult_13 = (MR_Integer) 0;
  switch (ContextResult_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (ReverseErrorOrder_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_8 = ContextResult_13;
          break;
        case (MR_Integer) 1:
          *Result_8 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ComponentsA_14;
        MR_Word ComponentsB_15;
        MR_Word ComponentsResult_16;

        switch (MR_tag((MR_Word) MsgA_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_21 = ((MR_Word) ((MR_hl_field(0, MsgA_6, 1))));
              MR_Word Var_27;

              {
                Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_27, 0) = ((MR_Box) (Pieces_21));
              }
              {
                ComponentsA_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsA_14, 0) = ((MR_Box) (Var_27));
                MR_hl_field(1, ComponentsA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_29 = ((MR_Word) ((MR_hl_field(1, MsgA_6, 0))));
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_30, 0) = ((MR_Box) (Pieces_29));
              }
              {
                ComponentsA_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsA_14, 0) = ((MR_Box) (Var_30));
                MR_hl_field(1, ComponentsA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            ComponentsA_14 = ((MR_Word) ((MR_hl_field(2, MsgA_6, 1))));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, MsgA_6, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ComponentsA_14 = ((MR_Word) ((MR_hl_field(3, MsgA_6, 4))));
                break;
              case (MR_Integer) 1:
                ComponentsA_14 = (MR_Word) (MR_mkword(1, &parse_tree__error_sort_scalar_common_1[4]));
                break;
            }
            break;
        }
        switch (MR_tag((MR_Word) MsgB_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_33 = ((MR_Word) ((MR_hl_field(0, MsgB_7, 1))));
              MR_Word Var_39;

              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_39, 0) = ((MR_Box) (Pieces_33));
              }
              {
                ComponentsB_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsB_15, 0) = ((MR_Box) (Var_39));
                MR_hl_field(1, ComponentsB_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_41 = ((MR_Word) ((MR_hl_field(1, MsgB_7, 0))));
              MR_Word Var_42;

              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (Pieces_41));
              }
              {
                ComponentsB_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsB_15, 0) = ((MR_Box) (Var_42));
                MR_hl_field(1, ComponentsB_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            ComponentsB_15 = ((MR_Word) ((MR_hl_field(2, MsgB_7, 1))));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, MsgB_7, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ComponentsB_15 = ((MR_Word) ((MR_hl_field(3, MsgB_7, 4))));
                break;
              case (MR_Integer) 1:
                ComponentsB_15 = (MR_Word) (MR_mkword(1, &parse_tree__error_sort_scalar_common_1[4]));
                break;
            }
            break;
        }
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_sort_scalar_common_1[2]), &ComponentsResult_16, ((MR_Box) (ComponentsA_14)), ((MR_Box) (ComponentsB_15)));
        switch (ComponentsResult_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Result_8 = ComponentsResult_16;
            break;
          case (MR_Integer) 0:
            parse_tree__error_spec____Compare____error_msg_0_0(Result_8, MsgA_6, MsgB_7);
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      switch (ReverseErrorOrder_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_8 = ContextResult_13;
          break;
        case (MR_Integer) 1:
          *Result_8 = (MR_Integer) 1;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StdComponentCord_19;

  parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StdComponentCord_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StdComponentCord_19));
}

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(
  MR_Word OptionTable_5,
  MR_Word Component_6,
  MR_Word STATE_VARIABLE_StdComponentCord_0_18,
  MR_Word * STATE_VARIABLE_StdComponentCord_19)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Component_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Word Var_23 = (MR_Word) (Component_6);

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0), ((MR_Box) (Var_23)), STATE_VARIABLE_StdComponentCord_0_18, STATE_VARIABLE_StdComponentCord_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Option_8 = ((((MR_Unsigned) ((MR_hl_field(1, Component_6, 0))) >> 1)) & (MR_Integer) 1023);
        MR_Word MatchValue_9 = ((MR_Unsigned) ((MR_hl_field(1, Component_6, 0))) & (MR_Integer) 1);
        MR_Word EmbeddedComponents_10 = ((MR_Word) ((MR_hl_field(1, Component_6, 1))));
        MR_Word OptionValue_11;

        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) (Option_8)), &OptionValue_11);
        succeeded = (OptionValue_11 == MatchValue_9);
        if (succeeded)
        {
          MR_Word StdEmbeddedComponents_12;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Box conv1_StdEmbeddedComponents_12;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_4[2]));
            MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0_1));
            MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_20, 3) = ((MR_Box) (OptionTable_5));
          }
          Var_21 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0));
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), (MR_Word) (&parse_tree__error_sort_scalar_common_1[1]), Var_20, EmbeddedComponents_10, ((MR_Box) (Var_21)), &conv1_StdEmbeddedComponents_12);
          StdEmbeddedComponents_12 = ((MR_Word) (conv1_StdEmbeddedComponents_12));
          *STATE_VARIABLE_StdComponentCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0), STATE_VARIABLE_StdComponentCord_0_18, StdEmbeddedComponents_12);
        }
        else
          *STATE_VARIABLE_StdComponentCord_19 = STATE_VARIABLE_StdComponentCord_0_18;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StdComponentCord_19;

  parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StdComponentCord_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StdComponentCord_19));
}

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Msg0_5,
  MR_Word * StdMsg_6)
{
  MR_bool succeeded;
  MR_Word MaybeContext_9;
  MR_Word TreatAsFirst_10;
  MR_Unsigned ExtraIndent_11;
  MR_Word Components0_12;
  MR_Word StdComponentCord_13;
  MR_Word StdComponents_14;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Box conv1_StdComponentCord_13;

  switch (MR_tag((MR_Word) Msg0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_7 = ((MR_Word) ((MR_hl_field(0, Msg0_5, 0))));
        MR_Word Pieces0_8 = ((MR_Word) ((MR_hl_field(0, Msg0_5, 1))));
        MR_Word Var_17;

        {
          MaybeContext_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContext_9, 0) = ((MR_Box) (Context_7));
        }
        TreatAsFirst_10 = (MR_Integer) 1;
        ExtraIndent_11 = (MR_Unsigned) 0U;
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (Pieces0_8));
        }
        {
          Components0_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components0_12, 0) = ((MR_Box) (Var_17));
          MR_hl_field(1, Components0_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_19;
        MR_Word Pieces0_28 = ((MR_Word) ((MR_hl_field(1, Msg0_5, 0))));

        MaybeContext_9 = (MR_Word) ((MR_Unsigned) 0U);
        TreatAsFirst_10 = (MR_Integer) 1;
        ExtraIndent_11 = (MR_Unsigned) 0U;
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (Pieces0_28));
        }
        {
          Components0_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components0_12, 0) = ((MR_Box) (Var_19));
          MR_hl_field(1, Components0_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_29 = ((MR_Word) ((MR_hl_field(2, Msg0_5, 0))));

        Components0_12 = ((MR_Word) ((MR_hl_field(2, Msg0_5, 1))));
        {
          MaybeContext_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContext_9, 0) = ((MR_Box) (Context_29));
        }
        TreatAsFirst_10 = (MR_Integer) 1;
        ExtraIndent_11 = (MR_Unsigned) 0U;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Msg0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeContext_9 = ((MR_Word) ((MR_hl_field(3, Msg0_5, 1))));
            TreatAsFirst_10 = ((MR_Unsigned) ((MR_hl_field(3, Msg0_5, 2))) & (MR_Integer) 1);
            ExtraIndent_11 = ((MR_Unsigned) ((MR_hl_field(3, Msg0_5, 3))));
            Components0_12 = ((MR_Word) ((MR_hl_field(3, Msg0_5, 4))));
          }
          break;
        case (MR_Integer) 1:
          {
            MaybeContext_9 = ((MR_Word) ((MR_hl_field(3, Msg0_5, 1))));
            TreatAsFirst_10 = (MR_Integer) 0;
            ExtraIndent_11 = (MR_Unsigned) 0U;
            Components0_12 = (MR_Word) (MR_mkword(1, &parse_tree__error_sort_scalar_common_1[4]));
          }
          break;
      }
      break;
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_4[2]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__error_sort__remove_conditionals_in_msg_3_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (OptionTable_4));
  }
  Var_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), (MR_Word) (&parse_tree__error_sort_scalar_common_1[1]), Var_26, Components0_12, ((MR_Box) (Var_27)), &conv1_StdComponentCord_13);
  StdComponentCord_13 = ((MR_Word) (conv1_StdComponentCord_13));
  StdComponents_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_component_0), StdComponentCord_13);
  succeeded = (StdComponents_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *StdMsg_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 1) = ((MR_Box) (MaybeContext_9));
      MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (TreatAsFirst_10));
      MR_hl_field(3, base, 3) = ((MR_Box) (ExtraIndent_11));
      MR_hl_field(3, base, 4) = ((MR_Box) (StdComponents_14));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_StdMsg_6;

  succeeded = parse_tree__error_sort__remove_conditionals_in_msg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_StdMsg_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_StdMsg_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Spec0_5,
  MR_Word * StdSpec_6)
{
  MR_bool succeeded;
  MR_String Id_7;
  MR_Word Phase_9;
  MR_Word MaybeStdSeverity_11;
  MR_Word StdMsgs_12;
  MR_Word StdSeverity_15;

  switch (MR_tag((MR_Word) Spec0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context0_13;
        MR_Word Pieces0_14;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Severity0_35;

        Id_7 = ((MR_String) ((MR_hl_field(0, Spec0_5, 0))));
        Severity0_35 = ((MR_Word) ((MR_hl_field(0, Spec0_5, 1))));
        Phase_9 = ((MR_Word) ((MR_hl_field(0, Spec0_5, 2))));
        Context0_13 = ((MR_Word) ((MR_hl_field(0, Spec0_5, 3))));
        Pieces0_14 = ((MR_Word) ((MR_hl_field(0, Spec0_5, 4))));
        {
          MaybeStdSeverity_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStdSeverity_11, 0) = ((MR_Box) (Severity0_35));
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Context0_13));
        }
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (Pieces0_14));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_19, 1) = ((MR_Box) (Var_20));
          MR_hl_field(3, Var_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, Var_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_19, 4) = ((MR_Box) (Var_23));
        }
        {
          StdMsgs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, StdMsgs_12, 0) = ((MR_Box) (Var_19));
          MR_hl_field(1, StdMsgs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_27;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Severity0_36;
        MR_Word Pieces0_37;

        Id_7 = ((MR_String) ((MR_hl_field(1, Spec0_5, 0))));
        Severity0_36 = ((MR_Word) ((MR_hl_field(1, Spec0_5, 1))));
        Phase_9 = ((MR_Word) ((MR_hl_field(1, Spec0_5, 2))));
        Pieces0_37 = ((MR_Word) ((MR_hl_field(1, Spec0_5, 3))));
        {
          MaybeStdSeverity_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStdSeverity_11, 0) = ((MR_Box) (Severity0_36));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (Pieces0_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, Var_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_27, 4) = ((MR_Box) (Var_31));
        }
        {
          StdMsgs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, StdMsgs_12, 0) = ((MR_Box) (Var_27));
          MR_hl_field(1, StdMsgs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Severity0_8;
        MR_Word Msgs0_10;
        MR_Word Var_18;

        Id_7 = ((MR_String) ((MR_hl_field(2, Spec0_5, 0))));
        Severity0_8 = ((MR_Word) ((MR_hl_field(2, Spec0_5, 1))));
        Phase_9 = ((MR_Word) ((MR_hl_field(2, Spec0_5, 2))));
        Msgs0_10 = ((MR_Word) ((MR_hl_field(2, Spec0_5, 3))));
        {
          MaybeStdSeverity_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStdSeverity_11, 0) = ((MR_Box) (Severity0_8));
        }
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_3[2]));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__error_sort__remove_conditionals_in_spec_3_p_0_1));
          MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_18, 3) = ((MR_Box) (OptionTable_4));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_msg_0), Var_18, Msgs0_10, &StdMsgs_12);
        succeeded = (StdMsgs_12 != (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
  }
  if (succeeded)
  {
    StdSeverity_15 = ((MR_Word) ((MR_hl_field(1, MaybeStdSeverity_11, 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *StdSpec_6 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Id_7));
      MR_hl_field(2, base, 1) = ((MR_Box) (StdSeverity_15));
      MR_hl_field(2, base, 2) = ((MR_Box) (Phase_9));
      MR_hl_field(2, base, 3) = ((MR_Box) (StdMsgs_12));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__error_sort__sort_error_msgs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_8;

  parse_tree__error_sort__compare_error_msgs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
}

void MR_CALL 
parse_tree__error_sort__sort_error_msgs_2_p_0(
  MR_Word Msgs0_3,
  MR_Word * Msgs_4)
{
  mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__error_sort_scalar_common_7[0]), Msgs0_3, Msgs_4);
}

MR_Word MR_CALL 
parse_tree__error_sort__flatten_error_msg_group_1_f_0(
  MR_Word Group_3)
{
  MR_Word Msgs_4;
  MR_Word HeadMsg_5 = ((MR_Word) ((MR_hl_field(0, Group_3, 0))));
  MR_Word TailMsgs_6 = ((MR_Word) ((MR_hl_field(0, Group_3, 1))));

  {
    Msgs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Msgs_4, 0) = ((MR_Box) (HeadMsg_5));
    MR_hl_field(1, Msgs_4, 1) = ((MR_Box) (TailMsgs_6));
  }
  return Msgs_4;
}

static MR_Box MR_CALL 
parse_tree__error_sort__flatten_error_msg_groups_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msgs_4;

  conv0_Msgs_4 = parse_tree__error_sort__flatten_error_msg_group_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Msgs_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
parse_tree__error_sort__flatten_error_msg_groups_1_f_0(
  MR_Word Groups_3)
{
  MR_Word Msgs_4;
  MR_Word MsgLists_5;

  MsgLists_5 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), (MR_Word) (&parse_tree__error_sort_scalar_common_1[0]), (MR_Word) (&parse_tree__error_sort_scalar_common_5[1]), Groups_3);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), MsgLists_5, &Msgs_4);
  return Msgs_4;
}

static void MR_CALL 
parse_tree__error_sort__sort_error_msg_groups_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  parse_tree__error_sort__compare_error_msg_groups_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

void MR_CALL 
parse_tree__error_sort__sort_error_msg_groups_2_p_0(
  MR_Word MsgGroups0_3,
  MR_Word * MsgGroups_4)
{
  mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), (MR_Word) (&parse_tree__error_sort_scalar_common_5[0]), MsgGroups0_3, MsgGroups_4);
}

static void MR_CALL 
parse_tree__error_sort__sort_std_error_specs_opt_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_8;

  parse_tree__error_sort__compare_std_error_specs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
}

void MR_CALL 
parse_tree__error_sort__sort_std_error_specs_opt_table_3_p_0(
  MR_Word OptionTable_4,
  MR_Word StdSpecs_5,
  MR_Word * SortedStdSpecs_6)
{
  MR_Word ReverseErrorOrder_7;
  MR_Word Var_9;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) ((MR_Integer) 140)), &ReverseErrorOrder_7);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_4[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__error_sort__sort_std_error_specs_opt_table_3_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (ReverseErrorOrder_7));
  }
  mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0), Var_9, StdSpecs_5, SortedStdSpecs_6);
}

static void MR_CALL 
parse_tree__error_sort__sort_std_error_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_8;

  parse_tree__error_sort__compare_std_error_specs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
}

void MR_CALL 
parse_tree__error_sort__sort_std_error_specs_3_p_0(
  MR_Word Globals_4,
  MR_Word StdSpecs_5,
  MR_Word * SortedStdSpecs_6)
{
  MR_Word OptionTable_7;
  MR_Word ReverseErrorOrder_8;
  MR_Word Var_10;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 140)), &ReverseErrorOrder_8);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_4[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__error_sort__sort_std_error_specs_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ReverseErrorOrder_8));
  }
  mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0), Var_10, StdSpecs_5, SortedStdSpecs_6);
}

static MR_bool MR_CALL 
parse_tree__error_sort__standardize_error_specs_option_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_StdSpec_6;

  succeeded = parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_StdSpec_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_StdSpec_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__error_sort__standardize_error_specs_option_table_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5,
  MR_Word * StdSpecs_6)
{
  MR_bool succeeded;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_3[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (parse_tree__error_sort__standardize_error_specs_option_table_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (OptionTable_4));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0), Var_7, Specs_5, StdSpecs_6);
}

static MR_bool MR_CALL 
parse_tree__error_sort__standardize_error_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_StdSpec_6;

  succeeded = parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_StdSpec_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_StdSpec_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__error_sort__standardize_error_specs_3_p_0(
  MR_Word Globals_4,
  MR_Word Specs_5,
  MR_Word * StdSpecs_6)
{
  MR_bool succeeded;
  MR_Word OptionTable_7;
  MR_Word Var_8;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_3[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__error_sort__standardize_error_specs_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (OptionTable_7));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_std_error_spec_0), Var_8, Specs_5, StdSpecs_6);
}

static MR_bool MR_CALL 
parse_tree__error_sort____Unify____error_msg_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_sort____Unify____error_msg_group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_sort____Compare____error_msg_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_sort____Compare____error_msg_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__error_sort__init(void)
{
}

void mercury__parse_tree__error_sort__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0);
}

void mercury__parse_tree__error_sort__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__error_sort__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.error_sort.
