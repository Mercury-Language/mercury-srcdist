/*
** Automatically generated from `mercury_to_mercury.m'
** by the Mercury compiler,
** version rotd-2021-04-24
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


// :- module parse_tree.mercury_to_mercury.
// :- implementation.

/*
INIT mercury__parse_tree__mercury_to_mercury__init
ENDINIT
*/

#include "parse_tree.mercury_to_mercury.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
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
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_DuFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__mercury_to_mercury__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__field_types_maybe_exist_constraints_0_1[1];

static const MR_DuFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_1;

static const MR_DuFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_stag_ordered_maybe_exist_constraints_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_stag_ordered_maybe_exist_constraints_0_1[1];

static const MR_DuPtagLayout parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_ptag_ordered_maybe_exist_constraints_0[2];

static const MR_DuFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_name_ordered_maybe_exist_constraints_0[2];

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_maybe_exist_constraints_0[2];

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0;

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1;

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_ordinal_ordered_needs_brackets_0[2];

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2];

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2];

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____maybe_exist_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____maybe_exist_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_2[3][2];

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_4[1][2];

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_5[3][10];

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_6[1][3];


/* sealed */ struct parse_tree__mercury_to_mercury__vector_common_type_3_0_s {
  const MR_String parse_tree__mercury_to_mercury__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct parse_tree__mercury_to_mercury__vector_common_type_3_0_s parse_tree__mercury_to_mercury_vector_common_3[8];



static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) " (")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_4[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_5[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_6[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};


static /* final */ const struct parse_tree__mercury_to_mercury__vector_common_type_3_0_s parse_tree__mercury_to_mercury_vector_common_3[8] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "multi" },
  /* row 3 */   {     (MR_String) "nondet" },
  /* row 4 */   {     (MR_String) "cc_multi" },
  /* row 5 */   {     (MR_String) "cc_nondet" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_DuFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_0 = {
  (MR_String) "no_exist_constraints",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__mercury_to_mercury__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__field_types_maybe_exist_constraints_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__mercury_to_mercury__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_DuFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_1 = {
  (MR_String) "have_exist_constraints_print_paren",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__field_types_maybe_exist_constraints_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_stag_ordered_maybe_exist_constraints_0_0[1] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_0
};

static const MR_DuFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_stag_ordered_maybe_exist_constraints_0_1[1] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_1
};

static const MR_DuPtagLayout parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_ptag_ordered_maybe_exist_constraints_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_stag_ordered_maybe_exist_constraints_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_stag_ordered_maybe_exist_constraints_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_name_ordered_maybe_exist_constraints_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_1,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_functor_desc_maybe_exist_constraints_0_0
};

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_maybe_exist_constraints_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_maybe_exist_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__mercury_to_mercury____Unify____maybe_exist_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__mercury_to_mercury____Compare____maybe_exist_constraints_0_0_10001)),
  (MR_String) "parse_tree.mercury_to_mercury",
  (MR_String) "maybe_exist_constraints",
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_name_ordered_maybe_exist_constraints_0 },
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__du_ptag_ordered_maybe_exist_constraints_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_maybe_exist_constraints_0,

};

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_ordinal_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0
};

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_needs_brackets_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001)),
  ((MR_Box) (parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001)),
  (MR_String) "parse_tree.mercury_to_mercury",
  (MR_String) "needs_brackets",
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0 },
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_ordinal_ordered_needs_brackets_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0,

};

void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(
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
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury____Compare____maybe_exist_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____maybe_exist_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  {
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "!");
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(TypeInfo_for_T_17, VarSet_7, VarNamePrint_8, Var_9, Stream_10);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(
  MR_Integer Indent_5,
  MR_Word Stream_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), Indent_5, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Integer Indent_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_5 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Integer next_value_of_Indent_5;
      MR_Box next_value_of_STATE_VARIABLE_U_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) "\t")), S_6, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_12_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) Indent_5 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_5 = Var_13;
      next_value_of_STATE_VARIABLE_U_0_8 = STATE_VARIABLE_U_12_12;
      Indent_5 = next_value_of_Indent_5;
      STATE_VARIABLE_U_0_8 = next_value_of_STATE_VARIABLE_U_0_8;
      continue;
    }
    else
      *STATE_VARIABLE_U_9 = STATE_VARIABLE_U_0_8;
    break;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word Lang_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  {
    MR_String Var_10;
    MR_String Var_13;
    MR_String Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
    Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(
  MR_Word Lang_3)
{
  {
    MR_String String_4;
    MR_String Var_13;
    MR_String Var_16;
    MR_String Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_String_4;

    Var_17 = libs__globals__foreign_language_string_1_f_0(Lang_3);
    Var_16 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "\"");
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_16);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]))), ((MR_Box) (Var_13)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_String_4);
    String_4 = ((MR_String) (conv1_String_4));
    return String_4;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_4_p_0(
  MR_Word Lang_5,
  MR_Word Stream_6)
{
  {
    MR_String Var_17;
    MR_String Var_20;
    MR_String Var_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_9;

    Var_21 = libs__globals__foreign_language_string_1_f_0(Lang_5);
    Var_20 = mercury__string__f_43_43_2_f_0(Var_21, (MR_String) "\"");
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_20);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]))), ((MR_Box) (Var_17)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_9);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_class_context_7_p_0(
  MR_Word TypeVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word UnivConstraints_10,
  MR_Word MaybeExistConstraints_11,
  MR_Word Stream_12)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_15;

    parse_tree__mercury_to_mercury__mercury_format_class_context_7_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), TypeVarSet_8, VarNamePrint_9, UnivConstraints_10, MaybeExistConstraints_11, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_class_context_7_p_0(
  MR_Word TypeClassInfo_for_output_23,
  MR_Word TypeVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word UnivConstraints_10,
  MR_Word MaybeExistConstraints_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  {
    MR_Box STATE_VARIABLE_U_20_20;

    if ((MaybeExistConstraints_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_20_20 = STATE_VARIABLE_U_0_15;
    else
    {
      MR_Word ExistConstraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExistConstraints_11, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_18_18;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0(TypeClassInfo_for_output_23, TypeVarSet_8, VarNamePrint_9, (MR_String) "=>", ExistConstraints_14, S_12, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
    }
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0(TypeClassInfo_for_output_23, TypeVarSet_8, VarNamePrint_9, (MR_String) "<=", UnivConstraints_10, S_12, STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_16);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_prog_constraint_list_to_string_4_f_0(
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_String Operator_8,
  MR_Word Constraints_9)
{
  {
    MR_String String_10;
    MR_Box conv0_String_10;

    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), TypeVarSet_6, VarNamePrint_7, Operator_8, Constraints_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_10);
    String_10 = ((MR_String) (conv0_String_10));
    return String_10;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0(
  MR_Word TypeClassInfo_for_output_30,
  MR_Word TypeVarSet_8,
  MR_Word VarNamePrint_9,
  MR_String Operator_10,
  MR_Word Constraints_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  if ((Constraints_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_17 = STATE_VARIABLE_U_0_16;
  else
  {
    MR_Word Var_18;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Box STATE_VARIABLE_U_27_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Operator_10));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_2[2])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) (Var_18)), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_19_19);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TypeClassInfo_for_output_30));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeVarSet_8));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (VarNamePrint_9));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Var_25)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Constraints_11)), S_12, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_27_27);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_17);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word Constraint_5)
{
  {
    MR_String String_6;
    MR_Box conv0_String_6;

    parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), TypeVarSet_4, (MR_Integer) 0, Constraint_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Constraint_9,
  MR_Word Stream_10)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_13;

    parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), TypeVarSet_7, VarNamePrint_8, Constraint_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Constraint_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  {
    MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 0))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Word Var_19;
    MR_Box STATE_VARIABLE_U_21_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_output_24, (MR_Integer) 1, Name_12, S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_16_16);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeClassInfo_for_output_24));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (TypeVarSet_7));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (VarNamePrint_8));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_19)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_13)), S_10, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_21_21);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_21_21, STATE_VARIABLE_U_15);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_ngt_2_f_0(
  MR_Word NextToGraphicToken_4,
  MR_Word SymName_5)
{
  {
    MR_String Str_6;
    MR_Box conv0_Str_6;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), NextToGraphicToken_4, SymName_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Str_6);
    Str_6 = ((MR_String) (conv0_Str_6));
    return Str_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_5_p_0(
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word Stream_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), NextToGraphicToken_6, SymName_7, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Box conv0_HeadVar__2_2;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), (MR_Integer) 1, SymName_3, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_HeadVar__2_2);
    HeadVar__2_2 = ((MR_String) (conv0_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(
  MR_Word SymName_5,
  MR_Word Stream_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 1, SymName_5, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_11_11;
    MR_Box STATE_VARIABLE_U_13_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_output_15, (MR_Integer) 1, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_11_11);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (MR_Word) ((MR_Char) 47)), S_7, STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_13_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 8))));
    func_1(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (Arity_6)), S_7, STATE_VARIABLE_U_13_13, STATE_VARIABLE_U_10);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(
  MR_Word SymName_5,
  MR_Word Stream_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 1, SymName_5, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_cons_id_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word NeedsBrackets_6,
  MR_Word ConsId_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), Lang_5, NeedsBrackets_6, ConsId_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) (conv0_String_8));
    return String_8;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_cons_id_6_p_0(
  MR_Word Lang_7,
  MR_Word NeedsBrackets_8,
  MR_Word ConsId_9,
  MR_Word Stream_10)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_13;

    parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), Lang_7, NeedsBrackets_8, ConsId_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(
  MR_Word TypeClassInfo_for_output_153,
  MR_Word Lang_7,
  MR_Word NeedsBrackets_8,
  MR_Word ConsId_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_52,
  MR_Box * STATE_VARIABLE_U_53)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<typeclass_info_cell_constructor>", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
        break;
      case (MR_Integer) 1:
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<type_info_cell_constructor>", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
        break;
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<tabling info>", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<table_io_entry_desc>", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            break;
          case (MR_Integer) 1:
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<deep_profiling_proc_layout>", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));

              switch (NeedsBrackets_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_153, Name_12, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
                  break;
                case (MR_Integer) 0:
                  parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_153, Name_12, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "tuple{}", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
                break;
              case (MR_Integer) 0:
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "{}", S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
                break;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              MR_Integer PredInt_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ShroudedPredProcId_30, (MR_Integer) 0))));
              MR_Integer ProcInt_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ShroudedPredProcId_30, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_U_122_122;
              MR_Box STATE_VARIABLE_U_123_123;
              MR_Box STATE_VARIABLE_U_125_125;
              MR_Box STATE_VARIABLE_U_126_126;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<closure_cons(", S_10, STATE_VARIABLE_U_0_52, &STATE_VARIABLE_U_122_122);
              parse_tree__parse_tree_out_info__add_int_4_p_0(TypeClassInfo_for_output_153, PredInt_32, S_10, STATE_VARIABLE_U_122_122, &STATE_VARIABLE_U_123_123);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) ", ", S_10, STATE_VARIABLE_U_123_123, &STATE_VARIABLE_U_125_125);
              parse_tree__parse_tree_out_info__add_int_4_p_0(TypeClassInfo_for_output_153, ProcInt_33, S_10, STATE_VARIABLE_U_125_125, &STATE_VARIABLE_U_126_126);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) ")>", S_10, STATE_VARIABLE_U_126_126, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_int_4_p_0(TypeClassInfo_for_output_153, Int_16, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_uint_4_p_0(TypeClassInfo_for_output_153, UInt_17, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_18 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int8_4_p_0(TypeClassInfo_for_output_153, Int8_18, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_19 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint8_4_p_0(TypeClassInfo_for_output_153, UInt8_19, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_20 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int16_4_p_0(TypeClassInfo_for_output_153, Int16_20, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_21 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint16_4_p_0(TypeClassInfo_for_output_153, UInt16_21, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_22 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int32_4_p_0(TypeClassInfo_for_output_153, Int32_22, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_23 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint32_4_p_0(TypeClassInfo_for_output_153, UInt32_23, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_24 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int64_4_p_0(TypeClassInfo_for_output_153, Int64_24, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_25 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint64_4_p_0(TypeClassInfo_for_output_153, UInt64_25, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_float_4_p_0(TypeClassInfo_for_output_153, Float_26, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char Char_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));
              MR_String Var_132;

              Var_132 = mercury__term_io__quoted_char_1_f_0(Char_27);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, Var_132, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String Str_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_quoted_string_4_p_0(TypeClassInfo_for_output_153, Str_28, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word IDCKind_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_String Var_129;

              Var_129 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_29);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, Var_129, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              MR_String Type_35 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
              MR_Integer Arity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 3))));
              MR_String ModuleString_37;
              MR_String ArityString_38;
              MR_Word Var_108;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_117;

              ModuleString_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_34);
              mercury__string__int_to_string_2_p_0(Arity_36, &ArityString_38);
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ArityString_38));
                MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_2[1])));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_117));
              }
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Type_35));
                MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) ((MR_String) "."));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_114));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (ModuleString_37));
                MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
                MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
              }
              parse_tree__parse_tree_out_info__add_strings_4_p_0(TypeClassInfo_for_output_153, Var_108, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ClassId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
              MR_Integer InstanceNum_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 3))));
              MR_String InstanceString_41 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 4))));
              MR_Word ClassName_42;
              MR_Integer ClassArity_43;
              MR_Box STATE_VARIABLE_U_87_87;
              MR_Box STATE_VARIABLE_U_89_89;
              MR_Box STATE_VARIABLE_U_90_90;
              MR_Box STATE_VARIABLE_U_92_92;
              MR_Box STATE_VARIABLE_U_93_93;
              MR_Box STATE_VARIABLE_U_95_95;
              MR_Box STATE_VARIABLE_U_97_97;
              MR_Word Var_102;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word ModuleName_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              MR_String ModuleString_152;

              ModuleString_152 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_151);
              ClassName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_39, (MR_Integer) 0))));
              ClassArity_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_39, (MR_Integer) 1))));
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "<base_typeclass_info for ", S_10, STATE_VARIABLE_U_0_52, &STATE_VARIABLE_U_87_87);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) "class_id(", S_10, STATE_VARIABLE_U_87_87, &STATE_VARIABLE_U_89_89);
              parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_153, ClassName_42, S_10, STATE_VARIABLE_U_89_89, &STATE_VARIABLE_U_90_90);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) ", ", S_10, STATE_VARIABLE_U_90_90, &STATE_VARIABLE_U_92_92);
              parse_tree__parse_tree_out_info__add_int_4_p_0(TypeClassInfo_for_output_153, ClassArity_43, S_10, STATE_VARIABLE_U_92_92, &STATE_VARIABLE_U_93_93);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) ")", S_10, STATE_VARIABLE_U_93_93, &STATE_VARIABLE_U_95_95);
              succeeded = (strcmp(ModuleString_152, (MR_String) "some bogus module name") == 0);
              succeeded = !(succeeded);
              if (succeeded)
              {
                MR_Word Var_96;
                MR_Word Var_99;

                {
                  Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (ModuleString_152));
                  MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_String) " from module "));
                  MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
                }
                parse_tree__parse_tree_out_info__add_strings_4_p_0(TypeClassInfo_for_output_153, Var_96, S_10, STATE_VARIABLE_U_95_95, &STATE_VARIABLE_U_97_97);
              }
              else
                STATE_VARIABLE_U_97_97 = STATE_VARIABLE_U_95_95;
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (InstanceNum_40));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (InstanceString_41));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_104));
                MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
              }
              parse_tree__parse_tree_out_info__add_format_5_p_0(TypeClassInfo_for_output_153, (MR_String) ", instance number %d (%s)>", Var_102, S_10, STATE_VARIABLE_U_97_97, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer TIConstNum_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              MR_String Var_76;
              MR_String Var_79;
              MR_String Var_80;

              Var_80 = mercury__string__int_to_string_1_f_0(TIConstNum_45);
              Var_79 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) ">");
              Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", Var_79);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, Var_76, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer TCIConstNum_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              MR_String Var_70;
              MR_String Var_73;
              MR_String Var_74;

              Var_74 = mercury__string__int_to_string_1_f_0(TCIConstNum_46);
              Var_73 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) ">");
              Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", Var_73);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, Var_70, S_10, STATE_VARIABLE_U_0_52, STATE_VARIABLE_U_53);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Integer ConstNum_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              MR_Word SubConsId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
              MR_String Var_60;
              MR_Box STATE_VARIABLE_U_61_61;
              MR_String Var_63;
              MR_String Var_64;
              MR_Box STATE_VARIABLE_U_67_67;

              Var_64 = mercury__string__int_to_string_1_f_0(ConstNum_47);
              Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ", ");
              Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", Var_63);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, Var_60, S_10, STATE_VARIABLE_U_0_52, &STATE_VARIABLE_U_61_61);
              parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_153, Lang_7, (MR_Integer) 1, SubConsId_48, S_10, STATE_VARIABLE_U_61_61, &STATE_VARIABLE_U_67_67);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_153, (MR_String) ">", S_10, STATE_VARIABLE_U_67_67, STATE_VARIABLE_U_53);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word SymName_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_12, (MR_Integer) 1, SymName_5, S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word SymName_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_output_12, (MR_Integer) 1, SymName_5, S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_5_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_16_16);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, PredName_11, S_8, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_13);
  }
  else
  {
    MR_String PredName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_7, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_22, NextToGraphicToken_6, PredName_21, S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(
  MR_Word TypeClassInfo_for_output_26,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_22_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_16_16);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_26, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_output_26, (MR_Integer) 0, Name_11, S_8, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_22_22, STATE_VARIABLE_U_13);
  }
  else
  {
    MR_String Name_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_7, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_output_26, NextToGraphicToken_6, Name_25, S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_state_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word StateVars_9,
  MR_Word Stream_10)
{
  {
    MR_Word TypeInfo_23_23;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_17));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarSet_7));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (VarNamePrint_8));
    }
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0(TypeInfo_23_23, (MR_Word) (Var_14), (MR_String) ", ", (MR_Word) (StateVars_9), Stream_10);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_quantifier_to_string_3_f_0(
  MR_Word TypeVarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word ExistQVars_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), TypeVarSet_5, VarNamePrint_6, ExistQVars_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) (conv0_String_8));
    return String_8;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_quantifier_6_p_0(
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Word Stream_10)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_13;

    parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), TypeVarSet_7, VarNamePrint_8, ExistQVars_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  if ((ExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_15 = STATE_VARIABLE_U_0_14;
  else
  {
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) "some [")), S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_17_17);
    parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_21, TypeVarSet_7, VarNamePrint_8, ExistQVars_9, S_10, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) "] ")), S_10, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_15);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word Detism_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  {
    MR_String Var_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_10 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism_5);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_12)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_det_4_p_0(
  MR_Word Detism_5,
  MR_Word Stream_6)
{
  {
    MR_String Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_UI_9;

    Var_17 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism_5);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]))), ((MR_Box) (Var_17)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_UI_9);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&parse_tree__mercury_to_mercury_vector_common_3[0 + HeadVar__1_1]))->parse_tree__mercury_to_mercury__vector_common_type_3_0__vct_3_f_0;

    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Type_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  {
    MR_Word Term_12;
    MR_Word VarSet_13;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_9, &Term_12);
    VarSet_13 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeVarSet_7);
    parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeClassInfo_for_output_17, VarSet_13, VarNamePrint_8, Term_12, S_10, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Type_9,
  MR_Word Stream_10)
{
  {
    MR_Word Term_23;
    MR_Word VarSet_24;
    MR_Box conv0_STATE_VARIABLE_IO_13;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_9, &Term_23);
    VarSet_24 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7);
    parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), VarSet_24, VarNamePrint_8, Term_23, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String HeadString_9;
      MR_String TailString_10;

      HeadString_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(VarSet_1, (MR_Integer) 0, Type_6);
      TailString_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(VarSet_1, Types_7);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0(HeadString_9, TailString_10);
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String HeadString_9;
      MR_String TailString_10;
      MR_String Var_13;

      HeadString_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(VarSet_1, (MR_Integer) 0, Type_6);
      TailString_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(VarSet_1, Types_7);
      Var_13 = mercury__string__f_43_43_2_f_0(HeadString_9, TailString_10);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_13);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Type_7)
{
  {
    MR_String String_8;
    MR_Word Term_19;
    MR_Word VarSet_20;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_7, &Term_19);
    VarSet_20 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5);
    parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), VarSet_20, VarNamePrint_6, Term_19, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) (conv0_String_8));
    return String_8;
  }
}

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____maybe_exist_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__mercury_to_mercury____Unify____maybe_exist_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____maybe_exist_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__mercury_to_mercury____Compare____maybe_exist_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__mercury_to_mercury__init(void)
{
}

void mercury__parse_tree__mercury_to_mercury__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_maybe_exist_constraints_0);
	MR_register_type_ctor_info(&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_needs_brackets_0);
}

void mercury__parse_tree__mercury_to_mercury__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__mercury_to_mercury__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.mercury_to_mercury.
