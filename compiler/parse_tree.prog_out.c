/*
** Automatically generated from `prog_out.m'
** by the Mercury compiler,
** version rotd-2020-10-02
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


// :- module parse_tree.prog_out.
// :- implementation.

/*
INIT mercury__parse_tree__prog_out__init
ENDINIT
*/

#include "parse_tree.prog_out.mih"


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
#include "getopt_io.mih"
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
#include "require.mih"
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_mangle_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_mangle_cons_0[2];

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_mangle_cons_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0[2];

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0[2];

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__322__1_3_p_0(
  MR_Char LambdaHeadVar__1_100,
  MR_String LambdaHeadVar__2_101,
  MR_String * LambdaHeadVar__3_102);

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_mangle_cons_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_mangle_cons_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_out__write_string_list_lag_4_p_0(
  MR_String Name1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0(
  MR_Word MangleCons_5,
  MR_Word QuoteCons_6,
  MR_Word ConsId_7);

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_mangle_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_mangle_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[1][1];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[1][6];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_3[1][3];


/* sealed */ struct parse_tree__prog_out__vector_common_type_4_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_4_0_s parse_tree__prog_out_vector_common_4[21];

/* sealed */ struct parse_tree__prog_out__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;
  const MR_Word parse_tree__prog_out__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[4];

/* sealed */ struct parse_tree__prog_out__vector_common_type_6_0_s {
  const MR_Word parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;
  const MR_String parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4];



static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_out_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_out__vector_common_type_4_0_s parse_tree__prog_out_vector_common_4[21] = {
  /* row 0 */   {     (MR_String) "promise_exclusive" },
  /* row 1 */   {     (MR_String) "promise_exhaustive" },
  /* row 2 */   {     (MR_String) "promise_exclusive_exhaustive" },
  /* row 3 */   {     (MR_String) "promise" },
  /* row 4 */   {     (MR_String) "promise_exclusive" },
  /* row 5 */   {     (MR_String) "promise_exhaustive" },
  /* row 6 */   {     (MR_String) "promise_exclusive_exhaustive" },
  /* row 7 */   {     (MR_String) "promise" },
  /* row 8 */   {     (MR_String) "det" },
  /* row 9 */   {     (MR_String) "semidet" },
  /* row 10 */   {     (MR_String) "multi" },
  /* row 11 */   {     (MR_String) "nondet" },
  /* row 12 */   {     (MR_String) "cc_multi" },
  /* row 13 */   {     (MR_String) "cc_nondet" },
  /* row 14 */   {     (MR_String) "erroneous" },
  /* row 15 */   {     (MR_String) "failure" },
  /* row 16 */   {     (MR_String) "singleton_vars" },
  /* row 17 */   {     (MR_String) "suspected_occurs_check_failure" },
  /* row 18 */   {     (MR_String) "non_tail_recursive_calls" },
  /* row 19 */   {     (MR_String) "suspicious_recursion" },
  /* row 20 */   {     (MR_String) "no_solution_disjunct" },
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[4] = {
  /* row 0 */
  {
    (MR_String) "promise",
    (MR_Integer) 3
  },
  /* row 1 */
  {
    (MR_String) "promise_exclusive",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "promise_exclusive_exhaustive",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "promise_exhaustive",
    (MR_Integer) 1
  },
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_String) "promise"
  },
  /* row 1 */
  {
    (MR_Integer) 0,
    (MR_String) "promise_exclusive"
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_String) "promise_exhaustive"
  },
  /* row 3 */
  {
    (MR_Integer) 2,
    (MR_String) "promise_exclusive_exhaustive"
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0 = {
  (MR_String) "dont_mangle_cons",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1 = {
  (MR_String) "mangle_cons",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_mangle_cons_0[2] = {
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0,
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_mangle_cons_0[2] = {
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0,
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1
};

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_mangle_cons_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_out__parse_tree__prog_out__type_ctor_info_maybe_mangle_cons_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_out____Unify____maybe_mangle_cons_0_0_10001)),
  ((MR_Box) (parse_tree__prog_out____Compare____maybe_mangle_cons_0_0_10001)),
  (MR_String) "parse_tree.prog_out",
  (MR_String) "maybe_mangle_cons",
  {     parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_mangle_cons_0 },
  {     parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_mangle_cons_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_mangle_cons_0
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0 = {
  (MR_String) "dont_quote_cons",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1 = {
  (MR_String) "quote_cons",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0[2] = {
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0,
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0[2] = {
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0,
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1
};

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_out__parse_tree__prog_out__type_ctor_info_maybe_quote_cons_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001)),
  ((MR_Box) (parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001)),
  (MR_String) "parse_tree.prog_out",
  (MR_String) "maybe_quote_cons",
  {     parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0 },
  {     parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0
};

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__322__1_3_p_0(
  MR_Char LambdaHeadVar__1_100,
  MR_String LambdaHeadVar__2_101,
  MR_String * LambdaHeadVar__3_102)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_100 == (MR_Char) 42);

    if (succeeded)
      mercury__string__append_3_p_2(LambdaHeadVar__2_101, (MR_String) "star", LambdaHeadVar__3_102);
    else
    {
      MR_String CharStr_18;

      mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_100, &CharStr_18);
      mercury__string__append_3_p_2(LambdaHeadVar__2_101, CharStr_18, LambdaHeadVar__3_102);
    }
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
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
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_mangle_cons_0_0(
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
parse_tree__prog_out____Unify____maybe_mangle_cons_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_out__write_string_list_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_24 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0(Var_25);
    else
    {
      MR_String Name2_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
      MR_Word Names_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));

      mercury__io__write_string_3_p_0(Var_25);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      parse_tree__prog_out__write_string_list_lag_4_p_0(Name2_14, Names_15);
    }
  }
}

static void MR_CALL 
parse_tree__prog_out__write_string_list_lag_4_p_0(
  MR_String Name1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0(Name1_1);
    else
    {
      MR_String Name2_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Names_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String next_value_of_Name1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0(Name1_1);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_Name1_1 = Name2_11;
      next_value_of_HeadVar__2_2 = Names_12;
      Name1_1 = next_value_of_Name1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__goal_warning_to_string_1_f_0(
  MR_Word Warning_3)
{
  {
    MR_String Str_4 = ((&parse_tree__prog_out_vector_common_4[16 + Warning_3]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;

    return Str_4;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__can_fail_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "can_fail";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "cannot_fail";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__determinism_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_4[8 + HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__arg_tabling_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "addr";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "promise_implied";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "value";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "output";
    else
    {
      MR_Word ArgTablingMethod_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      switch (ArgTablingMethod_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "addr";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "promise_implied";
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "value";
          break;
      }
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_eval_method_3_p_0(
  MR_Word EvalMethod_4)
{
  {
    MR_String Var_8;

    Var_8 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_4);
    mercury__io__write_string_3_p_0(Var_8);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "normal";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "loop_check";
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "memo";
        break;
      case (MR_Integer) 2:
        {
          MR_Word EntryKind_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          MR_Word IsUnitize_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_String EntryKindStr_9;
          MR_String UnitizeStr_10;
          MR_String Var_12;
          MR_String Var_13;

          switch (EntryKind_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              EntryKindStr_9 = (MR_String) "entry_stores_outputs, ";
              break;
            case (MR_Integer) 2:
              EntryKindStr_9 = (MR_String) "entry_stores_procid_inputs_outputs, ";
              break;
            case (MR_Integer) 1:
              EntryKindStr_9 = (MR_String) "entry_stores_procid_outputs, ";
              break;
          }
          switch (IsUnitize_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              UnitizeStr_10 = (MR_String) "alone";
              break;
            case (MR_Integer) 0:
              UnitizeStr_10 = (MR_String) "unitize";
              break;
          }
          Var_13 = mercury__string__f_43_43_2_f_0(UnitizeStr_10, (MR_String) ")");
          Var_12 = mercury__string__f_43_43_2_f_0(EntryKindStr_9, Var_13);
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", Var_12);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word MinimalMethod_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (MinimalMethod_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_consumer";
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
              break;
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_String) "minimal_model_stack_copy";
              break;
          }
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "normal");
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "loop_check";
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "memo";
        break;
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "io");
        break;
      case (MR_Integer) 3:
        {
          MR_Word MinimalMethod_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (MinimalMethod_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_String) "minimal_model_own_stacks";
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
              break;
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_String) "minimal_model";
              break;
          }
        }
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_purity_prefix_3_p_0(
  MR_Word Purity_4)
{
  switch (Purity_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String String_15;

        switch (Purity_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            String_15 = (MR_String) "impure";
            break;
          case (MR_Integer) 1:
            String_15 = (MR_String) "semipure";
            break;
        }
        mercury__io__write_string_3_p_0(String_15);
        mercury__io__write_string_3_p_0((MR_String) " ");
      }
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__purity_prefix_to_string_1_f_0(
  MR_Word Purity_3)
{
  {
    MR_String String_4;

    switch (Purity_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String PurityName_5;

          switch (Purity_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              PurityName_5 = (MR_String) "impure";
              break;
            case (MR_Integer) 1:
              PurityName_5 = (MR_String) "semipure";
              break;
          }
          String_4 = mercury__string__append_2_f_0(PurityName_5, (MR_String) " ");
        }
        break;
      case (MR_Integer) 0:
        String_4 = (MR_String) "";
        break;
    }
    return String_4;
  }
}

void MR_CALL 
parse_tree__prog_out__write_purity_3_p_0(
  MR_Word Purity_4)
{
  {
    MR_String String_6;

    switch (Purity_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        String_6 = (MR_String) "impure";
        break;
      case (MR_Integer) 0:
        String_6 = (MR_String) "pure";
        break;
      case (MR_Integer) 1:
        String_6 = (MR_String) "semipure";
        break;
    }
    mercury__io__write_string_3_p_0(String_6);
  }
}

MR_bool MR_CALL 
parse_tree__prog_out__purity_name_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__2_2, (MR_String) "pure") == 0))
    {
      *HeadVar__1_1 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__2_2, (MR_String) "impure") == 0))
    {
      *HeadVar__1_1 = (MR_Integer) 2;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__2_2, (MR_String) "semipure") == 0))
    {
      *HeadVar__1_1 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_out__purity_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_String) "impure";
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_String) "pure";
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "semipure";
      break;
  }
}

void MR_CALL 
parse_tree__prog_out__write_pred_or_func_3_p_0(
  MR_Word PorF_4)
{
  {
    MR_String Var_8;

    switch (PorF_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_8 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        Var_8 = (MR_String) "predicate";
        break;
    }
    mercury__io__write_string_3_p_0(Var_8);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "func";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "pred";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "predicate";
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_promise_type_3_p_0(
  MR_Word PromiseType_4)
{
  {
    MR_String Var_8 = ((&parse_tree__prog_out_vector_common_4[4 + PromiseType_4]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;

    mercury__io__write_string_3_p_0(Var_8);
  }
}

void MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_2(
  MR_Word * HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_6[0 + slot_0]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;
      *HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_6[0 + slot_0]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
      cont(cont_env_ptr);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 4));
  }
}

MR_bool MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__2_2, ((&parse_tree__prog_out_vector_common_5[0 + mid_2]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_5[0 + mid_2]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_4[0 + HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0((MR_Integer) 1, (MR_Integer) 0, ConsId_3);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__3_102;

    parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__322__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_102);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_102));
  }
}

static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0(
  MR_Word MangleCons_5,
  MR_Word QuoteCons_6,
  MR_Word ConsId_7)
{
  {
    MR_bool succeeded;
    MR_String String_8;

    switch (MR_tag((MR_Word) ConsId_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_8 = (MR_String) "<typeclass_info_cell_constructor>";
        break;
      case (MR_Integer) 1:
        String_8 = (MR_String) "<type_info_cell_constructor>";
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_67;
          MR_String Var_68;
          MR_String Var_69;
          MR_String Var_71;
          MR_String Var_72;
          MR_Word PredProcId_116 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 2));
          MR_Integer PredId_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_116, (MR_Integer) 0))));
          MR_Integer ProcId_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_116, (MR_Integer) 1))));

          Var_68 = mercury__string__int_to_string_1_f_0(PredId_117);
          Var_72 = mercury__string__int_to_string_1_f_0(ProcId_118);
          Var_71 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) ">");
          Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_71);
          Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
          String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_67);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_59;
              MR_String Var_60;
              MR_String Var_61;
              MR_String Var_63;
              MR_String Var_64;
              MR_Word PredProcId_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Integer PredId_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_119, (MR_Integer) 0))));
              MR_Integer ProcId_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_119, (MR_Integer) 1))));

              Var_60 = mercury__string__int_to_string_1_f_0(PredId_120);
              Var_64 = mercury__string__int_to_string_1_f_0(ProcId_121);
              Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ">");
              Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_63);
              Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Var_61);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_59);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_51;
              MR_String Var_52;
              MR_String Var_53;
              MR_String Var_55;
              MR_String Var_56;
              MR_Word PredProcId_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Integer PredId_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_122, (MR_Integer) 0))));
              MR_Integer ProcId_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_122, (MR_Integer) 1))));

              Var_52 = mercury__string__int_to_string_1_f_0(PredId_123);
              Var_56 = mercury__string__int_to_string_1_f_0(ProcId_124);
              Var_55 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) ">");
              Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_55);
              Var_51 = mercury__string__f_43_43_2_f_0(Var_52, Var_53);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_51);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2))));
              MR_String SymNameString0_12;
              MR_String SymNameString_13;
              MR_String ArityString_20;

              SymNameString0_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_9);
              switch (MangleCons_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SymNameString_13 = SymNameString0_12;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String SymNameString1_19;

                    succeeded = mercury__string__contains_char_2_p_0(SymNameString0_12, (MR_Char) 42);
                    if (succeeded)
                    {
                      MR_Box conv1_SymNameString1_19;

                      mercury__string__foldl_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_out_scalar_common_3[0]), SymNameString0_12, ((MR_Box) ((MR_String) "")), &conv1_SymNameString1_19);
                      SymNameString1_19 = ((MR_String) (conv1_SymNameString1_19));
                    }
                    else
                      SymNameString1_19 = SymNameString0_12;
                    SymNameString_13 = mercury__term_io__escaped_string_1_f_0(SymNameString1_19);
                  }
                  break;
              }
              mercury__string__int_to_string_2_p_0(Arity_10, &ArityString_20);
              switch (QuoteCons_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_109;

                    Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityString_20);
                    String_8 = mercury__string__f_43_43_2_f_0(SymNameString_13, Var_109);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_106;
                    MR_String Var_107;

                    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", ArityString_20);
                    Var_106 = mercury__string__f_43_43_2_f_0(SymNameString_13, Var_107);
                    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_106);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_98;
              MR_Integer Arity_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              Var_98 = mercury__string__int_to_string_1_f_0(Arity_114);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_98);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredProcId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Integer PredId_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_35, (MR_Integer) 0))));
              MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_35, (MR_Integer) 1))));
              MR_String Var_86;
              MR_String Var_87;
              MR_String Var_88;
              MR_String Var_90;
              MR_String Var_91;

              Var_87 = mercury__string__int_to_string_1_f_0(PredId_37);
              Var_91 = mercury__string__int_to_string_1_f_0(ProcId_38);
              Var_90 = mercury__string__f_43_43_2_f_0(Var_91, (MR_String) ">");
              Var_88 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_90);
              Var_86 = mercury__string__f_43_43_2_f_0(Var_87, Var_88);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", Var_86);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              mercury__string__int_to_string_2_p_0(Int_21, &String_8);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              String_8 = mercury__string__uint_to_string_1_f_0(UInt_22);
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_23 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__int8_to_string_1_f_0(Int8_23);
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_24 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__uint8_to_string_1_f_0(UInt8_24);
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_25 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__int16_to_string_1_f_0(Int16_25);
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_26 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__uint16_to_string_1_f_0(UInt16_26);
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_27 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__int32_to_string_1_f_0(Int32_27);
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_28 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__uint32_to_string_1_f_0(UInt32_28);
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_29 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__int64_to_string_1_f_0(Int64_29);
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_30 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__uint64_to_string_1_f_0(UInt64_30);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__float_to_string_1_f_0(Float_31);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char CharConst_32 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__term_io__quoted_char_1_f_0(CharConst_32);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String StringConst_33 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              String_8 = mercury__term_io__quoted_string_1_f_0(StringConst_33);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String Name_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              switch (QuoteCons_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\044", Name_34);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_94;

                    Var_94 = mercury__string__f_43_43_2_f_0(Name_34, (MR_String) "\'");
                    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\140\044", Var_94);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Module_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_String Ctor_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2))));
              MR_String Var_75;
              MR_String Var_76;
              MR_String Var_77;
              MR_String Var_79;
              MR_String Var_80;
              MR_String Var_82;
              MR_String Var_83;
              MR_Integer Arity_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 3))));

              Var_76 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_39);
              Var_83 = mercury__string__int_to_string_1_f_0(Arity_115);
              Var_82 = mercury__string__f_43_43_2_f_0(Var_83, (MR_String) ">");
              Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_82);
              Var_79 = mercury__string__f_43_43_2_f_0(Ctor_40, Var_80);
              Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_79);
              Var_75 = mercury__string__f_43_43_2_f_0(Var_76, Var_77);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_75);
            }
            break;
          case (MR_Integer) 20:
            String_8 = (MR_String) "<base_typeclass_info>";
            break;
          case (MR_Integer) 21:
            String_8 = (MR_String) "<type_info_const>";
            break;
          case (MR_Integer) 22:
            String_8 = (MR_String) "<typeclass_info_const>";
            break;
          case (MR_Integer) 23:
            String_8 = (MR_String) "<ground_term_const>";
            break;
        }
        break;
    }
    return String_8;
  }
}

void MR_CALL 
parse_tree__prog_out__write_class_id_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_13);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_14);
  }
}

void MR_CALL 
parse_tree__prog_out__write_type_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_4);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__type_name_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Name_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Name_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_type_ctor_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_13);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_14);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__type_ctor_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Name_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (Name_3));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (Arity_4));
    }
    HeadVar__2_2 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(Var_5);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_orig_arity_to_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word SNA_5)
{
  {
    MR_String Str_6;
    MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_5, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_5, (MR_Integer) 1))));

    Str_6 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_4, SymName_7, Arity_8);
    return Str_6;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(
  MR_Word PFSymNameArity_3)
{
  {
    MR_String Str_4;
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 1))));
    MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 2))));

    Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_5, SymName_6, Arity_7);
    return Str_4;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  {
    MR_String Str_8;
    MR_Integer OrigArity_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_16;
    MR_String Var_18;

    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_5, &OrigArity_9, Arity_7);
    Var_10 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_5);
    Var_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
    Var_14 = parse_tree__error_util__add_quotes_1_f_0(Var_15);
    Var_18 = mercury__string__int_to_string_1_f_0(OrigArity_9);
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_18);
    Var_13 = mercury__string__f_43_43_2_f_0(Var_14, Var_16);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_13);
    Str_8 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    return Str_8;
  }
}

void MR_CALL 
parse_tree__prog_out__write_module_name_3_p_0(
  MR_Word ModuleName_4)
{
  parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_4);
}

MR_String MR_CALL 
parse_tree__prog_out__module_name_to_escaped_string_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_arity_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_4);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_5);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_arity_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String String_5;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String SymNameString_6;
    MR_String ArityString_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_11;

    SymNameString_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
    mercury__string__int_to_string_2_p_0(Arity_4, &ArityString_7);
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ArityString_7));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (SymNameString_6));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_9));
    }
    mercury__string__append_list_2_p_0(Var_8, &String_5);
    return String_5;
  }
}

void MR_CALL 
parse_tree__prog_out__write_quoted_sym_name_3_p_0(
  MR_Word SymName_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\'");
    parse_tree__prog_out__write_sym_name_3_p_0(SymName_4);
    mercury__io__write_string_3_p_0((MR_String) "\'");
  }
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ModuleSpec_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    parse_tree__prog_out__write_sym_name_3_p_0(ModuleSpec_4);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__term_io__write_escaped_string_3_p_0(Name_5);
  }
  else
  {
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__term_io__write_escaped_string_3_p_0(Name_13);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ModuleSpec_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_5;
      MR_String Var_6;
      MR_String Var_8;

      Var_5 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleSpec_3);
      Var_8 = mercury__term_io__escaped_string_1_f_0(Name_4);
      Var_6 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_8);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_5, Var_6);
    }
    else
    {
      MR_String Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__2_2 = mercury__term_io__escaped_string_1_f_0(Name_9);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_context_4_p_0(
  MR_Word Stream_5,
  MR_Word Context_6)
{
  {
    MR_String ContextMessage_8;

    parse_tree__prog_out__context_to_string_2_p_0(Context_6, &ContextMessage_8);
    mercury__io__write_string_4_p_0(Stream_5, ContextMessage_8);
  }
}

void MR_CALL 
parse_tree__prog_out__write_context_3_p_0(
  MR_Word Context_4)
{
  {
    MR_Word Stream_6;
    MR_String ContextMessage_16;

    mercury__io__output_stream_3_p_0(&Stream_6);
    parse_tree__prog_out__context_to_string_2_p_0(Context_4, &ContextMessage_16);
    mercury__io__write_string_4_p_0(Stream_6, ContextMessage_16);
  }
}

void MR_CALL 
parse_tree__prog_out__context_to_string_2_p_0(
  MR_Word Context_3,
  MR_String * ContextMessage_4)
{
  {
    MR_bool succeeded;
    MR_String FileName_5;
    MR_Integer LineNumber_6;

    mercury__term__context_file_2_p_0(Context_3, &FileName_5);
    mercury__term__context_line_2_p_0(Context_3, &LineNumber_6);
    succeeded = (strcmp(FileName_5, (MR_String) "") == 0);
    if (succeeded)
      *ContextMessage_4 = (MR_String) "";
    else
    {
      MR_String Var_14;
      MR_String Var_22;
      MR_String Var_24;

      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&parse_tree__prog_out_scalar_common_1[0]), (MR_Integer) 3, LineNumber_6, &Var_14);
      Var_22 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ": ");
      Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_22);
      *ContextMessage_4 = mercury__string__f_43_43_2_f_0(FileName_5, Var_24);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_mangle_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_out____Unify____maybe_mangle_cons_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_mangle_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_out____Compare____maybe_mangle_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_out____Unify____maybe_quote_cons_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_out____Compare____maybe_quote_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_out__init(void)
{
}

void mercury__parse_tree__prog_out__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_out__parse_tree__prog_out__type_ctor_info_maybe_mangle_cons_0);
	MR_register_type_ctor_info(&parse_tree__prog_out__parse_tree__prog_out__type_ctor_info_maybe_quote_cons_0);
}

void mercury__parse_tree__prog_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_out__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_out.
