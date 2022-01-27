/*
** Automatically generated from `prog_out.m'
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


/* :- module parse_tree.prog_out. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_out__init
ENDINIT
*/

#include "parse_tree.prog_out.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 101 "parse_tree.prog_out.c"
static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0;

#line 104 "parse_tree.prog_out.c"
static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1;

#line 107 "parse_tree.prog_out.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0[2];

#line 110 "parse_tree.prog_out.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0[2];

#line 113 "parse_tree.prog_out.c"
static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0[2];

#line 116 "parse_tree.prog_out.c"
static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
#line 119 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_1,
#line 121 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_2);

#line 124 "parse_tree.prog_out.c"
static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
#line 127 "parse_tree.prog_out.c"
  MR_Box * parse_tree__prog_out__wrapper_arg_1,
#line 129 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_2,
#line 131 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_3);

#line 314 "prog_out.m"
static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__314__1_3_p_0(
#line 314 "prog_out.m"
  MR_Char parse_tree__prog_out__LambdaHeadVar__1_89,
#line 314 "prog_out.m"
  MR_String parse_tree__prog_out__LambdaHeadVar__2_90,
#line 314 "prog_out.m"
  MR_String * parse_tree__prog_out__LambdaHeadVar__3_91);

#line 298 "prog_out.m"
static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
#line 298 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2,
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__3_3);

#line 298 "prog_out.m"
static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_1,
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2);

#line 311 "prog_out.m"
static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0_1(
#line 311 "prog_out.m"
  MR_Box parse_tree__prog_out__closure_arg,
#line 311 "prog_out.m"
  MR_Box parse_tree__prog_out__wrapper_arg_1,
#line 311 "prog_out.m"
  MR_Box parse_tree__prog_out__wrapper_arg_2,
#line 311 "prog_out.m"
  MR_Box * parse_tree__prog_out__wrapper_arg_3);

#line 302 "prog_out.m"
static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0(
#line 302 "prog_out.m"
  MR_Word parse_tree__prog_out__QuoteCons_4,
#line 302 "prog_out.m"
  MR_Word parse_tree__prog_out__ConsId_5);


static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[2][1];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[10][2];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_7[1][6];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_8[1][3];


#line 415 "prog_out.m"
/* sealed */ struct parse_tree__prog_out__vector_common_type_3_0_s {
#line 415 "prog_out.m"
  const MR_String parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;
#line 415 "prog_out.m"
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_3_0_s parse_tree__prog_out_vector_common_3[20];

#line 415 "prog_out.m"
/* sealed */ struct parse_tree__prog_out__vector_common_type_4_0_s {
#line 415 "prog_out.m"
  const MR_String parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0;
#line 415 "prog_out.m"
  const MR_Word parse_tree__prog_out__vector_common_type_4_0__vct_4_f_1;
#line 415 "prog_out.m"
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_4_0_s parse_tree__prog_out_vector_common_4[4];

#line 415 "prog_out.m"
/* sealed */ struct parse_tree__prog_out__vector_common_type_5_0_s {
#line 415 "prog_out.m"
  const MR_Word parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;
#line 415 "prog_out.m"
  const MR_String parse_tree__prog_out__vector_common_type_5_0__vct_5_f_1;
#line 415 "prog_out.m"
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_5_0_s parse_tree__prog_out_vector_common_5[4];

#line 427 "prog_out.m"
/* sealed */ struct parse_tree__prog_out__vector_common_type_6_0_s {
#line 427 "prog_out.m"
  const MR_String parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;
#line 427 "prog_out.m"
  const MR_Word parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
#line 427 "prog_out.m"
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[4];



static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 422 "parse_tree.prog_out.c"
static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0 = {
  (MR_String) "dont_quote_cons",
  (MR_Integer) 0
};

#line 428 "parse_tree.prog_out.c"
static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1 = {
  (MR_String) "quote_cons",
  (MR_Integer) 1
};

#line 434 "parse_tree.prog_out.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_value_ordered_maybe_quote_cons_0[2] = {
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0,
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1
};

#line 440 "parse_tree.prog_out.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0[2] = {
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0,
  &parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1
};

#line 446 "parse_tree.prog_out.c"
static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 452 "parse_tree.prog_out.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_out__parse_tree__prog_out__type_ctor_info_maybe_quote_cons_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 469 "parse_tree.prog_out.c"
static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
#line 472 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_1,
#line 474 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_2)
#line 476 "parse_tree.prog_out.c"
{
#line 478 "parse_tree.prog_out.c"
  {
#line 480 "parse_tree.prog_out.c"
    MR_bool parse_tree__prog_out__succeeded;

#line 483 "parse_tree.prog_out.c"
    {
#line 485 "parse_tree.prog_out.c"
      parse_tree__prog_out__succeeded = parse_tree__prog_out____Unify____maybe_quote_cons_0_0(((MR_Word) parse_tree__prog_out__wrapper_arg_1), ((MR_Word) parse_tree__prog_out__wrapper_arg_2));
    }
#line 488 "parse_tree.prog_out.c"
    return parse_tree__prog_out__succeeded;
#line 490 "parse_tree.prog_out.c"
  }
#line 492 "parse_tree.prog_out.c"
}

#line 495 "parse_tree.prog_out.c"
static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
#line 498 "parse_tree.prog_out.c"
  MR_Box * parse_tree__prog_out__wrapper_arg_1,
#line 500 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_2,
#line 502 "parse_tree.prog_out.c"
  MR_Box parse_tree__prog_out__wrapper_arg_3)
#line 504 "parse_tree.prog_out.c"
{
#line 506 "parse_tree.prog_out.c"
  {
#line 508 "parse_tree.prog_out.c"
    MR_Word parse_tree__prog_out__conv0_HeadVar__1_1;

#line 511 "parse_tree.prog_out.c"
    {
#line 513 "parse_tree.prog_out.c"
      parse_tree__prog_out____Compare____maybe_quote_cons_0_0(&parse_tree__prog_out__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_out__wrapper_arg_2), ((MR_Word) parse_tree__prog_out__wrapper_arg_3));
    }
#line 516 "parse_tree.prog_out.c"
    *parse_tree__prog_out__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_out__conv0_HeadVar__1_1));
#line 518 "parse_tree.prog_out.c"
  }
#line 520 "parse_tree.prog_out.c"
}

#line 314 "prog_out.m"
static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__314__1_3_p_0(
#line 314 "prog_out.m"
  MR_Char parse_tree__prog_out__LambdaHeadVar__1_89,
#line 314 "prog_out.m"
  MR_String parse_tree__prog_out__LambdaHeadVar__2_90,
#line 314 "prog_out.m"
  MR_String * parse_tree__prog_out__LambdaHeadVar__3_91)
#line 314 "prog_out.m"
{
#line 314 "prog_out.m"
  {
#line 314 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded = (parse_tree__prog_out__LambdaHeadVar__1_89 == (MR_Char) 42);

#line 314 "prog_out.m"
    if (parse_tree__prog_out__succeeded)
#line 313 "prog_out.m"
      {
#line 313 "prog_out.m"
        {
#line 313 "prog_out.m"
          mercury__string__append_3_p_2(parse_tree__prog_out__LambdaHeadVar__2_90, (MR_String) "star", parse_tree__prog_out__LambdaHeadVar__3_91);
        }
#line 313 "prog_out.m"
      }
#line 314 "prog_out.m"
    else
#line 315 "prog_out.m"
      {
#line 315 "prog_out.m"
        MR_String parse_tree__prog_out__CharStr_15;

#line 315 "prog_out.m"
        {
#line 315 "prog_out.m"
          mercury__string__char_to_string_2_p_0(parse_tree__prog_out__LambdaHeadVar__1_89, &parse_tree__prog_out__CharStr_15);
        }
#line 316 "prog_out.m"
        {
#line 316 "prog_out.m"
          mercury__string__append_3_p_2(parse_tree__prog_out__LambdaHeadVar__2_90, parse_tree__prog_out__CharStr_15, parse_tree__prog_out__LambdaHeadVar__3_91);
        }
#line 315 "prog_out.m"
      }
#line 314 "prog_out.m"
  }
#line 314 "prog_out.m"
}

#line 298 "prog_out.m"
static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
#line 298 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2,
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__3_3)
#line 298 "prog_out.m"
{
#line 298 "prog_out.m"
  {
#line 298 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 298 "prog_out.m"
    MR_Integer parse_tree__prog_out__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_out__HeadVar__2_2;
#line 298 "prog_out.m"
    MR_Integer parse_tree__prog_out__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_out__HeadVar__3_3;

#line 298 "prog_out.m"
    {
#line 298 "prog_out.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_out__HeadVar__1_1, parse_tree__prog_out__Cast_HeadVar1_4, parse_tree__prog_out__Cast_HeadVar2_5);
    }
#line 298 "prog_out.m"
  }
#line 298 "prog_out.m"
}

#line 298 "prog_out.m"
static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_1,
#line 298 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2)
#line 298 "prog_out.m"
{
#line 613 "parse_tree.prog_out.c"
  {
#line 615 "parse_tree.prog_out.c"
    MR_bool parse_tree__prog_out__succeeded = (parse_tree__prog_out__HeadVar__2_1 == parse_tree__prog_out__HeadVar__2_2);

#line 618 "parse_tree.prog_out.c"
    return parse_tree__prog_out__succeeded;
#line 620 "parse_tree.prog_out.c"
  }
#line 298 "prog_out.m"
}

#line 311 "prog_out.m"
static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0_1(
#line 311 "prog_out.m"
  MR_Box parse_tree__prog_out__closure_arg,
#line 311 "prog_out.m"
  MR_Box parse_tree__prog_out__wrapper_arg_1,
#line 311 "prog_out.m"
  MR_Box parse_tree__prog_out__wrapper_arg_2,
#line 311 "prog_out.m"
  MR_Box * parse_tree__prog_out__wrapper_arg_3)
#line 311 "prog_out.m"
{
#line 311 "prog_out.m"
  {
#line 311 "prog_out.m"
    MR_Box parse_tree__prog_out__closure = parse_tree__prog_out__closure_arg;
#line 311 "prog_out.m"
    MR_String parse_tree__prog_out__conv0_LambdaHeadVar__3_91;

#line 311 "prog_out.m"
    {
#line 311 "prog_out.m"
      parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__314__1_3_p_0(((MR_Char) (MR_Word) parse_tree__prog_out__wrapper_arg_1), ((MR_String) parse_tree__prog_out__wrapper_arg_2), &parse_tree__prog_out__conv0_LambdaHeadVar__3_91);
    }
#line 311 "prog_out.m"
    *parse_tree__prog_out__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_out__conv0_LambdaHeadVar__3_91));
#line 311 "prog_out.m"
  }
#line 311 "prog_out.m"
}

#line 302 "prog_out.m"
static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0(
#line 302 "prog_out.m"
  MR_Word parse_tree__prog_out__QuoteCons_4,
#line 302 "prog_out.m"
  MR_Word parse_tree__prog_out__ConsId_5)
#line 302 "prog_out.m"
{
#line 307 "prog_out.m"
  {
#line 307 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 307 "prog_out.m"
    MR_String parse_tree__prog_out__String_6;

#line 307 "prog_out.m"
#line 307 "prog_out.m"
    switch (MR_tag((MR_Word) parse_tree__prog_out__ConsId_5)) {
#line 307 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 307 "prog_out.m"
      case (MR_Integer) 0:
#line 375 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "<typeclass_info_cell_constructor>";
#line 307 "prog_out.m"
        break;
#line 307 "prog_out.m"
      case (MR_Integer) 1:
#line 372 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "<type_info_cell_constructor>";
#line 307 "prog_out.m"
        break;
#line 307 "prog_out.m"
      case (MR_Integer) 2:
#line 386 "prog_out.m"
        {
#line 386 "prog_out.m"
          MR_String parse_tree__prog_out__V_56_56;
#line 386 "prog_out.m"
          MR_String parse_tree__prog_out__V_57_57;
#line 386 "prog_out.m"
          MR_String parse_tree__prog_out__V_58_58;
#line 386 "prog_out.m"
          MR_String parse_tree__prog_out__V_60_60;
#line 386 "prog_out.m"
          MR_String parse_tree__prog_out__V_61_61;
#line 386 "prog_out.m"
          MR_Word parse_tree__prog_out__PredProcId_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__ConsId_5, (MR_Integer) 0)));
#line 386 "prog_out.m"
          MR_Integer parse_tree__prog_out__PredId_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_105, (MR_Integer) 0)));
#line 386 "prog_out.m"
          MR_Integer parse_tree__prog_out__ProcId_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_105, (MR_Integer) 1)));

#line 389 "prog_out.m"
          {
#line 389 "prog_out.m"
            parse_tree__prog_out__V_57_57 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_106);
          }
#line 390 "prog_out.m"
          {
#line 390 "prog_out.m"
            parse_tree__prog_out__V_61_61 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_107);
          }
#line 390 "prog_out.m"
          {
#line 390 "prog_out.m"
            parse_tree__prog_out__V_60_60 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_61_61, (MR_String) ">");
          }
#line 390 "prog_out.m"
          {
#line 390 "prog_out.m"
            parse_tree__prog_out__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", parse_tree__prog_out__V_60_60);
          }
#line 389 "prog_out.m"
          {
#line 389 "prog_out.m"
            parse_tree__prog_out__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_57_57, parse_tree__prog_out__V_58_58);
          }
#line 389 "prog_out.m"
          {
#line 389 "prog_out.m"
            parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", parse_tree__prog_out__V_56_56);
          }
#line 386 "prog_out.m"
        }
#line 307 "prog_out.m"
        break;
#line 307 "prog_out.m"
      case (MR_Integer) 3:
#line 307 "prog_out.m"
#line 307 "prog_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 0)))) {
#line 307 "prog_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 307 "prog_out.m"
          case (MR_Integer) 0:
#line 392 "prog_out.m"
            {
#line 392 "prog_out.m"
              MR_String parse_tree__prog_out__V_48_48;
#line 392 "prog_out.m"
              MR_String parse_tree__prog_out__V_49_49;
#line 392 "prog_out.m"
              MR_String parse_tree__prog_out__V_50_50;
#line 392 "prog_out.m"
              MR_String parse_tree__prog_out__V_52_52;
#line 392 "prog_out.m"
              MR_String parse_tree__prog_out__V_53_53;
#line 392 "prog_out.m"
              MR_Word parse_tree__prog_out__PredProcId_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
#line 392 "prog_out.m"
              MR_Integer parse_tree__prog_out__PredId_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_108, (MR_Integer) 0)));
#line 392 "prog_out.m"
              MR_Integer parse_tree__prog_out__ProcId_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_108, (MR_Integer) 1)));

#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                parse_tree__prog_out__V_49_49 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_109);
              }
#line 396 "prog_out.m"
              {
#line 396 "prog_out.m"
                parse_tree__prog_out__V_53_53 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_110);
              }
#line 396 "prog_out.m"
              {
#line 396 "prog_out.m"
                parse_tree__prog_out__V_52_52 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_53_53, (MR_String) ">");
              }
#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                parse_tree__prog_out__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", parse_tree__prog_out__V_52_52);
              }
#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                parse_tree__prog_out__V_48_48 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_49_49, parse_tree__prog_out__V_50_50);
              }
#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", parse_tree__prog_out__V_48_48);
              }
#line 392 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 1:
#line 398 "prog_out.m"
            {
#line 398 "prog_out.m"
              MR_String parse_tree__prog_out__V_40_40;
#line 398 "prog_out.m"
              MR_String parse_tree__prog_out__V_41_41;
#line 398 "prog_out.m"
              MR_String parse_tree__prog_out__V_42_42;
#line 398 "prog_out.m"
              MR_String parse_tree__prog_out__V_44_44;
#line 398 "prog_out.m"
              MR_String parse_tree__prog_out__V_45_45;
#line 398 "prog_out.m"
              MR_Word parse_tree__prog_out__PredProcId_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
#line 398 "prog_out.m"
              MR_Integer parse_tree__prog_out__PredId_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_111, (MR_Integer) 0)));
#line 398 "prog_out.m"
              MR_Integer parse_tree__prog_out__ProcId_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_111, (MR_Integer) 1)));

#line 401 "prog_out.m"
              {
#line 401 "prog_out.m"
                parse_tree__prog_out__V_41_41 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_112);
              }
#line 402 "prog_out.m"
              {
#line 402 "prog_out.m"
                parse_tree__prog_out__V_45_45 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_113);
              }
#line 402 "prog_out.m"
              {
#line 402 "prog_out.m"
                parse_tree__prog_out__V_44_44 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_45_45, (MR_String) ">");
              }
#line 401 "prog_out.m"
              {
#line 401 "prog_out.m"
                parse_tree__prog_out__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", parse_tree__prog_out__V_44_44);
              }
#line 401 "prog_out.m"
              {
#line 401 "prog_out.m"
                parse_tree__prog_out__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_41_41, parse_tree__prog_out__V_42_42);
              }
#line 401 "prog_out.m"
              {
#line 401 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", parse_tree__prog_out__V_40_40);
              }
#line 398 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 2:
#line 307 "prog_out.m"
            {
#line 307 "prog_out.m"
              MR_Word parse_tree__prog_out__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
#line 307 "prog_out.m"
              MR_Integer parse_tree__prog_out__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 2)));
#line 307 "prog_out.m"
              MR_String parse_tree__prog_out__SymNameString0_10;
#line 307 "prog_out.m"
              MR_String parse_tree__prog_out__SymNameString1_16;
#line 307 "prog_out.m"
              MR_String parse_tree__prog_out__SymNameString_17;
#line 307 "prog_out.m"
              MR_String parse_tree__prog_out__ArityString_18;
#line 307 "prog_out.m"
              MR_Word parse_tree__prog_out___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 3)));

#line 308 "prog_out.m"
              {
#line 308 "prog_out.m"
                parse_tree__prog_out__SymNameString0_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__SymName_7);
              }
#line 309 "prog_out.m"
              {
#line 309 "prog_out.m"
                parse_tree__prog_out__succeeded = mercury__string__contains_char_2_p_0(parse_tree__prog_out__SymNameString0_10, (MR_Char) 42);
              }
#line 320 "prog_out.m"
              if (parse_tree__prog_out__succeeded)
#line 318 "prog_out.m"
                {
#line 319 "prog_out.m"
                  MR_Box parse_tree__prog_out__conv1_SymNameString1_16;

#line 319 "prog_out.m"
                  {
#line 319 "prog_out.m"
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_out_scalar_common_8[0], parse_tree__prog_out__SymNameString0_10, ((MR_Box) ((MR_String) "")), &parse_tree__prog_out__conv1_SymNameString1_16);
                  }
#line 319 "prog_out.m"
                  parse_tree__prog_out__SymNameString1_16 = ((MR_String) parse_tree__prog_out__conv1_SymNameString1_16);
#line 318 "prog_out.m"
                }
#line 320 "prog_out.m"
              else
#line 321 "prog_out.m"
                parse_tree__prog_out__SymNameString1_16 = parse_tree__prog_out__SymNameString0_10;
#line 323 "prog_out.m"
              {
#line 323 "prog_out.m"
                parse_tree__prog_out__SymNameString_17 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__SymNameString1_16);
              }
#line 324 "prog_out.m"
              {
#line 324 "prog_out.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Arity_8, &parse_tree__prog_out__ArityString_18);
              }
#line 328 "prog_out.m"
#line 328 "prog_out.m"
              switch (parse_tree__prog_out__QuoteCons_4) {
#line 328 "prog_out.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 328 "prog_out.m"
                case (MR_Integer) 0:
#line 326 "prog_out.m"
                  {
#line 326 "prog_out.m"
                    MR_String parse_tree__prog_out__V_98_98;

#line 327 "prog_out.m"
                    {
#line 327 "prog_out.m"
                      parse_tree__prog_out__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__prog_out__ArityString_18);
                    }
#line 327 "prog_out.m"
                    {
#line 327 "prog_out.m"
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__SymNameString_17, parse_tree__prog_out__V_98_98);
                    }
#line 326 "prog_out.m"
                  }
#line 328 "prog_out.m"
                  break;
#line 328 "prog_out.m"
                case (MR_Integer) 1:
#line 329 "prog_out.m"
                  {
#line 329 "prog_out.m"
                    MR_String parse_tree__prog_out__V_95_95;
#line 329 "prog_out.m"
                    MR_String parse_tree__prog_out__V_96_96;

#line 330 "prog_out.m"
                    {
#line 330 "prog_out.m"
                      parse_tree__prog_out__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", parse_tree__prog_out__ArityString_18);
                    }
#line 330 "prog_out.m"
                    {
#line 330 "prog_out.m"
                      parse_tree__prog_out__V_95_95 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__SymNameString_17, parse_tree__prog_out__V_96_96);
                    }
#line 330 "prog_out.m"
                    {
#line 330 "prog_out.m"
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__prog_out__V_95_95);
                    }
#line 329 "prog_out.m"
                  }
#line 328 "prog_out.m"
                  break;
#line 328 "prog_out.m"
              }
#line 307 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 3:
#line 333 "prog_out.m"
            {
#line 333 "prog_out.m"
              MR_String parse_tree__prog_out__V_87_87;
#line 333 "prog_out.m"
              MR_Integer parse_tree__prog_out__Arity_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

#line 334 "prog_out.m"
              {
#line 334 "prog_out.m"
                parse_tree__prog_out__V_87_87 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__Arity_103);
              }
#line 334 "prog_out.m"
              {
#line 334 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", parse_tree__prog_out__V_87_87);
              }
#line 333 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 4:
#line 357 "prog_out.m"
            {
#line 357 "prog_out.m"
              MR_Word parse_tree__prog_out__PredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
#line 357 "prog_out.m"
              MR_Integer parse_tree__prog_out__PredId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_24, (MR_Integer) 0)));
#line 357 "prog_out.m"
              MR_Integer parse_tree__prog_out__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__PredProcId_24, (MR_Integer) 1)));
#line 357 "prog_out.m"
              MR_String parse_tree__prog_out__V_75_75;
#line 357 "prog_out.m"
              MR_String parse_tree__prog_out__V_76_76;
#line 357 "prog_out.m"
              MR_String parse_tree__prog_out__V_77_77;
#line 357 "prog_out.m"
              MR_String parse_tree__prog_out__V_79_79;
#line 357 "prog_out.m"
              MR_String parse_tree__prog_out__V_80_80;

#line 360 "prog_out.m"
              {
#line 360 "prog_out.m"
                parse_tree__prog_out__V_76_76 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__PredId_26);
              }
#line 361 "prog_out.m"
              {
#line 361 "prog_out.m"
                parse_tree__prog_out__V_80_80 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__ProcId_27);
              }
#line 361 "prog_out.m"
              {
#line 361 "prog_out.m"
                parse_tree__prog_out__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_80_80, (MR_String) ">");
              }
#line 361 "prog_out.m"
              {
#line 361 "prog_out.m"
                parse_tree__prog_out__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", parse_tree__prog_out__V_79_79);
              }
#line 360 "prog_out.m"
              {
#line 360 "prog_out.m"
                parse_tree__prog_out__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_76_76, parse_tree__prog_out__V_77_77);
              }
#line 360 "prog_out.m"
              {
#line 360 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", parse_tree__prog_out__V_75_75);
              }
#line 357 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 5:
#line 336 "prog_out.m"
            {
#line 336 "prog_out.m"
              MR_Integer parse_tree__prog_out__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

#line 337 "prog_out.m"
              {
#line 337 "prog_out.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Int_19, &parse_tree__prog_out__String_6);
              }
#line 336 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 6:
#line 339 "prog_out.m"
            {
#line 339 "prog_out.m"
              MR_Float parse_tree__prog_out__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

#line 340 "prog_out.m"
              {
#line 340 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__string__float_to_string_1_f_0(parse_tree__prog_out__Float_20);
              }
#line 339 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 7:
#line 342 "prog_out.m"
            {
#line 342 "prog_out.m"
              MR_Char parse_tree__prog_out__CharConst_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

#line 343 "prog_out.m"
              {
#line 343 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__term_io__quoted_char_1_f_0(parse_tree__prog_out__CharConst_21);
              }
#line 342 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 8:
#line 345 "prog_out.m"
            {
#line 345 "prog_out.m"
              MR_String parse_tree__prog_out__StringConst_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

#line 346 "prog_out.m"
              {
#line 346 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__term_io__quoted_string_1_f_0(parse_tree__prog_out__StringConst_22);
              }
#line 345 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 9:
#line 348 "prog_out.m"
            {
#line 348 "prog_out.m"
              MR_String parse_tree__prog_out__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));

#line 352 "prog_out.m"
#line 352 "prog_out.m"
              switch (parse_tree__prog_out__QuoteCons_4) {
#line 352 "prog_out.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 352 "prog_out.m"
                case (MR_Integer) 0:
#line 350 "prog_out.m"
                  {
#line 351 "prog_out.m"
                    {
#line 351 "prog_out.m"
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "\044", parse_tree__prog_out__Name_23);
                    }
#line 350 "prog_out.m"
                  }
#line 352 "prog_out.m"
                  break;
#line 352 "prog_out.m"
                case (MR_Integer) 1:
#line 353 "prog_out.m"
                  {
#line 353 "prog_out.m"
                    MR_String parse_tree__prog_out__V_83_83;

#line 354 "prog_out.m"
                    {
#line 354 "prog_out.m"
                      parse_tree__prog_out__V_83_83 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__Name_23, (MR_String) "\'");
                    }
#line 354 "prog_out.m"
                    {
#line 354 "prog_out.m"
                      parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140\044", parse_tree__prog_out__V_83_83);
                    }
#line 353 "prog_out.m"
                  }
#line 352 "prog_out.m"
                  break;
#line 352 "prog_out.m"
              }
#line 348 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 10:
#line 363 "prog_out.m"
            {
#line 363 "prog_out.m"
              MR_Word parse_tree__prog_out__Module_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 1)));
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__Ctor_29 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 2)));
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_64_64;
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_65_65;
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_66_66;
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_68_68;
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_69_69;
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_71_71;
#line 363 "prog_out.m"
              MR_String parse_tree__prog_out__V_72_72;
#line 363 "prog_out.m"
              MR_Integer parse_tree__prog_out__Arity_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_out__ConsId_5, (MR_Integer) 3)));

#line 365 "prog_out.m"
              {
#line 365 "prog_out.m"
                parse_tree__prog_out__V_65_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__Module_28);
              }
#line 366 "prog_out.m"
              {
#line 366 "prog_out.m"
                parse_tree__prog_out__V_72_72 = mercury__string__int_to_string_1_f_0(parse_tree__prog_out__Arity_104);
              }
#line 366 "prog_out.m"
              {
#line 366 "prog_out.m"
                parse_tree__prog_out__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_72_72, (MR_String) ">");
              }
#line 366 "prog_out.m"
              {
#line 366 "prog_out.m"
                parse_tree__prog_out__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__prog_out__V_71_71);
              }
#line 366 "prog_out.m"
              {
#line 366 "prog_out.m"
                parse_tree__prog_out__V_68_68 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__Ctor_29, parse_tree__prog_out__V_69_69);
              }
#line 365 "prog_out.m"
              {
#line 365 "prog_out.m"
                parse_tree__prog_out__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__prog_out__V_68_68);
              }
#line 365 "prog_out.m"
              {
#line 365 "prog_out.m"
                parse_tree__prog_out__V_64_64 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_65_65, parse_tree__prog_out__V_66_66);
              }
#line 365 "prog_out.m"
              {
#line 365 "prog_out.m"
                parse_tree__prog_out__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", parse_tree__prog_out__V_64_64);
              }
#line 363 "prog_out.m"
            }
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 11:
#line 369 "prog_out.m"
            parse_tree__prog_out__String_6 = (MR_String) "<base_typeclass_info>";
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 12:
#line 378 "prog_out.m"
            parse_tree__prog_out__String_6 = (MR_String) "<type_info_const>";
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 13:
#line 381 "prog_out.m"
            parse_tree__prog_out__String_6 = (MR_String) "<typeclass_info_const>";
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
          case (MR_Integer) 14:
#line 384 "prog_out.m"
            parse_tree__prog_out__String_6 = (MR_String) "<ground_term_const>";
#line 307 "prog_out.m"
            break;
#line 307 "prog_out.m"
        }
#line 307 "prog_out.m"
        break;
#line 307 "prog_out.m"
    }
#line 307 "prog_out.m"
    return parse_tree__prog_out__String_6;
#line 307 "prog_out.m"
  }
#line 302 "prog_out.m"
}

#line 157 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__can_fail_to_string_1_f_0(
#line 157 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 157 "prog_out.m"
{
#line 551 "prog_out.m"
  {
#line 551 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 551 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 551 "prog_out.m"
#line 551 "prog_out.m"
    switch (parse_tree__prog_out__HeadVar__1_1) {
#line 551 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 551 "prog_out.m"
      case (MR_Integer) 0:
#line 551 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "can_fail";
#line 551 "prog_out.m"
        break;
#line 551 "prog_out.m"
      case (MR_Integer) 1:
#line 552 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "cannot_fail";
#line 551 "prog_out.m"
        break;
#line 551 "prog_out.m"
    }
#line 551 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 551 "prog_out.m"
  }
#line 157 "prog_out.m"
}

#line 155 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__determinism_to_string_1_f_0(
#line 155 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 155 "prog_out.m"
{
#line 542 "prog_out.m"
  {
#line 542 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 542 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[12 + parse_tree__prog_out__HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;

#line 542 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 542 "prog_out.m"
  }
#line 155 "prog_out.m"
}

#line 153 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__arg_tabling_method_to_string_1_f_0(
#line 153 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 153 "prog_out.m"
{
#line 538 "prog_out.m"
  {
#line 538 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 538 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 538 "prog_out.m"
#line 538 "prog_out.m"
    switch (parse_tree__prog_out__HeadVar__1_1) {
#line 538 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "prog_out.m"
      case (MR_Integer) 1:
#line 539 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "addr";
#line 538 "prog_out.m"
        break;
#line 538 "prog_out.m"
      case (MR_Integer) 2:
#line 540 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_implied";
#line 538 "prog_out.m"
        break;
#line 538 "prog_out.m"
      case (MR_Integer) 0:
#line 538 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "value";
#line 538 "prog_out.m"
        break;
#line 538 "prog_out.m"
    }
#line 538 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 538 "prog_out.m"
  }
#line 153 "prog_out.m"
}

#line 151 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(
#line 151 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 151 "prog_out.m"
{
#line 534 "prog_out.m"
  {
#line 534 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 534 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 534 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "output";
#line 534 "prog_out.m"
    else
#line 534 "prog_out.m"
      {
#line 534 "prog_out.m"
        MR_Word parse_tree__prog_out__ArgTablingMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 538 "prog_out.m"
#line 538 "prog_out.m"
        switch (parse_tree__prog_out__ArgTablingMethod_3) {
#line 538 "prog_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 538 "prog_out.m"
          case (MR_Integer) 1:
#line 539 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "addr";
#line 538 "prog_out.m"
            break;
#line 538 "prog_out.m"
          case (MR_Integer) 2:
#line 540 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_implied";
#line 538 "prog_out.m"
            break;
#line 538 "prog_out.m"
          case (MR_Integer) 0:
#line 538 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "value";
#line 538 "prog_out.m"
            break;
#line 538 "prog_out.m"
        }
#line 534 "prog_out.m"
      }
#line 534 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 534 "prog_out.m"
  }
#line 151 "prog_out.m"
}

#line 149 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_eval_method_3_p_0(
#line 149 "prog_out.m"
  MR_Word parse_tree__prog_out__EvalMethod_4)
#line 149 "prog_out.m"
{
#line 531 "prog_out.m"
  {
#line 531 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 531 "prog_out.m"
    MR_String parse_tree__prog_out__V_8_8;

#line 532 "prog_out.m"
    {
#line 532 "prog_out.m"
      parse_tree__prog_out__V_8_8 = parse_tree__prog_out__eval_method_to_string_1_f_0(parse_tree__prog_out__EvalMethod_4);
    }
#line 532 "prog_out.m"
    {
#line 532 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
    }
#line 531 "prog_out.m"
  }
#line 149 "prog_out.m"
}

#line 148 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_string_1_f_0(
#line 148 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 148 "prog_out.m"
{
#line 497 "prog_out.m"
  {
#line 497 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 497 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 497 "prog_out.m"
#line 497 "prog_out.m"
    switch (MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) {
#line 497 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 497 "prog_out.m"
      case (MR_Integer) 0:
#line 497 "prog_out.m"
#line 497 "prog_out.m"
        switch (MR_unmkbody(parse_tree__prog_out__HeadVar__1_1)) {
#line 497 "prog_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 497 "prog_out.m"
          case (MR_Integer) 0:
#line 497 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "normal";
#line 497 "prog_out.m"
            break;
#line 497 "prog_out.m"
          case (MR_Integer) 1:
#line 498 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "loop_check";
#line 497 "prog_out.m"
            break;
#line 497 "prog_out.m"
          case (MR_Integer) 2:
#line 499 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "memo";
#line 497 "prog_out.m"
            break;
#line 497 "prog_out.m"
        }
#line 497 "prog_out.m"
        break;
#line 497 "prog_out.m"
      case (MR_Integer) 1:
#line 511 "prog_out.m"
        {
#line 511 "prog_out.m"
          MR_Word parse_tree__prog_out__EntryKind_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "prog_out.m"
          MR_Word parse_tree__prog_out__IsUnitize_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "prog_out.m"
          MR_String parse_tree__prog_out__EntryKindStr_8;
#line 511 "prog_out.m"
          MR_String parse_tree__prog_out__UnitizeStr_9;
#line 511 "prog_out.m"
          MR_String parse_tree__prog_out__V_11_11;
#line 511 "prog_out.m"
          MR_String parse_tree__prog_out__V_12_12;

#line 515 "prog_out.m"
#line 515 "prog_out.m"
          switch (parse_tree__prog_out__EntryKind_5) {
#line 515 "prog_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 515 "prog_out.m"
            case (MR_Integer) 0:
#line 514 "prog_out.m"
              parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_outputs, ";
#line 515 "prog_out.m"
              break;
#line 515 "prog_out.m"
            case (MR_Integer) 2:
#line 520 "prog_out.m"
              parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_procid_inputs_outputs, ";
#line 515 "prog_out.m"
              break;
#line 515 "prog_out.m"
            case (MR_Integer) 1:
#line 517 "prog_out.m"
              parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_procid_outputs, ";
#line 515 "prog_out.m"
              break;
#line 515 "prog_out.m"
          }
#line 525 "prog_out.m"
#line 525 "prog_out.m"
          switch (parse_tree__prog_out__IsUnitize_6) {
#line 525 "prog_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 525 "prog_out.m"
            case (MR_Integer) 1:
#line 527 "prog_out.m"
              parse_tree__prog_out__UnitizeStr_9 = (MR_String) "alone";
#line 525 "prog_out.m"
              break;
#line 525 "prog_out.m"
            case (MR_Integer) 0:
#line 524 "prog_out.m"
              parse_tree__prog_out__UnitizeStr_9 = (MR_String) "unitize";
#line 525 "prog_out.m"
              break;
#line 525 "prog_out.m"
          }
#line 529 "prog_out.m"
          {
#line 529 "prog_out.m"
            parse_tree__prog_out__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__UnitizeStr_9, (MR_String) ")");
          }
#line 529 "prog_out.m"
          {
#line 529 "prog_out.m"
            parse_tree__prog_out__V_11_11 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__EntryKindStr_8, parse_tree__prog_out__V_12_12);
          }
#line 529 "prog_out.m"
          {
#line 529 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", parse_tree__prog_out__V_11_11);
          }
#line 511 "prog_out.m"
        }
#line 497 "prog_out.m"
        break;
#line 497 "prog_out.m"
      case (MR_Integer) 2:
#line 500 "prog_out.m"
        {
#line 500 "prog_out.m"
          MR_Word parse_tree__prog_out__MinimalMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 504 "prog_out.m"
#line 504 "prog_out.m"
          switch (parse_tree__prog_out__MinimalMethod_3) {
#line 504 "prog_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_out.m"
            case (MR_Integer) 1:
#line 503 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_consumer";
#line 504 "prog_out.m"
              break;
#line 504 "prog_out.m"
            case (MR_Integer) 2:
#line 506 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
#line 504 "prog_out.m"
              break;
#line 504 "prog_out.m"
            case (MR_Integer) 0:
#line 509 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_stack_copy";
#line 504 "prog_out.m"
              break;
#line 504 "prog_out.m"
          }
#line 500 "prog_out.m"
        }
#line 497 "prog_out.m"
        break;
#line 497 "prog_out.m"
    }
#line 497 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 497 "prog_out.m"
  }
#line 148 "prog_out.m"
}

#line 144 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(
#line 144 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 144 "prog_out.m"
{
#line 475 "prog_out.m"
  {
#line 475 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 475 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 475 "prog_out.m"
#line 475 "prog_out.m"
    switch (MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) {
#line 475 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "prog_out.m"
      case (MR_Integer) 0:
#line 475 "prog_out.m"
#line 475 "prog_out.m"
        switch (MR_unmkbody(parse_tree__prog_out__HeadVar__1_1)) {
#line 475 "prog_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 475 "prog_out.m"
          case (MR_Integer) 0:
#line 475 "prog_out.m"
            {
#line 476 "prog_out.m"
              {
#line 476 "prog_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "normal");
              }
#line 475 "prog_out.m"
            }
#line 475 "prog_out.m"
            break;
#line 475 "prog_out.m"
          case (MR_Integer) 1:
#line 477 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "loop_check";
#line 475 "prog_out.m"
            break;
#line 475 "prog_out.m"
          case (MR_Integer) 2:
#line 478 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "memo";
#line 475 "prog_out.m"
            break;
#line 475 "prog_out.m"
        }
#line 475 "prog_out.m"
        break;
#line 475 "prog_out.m"
      case (MR_Integer) 1:
#line 494 "prog_out.m"
        {
#line 495 "prog_out.m"
          {
#line 495 "prog_out.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "io");
          }
#line 494 "prog_out.m"
        }
#line 475 "prog_out.m"
        break;
#line 475 "prog_out.m"
      case (MR_Integer) 2:
#line 479 "prog_out.m"
        {
#line 479 "prog_out.m"
          MR_Word parse_tree__prog_out__MinimalMethod_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 487 "prog_out.m"
#line 487 "prog_out.m"
          switch (parse_tree__prog_out__MinimalMethod_7) {
#line 487 "prog_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 487 "prog_out.m"
            case (MR_Integer) 1:
#line 486 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks";
#line 487 "prog_out.m"
              break;
#line 487 "prog_out.m"
            case (MR_Integer) 2:
#line 489 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
#line 487 "prog_out.m"
              break;
#line 487 "prog_out.m"
            case (MR_Integer) 0:
#line 492 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model";
#line 487 "prog_out.m"
              break;
#line 487 "prog_out.m"
          }
#line 479 "prog_out.m"
        }
#line 475 "prog_out.m"
        break;
#line 475 "prog_out.m"
    }
#line 475 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 475 "prog_out.m"
  }
#line 144 "prog_out.m"
}

#line 139 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__purity_prefix_to_string_1_f_0(
#line 139 "prog_out.m"
  MR_Word parse_tree__prog_out__Purity_3)
#line 139 "prog_out.m"
{
#line 457 "prog_out.m"
  {
#line 457 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 457 "prog_out.m"
    MR_String parse_tree__prog_out__String_4;

#line 457 "prog_out.m"
#line 457 "prog_out.m"
    switch (parse_tree__prog_out__Purity_3) {
#line 457 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 457 "prog_out.m"
      case (MR_Integer) 2:
#line 457 "prog_out.m"
      case (MR_Integer) 1:
#line 462 "prog_out.m"
        {
#line 462 "prog_out.m"
          MR_String parse_tree__prog_out__PurityName_5;

#line 471 "prog_out.m"
#line 471 "prog_out.m"
          switch (parse_tree__prog_out__Purity_3) {
#line 471 "prog_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 471 "prog_out.m"
            case (MR_Integer) 2:
#line 473 "prog_out.m"
              parse_tree__prog_out__PurityName_5 = (MR_String) "impure";
#line 471 "prog_out.m"
              break;
#line 471 "prog_out.m"
            case (MR_Integer) 1:
#line 472 "prog_out.m"
              parse_tree__prog_out__PurityName_5 = (MR_String) "semipure";
#line 471 "prog_out.m"
              break;
#line 471 "prog_out.m"
          }
#line 464 "prog_out.m"
          {
#line 464 "prog_out.m"
            parse_tree__prog_out__String_4 = mercury__string__append_2_f_0(parse_tree__prog_out__PurityName_5, (MR_String) " ");
          }
#line 462 "prog_out.m"
        }
#line 457 "prog_out.m"
        break;
#line 457 "prog_out.m"
      case (MR_Integer) 0:
#line 458 "prog_out.m"
        parse_tree__prog_out__String_4 = (MR_String) "";
#line 457 "prog_out.m"
        break;
#line 457 "prog_out.m"
    }
#line 457 "prog_out.m"
    return parse_tree__prog_out__String_4;
#line 457 "prog_out.m"
  }
#line 139 "prog_out.m"
}

#line 138 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_purity_prefix_3_p_0(
#line 138 "prog_out.m"
  MR_Word parse_tree__prog_out__Purity_4)
#line 138 "prog_out.m"
{
#line 446 "prog_out.m"
  {
#line 446 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 446 "prog_out.m"
#line 446 "prog_out.m"
    switch (parse_tree__prog_out__Purity_4) {
#line 446 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 446 "prog_out.m"
      case (MR_Integer) 2:
#line 446 "prog_out.m"
      case (MR_Integer) 1:
#line 450 "prog_out.m"
        {
#line 450 "prog_out.m"
          MR_String parse_tree__prog_out__String_15;

#line 471 "prog_out.m"
#line 471 "prog_out.m"
          switch (parse_tree__prog_out__Purity_4) {
#line 471 "prog_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 471 "prog_out.m"
            case (MR_Integer) 2:
#line 473 "prog_out.m"
              parse_tree__prog_out__String_15 = (MR_String) "impure";
#line 471 "prog_out.m"
              break;
#line 471 "prog_out.m"
            case (MR_Integer) 1:
#line 472 "prog_out.m"
              parse_tree__prog_out__String_15 = (MR_String) "semipure";
#line 471 "prog_out.m"
              break;
#line 471 "prog_out.m"
          }
#line 469 "prog_out.m"
          {
#line 469 "prog_out.m"
            mercury__io__write_string_3_p_0(parse_tree__prog_out__String_15);
          }
#line 452 "prog_out.m"
          {
#line 452 "prog_out.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 450 "prog_out.m"
        }
#line 446 "prog_out.m"
        break;
#line 446 "prog_out.m"
      case (MR_Integer) 0:
#line 446 "prog_out.m"
        {
#line 446 "prog_out.m"
        }
#line 446 "prog_out.m"
        break;
#line 446 "prog_out.m"
    }
#line 446 "prog_out.m"
  }
#line 138 "prog_out.m"
}

#line 132 "prog_out.m"
MR_bool MR_CALL 
parse_tree__prog_out__purity_name_2_p_1(
#line 132 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 132 "prog_out.m"
  MR_String parse_tree__prog_out__HeadVar__2_2)
#line 132 "prog_out.m"
{
#line 471 "prog_out.m"
  {
#line 471 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 471 "prog_out.m"
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "pure") == 0))
#line 471 "prog_out.m"
      {
#line 471 "prog_out.m"
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 0;
#line 471 "prog_out.m"
        parse_tree__prog_out__succeeded = MR_TRUE;
#line 471 "prog_out.m"
      }
#line 471 "prog_out.m"
    else
#line 471 "prog_out.m"
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "impure") == 0))
#line 473 "prog_out.m"
      {
#line 473 "prog_out.m"
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 2;
#line 473 "prog_out.m"
        parse_tree__prog_out__succeeded = MR_TRUE;
#line 473 "prog_out.m"
      }
#line 471 "prog_out.m"
    else
#line 471 "prog_out.m"
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "semipure") == 0))
#line 472 "prog_out.m"
      {
#line 472 "prog_out.m"
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 1;
#line 472 "prog_out.m"
        parse_tree__prog_out__succeeded = MR_TRUE;
#line 472 "prog_out.m"
      }
#line 471 "prog_out.m"
    else
#line 471 "prog_out.m"
      parse_tree__prog_out__succeeded = MR_FALSE;
#line 471 "prog_out.m"
    return parse_tree__prog_out__succeeded;
#line 471 "prog_out.m"
  }
#line 132 "prog_out.m"
}

#line 131 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__purity_name_2_p_0(
#line 131 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1,
#line 131 "prog_out.m"
  MR_String * parse_tree__prog_out__HeadVar__2_2)
#line 131 "prog_out.m"
{
#line 471 "prog_out.m"
  {
#line 471 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 471 "prog_out.m"
#line 471 "prog_out.m"
    switch (parse_tree__prog_out__HeadVar__1_1) {
#line 471 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "prog_out.m"
      case (MR_Integer) 2:
#line 473 "prog_out.m"
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "impure";
#line 471 "prog_out.m"
        break;
#line 471 "prog_out.m"
      case (MR_Integer) 0:
#line 471 "prog_out.m"
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "pure";
#line 471 "prog_out.m"
        break;
#line 471 "prog_out.m"
      case (MR_Integer) 1:
#line 472 "prog_out.m"
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "semipure";
#line 471 "prog_out.m"
        break;
#line 471 "prog_out.m"
    }
#line 471 "prog_out.m"
  }
#line 131 "prog_out.m"
}

#line 126 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_purity_3_p_0(
#line 126 "prog_out.m"
  MR_Word parse_tree__prog_out__Purity_4)
#line 126 "prog_out.m"
{
#line 467 "prog_out.m"
  {
#line 467 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 467 "prog_out.m"
    MR_String parse_tree__prog_out__String_6;

#line 471 "prog_out.m"
#line 471 "prog_out.m"
    switch (parse_tree__prog_out__Purity_4) {
#line 471 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "prog_out.m"
      case (MR_Integer) 2:
#line 473 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "impure";
#line 471 "prog_out.m"
        break;
#line 471 "prog_out.m"
      case (MR_Integer) 0:
#line 471 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "pure";
#line 471 "prog_out.m"
        break;
#line 471 "prog_out.m"
      case (MR_Integer) 1:
#line 472 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "semipure";
#line 471 "prog_out.m"
        break;
#line 471 "prog_out.m"
    }
#line 469 "prog_out.m"
    {
#line 469 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__String_6);
    }
#line 467 "prog_out.m"
  }
#line 126 "prog_out.m"
}

#line 122 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_str_1_f_0(
#line 122 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 122 "prog_out.m"
{
#line 441 "prog_out.m"
  {
#line 441 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 441 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 441 "prog_out.m"
#line 441 "prog_out.m"
    switch (parse_tree__prog_out__HeadVar__1_1) {
#line 441 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 441 "prog_out.m"
      case (MR_Integer) 1:
#line 442 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "func";
#line 441 "prog_out.m"
        break;
#line 441 "prog_out.m"
      case (MR_Integer) 0:
#line 441 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "pred";
#line 441 "prog_out.m"
        break;
#line 441 "prog_out.m"
    }
#line 441 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 441 "prog_out.m"
  }
#line 122 "prog_out.m"
}

#line 118 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(
#line 118 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 118 "prog_out.m"
{
#line 438 "prog_out.m"
  {
#line 438 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 438 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 438 "prog_out.m"
#line 438 "prog_out.m"
    switch (parse_tree__prog_out__HeadVar__1_1) {
#line 438 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "prog_out.m"
      case (MR_Integer) 1:
#line 439 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "function";
#line 438 "prog_out.m"
        break;
#line 438 "prog_out.m"
      case (MR_Integer) 0:
#line 438 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "predicate";
#line 438 "prog_out.m"
        break;
#line 438 "prog_out.m"
    }
#line 438 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 438 "prog_out.m"
  }
#line 118 "prog_out.m"
}

#line 114 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_pred_or_func_3_p_0(
#line 114 "prog_out.m"
  MR_Word parse_tree__prog_out__PorF_4)
#line 114 "prog_out.m"
{
#line 435 "prog_out.m"
  {
#line 435 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 435 "prog_out.m"
    MR_String parse_tree__prog_out__V_8_8;

#line 438 "prog_out.m"
#line 438 "prog_out.m"
    switch (parse_tree__prog_out__PorF_4) {
#line 438 "prog_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "prog_out.m"
      case (MR_Integer) 1:
#line 439 "prog_out.m"
        parse_tree__prog_out__V_8_8 = (MR_String) "function";
#line 438 "prog_out.m"
        break;
#line 438 "prog_out.m"
      case (MR_Integer) 0:
#line 438 "prog_out.m"
        parse_tree__prog_out__V_8_8 = (MR_String) "predicate";
#line 438 "prog_out.m"
        break;
#line 438 "prog_out.m"
    }
#line 436 "prog_out.m"
    {
#line 436 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
    }
#line 435 "prog_out.m"
  }
#line 114 "prog_out.m"
}

#line 110 "prog_out.m"
MR_bool MR_CALL 
parse_tree__prog_out__builtin_type_to_string_2_p_1(
#line 110 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 110 "prog_out.m"
  MR_String parse_tree__prog_out__HeadVar__2_2)
#line 110 "prog_out.m"
{
#line 427 "prog_out.m"
  {
#line 427 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 427 "prog_out.m"
    MR_Integer parse_tree__prog_out__lo_0;
#line 427 "prog_out.m"
    MR_Integer parse_tree__prog_out__hi_1;
#line 427 "prog_out.m"
    MR_Integer parse_tree__prog_out__mid_2;
#line 427 "prog_out.m"
    MR_Integer parse_tree__prog_out__result_3;

#line 427 "prog_out.m"
    /* binary string simple lookup switch */
#line 427 "prog_out.m"
    parse_tree__prog_out__lo_0 = (MR_Integer) 0;
#line 427 "prog_out.m"
    parse_tree__prog_out__hi_1 = (MR_Integer) 3;
#line 427 "prog_out.m"
    do
#line 427 "prog_out.m"
      {
#line 427 "prog_out.m"
        parse_tree__prog_out__mid_2 = (((parse_tree__prog_out__lo_0 + parse_tree__prog_out__hi_1)) / (MR_Integer) 2);
#line 427 "prog_out.m"
        parse_tree__prog_out__result_3 = MR_strcmp(parse_tree__prog_out__HeadVar__2_2, ((&parse_tree__prog_out_vector_common_6[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0);
#line 427 "prog_out.m"
        if ((parse_tree__prog_out__result_3 == (MR_Integer) 0))
#line 427 "prog_out.m"
          {
#line 427 "prog_out.m"
            *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_6[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_1;
#line 427 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_TRUE;
#line 427 "prog_out.m"
            /* jump out of search loop */
#line 427 "prog_out.m"
            goto label_0;
#line 427 "prog_out.m"
          }
#line 427 "prog_out.m"
        else
#line 427 "prog_out.m"
        if ((parse_tree__prog_out__result_3 < (MR_Integer) 0))
#line 427 "prog_out.m"
          parse_tree__prog_out__hi_1 = (parse_tree__prog_out__mid_2 - (MR_Integer) 1);
#line 427 "prog_out.m"
        else
#line 427 "prog_out.m"
          parse_tree__prog_out__lo_0 = (parse_tree__prog_out__mid_2 + (MR_Integer) 1);
#line 427 "prog_out.m"
      }
#line 427 "prog_out.m"
    while ((parse_tree__prog_out__lo_0 <= parse_tree__prog_out__hi_1));
#line 427 "prog_out.m"
    parse_tree__prog_out__succeeded = MR_FALSE;
#line 427 "prog_out.m"
  label_0:;
#line 427 "prog_out.m"
    return parse_tree__prog_out__succeeded;
#line 427 "prog_out.m"
  }
#line 110 "prog_out.m"
}

#line 109 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__builtin_type_to_string_2_p_0(
#line 109 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1,
#line 109 "prog_out.m"
  MR_String * parse_tree__prog_out__HeadVar__2_2)
#line 109 "prog_out.m"
{
#line 427 "prog_out.m"
  {
#line 427 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 427 "prog_out.m"
    *parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[8 + parse_tree__prog_out__HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;
#line 427 "prog_out.m"
  }
#line 109 "prog_out.m"
}

#line 106 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__type_name_to_string_1_f_0(
#line 106 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 106 "prog_out.m"
{
#line 424 "prog_out.m"
  {
#line 424 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 424 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;
#line 424 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "prog_out.m"
    MR_Integer parse_tree__prog_out___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 425 "prog_out.m"
    {
#line 425 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(parse_tree__prog_out__Name_3);
    }
#line 424 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 424 "prog_out.m"
  }
#line 106 "prog_out.m"
}

#line 104 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_type_name_3_p_0(
#line 104 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 104 "prog_out.m"
{
#line 421 "prog_out.m"
  {
#line 421 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 421 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 421 "prog_out.m"
    MR_Integer parse_tree__prog_out___Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 422 "prog_out.m"
    {
#line 422 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_4);
    }
#line 421 "prog_out.m"
  }
#line 104 "prog_out.m"
}

#line 102 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_2(
#line 102 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 102 "prog_out.m"
  MR_String * parse_tree__prog_out__HeadVar__2_2,
#line 102 "prog_out.m"
  MR_Cont parse_tree__prog_out__cont,
#line 102 "prog_out.m"
  void * parse_tree__prog_out__cont_env_ptr)
#line 102 "prog_out.m"
{
#line 415 "prog_out.m"
  {
#line 415 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 415 "prog_out.m"
    {
#line 415 "prog_out.m"
      MR_Integer parse_tree__prog_out__slot_0 = (MR_Integer) 0;

#line 415 "prog_out.m"
      do
#line 415 "prog_out.m"
        {
#line 415 "prog_out.m"
          *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_5[0 + parse_tree__prog_out__slot_0]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_0;
#line 415 "prog_out.m"
          *parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_5[0 + parse_tree__prog_out__slot_0]))->parse_tree__prog_out__vector_common_type_5_0__vct_5_f_1;
#line 415 "prog_out.m"
          {
#line 415 "prog_out.m"
            parse_tree__prog_out__cont(parse_tree__prog_out__cont_env_ptr);
          }
#line 415 "prog_out.m"
          parse_tree__prog_out__slot_0 = (parse_tree__prog_out__slot_0 + (MR_Integer) 1);
#line 415 "prog_out.m"
        }
#line 415 "prog_out.m"
      while ((parse_tree__prog_out__slot_0 < (MR_Integer) 4));
#line 415 "prog_out.m"
    }
#line 415 "prog_out.m"
  }
#line 102 "prog_out.m"
}

#line 101 "prog_out.m"
MR_bool MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_1(
#line 101 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 101 "prog_out.m"
  MR_String parse_tree__prog_out__HeadVar__2_2)
#line 101 "prog_out.m"
{
#line 415 "prog_out.m"
  {
#line 415 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 415 "prog_out.m"
    MR_Integer parse_tree__prog_out__lo_0;
#line 415 "prog_out.m"
    MR_Integer parse_tree__prog_out__hi_1;
#line 415 "prog_out.m"
    MR_Integer parse_tree__prog_out__mid_2;
#line 415 "prog_out.m"
    MR_Integer parse_tree__prog_out__result_3;

#line 415 "prog_out.m"
    /* binary string simple lookup switch */
#line 415 "prog_out.m"
    parse_tree__prog_out__lo_0 = (MR_Integer) 0;
#line 415 "prog_out.m"
    parse_tree__prog_out__hi_1 = (MR_Integer) 3;
#line 415 "prog_out.m"
    do
#line 415 "prog_out.m"
      {
#line 415 "prog_out.m"
        parse_tree__prog_out__mid_2 = (((parse_tree__prog_out__lo_0 + parse_tree__prog_out__hi_1)) / (MR_Integer) 2);
#line 415 "prog_out.m"
        parse_tree__prog_out__result_3 = MR_strcmp(parse_tree__prog_out__HeadVar__2_2, ((&parse_tree__prog_out_vector_common_4[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_0);
#line 415 "prog_out.m"
        if ((parse_tree__prog_out__result_3 == (MR_Integer) 0))
#line 415 "prog_out.m"
          {
#line 415 "prog_out.m"
            *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_4[0 + parse_tree__prog_out__mid_2]))->parse_tree__prog_out__vector_common_type_4_0__vct_4_f_1;
#line 415 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_TRUE;
#line 415 "prog_out.m"
            /* jump out of search loop */
#line 415 "prog_out.m"
            goto label_0;
#line 415 "prog_out.m"
          }
#line 415 "prog_out.m"
        else
#line 415 "prog_out.m"
        if ((parse_tree__prog_out__result_3 < (MR_Integer) 0))
#line 415 "prog_out.m"
          parse_tree__prog_out__hi_1 = (parse_tree__prog_out__mid_2 - (MR_Integer) 1);
#line 415 "prog_out.m"
        else
#line 415 "prog_out.m"
          parse_tree__prog_out__lo_0 = (parse_tree__prog_out__mid_2 + (MR_Integer) 1);
#line 415 "prog_out.m"
      }
#line 415 "prog_out.m"
    while ((parse_tree__prog_out__lo_0 <= parse_tree__prog_out__hi_1));
#line 415 "prog_out.m"
    parse_tree__prog_out__succeeded = MR_FALSE;
#line 415 "prog_out.m"
  label_0:;
#line 415 "prog_out.m"
    return parse_tree__prog_out__succeeded;
#line 415 "prog_out.m"
  }
#line 101 "prog_out.m"
}

#line 100 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_0(
#line 100 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 100 "prog_out.m"
{
#line 415 "prog_out.m"
  {
#line 415 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 415 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[4 + parse_tree__prog_out__HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;

#line 415 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 415 "prog_out.m"
  }
#line 100 "prog_out.m"
}

#line 97 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_promise_type_3_p_0(
#line 97 "prog_out.m"
  MR_Word parse_tree__prog_out__PromiseType_4)
#line 97 "prog_out.m"
{
#line 432 "prog_out.m"
  {
#line 432 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 432 "prog_out.m"
    MR_String parse_tree__prog_out__V_8_8 = ((&parse_tree__prog_out_vector_common_3[0 + parse_tree__prog_out__PromiseType_4]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;

#line 433 "prog_out.m"
    {
#line 433 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
    }
#line 432 "prog_out.m"
  }
#line 97 "prog_out.m"
}

#line 95 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_string_list_3_p_0(
#line 95 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 95 "prog_out.m"
{
#line 407 "prog_out.m"
  while (MR_TRUE)
#line 407 "prog_out.m"
    {
#line 407 "prog_out.m"
      /* tailcall optimized into a loop */
#line 407 "prog_out.m"
      {
#line 407 "prog_out.m"
        MR_bool parse_tree__prog_out__succeeded;

#line 407 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "prog_out.m"
          {
#line 407 "prog_out.m"
          }
#line 407 "prog_out.m"
        else
#line 407 "prog_out.m"
          {
#line 407 "prog_out.m"
            MR_Word parse_tree__prog_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 407 "prog_out.m"
            MR_String parse_tree__prog_out__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 407 "prog_out.m"
            if ((parse_tree__prog_out__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "prog_out.m"
              {
#line 409 "prog_out.m"
                mercury__io__write_string_3_p_0(parse_tree__prog_out__V_26_26);
              }
#line 407 "prog_out.m"
            else
#line 410 "prog_out.m"
              {
#line 410 "prog_out.m"
                MR_Word parse_tree__prog_out__V_48_48;
#line 410 "prog_out.m"
                MR_String parse_tree__prog_out__V_49_49;

#line 411 "prog_out.m"
                {
#line 411 "prog_out.m"
                  mercury__io__write_string_3_p_0(parse_tree__prog_out__V_26_26);
                }
#line 412 "prog_out.m"
                {
#line 412 "prog_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 408 "prog_out.m"
                parse_tree__prog_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_25_25, (MR_Integer) 0)));
#line 408 "prog_out.m"
                parse_tree__prog_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_25_25, (MR_Integer) 1)));
#line 407 "prog_out.m"
                if ((parse_tree__prog_out__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "prog_out.m"
                  {
#line 409 "prog_out.m"
                    mercury__io__write_string_3_p_0(parse_tree__prog_out__V_49_49);
                  }
#line 407 "prog_out.m"
                else
#line 410 "prog_out.m"
                  {
#line 411 "prog_out.m"
                    {
#line 411 "prog_out.m"
                      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_49_49);
                    }
#line 412 "prog_out.m"
                    {
#line 412 "prog_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 413 "prog_out.m"
                    /* direct tailcall eliminated */
#line 413 "prog_out.m"
                    {
#line 413 "prog_out.m"
                      MR_Word parse_tree__prog_out__HeadVar__1__tmp_copy_1 = parse_tree__prog_out__V_48_48;

#line 413 "prog_out.m"
                      parse_tree__prog_out__HeadVar__1_1 = parse_tree__prog_out__HeadVar__1__tmp_copy_1;
#line 413 "prog_out.m"
                    }
#line 413 "prog_out.m"
                    continue;
#line 410 "prog_out.m"
                  }
#line 410 "prog_out.m"
              }
#line 407 "prog_out.m"
          }
#line 407 "prog_out.m"
      }
#line 407 "prog_out.m"
      break;
#line 407 "prog_out.m"
    }
#line 95 "prog_out.m"
}

#line 93 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(
#line 93 "prog_out.m"
  MR_Word parse_tree__prog_out__ConsId_3)
#line 93 "prog_out.m"
{
#line 295 "prog_out.m"
  {
#line 295 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 295 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 296 "prog_out.m"
    {
#line 296 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0((MR_Integer) 0, parse_tree__prog_out__ConsId_3);
    }
#line 295 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 295 "prog_out.m"
  }
#line 93 "prog_out.m"
}

#line 92 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(
#line 92 "prog_out.m"
  MR_Word parse_tree__prog_out__ConsId_3)
#line 92 "prog_out.m"
{
#line 292 "prog_out.m"
  {
#line 292 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 292 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 293 "prog_out.m"
    {
#line 293 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_2_f_0((MR_Integer) 1, parse_tree__prog_out__ConsId_3);
    }
#line 292 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 292 "prog_out.m"
  }
#line 92 "prog_out.m"
}

#line 90 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_class_id_3_p_0(
#line 90 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 90 "prog_out.m"
{
#line 287 "prog_out.m"
  {
#line 287 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 287 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 206 "prog_out.m"
    {
#line 206 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_13);
    }
#line 207 "prog_out.m"
    {
#line 207 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 208 "prog_out.m"
    {
#line 208 "prog_out.m"
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_14);
    }
#line 287 "prog_out.m"
  }
#line 90 "prog_out.m"
}

#line 88 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__type_ctor_to_string_1_f_0(
#line 88 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 88 "prog_out.m"
{
#line 284 "prog_out.m"
  {
#line 284 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 284 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;
#line 284 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 284 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 284 "prog_out.m"
    MR_Word parse_tree__prog_out__V_5_5;

#line 285 "prog_out.m"
    {
#line 285 "prog_out.m"
      parse_tree__prog_out__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_out__V_5_5, 0) = ((MR_Box) (parse_tree__prog_out__Name_3));
#line 285 "prog_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_out__V_5_5, 1) = ((MR_Box) (parse_tree__prog_out__Arity_4));
#line 285 "prog_out.m"
    }
#line 285 "prog_out.m"
    {
#line 285 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(parse_tree__prog_out__V_5_5);
    }
#line 284 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 284 "prog_out.m"
  }
#line 88 "prog_out.m"
}

#line 87 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_type_ctor_3_p_0(
#line 87 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 87 "prog_out.m"
{
#line 281 "prog_out.m"
  {
#line 281 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 281 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 206 "prog_out.m"
    {
#line 206 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_13);
    }
#line 207 "prog_out.m"
    {
#line 207 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 208 "prog_out.m"
    {
#line 208 "prog_out.m"
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_14);
    }
#line 281 "prog_out.m"
  }
#line 87 "prog_out.m"
}

#line 85 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__module_name_to_escaped_string_1_f_0(
#line 85 "prog_out.m"
  MR_Word parse_tree__prog_out__ModuleName_3)
#line 85 "prog_out.m"
{
#line 277 "prog_out.m"
  {
#line 277 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 277 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 277 "prog_out.m"
    {
#line 277 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(parse_tree__prog_out__ModuleName_3);
    }
#line 277 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 277 "prog_out.m"
  }
#line 85 "prog_out.m"
}

#line 84 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_module_name_3_p_0(
#line 84 "prog_out.m"
  MR_Word parse_tree__prog_out__ModuleName_4)
#line 84 "prog_out.m"
{
#line 274 "prog_out.m"
  {
#line 274 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 274 "prog_out.m"
    {
#line 274 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__ModuleName_4);
    }
#line 274 "prog_out.m"
  }
#line 84 "prog_out.m"
}

#line 79 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_p_0(
#line 79 "prog_out.m"
  MR_Word parse_tree__prog_out__SimpleCallId_3,
#line 79 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__2_2)
#line 79 "prog_out.m"
{
#line 269 "prog_out.m"
  {
#line 269 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 269 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 1)));
#line 269 "prog_out.m"
    MR_Integer parse_tree__prog_out__OrigArity_5;
#line 269 "prog_out.m"
    MR_Word parse_tree__prog_out__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 0)));
#line 269 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 2)));

#line 271 "prog_out.m"
    {
#line 271 "prog_out.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_out__PredOrFunc_6, &parse_tree__prog_out__OrigArity_5, parse_tree__prog_out__Arity_7);
    }
#line 269 "prog_out.m"
    {
#line 269 "prog_out.m"
      MR_Word base;
#line 269 "prog_out.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_out.m"
      *parse_tree__prog_out__HeadVar__2_2 = base;
#line 269 "prog_out.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_out__SymName_4));
#line 269 "prog_out.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_out__OrigArity_5));
#line 269 "prog_out.m"
    }
#line 269 "prog_out.m"
  }
#line 79 "prog_out.m"
}

#line 77 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_3_f_0(
#line 77 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_5,
#line 77 "prog_out.m"
  MR_Word parse_tree__prog_out__SymName_6,
#line 77 "prog_out.m"
  MR_Integer parse_tree__prog_out__Arity_7)
#line 77 "prog_out.m"
{
#line 238 "prog_out.m"
  {
#line 238 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 238 "prog_out.m"
    MR_String parse_tree__prog_out__Str_8;
#line 238 "prog_out.m"
    MR_String parse_tree__prog_out__Name_9;
#line 238 "prog_out.m"
    MR_Word parse_tree__prog_out__Pieces_12;

#line 243 "prog_out.m"
    {
#line 243 "prog_out.m"
      parse_tree__prog_out__Name_9 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_out__SymName_6);
    }
#line 245 "prog_out.m"
    {
#line 245 "prog_out.m"
      parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise__");
    }
#line 2907 "parse_tree.prog_out.c"
    if (parse_tree__prog_out__succeeded)
#line 2909 "parse_tree.prog_out.c"
      {
#line 258 "prog_out.m"
        parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[3]);
#line 2913 "parse_tree.prog_out.c"
      }
#line 2915 "parse_tree.prog_out.c"
    else
#line 2917 "parse_tree.prog_out.c"
      {
#line 247 "prog_out.m"
        {
#line 247 "prog_out.m"
          parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exclusive__");
        }
#line 2924 "parse_tree.prog_out.c"
        if (parse_tree__prog_out__succeeded)
#line 2926 "parse_tree.prog_out.c"
          {
#line 258 "prog_out.m"
            parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[5]);
#line 2930 "parse_tree.prog_out.c"
          }
#line 2932 "parse_tree.prog_out.c"
        else
#line 2934 "parse_tree.prog_out.c"
          {
#line 249 "prog_out.m"
            {
#line 249 "prog_out.m"
              parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exhaustive__");
            }
#line 2941 "parse_tree.prog_out.c"
            if (parse_tree__prog_out__succeeded)
#line 2943 "parse_tree.prog_out.c"
              {
#line 258 "prog_out.m"
                parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[7]);
#line 2947 "parse_tree.prog_out.c"
              }
#line 2949 "parse_tree.prog_out.c"
            else
#line 2951 "parse_tree.prog_out.c"
              {
#line 251 "prog_out.m"
                {
#line 251 "prog_out.m"
                  parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exclusive_exhaustive__");
                }
#line 2958 "parse_tree.prog_out.c"
                if (parse_tree__prog_out__succeeded)
#line 2960 "parse_tree.prog_out.c"
                  {
#line 258 "prog_out.m"
                    parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[9]);
#line 2964 "parse_tree.prog_out.c"
                  }
#line 2966 "parse_tree.prog_out.c"
                else
#line 2968 "parse_tree.prog_out.c"
                  {
#line 2970 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__AdjustedSymNameAndArity_14;
#line 2972 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__V_23_23;
#line 2974 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__V_24_24;
#line 2976 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__V_25_25;
#line 2978 "parse_tree.prog_out.c"
                    MR_Integer parse_tree__prog_out__OrigArity_35;

#line 271 "prog_out.m"
                    {
#line 271 "prog_out.m"
                      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_out__PredOrFunc_5, &parse_tree__prog_out__OrigArity_35, parse_tree__prog_out__Arity_7);
                    }
#line 269 "prog_out.m"
                    {
#line 269 "prog_out.m"
                      parse_tree__prog_out__AdjustedSymNameAndArity_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_out.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_out__AdjustedSymNameAndArity_14, 0) = ((MR_Box) (parse_tree__prog_out__SymName_6));
#line 269 "prog_out.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_out__AdjustedSymNameAndArity_14, 1) = ((MR_Box) (parse_tree__prog_out__OrigArity_35));
#line 269 "prog_out.m"
                    }
#line 264 "prog_out.m"
                    {
#line 264 "prog_out.m"
                      parse_tree__prog_out__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 264 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_23_23, 1) = ((MR_Box) (parse_tree__prog_out__PredOrFunc_5));
#line 264 "prog_out.m"
                    }
#line 265 "prog_out.m"
                    {
#line 265 "prog_out.m"
                      parse_tree__prog_out__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 265 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_25_25, 1) = ((MR_Box) (parse_tree__prog_out__AdjustedSymNameAndArity_14));
#line 265 "prog_out.m"
                    }
#line 265 "prog_out.m"
                    {
#line 265 "prog_out.m"
                      parse_tree__prog_out__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_24_24, 0) = ((MR_Box) (parse_tree__prog_out__V_25_25));
#line 265 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_out.m"
                    }
#line 264 "prog_out.m"
                    {
#line 264 "prog_out.m"
                      parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__Pieces_12, 0) = ((MR_Box) (parse_tree__prog_out__V_23_23));
#line 264 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_out__V_24_24));
#line 264 "prog_out.m"
                    }
#line 3036 "parse_tree.prog_out.c"
                  }
#line 3038 "parse_tree.prog_out.c"
              }
#line 3040 "parse_tree.prog_out.c"
          }
#line 3042 "parse_tree.prog_out.c"
      }
#line 267 "prog_out.m"
    {
#line 267 "prog_out.m"
      parse_tree__prog_out__Str_8 = parse_tree__error_util__error_pieces_to_string_1_f_0(parse_tree__prog_out__Pieces_12);
    }
#line 238 "prog_out.m"
    return parse_tree__prog_out__Str_8;
#line 238 "prog_out.m"
  }
#line 77 "prog_out.m"
}

#line 75 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_simple_call_id_5_p_0(
#line 75 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_6,
#line 75 "prog_out.m"
  MR_Word parse_tree__prog_out__SymName_7,
#line 75 "prog_out.m"
  MR_Integer parse_tree__prog_out__Arity_8)
#line 75 "prog_out.m"
{
#line 228 "prog_out.m"
  {
#line 228 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 228 "prog_out.m"
    MR_String parse_tree__prog_out__Str_10;

#line 229 "prog_out.m"
    {
#line 229 "prog_out.m"
      parse_tree__prog_out__Str_10 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_6, parse_tree__prog_out__SymName_7, parse_tree__prog_out__Arity_8);
    }
#line 230 "prog_out.m"
    {
#line 230 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_10);
    }
#line 228 "prog_out.m"
  }
#line 75 "prog_out.m"
}

#line 73 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_2_f_0(
#line 73 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_4,
#line 73 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2)
#line 73 "prog_out.m"
{
#line 235 "prog_out.m"
  {
#line 235 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 235 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__3_3;
#line 235 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 1)));

#line 236 "prog_out.m"
    {
#line 236 "prog_out.m"
      parse_tree__prog_out__HeadVar__3_3 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_4, parse_tree__prog_out__SymName_5, parse_tree__prog_out__Arity_6);
    }
#line 235 "prog_out.m"
    return parse_tree__prog_out__HeadVar__3_3;
#line 235 "prog_out.m"
  }
#line 73 "prog_out.m"
}

#line 71 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_simple_call_id_4_p_0(
#line 71 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_5,
#line 71 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2)
#line 71 "prog_out.m"
{
#line 224 "prog_out.m"
  {
#line 224 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 224 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "prog_out.m"
    MR_String parse_tree__prog_out__Str_9;

#line 225 "prog_out.m"
    {
#line 225 "prog_out.m"
      parse_tree__prog_out__Str_9 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_5, parse_tree__prog_out__Name_6, parse_tree__prog_out__Arity_7);
    }
#line 226 "prog_out.m"
    {
#line 226 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_9);
    }
#line 224 "prog_out.m"
  }
#line 71 "prog_out.m"
}

#line 69 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_1_f_0(
#line 69 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 69 "prog_out.m"
{
#line 232 "prog_out.m"
  {
#line 232 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 232 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;
#line 232 "prog_out.m"
    MR_Word parse_tree__prog_out__PredOrFunc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 2)));

#line 233 "prog_out.m"
    {
#line 233 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_3, parse_tree__prog_out__SymName_4, parse_tree__prog_out__Arity_5);
    }
#line 232 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 232 "prog_out.m"
  }
#line 69 "prog_out.m"
}

#line 68 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_simple_call_id_3_p_0(
#line 68 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 68 "prog_out.m"
{
#line 220 "prog_out.m"
  {
#line 220 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 220 "prog_out.m"
    MR_Word parse_tree__prog_out__PredOrFunc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 2)));
#line 220 "prog_out.m"
    MR_String parse_tree__prog_out__Str_8;

#line 221 "prog_out.m"
    {
#line 221 "prog_out.m"
      parse_tree__prog_out__Str_8 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_4, parse_tree__prog_out__Name_5, parse_tree__prog_out__Arity_6);
    }
#line 222 "prog_out.m"
    {
#line 222 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_8);
    }
#line 220 "prog_out.m"
  }
#line 68 "prog_out.m"
}

#line 66 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(
#line 66 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 66 "prog_out.m"
{
#line 215 "prog_out.m"
  {
#line 215 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 215 "prog_out.m"
    MR_String parse_tree__prog_out__String_5;
#line 215 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "prog_out.m"
    MR_String parse_tree__prog_out__SymNameString_6;
#line 215 "prog_out.m"
    MR_String parse_tree__prog_out__ArityString_7;
#line 215 "prog_out.m"
    MR_Word parse_tree__prog_out__V_8_8;
#line 215 "prog_out.m"
    MR_Word parse_tree__prog_out__V_9_9;
#line 215 "prog_out.m"
    MR_Word parse_tree__prog_out__V_11_11;

#line 216 "prog_out.m"
    {
#line 216 "prog_out.m"
      parse_tree__prog_out__SymNameString_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__SymName_3);
    }
#line 217 "prog_out.m"
    {
#line 217 "prog_out.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Arity_4, &parse_tree__prog_out__ArityString_7);
    }
#line 218 "prog_out.m"
    {
#line 218 "prog_out.m"
      parse_tree__prog_out__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_11_11, 0) = ((MR_Box) (parse_tree__prog_out__ArityString_7));
#line 218 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_out.m"
    }
#line 218 "prog_out.m"
    {
#line 218 "prog_out.m"
      parse_tree__prog_out__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 218 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_9_9, 1) = ((MR_Box) (parse_tree__prog_out__V_11_11));
#line 218 "prog_out.m"
    }
#line 218 "prog_out.m"
    {
#line 218 "prog_out.m"
      parse_tree__prog_out__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_8_8, 0) = ((MR_Box) (parse_tree__prog_out__SymNameString_6));
#line 218 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_8_8, 1) = ((MR_Box) (parse_tree__prog_out__V_9_9));
#line 218 "prog_out.m"
    }
#line 218 "prog_out.m"
    {
#line 218 "prog_out.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_out__V_8_8, &parse_tree__prog_out__String_5);
    }
#line 215 "prog_out.m"
    return parse_tree__prog_out__String_5;
#line 215 "prog_out.m"
  }
#line 66 "prog_out.m"
}

#line 58 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_quoted_sym_name_3_p_0(
#line 58 "prog_out.m"
  MR_Word parse_tree__prog_out__SymName_4)
#line 58 "prog_out.m"
{
#line 210 "prog_out.m"
  {
#line 210 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 211 "prog_out.m"
    {
#line 211 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\'");
    }
#line 212 "prog_out.m"
    {
#line 212 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__SymName_4);
    }
#line 213 "prog_out.m"
    {
#line 213 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\'");
    }
#line 210 "prog_out.m"
  }
#line 58 "prog_out.m"
}

#line 51 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_sym_name_and_arity_3_p_0(
#line 51 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 51 "prog_out.m"
{
#line 205 "prog_out.m"
  {
#line 205 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 205 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 206 "prog_out.m"
    {
#line 206 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_4);
    }
#line 207 "prog_out.m"
    {
#line 207 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 208 "prog_out.m"
    {
#line 208 "prog_out.m"
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_5);
    }
#line 205 "prog_out.m"
  }
#line 51 "prog_out.m"
}

#line 49 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(
#line 49 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 49 "prog_out.m"
{
#line 198 "prog_out.m"
  {
#line 198 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 198 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 198 "prog_out.m"
    if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 198 "prog_out.m"
      {
#line 198 "prog_out.m"
        MR_Word parse_tree__prog_out__ModuleSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "prog_out.m"
        MR_String parse_tree__prog_out__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 198 "prog_out.m"
        MR_String parse_tree__prog_out__V_5_5;
#line 198 "prog_out.m"
        MR_String parse_tree__prog_out__V_6_6;
#line 198 "prog_out.m"
        MR_String parse_tree__prog_out__V_8_8;

#line 199 "prog_out.m"
        {
#line 199 "prog_out.m"
          parse_tree__prog_out__V_5_5 = parse_tree__prog_out__module_name_to_escaped_string_1_f_0(parse_tree__prog_out__ModuleSpec_3);
        }
#line 201 "prog_out.m"
        {
#line 201 "prog_out.m"
          parse_tree__prog_out__V_8_8 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__Name_4);
        }
#line 201 "prog_out.m"
        {
#line 201 "prog_out.m"
          parse_tree__prog_out__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__prog_out__V_8_8);
        }
#line 200 "prog_out.m"
        {
#line 200 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_5_5, parse_tree__prog_out__V_6_6);
        }
#line 198 "prog_out.m"
      }
#line 198 "prog_out.m"
    else
#line 202 "prog_out.m"
      {
#line 202 "prog_out.m"
        MR_String parse_tree__prog_out__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 203 "prog_out.m"
        {
#line 203 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__Name_9);
        }
#line 202 "prog_out.m"
      }
#line 198 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 198 "prog_out.m"
  }
#line 49 "prog_out.m"
}

#line 48 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_sym_name_3_p_0(
#line 48 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 48 "prog_out.m"
{
#line 191 "prog_out.m"
  {
#line 191 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 191 "prog_out.m"
    if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 191 "prog_out.m"
      {
#line 191 "prog_out.m"
        MR_Word parse_tree__prog_out__ModuleSpec_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 191 "prog_out.m"
        MR_String parse_tree__prog_out__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 192 "prog_out.m"
        {
#line 192 "prog_out.m"
          parse_tree__prog_out__write_module_name_3_p_0(parse_tree__prog_out__ModuleSpec_4);
        }
#line 193 "prog_out.m"
        {
#line 193 "prog_out.m"
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
#line 194 "prog_out.m"
        {
#line 194 "prog_out.m"
          mercury__term_io__write_escaped_string_3_p_0(parse_tree__prog_out__Name_5);
        }
#line 191 "prog_out.m"
      }
#line 191 "prog_out.m"
    else
#line 195 "prog_out.m"
      {
#line 195 "prog_out.m"
        MR_String parse_tree__prog_out__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 196 "prog_out.m"
        {
#line 196 "prog_out.m"
          mercury__term_io__write_escaped_string_3_p_0(parse_tree__prog_out__Name_13);
        }
#line 195 "prog_out.m"
      }
#line 191 "prog_out.m"
  }
#line 48 "prog_out.m"
}

#line 41 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__context_to_string_2_p_0(
#line 41 "prog_out.m"
  MR_Word parse_tree__prog_out__Context_3,
#line 41 "prog_out.m"
  MR_String * parse_tree__prog_out__ContextMessage_4)
#line 41 "prog_out.m"
{
#line 179 "prog_out.m"
  {
#line 179 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 179 "prog_out.m"
    MR_String parse_tree__prog_out__FileName_5;
#line 179 "prog_out.m"
    MR_Integer parse_tree__prog_out__LineNumber_6;

#line 180 "prog_out.m"
    {
#line 180 "prog_out.m"
      mercury__term__context_file_2_p_0(parse_tree__prog_out__Context_3, &parse_tree__prog_out__FileName_5);
    }
#line 181 "prog_out.m"
    {
#line 181 "prog_out.m"
      mercury__term__context_line_2_p_0(parse_tree__prog_out__Context_3, &parse_tree__prog_out__LineNumber_6);
    }
#line 182 "prog_out.m"
    parse_tree__prog_out__succeeded = (strcmp(parse_tree__prog_out__FileName_5, (MR_String) "") == 0);
#line 184 "prog_out.m"
    if (parse_tree__prog_out__succeeded)
#line 183 "prog_out.m"
      *parse_tree__prog_out__ContextMessage_4 = (MR_String) "";
#line 184 "prog_out.m"
    else
#line 185 "prog_out.m"
      {
#line 185 "prog_out.m"
        MR_String parse_tree__prog_out__V_14_14;
#line 185 "prog_out.m"
        MR_String parse_tree__prog_out__V_22_22;
#line 185 "prog_out.m"
        MR_String parse_tree__prog_out__V_24_24;
#line 185 "prog_out.m"
        MR_String parse_tree__prog_out__V_25_25;

#line 185 "prog_out.m"
        {
#line 185 "prog_out.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &parse_tree__prog_out_scalar_common_1[0], (MR_Integer) 3, parse_tree__prog_out__LineNumber_6, &parse_tree__prog_out__V_14_14);
        }
#line 185 "prog_out.m"
        {
#line 185 "prog_out.m"
          parse_tree__prog_out__V_22_22 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_14_14, (MR_String) ": ");
        }
#line 185 "prog_out.m"
        {
#line 185 "prog_out.m"
          parse_tree__prog_out__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", parse_tree__prog_out__V_22_22);
        }
#line 185 "prog_out.m"
        {
#line 185 "prog_out.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_out_scalar_common_1[1], parse_tree__prog_out__FileName_5, &parse_tree__prog_out__V_25_25);
        }
#line 185 "prog_out.m"
        {
#line 185 "prog_out.m"
          *parse_tree__prog_out__ContextMessage_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_25_25, parse_tree__prog_out__V_24_24);
        }
#line 185 "prog_out.m"
      }
#line 179 "prog_out.m"
  }
#line 41 "prog_out.m"
}

#line 35 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_context_3_p_0(
#line 35 "prog_out.m"
  MR_Word parse_tree__prog_out__Context_4)
#line 35 "prog_out.m"
{
#line 175 "prog_out.m"
  {
#line 175 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 175 "prog_out.m"
    MR_String parse_tree__prog_out__ContextMessage_6;

#line 176 "prog_out.m"
    {
#line 176 "prog_out.m"
      parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_out__Context_4, &parse_tree__prog_out__ContextMessage_6);
    }
#line 177 "prog_out.m"
    {
#line 177 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__ContextMessage_6);
    }
#line 175 "prog_out.m"
  }
#line 35 "prog_out.m"
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
