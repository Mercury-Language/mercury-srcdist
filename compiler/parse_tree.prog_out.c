/*
** Automatically generated from `prog_out.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module parse_tree.prog_out. */
/* :- implementation. */

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




static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0[2];

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0[2];

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
  MR_Box parse_tree__prog_out__wrapper_arg_1,
  MR_Box parse_tree__prog_out__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * parse_tree__prog_out__wrapper_arg_1,
  MR_Box parse_tree__prog_out__wrapper_arg_2,
  MR_Box parse_tree__prog_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__308__1_3_p_0(
  MR_Char parse_tree__prog_out__LambdaHeadVar__1_89,
  MR_String parse_tree__prog_out__LambdaHeadVar__2_90,
  MR_String * parse_tree__prog_out__LambdaHeadVar__3_91);

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
  MR_Word parse_tree__prog_out__HeadVar__2_2,
  MR_Word parse_tree__prog_out__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
  MR_Word parse_tree__prog_out__HeadVar__2_1,
  MR_Word parse_tree__prog_out__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0_1(
  MR_Box parse_tree__prog_out__closure_arg,
  MR_Box parse_tree__prog_out__wrapper_arg_1,
  MR_Box parse_tree__prog_out__wrapper_arg_2,
  MR_Box * parse_tree__prog_out__wrapper_arg_3);

static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0(
  MR_Word parse_tree__prog_out__QuoteCons_4,
  MR_Word parse_tree__prog_out__ConsId_5);


static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[1][1];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[10][2];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_7[1][6];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_8[1][3];


/* sealed */ struct parse_tree__prog_out__vector_common_type_3_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_3_0_s parse_tree__prog_out_vector_common_3[20];

/* sealed */ struct parse_tree__prog_out__vector_common_type_4_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;
  const MR_Word parse_tree__prog_out__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_4_0_s parse_tree__prog_out_vector_common_4[4];

/* sealed */ struct parse_tree__prog_out__vector_common_type_5_0_s {
  const MR_Word parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;
  const MR_String parse_tree__prog_out__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[4];

/* sealed */ struct parse_tree__prog_out__vector_common_type_6_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4];



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

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_7[1][6] = {
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

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_8[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_out_scalar_common_7[0])),
    ((MR_Box) (parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_out__vector_common_type_3_0_s parse_tree__prog_out_vector_common_3[20] = {
  /* row 0 */   {     (MR_String) "promise_exclusive" },
  /* row 1 */   {     (MR_String) "promise_exhaustive" },
  /* row 2 */   {     (MR_String) "promise_exclusive_exhaustive" },
  /* row 3 */   {     (MR_String) "promise" },
  /* row 4 */   {     (MR_String) "promise_exclusive" },
  /* row 5 */   {     (MR_String) "promise_exhaustive" },
  /* row 6 */   {     (MR_String) "promise_exclusive_exhaustive" },
  /* row 7 */   {     (MR_String) "promise" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     (MR_String) "float" },
  /* row 10 */   {     (MR_String) "string" },
  /* row 11 */   {     (MR_String) "character" },
  /* row 12 */   {     (MR_String) "det" },
  /* row 13 */   {     (MR_String) "semidet" },
  /* row 14 */   {     (MR_String) "multi" },
  /* row 15 */   {     (MR_String) "nondet" },
  /* row 16 */   {     (MR_String) "cc_multi" },
  /* row 17 */   {     (MR_String) "cc_nondet" },
  /* row 18 */   {     (MR_String) "erroneous" },
  /* row 19 */   {     (MR_String) "failure" },
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_4_0_s parse_tree__prog_out_vector_common_4[4] = {
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

static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[4] = {
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

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4] = {
  /* row 0 */
  {
    (MR_String) "character",
    (MR_Integer) 3
  },
  /* row 1 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "int",
    (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "string",
    (MR_Integer) 2
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
  MR_Box parse_tree__prog_out__wrapper_arg_1,
  MR_Box parse_tree__prog_out__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    {
      parse_tree__prog_out__succeeded = parse_tree__prog_out____Unify____maybe_quote_cons_0_0(((MR_Word) parse_tree__prog_out__wrapper_arg_1), ((MR_Word) parse_tree__prog_out__wrapper_arg_2));
    }
    return parse_tree__prog_out__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * parse_tree__prog_out__wrapper_arg_1,
  MR_Box parse_tree__prog_out__wrapper_arg_2,
  MR_Box parse_tree__prog_out__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_out__conv0_HeadVar__1_1;

    {
      parse_tree__prog_out____Compare____maybe_quote_cons_0_0(&parse_tree__prog_out__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_out__wrapper_arg_2), ((MR_Word) parse_tree__prog_out__wrapper_arg_3));
    }
    *parse_tree__prog_out__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_out__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__308__1_3_p_0(
  MR_Char parse_tree__prog_out__LambdaHeadVar__1_89,
  MR_String parse_tree__prog_out__LambdaHeadVar__2_90,
  MR_String * parse_tree__prog_out__LambdaHeadVar__3_91)
{
  {
    MR_bool parse_tree__prog_out__succeeded = (parse_tree__prog_out__LambdaHeadVar__1_89 == (MR_Char) 42);

    if (parse_tree__prog_out__succeeded)
      {
        {
          mercury__string__append_3_p_2(parse_tree__prog_out__LambdaHeadVar__2_90, (MR_String) "star", parse_tree__prog_out__LambdaHeadVar__3_91);
        }
      }
    else
      {
        MR_String parse_tree__prog_out__CharStr_15;

        {
          mercury__string__char_to_string_2_p_0(parse_tree__prog_out__LambdaHeadVar__1_89, &parse_tree__prog_out__CharStr_15);
        }
        {
          mercury__string__append_3_p_2(parse_tree__prog_out__LambdaHeadVar__2_90, parse_tree__prog_out__CharStr_15, parse_tree__prog_out__LambdaHeadVar__3_91);
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
  MR_Word parse_tree__prog_out__HeadVar__2_2,
  MR_Word parse_tree__prog_out__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Integer parse_tree__prog_out__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_out__HeadVar__2_2;
    MR_Integer parse_tree__prog_out__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_out__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_out__HeadVar__1_1, parse_tree__prog_out__Cast_HeadVar1_4, parse_tree__prog_out__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
  MR_Word parse_tree__prog_out__HeadVar__2_1,
  MR_Word parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded = (parse_tree__prog_out__HeadVar__2_1 == parse_tree__prog_out__HeadVar__2_2);

    return parse_tree__prog_out__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0_1(
  MR_Box parse_tree__prog_out__closure_arg,
  MR_Box parse_tree__prog_out__wrapper_arg_1,
  MR_Box parse_tree__prog_out__wrapper_arg_2,
  MR_Box * parse_tree__prog_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_out__closure = parse_tree__prog_out__closure_arg;
    MR_String parse_tree__prog_out__conv0_LambdaHeadVar__3_91;

    {
      parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__308__1_3_p_0(((MR_Char) (MR_Word) parse_tree__prog_out__wrapper_arg_1), ((MR_String) parse_tree__prog_out__wrapper_arg_2), &parse_tree__prog_out__conv0_LambdaHeadVar__3_91);
    }
    *parse_tree__prog_out__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_out__conv0_LambdaHeadVar__3_91));
  }
}

static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0(
  MR_Word parse_tree__prog_out__QuoteCons_4,
  MR_Word parse_tree__prog_out__ConsId_5)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__String_6;

    switch (MR_tag((MR_Word) parse_tree__prog_out__ConsId_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_out__String_6 = (MR_String) "<typeclass_info_cell_constructor>";
        break;
      case (MR_Integer) 1:
        parse_tree__prog_out__String_6 = (MR_String) "<type_info_cell_constructor>";
        break;
      case (MR_Integer) 2:
        {
          MR_String parse_tree__prog_out__V_56_56;
          MR_String parse_tree__prog_out__V_57_57;
          MR_String parse_tree__prog_out__V_58_58;
          MR_String parse_tree__prog_out__V_60_60;
          MR_String parse_tree__prog_out__V_61_61;
          MR_Word parse_tree__prog_out__PredProcId_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__ConsId_5, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_out__PredId_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_105, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_out__ProcId_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_105, (MR_Integer) 1)));

          {
            parse_tree__prog_out__V_57_57 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_106);
          }
          {
            parse_tree__prog_out__V_61_61 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_107);
          }
          {
            parse_tree__prog_out__V_60_60 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_61_61, (MR_String) ">");
          }
          {
            parse_tree__prog_out__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", parse_tree__prog_out__V_60_60);
          }
          {
            parse_tree__prog_out__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_57_57, parse_tree__prog_out__V_58_58);
          }
          {
            parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", parse_tree__prog_out__V_56_56);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__prog_out__V_48_48;
              MR_String parse_tree__prog_out__V_49_49;
              MR_String parse_tree__prog_out__V_50_50;
              MR_String parse_tree__prog_out__V_52_52;
              MR_String parse_tree__prog_out__V_53_53;
              MR_Word parse_tree__prog_out__PredProcId_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_out__PredId_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_108, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_out__ProcId_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_108, (MR_Integer) 1)));

              {
                parse_tree__prog_out__V_49_49 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_109);
              }
              {
                parse_tree__prog_out__V_53_53 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_110);
              }
              {
                parse_tree__prog_out__V_52_52 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_53_53, (MR_String) ">");
              }
              {
                parse_tree__prog_out__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", parse_tree__prog_out__V_52_52);
              }
              {
                parse_tree__prog_out__V_48_48 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_49_49, parse_tree__prog_out__V_50_50);
              }
              {
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", parse_tree__prog_out__V_48_48);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String parse_tree__prog_out__V_40_40;
              MR_String parse_tree__prog_out__V_41_41;
              MR_String parse_tree__prog_out__V_42_42;
              MR_String parse_tree__prog_out__V_44_44;
              MR_String parse_tree__prog_out__V_45_45;
              MR_Word parse_tree__prog_out__PredProcId_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_out__PredId_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_111, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_out__ProcId_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_111, (MR_Integer) 1)));

              {
                parse_tree__prog_out__V_41_41 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_112);
              }
              {
                parse_tree__prog_out__V_45_45 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_113);
              }
              {
                parse_tree__prog_out__V_44_44 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_45_45, (MR_String) ">");
              }
              {
                parse_tree__prog_out__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", parse_tree__prog_out__V_44_44);
              }
              {
                parse_tree__prog_out__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_41_41, parse_tree__prog_out__V_42_42);
              }
              {
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", parse_tree__prog_out__V_40_40);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_out__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_out__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 2)));
              MR_String parse_tree__prog_out__SymNameString0_10;
              MR_String parse_tree__prog_out__SymNameString1_16;
              MR_String parse_tree__prog_out__SymNameString_17;
              MR_String parse_tree__prog_out__ArityString_18;
              MR_Word parse_tree__prog_out___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 3)));

              {
                parse_tree__prog_out__SymNameString0_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__SymName_7);
              }
              {
                parse_tree__prog_out__succeeded = mercury__string__contains_char_2_p_0(parse_tree__prog_out__SymNameString0_10, (MR_Char) 42);
              }
              if (parse_tree__prog_out__succeeded)
                {
                  MR_Box parse_tree__prog_out__conv1_SymNameString1_16;

                  {
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_out_scalar_common_8[0], parse_tree__prog_out__SymNameString0_10, ((MR_Box) ((MR_String) "")), &parse_tree__prog_out__conv1_SymNameString1_16);
                  }
                  parse_tree__prog_out__SymNameString1_16 = ((MR_String) parse_tree__prog_out__conv1_SymNameString1_16);
                }
              else
                parse_tree__prog_out__SymNameString1_16 = parse_tree__prog_out__SymNameString0_10;
              {
                parse_tree__prog_out__SymNameString_17 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__SymNameString1_16);
              }
              {
                mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Arity_8, &parse_tree__prog_out__ArityString_18);
              }
              switch (parse_tree__prog_out__QuoteCons_4) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String parse_tree__prog_out__V_98_98;

                    {
                      parse_tree__prog_out__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__prog_out__ArityString_18);
                    }
                    {
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__SymNameString_17, parse_tree__prog_out__V_98_98);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String parse_tree__prog_out__V_95_95;
                    MR_String parse_tree__prog_out__V_96_96;

                    {
                      parse_tree__prog_out__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", parse_tree__prog_out__ArityString_18);
                    }
                    {
                      parse_tree__prog_out__V_95_95 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__SymNameString_17, parse_tree__prog_out__V_96_96);
                    }
                    {
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__prog_out__V_95_95);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String parse_tree__prog_out__V_87_87;
              MR_Integer parse_tree__prog_out__Arity_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

              {
                parse_tree__prog_out__V_87_87 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__Arity_103);
              }
              {
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", parse_tree__prog_out__V_87_87);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__prog_out__PredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_out__PredId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_24, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_out__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_24, (MR_Integer) 1)));
              MR_String parse_tree__prog_out__V_75_75;
              MR_String parse_tree__prog_out__V_76_76;
              MR_String parse_tree__prog_out__V_77_77;
              MR_String parse_tree__prog_out__V_79_79;
              MR_String parse_tree__prog_out__V_80_80;

              {
                parse_tree__prog_out__V_76_76 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_26);
              }
              {
                parse_tree__prog_out__V_80_80 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_27);
              }
              {
                parse_tree__prog_out__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_80_80, (MR_String) ">");
              }
              {
                parse_tree__prog_out__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", parse_tree__prog_out__V_79_79);
              }
              {
                parse_tree__prog_out__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_76_76, parse_tree__prog_out__V_77_77);
              }
              {
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", parse_tree__prog_out__V_75_75);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__prog_out__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

              {
                mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Int_19, &parse_tree__prog_out__String_6);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float parse_tree__prog_out__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

              {
                parse_tree__prog_out__String_6 = mercury__string__float_to_string_1_f_0(parse_tree__prog_out__Float_20);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char parse_tree__prog_out__CharConst_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

              {
                parse_tree__prog_out__String_6 = mercury__term_io__quoted_char_1_f_0(parse_tree__prog_out__CharConst_21);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String parse_tree__prog_out__StringConst_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

              {
                parse_tree__prog_out__String_6 = mercury__term_io__quoted_string_1_f_0(parse_tree__prog_out__StringConst_22);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String parse_tree__prog_out__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

              switch (parse_tree__prog_out__QuoteCons_4) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "\044", parse_tree__prog_out__Name_23);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String parse_tree__prog_out__V_83_83;

                    {
                      parse_tree__prog_out__V_83_83 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__Name_23, (MR_String) "\'");
                    }
                    {
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140\044", parse_tree__prog_out__V_83_83);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word parse_tree__prog_out__Module_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
              MR_String parse_tree__prog_out__Ctor_29 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 2)));
              MR_String parse_tree__prog_out__V_64_64;
              MR_String parse_tree__prog_out__V_65_65;
              MR_String parse_tree__prog_out__V_66_66;
              MR_String parse_tree__prog_out__V_68_68;
              MR_String parse_tree__prog_out__V_69_69;
              MR_String parse_tree__prog_out__V_71_71;
              MR_String parse_tree__prog_out__V_72_72;
              MR_Integer parse_tree__prog_out__Arity_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 3)));

              {
                parse_tree__prog_out__V_65_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__Module_28);
              }
              {
                parse_tree__prog_out__V_72_72 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__Arity_104);
              }
              {
                parse_tree__prog_out__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_72_72, (MR_String) ">");
              }
              {
                parse_tree__prog_out__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__prog_out__V_71_71);
              }
              {
                parse_tree__prog_out__V_68_68 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__Ctor_29, parse_tree__prog_out__V_69_69);
              }
              {
                parse_tree__prog_out__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__prog_out__V_68_68);
              }
              {
                parse_tree__prog_out__V_64_64 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_65_65, parse_tree__prog_out__V_66_66);
              }
              {
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", parse_tree__prog_out__V_64_64);
              }
            }
            break;
          case (MR_Integer) 11:
            parse_tree__prog_out__String_6 = (MR_String) "<base_typeclass_info>";
            break;
          case (MR_Integer) 12:
            parse_tree__prog_out__String_6 = (MR_String) "<type_info_const>";
            break;
          case (MR_Integer) 13:
            parse_tree__prog_out__String_6 = (MR_String) "<typeclass_info_const>";
            break;
          case (MR_Integer) 14:
            parse_tree__prog_out__String_6 = (MR_String) "<ground_term_const>";
            break;
        }
        break;
    }
    return parse_tree__prog_out__String_6;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__can_fail_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    switch (parse_tree__prog_out__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "can_fail";
        break;
      case (MR_Integer) 1:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "cannot_fail";
        break;
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__determinism_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[12 + parse_tree__prog_out__HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;

    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__arg_tabling_method_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    switch (parse_tree__prog_out__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "addr";
        break;
      case (MR_Integer) 2:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_implied";
        break;
      case (MR_Integer) 0:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "value";
        break;
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "output";
    else
      {
        MR_Word parse_tree__prog_out__ArgTablingMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

        switch (parse_tree__prog_out__ArgTablingMethod_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "addr";
            break;
          case (MR_Integer) 2:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_implied";
            break;
          case (MR_Integer) 0:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "value";
            break;
        }
      }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_eval_method_3_p_0(
  MR_Word parse_tree__prog_out__EvalMethod_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__V_8_8;

    {
      parse_tree__prog_out__V_8_8 = parse_tree__prog_out__eval_method_to_string_1_f_0(parse_tree__prog_out__EvalMethod_4);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    switch (MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__prog_out__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "normal";
            break;
          case (MR_Integer) 1:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "loop_check";
            break;
          case (MR_Integer) 2:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "memo";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_out__EntryKind_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word parse_tree__prog_out__IsUnitize_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
          MR_String parse_tree__prog_out__EntryKindStr_8;
          MR_String parse_tree__prog_out__UnitizeStr_9;
          MR_String parse_tree__prog_out__V_11_11;
          MR_String parse_tree__prog_out__V_12_12;

          switch (parse_tree__prog_out__EntryKind_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_outputs, ";
              break;
            case (MR_Integer) 2:
              parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_procid_inputs_outputs, ";
              break;
            case (MR_Integer) 1:
              parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_procid_outputs, ";
              break;
          }
          switch (parse_tree__prog_out__IsUnitize_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              parse_tree__prog_out__UnitizeStr_9 = (MR_String) "alone";
              break;
            case (MR_Integer) 0:
              parse_tree__prog_out__UnitizeStr_9 = (MR_String) "unitize";
              break;
          }
          {
            parse_tree__prog_out__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__UnitizeStr_9, (MR_String) ")");
          }
          {
            parse_tree__prog_out__V_11_11 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__EntryKindStr_8, parse_tree__prog_out__V_12_12);
          }
          {
            parse_tree__prog_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", parse_tree__prog_out__V_11_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_out__MinimalMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

          switch (parse_tree__prog_out__MinimalMethod_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_consumer";
              break;
            case (MR_Integer) 2:
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
              break;
            case (MR_Integer) 0:
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_stack_copy";
              break;
          }
        }
        break;
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    switch (MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__prog_out__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "normal");
              }
            }
            break;
          case (MR_Integer) 1:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "loop_check";
            break;
          case (MR_Integer) 2:
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "memo";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "io");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_out__MinimalMethod_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

          switch (parse_tree__prog_out__MinimalMethod_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks";
              break;
            case (MR_Integer) 2:
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
              break;
            case (MR_Integer) 0:
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model";
              break;
          }
        }
        break;
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__purity_prefix_to_string_1_f_0(
  MR_Word parse_tree__prog_out__Purity_3)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__String_4;

    switch (parse_tree__prog_out__Purity_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String parse_tree__prog_out__PurityName_5;

          switch (parse_tree__prog_out__Purity_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              parse_tree__prog_out__PurityName_5 = (MR_String) "impure";
              break;
            case (MR_Integer) 1:
              parse_tree__prog_out__PurityName_5 = (MR_String) "semipure";
              break;
          }
          {
            parse_tree__prog_out__String_4 = mercury__string__append_2_f_0(parse_tree__prog_out__PurityName_5, (MR_String) " ");
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__prog_out__String_4 = (MR_String) "";
        break;
    }
    return parse_tree__prog_out__String_4;
  }
}

void MR_CALL 
parse_tree__prog_out__write_purity_prefix_3_p_0(
  MR_Word parse_tree__prog_out__Purity_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    switch (parse_tree__prog_out__Purity_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String parse_tree__prog_out__String_15;

          switch (parse_tree__prog_out__Purity_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              parse_tree__prog_out__String_15 = (MR_String) "impure";
              break;
            case (MR_Integer) 1:
              parse_tree__prog_out__String_15 = (MR_String) "semipure";
              break;
          }
          {
            mercury__io__write_string_3_p_0(parse_tree__prog_out__String_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_out__purity_name_2_p_1(
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
  MR_String parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "pure") == 0))
      {
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 0;
        parse_tree__prog_out__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "impure") == 0))
      {
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 2;
        parse_tree__prog_out__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "semipure") == 0))
      {
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 1;
        parse_tree__prog_out__succeeded = MR_TRUE;
      }
    else
      parse_tree__prog_out__succeeded = MR_FALSE;
    return parse_tree__prog_out__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_out__purity_name_2_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1,
  MR_String * parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    switch (parse_tree__prog_out__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "impure";
        break;
      case (MR_Integer) 0:
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "pure";
        break;
      case (MR_Integer) 1:
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "semipure";
        break;
    }
  }
}

void MR_CALL 
parse_tree__prog_out__write_purity_3_p_0(
  MR_Word parse_tree__prog_out__Purity_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__String_6;

    switch (parse_tree__prog_out__Purity_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__prog_out__String_6 = (MR_String) "impure";
        break;
      case (MR_Integer) 0:
        parse_tree__prog_out__String_6 = (MR_String) "pure";
        break;
      case (MR_Integer) 1:
        parse_tree__prog_out__String_6 = (MR_String) "semipure";
        break;
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__String_6);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_str_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    switch (parse_tree__prog_out__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "func";
        break;
      case (MR_Integer) 0:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "pred";
        break;
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    switch (parse_tree__prog_out__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "predicate";
        break;
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_pred_or_func_3_p_0(
  MR_Word parse_tree__prog_out__PorF_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__V_8_8;

    switch (parse_tree__prog_out__PorF_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__prog_out__V_8_8 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        parse_tree__prog_out__V_8_8 = (MR_String) "predicate";
        break;
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_out__builtin_type_to_string_2_p_1(
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
  MR_String parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Integer parse_tree__prog_out__lo_0;
    MR_Integer parse_tree__prog_out__hi_1;
    MR_Integer parse_tree__prog_out__mid_2;
    MR_Integer parse_tree__prog_out__result_3;

    /* binary string simple lookup switch */
    parse_tree__prog_out__lo_0 = (MR_Integer) 0;
    parse_tree__prog_out__hi_1 = (MR_Integer) 3;
    do
      {
        parse_tree__prog_out__mid_2 = (((parse_tree__prog_out__lo_0 + parse_tree__prog_out__hi_1)) / (MR_Integer) 2);
        parse_tree__prog_out__result_3 = MR_strcmp(parse_tree__prog_out__HeadVar__2_2, ((&parse_tree__prog_out_vector_common_6[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0);
        if ((parse_tree__prog_out__result_3 == (MR_Integer) 0))
          {
            *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_6[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
            parse_tree__prog_out__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((parse_tree__prog_out__result_3 < (MR_Integer) 0))
          parse_tree__prog_out__hi_1 = (parse_tree__prog_out__mid_2 - (MR_Integer) 1);
        else
          parse_tree__prog_out__lo_0 = (parse_tree__prog_out__mid_2 + (MR_Integer) 1);
      }
    while ((parse_tree__prog_out__lo_0 <= parse_tree__prog_out__hi_1));
    parse_tree__prog_out__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__prog_out__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_out__builtin_type_to_string_2_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1,
  MR_String * parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    *parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[8 + parse_tree__prog_out__HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__type_name_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;
    MR_Word parse_tree__prog_out__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(parse_tree__prog_out__Name_3);
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_type_name_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out___Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_2(
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
  MR_String * parse_tree__prog_out__HeadVar__2_2,
  MR_Cont parse_tree__prog_out__cont,
  void * parse_tree__prog_out__cont_env_ptr)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    {
      MR_Integer parse_tree__prog_out__slot_0 = (MR_Integer) 0;

      do
        {
          *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_5[0 + parse_tree__prog_out__slot_0]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;
          *parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_5[0 + parse_tree__prog_out__slot_0]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_1;
          {
            parse_tree__prog_out__cont(parse_tree__prog_out__cont_env_ptr);
          }
          parse_tree__prog_out__slot_0 = (parse_tree__prog_out__slot_0 + (MR_Integer) 1);
        }
      while ((parse_tree__prog_out__slot_0 < (MR_Integer) 4));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_1(
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
  MR_String parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Integer parse_tree__prog_out__lo_0;
    MR_Integer parse_tree__prog_out__hi_1;
    MR_Integer parse_tree__prog_out__mid_2;
    MR_Integer parse_tree__prog_out__result_3;

    /* binary string simple lookup switch */
    parse_tree__prog_out__lo_0 = (MR_Integer) 0;
    parse_tree__prog_out__hi_1 = (MR_Integer) 3;
    do
      {
        parse_tree__prog_out__mid_2 = (((parse_tree__prog_out__lo_0 + parse_tree__prog_out__hi_1)) / (MR_Integer) 2);
        parse_tree__prog_out__result_3 = MR_strcmp(parse_tree__prog_out__HeadVar__2_2, ((&parse_tree__prog_out_vector_common_4[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0);
        if ((parse_tree__prog_out__result_3 == (MR_Integer) 0))
          {
            *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_4[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_1;
            parse_tree__prog_out__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((parse_tree__prog_out__result_3 < (MR_Integer) 0))
          parse_tree__prog_out__hi_1 = (parse_tree__prog_out__mid_2 - (MR_Integer) 1);
        else
          parse_tree__prog_out__lo_0 = (parse_tree__prog_out__mid_2 + (MR_Integer) 1);
      }
    while ((parse_tree__prog_out__lo_0 <= parse_tree__prog_out__hi_1));
    parse_tree__prog_out__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__prog_out__succeeded;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[4 + parse_tree__prog_out__HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;

    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_promise_type_3_p_0(
  MR_Word parse_tree__prog_out__PromiseType_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__V_8_8 = ((&parse_tree__prog_out_vector_common_3[0 + parse_tree__prog_out__PromiseType_4]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;

    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_out__write_string_list_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_out__succeeded;

        if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__prog_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
            MR_String parse_tree__prog_out__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

            if ((parse_tree__prog_out__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__io__write_string_3_p_0(parse_tree__prog_out__V_26_26);
              }
            else
              {
                MR_Word parse_tree__prog_out__V_48_48;
                MR_String parse_tree__prog_out__V_49_49;

                {
                  mercury__io__write_string_3_p_0(parse_tree__prog_out__V_26_26);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                parse_tree__prog_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_25_25, (MR_Integer) 0)));
                parse_tree__prog_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_25_25, (MR_Integer) 1)));
                if ((parse_tree__prog_out__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    mercury__io__write_string_3_p_0(parse_tree__prog_out__V_49_49);
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_49_49);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__prog_out__HeadVar__1__tmp_copy_1 = parse_tree__prog_out__V_48_48;

                      parse_tree__prog_out__HeadVar__1_1 = parse_tree__prog_out__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(
  MR_Word parse_tree__prog_out__ConsId_3)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    {
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0((MR_Integer) 0, parse_tree__prog_out__ConsId_3);
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(
  MR_Word parse_tree__prog_out__ConsId_3)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    {
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0((MR_Integer) 1, parse_tree__prog_out__ConsId_3);
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_class_id_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_14);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__type_ctor_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;
    MR_Word parse_tree__prog_out__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__prog_out__V_5_5;

    {
      parse_tree__prog_out__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_out__V_5_5, 0) = ((MR_Box) (parse_tree__prog_out__Name_3));
      MR_hl_field(MR_mktag(0), parse_tree__prog_out__V_5_5, 1) = ((MR_Box) (parse_tree__prog_out__Arity_4));
    }
    {
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(parse_tree__prog_out__V_5_5);
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_type_ctor_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_14);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__module_name_to_escaped_string_1_f_0(
  MR_Word parse_tree__prog_out__ModuleName_3)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    {
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(parse_tree__prog_out__ModuleName_3);
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_module_name_3_p_0(
  MR_Word parse_tree__prog_out__ModuleName_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    {
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__ModuleName_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_p_0(
  MR_Word parse_tree__prog_out__SimpleCallId_3,
  MR_Word * parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_out__OrigArity_5;
    MR_Word parse_tree__prog_out__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 2)));

    {
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_out__PredOrFunc_6, &parse_tree__prog_out__OrigArity_5, parse_tree__prog_out__Arity_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_out__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_out__SymName_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_out__OrigArity_5));
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_3_f_0(
  MR_Word parse_tree__prog_out__PredOrFunc_5,
  MR_Word parse_tree__prog_out__SymName_6,
  MR_Integer parse_tree__prog_out__Arity_7)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__Str_8;
    MR_String parse_tree__prog_out__Name_9;
    MR_Word parse_tree__prog_out__Pieces_12;

    {
      parse_tree__prog_out__Name_9 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_out__SymName_6);
    }
    {
      parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise__");
    }
    if (parse_tree__prog_out__succeeded)
      {
        parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[3]);
      }
    else
      {
        {
          parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exclusive__");
        }
        if (parse_tree__prog_out__succeeded)
          {
            parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[5]);
          }
        else
          {
            {
              parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exhaustive__");
            }
            if (parse_tree__prog_out__succeeded)
              {
                parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[7]);
              }
            else
              {
                {
                  parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exclusive_exhaustive__");
                }
                if (parse_tree__prog_out__succeeded)
                  {
                    parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[9]);
                  }
                else
                  {
                    MR_Word parse_tree__prog_out__AdjustedSymNameAndArity_14;
                    MR_Word parse_tree__prog_out__V_23_23;
                    MR_Word parse_tree__prog_out__V_24_24;
                    MR_Word parse_tree__prog_out__V_25_25;
                    MR_Integer parse_tree__prog_out__OrigArity_35;

                    {
                      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_out__PredOrFunc_5, &parse_tree__prog_out__OrigArity_35, parse_tree__prog_out__Arity_7);
                    }
                    {
                      parse_tree__prog_out__AdjustedSymNameAndArity_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_out__AdjustedSymNameAndArity_14, 0) = ((MR_Box) (parse_tree__prog_out__SymName_6));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_out__AdjustedSymNameAndArity_14, 1) = ((MR_Box) (parse_tree__prog_out__OrigArity_35));
                    }
                    {
                      parse_tree__prog_out__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_23_23, 1) = ((MR_Box) (parse_tree__prog_out__PredOrFunc_5));
                    }
                    {
                      parse_tree__prog_out__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_25_25, 1) = ((MR_Box) (parse_tree__prog_out__AdjustedSymNameAndArity_14));
                    }
                    {
                      parse_tree__prog_out__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_24_24, 0) = ((MR_Box) (parse_tree__prog_out__V_25_25));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__Pieces_12, 0) = ((MR_Box) (parse_tree__prog_out__V_23_23));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_out__V_24_24));
                    }
                  }
              }
          }
      }
    {
      parse_tree__prog_out__Str_8 = parse_tree__error_util__error_pieces_to_string_1_f_0(parse_tree__prog_out__Pieces_12);
    }
    return parse_tree__prog_out__Str_8;
  }
}

void MR_CALL 
parse_tree__prog_out__write_simple_call_id_5_p_0(
  MR_Word parse_tree__prog_out__PredOrFunc_6,
  MR_Word parse_tree__prog_out__SymName_7,
  MR_Integer parse_tree__prog_out__Arity_8)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__Str_10;

    {
      parse_tree__prog_out__Str_10 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_6, parse_tree__prog_out__SymName_7, parse_tree__prog_out__Arity_8);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_10);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_2_f_0(
  MR_Word parse_tree__prog_out__PredOrFunc_4,
  MR_Word parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__3_3;
    MR_Word parse_tree__prog_out__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 1)));

    {
      parse_tree__prog_out__HeadVar__3_3 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_4, parse_tree__prog_out__SymName_5, parse_tree__prog_out__Arity_6);
    }
    return parse_tree__prog_out__HeadVar__3_3;
  }
}

void MR_CALL 
parse_tree__prog_out__write_simple_call_id_4_p_0(
  MR_Word parse_tree__prog_out__PredOrFunc_5,
  MR_Word parse_tree__prog_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 1)));
    MR_String parse_tree__prog_out__Str_9;

    {
      parse_tree__prog_out__Str_9 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_5, parse_tree__prog_out__Name_6, parse_tree__prog_out__Arity_7);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_9);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;
    MR_Word parse_tree__prog_out__PredOrFunc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__prog_out__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_out__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 2)));

    {
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_3, parse_tree__prog_out__SymName_4, parse_tree__prog_out__Arity_5);
    }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_simple_call_id_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__PredOrFunc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__prog_out__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_out__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 2)));
    MR_String parse_tree__prog_out__Str_8;

    {
      parse_tree__prog_out__Str_8 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_4, parse_tree__prog_out__Name_5, parse_tree__prog_out__Arity_6);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_8);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__String_5;
    MR_Word parse_tree__prog_out__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
    MR_String parse_tree__prog_out__SymNameString_6;
    MR_String parse_tree__prog_out__ArityString_7;
    MR_Word parse_tree__prog_out__V_8_8;
    MR_Word parse_tree__prog_out__V_9_9;
    MR_Word parse_tree__prog_out__V_11_11;

    {
      parse_tree__prog_out__SymNameString_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__SymName_3);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Arity_4, &parse_tree__prog_out__ArityString_7);
    }
    {
      parse_tree__prog_out__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_11_11, 0) = ((MR_Box) (parse_tree__prog_out__ArityString_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_out__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_9_9, 1) = ((MR_Box) (parse_tree__prog_out__V_11_11));
    }
    {
      parse_tree__prog_out__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_8_8, 0) = ((MR_Box) (parse_tree__prog_out__SymNameString_6));
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_8_8, 1) = ((MR_Box) (parse_tree__prog_out__V_9_9));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__prog_out__V_8_8, &parse_tree__prog_out__String_5);
    }
    return parse_tree__prog_out__String_5;
  }
}

void MR_CALL 
parse_tree__prog_out__write_quoted_sym_name_3_p_0(
  MR_Word parse_tree__prog_out__SymName_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\'");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__SymName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'");
    }
  }
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_and_arity_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_Word parse_tree__prog_out__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_out__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_5);
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_out__ModuleSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_out__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_out__V_5_5;
        MR_String parse_tree__prog_out__V_6_6;
        MR_String parse_tree__prog_out__V_8_8;

        {
          parse_tree__prog_out__V_5_5 = parse_tree__prog_out__module_name_to_escaped_string_1_f_0(parse_tree__prog_out__ModuleSpec_3);
        }
        {
          parse_tree__prog_out__V_8_8 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__Name_4);
        }
        {
          parse_tree__prog_out__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__prog_out__V_8_8);
        }
        {
          parse_tree__prog_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_5_5, parse_tree__prog_out__V_6_6);
        }
      }
    else
      {
        MR_String parse_tree__prog_out__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

        {
          parse_tree__prog_out__HeadVar__2_2 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__Name_9);
        }
      }
    return parse_tree__prog_out__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_3_p_0(
  MR_Word parse_tree__prog_out__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_out__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_out__ModuleSpec_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_out__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

        {
          parse_tree__prog_out__write_module_name_3_p_0(parse_tree__prog_out__ModuleSpec_4);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
        {
          mercury__term_io__write_escaped_string_3_p_0(parse_tree__prog_out__Name_5);
        }
      }
    else
      {
        MR_String parse_tree__prog_out__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__term_io__write_escaped_string_3_p_0(parse_tree__prog_out__Name_13);
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_out__context_to_string_2_p_0(
  MR_Word parse_tree__prog_out__Context_3,
  MR_String * parse_tree__prog_out__ContextMessage_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__FileName_5;
    MR_Integer parse_tree__prog_out__LineNumber_6;

    {
      mercury__term__context_file_2_p_0(parse_tree__prog_out__Context_3, &parse_tree__prog_out__FileName_5);
    }
    {
      mercury__term__context_line_2_p_0(parse_tree__prog_out__Context_3, &parse_tree__prog_out__LineNumber_6);
    }
    parse_tree__prog_out__succeeded = (strcmp(parse_tree__prog_out__FileName_5, (MR_String) "") == 0);
    if (parse_tree__prog_out__succeeded)
      *parse_tree__prog_out__ContextMessage_4 = (MR_String) "";
    else
      {
        MR_String parse_tree__prog_out__V_14_14;
        MR_String parse_tree__prog_out__V_22_22;
        MR_String parse_tree__prog_out__V_24_24;

        {
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &parse_tree__prog_out_scalar_common_1[0], (MR_Integer) 3, parse_tree__prog_out__LineNumber_6, &parse_tree__prog_out__V_14_14);
        }
        {
          parse_tree__prog_out__V_22_22 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_14_14, (MR_String) ": ");
        }
        {
          parse_tree__prog_out__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", parse_tree__prog_out__V_22_22);
        }
        {
          *parse_tree__prog_out__ContextMessage_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__FileName_5, parse_tree__prog_out__V_24_24);
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_out__write_context_3_p_0(
  MR_Word parse_tree__prog_out__Context_4)
{
  {
    MR_bool parse_tree__prog_out__succeeded;
    MR_String parse_tree__prog_out__ContextMessage_6;

    {
      parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_out__Context_4, &parse_tree__prog_out__ContextMessage_6);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_out__ContextMessage_6);
    }
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

	MR_register_type_ctor_info(&parse_tree__prog_out__parse_tree__prog_out__type_ctor_info_maybe_quote_cons_0);
}

void mercury__parse_tree__prog_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_out. */
