/*
** Automatically generated from `prog_out.m'
** by the Mercury compiler,
** version rotd-2018-01-09
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


// :- module parse_tree.prog_out.
// :- implementation.

/*
INIT mercury__parse_tree__prog_out__init
ENDINIT
*/

#include "parse_tree.prog_out.mih"


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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__344__1_3_p_0(
  MR_Char LambdaHeadVar__1_98,
  MR_String LambdaHeadVar__2_99,
  MR_String * LambdaHeadVar__3_100);

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

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[10][2];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_4[1][3];


/* sealed */ struct parse_tree__prog_out__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[16];

/* sealed */ struct parse_tree__prog_out__vector_common_type_6_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4];

/* sealed */ struct parse_tree__prog_out__vector_common_type_7_0_s {
  const MR_Word parse_tree__prog_out__vector_common_type_7_0__vct_7_f_0;
  const MR_String parse_tree__prog_out__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_7_0_s parse_tree__prog_out_vector_common_7[4];



static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_out_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_out_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise_exclusive"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_out_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[2])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise_exhaustive"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_out_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[2])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise_exclusive_exhaustive"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_out_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[2])))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_out_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[16] = {
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
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4] = {
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

static /* final */ const struct parse_tree__prog_out__vector_common_type_7_0_s parse_tree__prog_out_vector_common_7[4] = {
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0 = {
  (MR_String) "dont_mangle_cons",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1 = {
  (MR_String) "mangle_cons",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_out____Unify____maybe_mangle_cons_0_0_10001)),
  ((MR_Box) (parse_tree__prog_out____Compare____maybe_mangle_cons_0_0_10001)),
  (MR_String) "parse_tree.prog_out",
  (MR_String) "maybe_mangle_cons",
  {     parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_mangle_cons_0 },
  {     parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_mangle_cons_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_mangle_cons_0
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0 = {
  (MR_String) "dont_quote_cons",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1 = {
  (MR_String) "quote_cons",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001)),
  ((MR_Box) (parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001)),
  (MR_String) "parse_tree.prog_out",
  (MR_String) "maybe_quote_cons",
  {     parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0 },
  {     parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0
};

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__344__1_3_p_0(
  MR_Char LambdaHeadVar__1_98,
  MR_String LambdaHeadVar__2_99,
  MR_String * LambdaHeadVar__3_100)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_98 == (MR_Char) 42);

    if (succeeded)
    {
      mercury__string__append_3_p_2(LambdaHeadVar__2_99, (MR_String) "star", LambdaHeadVar__3_100);
    }
    else
    {
      MR_String CharStr_18;

      mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_98, &CharStr_18);
      mercury__string__append_3_p_2(LambdaHeadVar__2_99, CharStr_18, LambdaHeadVar__3_100);
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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

MR_String MR_CALL 
parse_tree__prog_out__goal_warning_to_string_1_f_0(
  MR_Word Warning_3)
{
  {
    MR_String Str_4;

    switch (Warning_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Str_4 = (MR_String) "non_tail_recursive_calls";
        break;
      case (MR_Integer) 0:
        Str_4 = (MR_String) "singleton_vars";
        break;
    }
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
    MR_String HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_5[8 + HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;

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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_String) "output";
    else
    {
      MR_Word ArgTablingMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

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
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "memo";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word EntryKind_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word IsUnitize_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
          MR_String EntryKindStr_8;
          MR_String UnitizeStr_9;
          MR_String Var_11;
          MR_String Var_12;

          switch (EntryKind_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              EntryKindStr_8 = (MR_String) "entry_stores_outputs, ";
              break;
            case (MR_Integer) 2:
              EntryKindStr_8 = (MR_String) "entry_stores_procid_inputs_outputs, ";
              break;
            case (MR_Integer) 1:
              EntryKindStr_8 = (MR_String) "entry_stores_procid_outputs, ";
              break;
          }
          switch (IsUnitize_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              UnitizeStr_9 = (MR_String) "alone";
              break;
            case (MR_Integer) 0:
              UnitizeStr_9 = (MR_String) "unitize";
              break;
          }
          Var_12 = mercury__string__f_43_43_2_f_0(UnitizeStr_9, (MR_String) ")");
          Var_11 = mercury__string__f_43_43_2_f_0(EntryKindStr_8, Var_12);
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", Var_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MinimalMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

          switch (MinimalMethod_3) {
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
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "normal");
            }
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "loop_check";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "memo";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "io");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MinimalMethod_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

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
parse_tree__prog_out__type_name_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer _Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Name_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_type_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer _Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_4);
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
      *HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_7[0 + slot_0]))->parse_tree__prog_out__vector_common_type_7_0__vct_7_f_0;
      *HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_7[0 + slot_0]))->parse_tree__prog_out__vector_common_type_7_0__vct_7_f_1;
      cont(cont_env_ptr);
      slot_0 = (slot_0 + (MR_Integer) 1);
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
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__2_2, ((&parse_tree__prog_out_vector_common_6[0 + mid_2]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_6[0 + mid_2]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
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
    MR_String HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_5[4 + HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;

    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_promise_type_3_p_0(
  MR_Word PromiseType_4)
{
  {
    MR_String Var_8 = ((&parse_tree__prog_out_vector_common_5[0 + PromiseType_4]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;

    mercury__io__write_string_3_p_0(Var_8);
  }
}

void MR_CALL 
parse_tree__prog_out__write_string_list_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String Var_26 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__io__write_string_3_p_0(Var_26);
      else
      {
        MR_Word Var_48;
        MR_String Var_49;

        mercury__io__write_string_3_p_0(Var_26);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        Var_49 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
        if ((Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__io__write_string_3_p_0(Var_49);
        else
        {
          MR_Word next_value_of_HeadVar__1_1;

          mercury__io__write_string_3_p_0(Var_49);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Var_48;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    break;
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
    MR_String conv0_LambdaHeadVar__3_100;

    parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__344__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_LambdaHeadVar__3_100);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_100));
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
          MR_String Var_65;
          MR_String Var_66;
          MR_String Var_67;
          MR_String Var_69;
          MR_String Var_70;
          MR_Word PredProcId_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), ConsId_7, (MR_Integer) 0)));
          MR_Integer PredId_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_114, (MR_Integer) 0)));
          MR_Integer ProcId_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_114, (MR_Integer) 1)));

          Var_66 = mercury__string__int_to_string_1_f_0(PredId_115);
          Var_70 = mercury__string__int_to_string_1_f_0(ProcId_116);
          Var_69 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) ">");
          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_69);
          Var_65 = mercury__string__f_43_43_2_f_0(Var_66, Var_67);
          String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_65);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_57;
              MR_String Var_58;
              MR_String Var_59;
              MR_String Var_61;
              MR_String Var_62;
              MR_Word PredProcId_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));
              MR_Integer PredId_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_117, (MR_Integer) 0)));
              MR_Integer ProcId_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_117, (MR_Integer) 1)));

              Var_58 = mercury__string__int_to_string_1_f_0(PredId_118);
              Var_62 = mercury__string__int_to_string_1_f_0(ProcId_119);
              Var_61 = mercury__string__f_43_43_2_f_0(Var_62, (MR_String) ">");
              Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_61);
              Var_57 = mercury__string__f_43_43_2_f_0(Var_58, Var_59);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_57);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_49;
              MR_String Var_50;
              MR_String Var_51;
              MR_String Var_53;
              MR_String Var_54;
              MR_Word PredProcId_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));
              MR_Integer PredId_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_120, (MR_Integer) 0)));
              MR_Integer ProcId_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_120, (MR_Integer) 1)));

              Var_50 = mercury__string__int_to_string_1_f_0(PredId_121);
              Var_54 = mercury__string__int_to_string_1_f_0(ProcId_122);
              Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ">");
              Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_53);
              Var_49 = mercury__string__f_43_43_2_f_0(Var_50, Var_51);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_49);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));
              MR_Integer Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2)));
              MR_String SymNameString0_12;
              MR_String SymNameString_13;
              MR_String ArityString_20;
              MR_Word _TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 3)));

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

                      mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_out_scalar_common_4[0], SymNameString0_12, ((MR_Box) ((MR_String) "")), &conv1_SymNameString1_19);
                      SymNameString1_19 = ((MR_String) conv1_SymNameString1_19);
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
                    MR_String Var_107;

                    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityString_20);
                    String_8 = mercury__string__f_43_43_2_f_0(SymNameString_13, Var_107);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_104;
                    MR_String Var_105;

                    Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", ArityString_20);
                    Var_104 = mercury__string__f_43_43_2_f_0(SymNameString_13, Var_105);
                    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_104);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_96;
              MR_Integer Arity_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              Var_96 = mercury__string__int_to_string_1_f_0(Arity_112);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_96);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredProcId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));
              MR_Integer PredId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_33, (MR_Integer) 0)));
              MR_Integer ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_33, (MR_Integer) 1)));
              MR_String Var_84;
              MR_String Var_85;
              MR_String Var_86;
              MR_String Var_88;
              MR_String Var_89;

              Var_85 = mercury__string__int_to_string_1_f_0(PredId_35);
              Var_89 = mercury__string__int_to_string_1_f_0(ProcId_36);
              Var_88 = mercury__string__f_43_43_2_f_0(Var_89, (MR_String) ">");
              Var_86 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_88);
              Var_84 = mercury__string__f_43_43_2_f_0(Var_85, Var_86);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", Var_84);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              mercury__string__int_to_string_2_p_0(Int_21, &String_8);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_22 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

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
              MR_Float Float_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__string__float_to_string_1_f_0(Float_29);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Char CharConst_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__term_io__quoted_char_1_f_0(CharConst_30);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String StringConst_31 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              String_8 = mercury__term_io__quoted_string_1_f_0(StringConst_31);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_String Name_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              switch (QuoteCons_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\044", Name_32);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_92;

                    Var_92 = mercury__string__f_43_43_2_f_0(Name_32, (MR_String) "\'");
                    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\140\044", Var_92);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Module_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));
              MR_String Ctor_38 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2)));
              MR_String Var_73;
              MR_String Var_74;
              MR_String Var_75;
              MR_String Var_77;
              MR_String Var_78;
              MR_String Var_80;
              MR_String Var_81;
              MR_Integer Arity_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 3)));

              Var_74 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_37);
              Var_81 = mercury__string__int_to_string_1_f_0(Arity_113);
              Var_80 = mercury__string__f_43_43_2_f_0(Var_81, (MR_String) ">");
              Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_80);
              Var_77 = mercury__string__f_43_43_2_f_0(Ctor_38, Var_78);
              Var_75 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_77);
              Var_73 = mercury__string__f_43_43_2_f_0(Var_74, Var_75);
              String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_73);
            }
            break;
          case (MR_Integer) 18:
            String_8 = (MR_String) "<base_typeclass_info>";
            break;
          case (MR_Integer) 19:
            String_8 = (MR_String) "<type_info_const>";
            break;
          case (MR_Integer) 20:
            String_8 = (MR_String) "<typeclass_info_const>";
            break;
          case (MR_Integer) 21:
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
    MR_Word Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

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
    MR_Word Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (Name_3));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (Arity_4));
    }
    HeadVar__2_2 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(Var_5);
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_type_ctor_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_13);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_14);
  }
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
parse_tree__prog_out__write_module_name_3_p_0(
  MR_Word ModuleName_4)
{
  parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_4);
}

void MR_CALL 
parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_p_0(
  MR_Word SimpleCallId_3,
  MR_Word * SNA_4)
{
  {
    MR_Word PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), SimpleCallId_3, (MR_Integer) 0)));
    MR_Word SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), SimpleCallId_3, (MR_Integer) 1)));
    MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SimpleCallId_3, (MR_Integer) 2)));
    MR_Integer OrigArity_8;

    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_5, &OrigArity_8, Arity_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *SNA_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigArity_8));
    }
  }
}

void MR_CALL 
parse_tree__prog_out__write_simple_call_id_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word SymName_7,
  MR_Integer Arity_8)
{
  {
    MR_String Str_10;

    Str_10 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(PredOrFunc_6, SymName_7, Arity_8);
    mercury__io__write_string_3_p_0(Str_10);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;
    MR_Word SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

    HeadVar__3_3 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(PredOrFunc_4, SymName_5, Arity_6);
    return HeadVar__3_3;
  }
}

void MR_CALL 
parse_tree__prog_out__write_simple_call_id_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_String Str_9;

    Str_9 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(PredOrFunc_5, Name_6, Arity_7);
    mercury__io__write_string_3_p_0(Str_9);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word PredOrFunc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(PredOrFunc_3, SymName_4, Arity_5);
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_simple_call_id_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PredOrFunc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_String Str_8;

    Str_8 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(PredOrFunc_4, Name_5, Arity_6);
    mercury__io__write_string_3_p_0(Str_8);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  {
    MR_bool succeeded;
    MR_String Str_8;
    MR_String Name_9;
    MR_Word Pieces_12;

    Name_9 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_6);
    succeeded = mercury__string__prefix_2_p_0(Name_9, (MR_String) "promise__");
    if (succeeded)
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[3]);
    }
    else
    {
      succeeded = mercury__string__prefix_2_p_0(Name_9, (MR_String) "promise_exclusive__");
      if (succeeded)
      {
        Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[5]);
      }
      else
      {
        succeeded = mercury__string__prefix_2_p_0(Name_9, (MR_String) "promise_exhaustive__");
        if (succeeded)
        {
          Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[7]);
        }
        else
        {
          succeeded = mercury__string__prefix_2_p_0(Name_9, (MR_String) "promise_exclusive_exhaustive__");
          if (succeeded)
          {
            Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[9]);
          }
          else
          {
            MR_Word AdjustedSymNameAndArity_14;
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word Var_25;
            MR_Integer OrigArity_38;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_5, &OrigArity_38, Arity_7);
            {
              AdjustedSymNameAndArity_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AdjustedSymNameAndArity_14, 0) = ((MR_Box) (SymName_6));
              MR_hl_field(MR_mktag(0), AdjustedSymNameAndArity_14, 1) = ((MR_Box) (OrigArity_38));
            }
            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (PredOrFunc_5));
            }
            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (AdjustedSymNameAndArity_14));
            }
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (Var_23));
              MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_24));
            }
          }
        }
      }
    }
    Str_8 = parse_tree__error_util__error_pieces_to_string_1_f_0(Pieces_12);
    return Str_8;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String String_5;
    MR_Word SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_String SymNameString_6;
    MR_String ArityString_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_11;

    SymNameString_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
    mercury__string__int_to_string_2_p_0(Arity_4, &ArityString_7);
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ArityString_7));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
parse_tree__prog_out__write_sym_name_and_arity_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_out__write_sym_name_3_p_0(Name_4);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_5);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ModuleSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
      MR_String Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

      HeadVar__2_2 = mercury__term_io__escaped_string_1_f_0(Name_9);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word ModuleSpec_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_String Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_out__write_sym_name_3_p_0(ModuleSpec_4);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__term_io__write_escaped_string_3_p_0(Name_5);
  }
  else
  {
    MR_String Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    mercury__term_io__write_escaped_string_3_p_0(Name_13);
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

      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &parse_tree__prog_out_scalar_common_1[0], (MR_Integer) 3, LineNumber_6, &Var_14);
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

    succeeded = parse_tree__prog_out____Unify____maybe_mangle_cons_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__prog_out____Compare____maybe_mangle_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__prog_out____Unify____maybe_quote_cons_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__prog_out____Compare____maybe_quote_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
