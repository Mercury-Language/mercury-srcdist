/*
** Automatically generated from `prog_out.m'
** by the Mercury compiler,
** version rotd-2022-03-06
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_ordinal_ordered_maybe_mangle_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_mangle_cons_0[2];

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_mangle_cons_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_ordinal_ordered_maybe_quote_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0[2];

static const MR_Integer parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0[2];

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__365__1_3_p_0(
  MR_Char LambdaHeadVar__1_92,
  MR_String LambdaHeadVar__2_93,
  MR_String * LambdaHeadVar__3_94);

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
parse_tree__prog_out__type_to_debug_string_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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


static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_4[2][1];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_5[2][6];


struct parse_tree__prog_out__vector_common_type_6_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[17];

struct parse_tree__prog_out__vector_common_type_7_0_s {
  const MR_String parse_tree__prog_out__vector_common_type_7_0__vct_7_f_0;
  const MR_Word parse_tree__prog_out__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_7_0_s parse_tree__prog_out_vector_common_7[4];

struct parse_tree__prog_out__vector_common_type_8_0_s {
  const MR_Word parse_tree__prog_out__vector_common_type_8_0__vct_8_f_0;
  const MR_String parse_tree__prog_out__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_8_0_s parse_tree__prog_out_vector_common_8[4];



static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_out_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__prog_out_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__prog_out_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__prog_out_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_4[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct parse_tree__prog_out__vector_common_type_6_0_s parse_tree__prog_out_vector_common_6[17] = {
  /* row   0 */   { (MR_String) "promise_exclusive" },
  /* row   1 */   { (MR_String) "promise_exhaustive" },
  /* row   2 */   { (MR_String) "promise_exclusive_exhaustive" },
  /* row   3 */   { (MR_String) "promise" },
  /* row   4 */   { (MR_String) "det" },
  /* row   5 */   { (MR_String) "semidet" },
  /* row   6 */   { (MR_String) "multi" },
  /* row   7 */   { (MR_String) "nondet" },
  /* row   8 */   { (MR_String) "cc_multi" },
  /* row   9 */   { (MR_String) "cc_nondet" },
  /* row  10 */   { (MR_String) "erroneous" },
  /* row  11 */   { (MR_String) "failure" },
  /* row  12 */   { (MR_String) "singleton_vars" },
  /* row  13 */   { (MR_String) "suspected_occurs_check_failure" },
  /* row  14 */   { (MR_String) "non_tail_recursive_calls" },
  /* row  15 */   { (MR_String) "suspicious_recursion" },
  /* row  16 */   { (MR_String) "no_solution_disjunct" },
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_7_0_s parse_tree__prog_out_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "promise",
    (MR_Integer) 3
  },
  /* row   1 */
  {
    (MR_String) "promise_exclusive",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "promise_exclusive_exhaustive",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "promise_exhaustive",
    (MR_Integer) 1
  },
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_8_0_s parse_tree__prog_out_vector_common_8[4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_String) "promise"
  },
  /* row   1 */
  {
    (MR_Integer) 0,
    (MR_String) "promise_exclusive"
  },
  /* row   2 */
  {
    (MR_Integer) 1,
    (MR_String) "promise_exhaustive"
  },
  /* row   3 */
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_0 = {
  (MR_String) "dont_mangle_cons",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_mangle_cons_0_1 = {
  (MR_String) "mangle_cons",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_ordinal_ordered_maybe_mangle_cons_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_out____Unify____maybe_mangle_cons_0_0_10001)),
  ((MR_Box) (parse_tree__prog_out____Compare____maybe_mangle_cons_0_0_10001)),
  (MR_String) "parse_tree.prog_out",
  (MR_String) "maybe_mangle_cons",
  { parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_mangle_cons_0 },
  { parse_tree__prog_out__parse_tree__prog_out__enum_ordinal_ordered_maybe_mangle_cons_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_mangle_cons_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_0 = {
  (MR_String) "dont_quote_cons",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_out__parse_tree__prog_out__enum_functor_desc_maybe_quote_cons_0_1 = {
  (MR_String) "quote_cons",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_out__parse_tree__prog_out__enum_ordinal_ordered_maybe_quote_cons_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001)),
  ((MR_Box) (parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001)),
  (MR_String) "parse_tree.prog_out",
  (MR_String) "maybe_quote_cons",
  { parse_tree__prog_out__parse_tree__prog_out__enum_name_ordered_maybe_quote_cons_0 },
  { parse_tree__prog_out__parse_tree__prog_out__enum_ordinal_ordered_maybe_quote_cons_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_out__parse_tree__prog_out__functor_number_map_maybe_quote_cons_0,

};

static void MR_CALL 
parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__365__1_3_p_0(
  MR_Char LambdaHeadVar__1_92,
  MR_String LambdaHeadVar__2_93,
  MR_String * LambdaHeadVar__3_94)
{
  MR_bool succeeded = (LambdaHeadVar__1_92 == (MR_Char) 42);

  if (succeeded)
    mercury__string__append_3_p_2(LambdaHeadVar__2_93, (MR_String) "star", LambdaHeadVar__3_94);
  else
  {
    MR_String CharStr_18;

    mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_92, &CharStr_18);
    mercury__string__append_3_p_2(LambdaHeadVar__2_93, CharStr_18, LambdaHeadVar__3_94);
  }
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0(
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

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_mangle_cons_0_0(
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

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_mangle_cons_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv4_Name_6;

  parse_tree__prog_out__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Name_6);
  *wrapper_arg_2 = ((MR_Box) (conv4_Name_6));
}

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_Name_6;

  parse_tree__prog_out__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Name_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_Name_6));
}

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Name_6;

  parse_tree__prog_out__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Name_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Name_6));
}

static void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Name_6;

  parse_tree__prog_out__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Name_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Name_6));
}

void MR_CALL 
parse_tree__prog_out__type_to_debug_string_3_p_0(
  MR_Word TVarSet_4,
  MR_Word Type_5,
  MR_String * Name_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_5, (MR_Integer) 0))));

          *Name_6 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_4, (MR_Integer) 1, TVar_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_5, (MR_Integer) 0))));
          MR_Word Subtypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_5, (MR_Integer) 1))));
          MR_Word SubtypeNames_12;
          MR_String SubtypeName_13;
          MR_Word Var_56;
          MR_String Var_58;
          MR_String Var_59;
          MR_String Var_61;

          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&parse_tree__prog_out_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (parse_tree__prog_out__type_to_debug_string_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (TVarSet_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_56, Subtypes_10, &SubtypeNames_12);
          SubtypeName_13 = mercury__string__join_list_2_f_0((MR_String) ", ", SubtypeNames_12);
          Var_58 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_9);
          Var_61 = mercury__string__f_43_43_2_f_0(SubtypeName_13, (MR_String) ")");
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_61);
          *Name_6 = mercury__string__f_43_43_2_f_0(Var_58, Var_59);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_5, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_85)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Name_6 = (MR_String) "float";
                  break;
                case (MR_Integer) 1:
                  *Name_6 = (MR_String) "string";
                  break;
                case (MR_Integer) 2:
                  *Name_6 = (MR_String) "character";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))) & (MR_Integer) 15);

                parse_tree__prog_data__int_type_to_string_2_p_0(IntType_14, Name_6);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_46;
              MR_String Var_48;
              MR_String Var_49;
              MR_Word Subtypes_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));
              MR_Word SubtypeNames_65;

              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__prog_out_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__prog_out__type_to_debug_string_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (TVarSet_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Subtypes_64, &SubtypeNames_65);
              Var_49 = mercury__string__join_list_2_f_0((MR_String) ", ", SubtypeNames_65);
              Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "}");
              *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "{", Var_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Types_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 2))));
              MR_Word TypeNames_21;
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__prog_out_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__prog_out__type_to_debug_string_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TVarSet_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Types_17, &TypeNames_21);
              switch (PorF_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgTypeNames_22;
                    MR_String ReturnTypeName_23;
                    MR_String Var_36;
                    MR_String Var_37;
                    MR_String Var_39;
                    MR_Box conv3_ReturnTypeName_23;

                    mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeNames_21, &ArgTypeNames_22, &conv3_ReturnTypeName_23);
                    ReturnTypeName_23 = ((MR_String) (conv3_ReturnTypeName_23));
                    Var_37 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgTypeNames_22);
                    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ReturnTypeName_23);
                    Var_36 = mercury__string__f_43_43_2_f_0(Var_37, Var_39);
                    *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "func(", Var_36);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String Var_42;
                    MR_String Var_43;

                    Var_43 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeNames_21);
                    Var_42 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) ")");
                    *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "pred(", Var_42);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_28;
              MR_String Var_30;
              MR_String Var_31;
              MR_Word Subtypes_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 2))));
              MR_Word SubtypeNames_67;

              {
                Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__prog_out_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__prog_out__type_to_debug_string_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TVarSet_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Subtypes_66, &SubtypeNames_67);
              Var_31 = mercury__string__join_list_2_f_0((MR_String) ", ", SubtypeNames_67);
              Var_30 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) ")");
              *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "func(", Var_30);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));
              MR_Word next_value_of_Type_5 = Type0_26;

              // direct tailcall eliminated
              ;
              Type_5 = next_value_of_Type_5;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_String MR_CALL 
parse_tree__prog_out__goal_warning_to_string_1_f_0(
  MR_Word Warning_3)
{
  MR_String Str_4 = ((&parse_tree__prog_out_vector_common_6[12 + Warning_3]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;

  return Str_4;
}

MR_String MR_CALL 
parse_tree__prog_out__can_fail_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
parse_tree__prog_out__determinism_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_6[4 + HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_out__arg_tabling_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "normal";
  else
  {
    MR_Word TabledMethod_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__2_2 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_3);
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(
  MR_Word TabledMethod_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) TabledMethod_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Str_4 = (MR_String) "loop_check";
      break;
    case (MR_Integer) 1:
      Str_4 = (MR_String) "memo";
      break;
    case (MR_Integer) 2:
      {
        MR_Word EntryKind_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TabledMethod_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        MR_Word IsUnitize_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TabledMethod_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String EntryKindStr_9;
        MR_String UnitizeStr_10;
        MR_String Var_12;
        MR_String Var_13;

        switch (EntryKind_7) {
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
        switch (IsUnitize_8) {
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
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", Var_12);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word MinimalMethod_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TabledMethod_3, (MR_Integer) 0))) & (MR_Integer) 3);

        switch (MinimalMethod_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Str_4 = (MR_String) "minimal_model_own_stacks_consumer";
            break;
          case (MR_Integer) 2:
            Str_4 = (MR_String) "minimal_model_own_stacks_generator";
            break;
          case (MR_Integer) 0:
            Str_4 = (MR_String) "minimal_model_stack_copy";
            break;
        }
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "loop_check";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "memo";
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_out.tabled_eval_method_to_pragma_name\'/1", (MR_String) "io");
      break;
    case (MR_Integer) 3:
      {
        MR_Word MinimalMethod_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

        switch (MinimalMethod_4) {
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

MR_String MR_CALL 
parse_tree__prog_out__purity_prefix_to_string_1_f_0(
  MR_Word Purity_3)
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
        String_4 = mercury__string__f_43_43_2_f_0(PurityName_5, (MR_String) " ");
      }
      break;
    case (MR_Integer) 0:
      String_4 = (MR_String) "";
      break;
  }
  return String_4;
}

MR_bool MR_CALL 
parse_tree__prog_out__purity_name_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
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
parse_tree__prog_out__write_pred_or_func_4_p_0(
  MR_Word Stream_5,
  MR_Word PorF_6)
{
  MR_String Var_10;

  switch (PorF_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_10 = (MR_String) "function";
      break;
    case (MR_Integer) 0:
      Var_10 = (MR_String) "predicate";
      break;
  }
  mercury__io__write_string_4_p_0(Stream_5, Var_10);
}

void MR_CALL 
parse_tree__prog_out__write_pred_or_func_3_p_0(
  MR_Word PorF_4)
{
  MR_Word Stream_6;
  MR_String Var_16;

  mercury__io__output_stream_3_p_0(&Stream_6);
  switch (PorF_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_16 = (MR_String) "function";
      break;
    case (MR_Integer) 0:
      Var_16 = (MR_String) "predicate";
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, Var_16);
}

MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_str_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(
  MR_Word HeadVar__1_1)
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

void MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_2(
  MR_Word * HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_8[0 + slot_0]))->parse_tree__prog_out__vector_common_type_8_0__vct_8_f_0;
    *HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_8[0 + slot_0]))->parse_tree__prog_out__vector_common_type_8_0__vct_8_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 4));
}

MR_bool MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
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
    result_3 = MR_strcmp(HeadVar__2_2, ((&parse_tree__prog_out_vector_common_7[0 + mid_2]))->parse_tree__prog_out__vector_common_type_7_0__vct_7_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_7[0 + mid_2]))->parse_tree__prog_out__vector_common_type_7_0__vct_7_f_1;
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

MR_String MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_6[0 + HeadVar__1_1]))->parse_tree__prog_out__vector_common_type_6_0__vct_6_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0((MR_Integer) 1, (MR_Integer) 0, ConsId_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_3);
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__3_94;

  parse_tree__prog_out__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__365__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_94);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_94));
}

static MR_String MR_CALL 
parse_tree__prog_out__cons_id_and_arity_to_string_maybe_quoted_3_f_0(
  MR_Word MangleCons_5,
  MR_Word QuoteCons_6,
  MR_Word ConsId_7)
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
        MR_String Var_59;
        MR_String Var_60;
        MR_String Var_61;
        MR_String Var_63;
        MR_String Var_64;
        MR_Word PredProcId_108 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 2));
        MR_Integer PredId_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_108, (MR_Integer) 0))));
        MR_Integer ProcId_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_108, (MR_Integer) 1))));

        Var_60 = mercury__string__int_to_string_1_f_0(PredId_109);
        Var_64 = mercury__string__int_to_string_1_f_0(ProcId_110);
        Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ">");
        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_63);
        Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Var_61);
        String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_59);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_51;
            MR_String Var_52;
            MR_String Var_53;
            MR_String Var_55;
            MR_String Var_56;
            MR_Word PredProcId_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
            MR_Integer PredId_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_111, (MR_Integer) 0))));
            MR_Integer ProcId_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_111, (MR_Integer) 1))));

            Var_52 = mercury__string__int_to_string_1_f_0(PredId_112);
            Var_56 = mercury__string__int_to_string_1_f_0(ProcId_113);
            Var_55 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) ">");
            Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_55);
            Var_51 = mercury__string__f_43_43_2_f_0(Var_52, Var_53);
            String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_51);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_43;
            MR_String Var_44;
            MR_String Var_45;
            MR_String Var_47;
            MR_String Var_48;
            MR_Word PredProcId_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
            MR_Integer PredId_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_114, (MR_Integer) 0))));
            MR_Integer ProcId_116 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_114, (MR_Integer) 1))));

            Var_44 = mercury__string__int_to_string_1_f_0(PredId_115);
            Var_48 = mercury__string__int_to_string_1_f_0(ProcId_116);
            Var_47 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) ">");
            Var_45 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_47);
            Var_43 = mercury__string__f_43_43_2_f_0(Var_44, Var_45);
            String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_43);
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

                    mercury__string__foldl_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_out_scalar_common_1[1]), SymNameString0_12, ((MR_Box) ((MR_String) "")), &conv1_SymNameString1_19);
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
                  MR_String Var_101;

                  Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityString_20);
                  String_8 = mercury__string__f_43_43_2_f_0(SymNameString_13, Var_101);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_98;
                  MR_String Var_99;

                  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", ArityString_20);
                  Var_98 = mercury__string__f_43_43_2_f_0(SymNameString_13, Var_99);
                  String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_98);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_90;
            MR_Integer Arity_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

            Var_90 = mercury__string__int_to_string_1_f_0(Arity_106);
            String_8 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_90);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word PredProcId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
            MR_Integer PredId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_27, (MR_Integer) 0))));
            MR_Integer ProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_27, (MR_Integer) 1))));
            MR_String Var_78;
            MR_String Var_79;
            MR_String Var_80;
            MR_String Var_82;
            MR_String Var_83;

            Var_79 = mercury__string__int_to_string_1_f_0(PredId_29);
            Var_83 = mercury__string__int_to_string_1_f_0(ProcId_30);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_83, (MR_String) ">");
            Var_80 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_82);
            Var_78 = mercury__string__f_43_43_2_f_0(Var_79, Var_80);
            String_8 = mercury__string__f_43_43_2_f_0((MR_String) "closure_cons<pred ", Var_78);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
            MR_String _Suffix_22;

            parse_tree__prog_out__int_const_to_string_and_suffix_3_p_0(IntConst_21, &String_8, &_Suffix_22);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

            String_8 = mercury__string__float_to_string_1_f_0(Float_23);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char CharConst_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

            String_8 = mercury__term_io__quoted_char_1_f_0(CharConst_24);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String StringConst_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

            String_8 = mercury__term_io__quoted_string_1_f_0(StringConst_25);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (QuoteCons_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                String_8 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_26);
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_86;
                  MR_String Var_87;

                  Var_87 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_26);
                  Var_86 = mercury__string__f_43_43_2_f_0(Var_87, (MR_String) "\'");
                  String_8 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_86);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Module_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
            MR_String Ctor_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2))));
            MR_String Var_67;
            MR_String Var_68;
            MR_String Var_69;
            MR_String Var_71;
            MR_String Var_72;
            MR_String Var_74;
            MR_String Var_75;
            MR_Integer Arity_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 3))));

            Var_68 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_31);
            Var_75 = mercury__string__int_to_string_1_f_0(Arity_107);
            Var_74 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) ">");
            Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_74);
            Var_71 = mercury__string__f_43_43_2_f_0(Ctor_32, Var_72);
            Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_71);
            Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
            String_8 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_67);
          }
          break;
        case (MR_Integer) 11:
          String_8 = (MR_String) "<base_typeclass_info>";
          break;
        case (MR_Integer) 12:
          String_8 = (MR_String) "<type_info_const>";
          break;
        case (MR_Integer) 13:
          String_8 = (MR_String) "<typeclass_info_const>";
          break;
        case (MR_Integer) 14:
          String_8 = (MR_String) "<ground_term_const>";
          break;
      }
      break;
  }
  return String_8;
}

void MR_CALL 
parse_tree__prog_out__int_const_to_string_and_suffix_3_p_0(
  MR_Word IntConst_4,
  MR_String * Str_5,
  MR_String * Suffix_6)
{
  switch (MR_tag((MR_Word) IntConst_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntConst_4, (MR_Integer) 0))));

        *Str_5 = mercury__string__int_to_string_1_f_0(Int_7);
        *Suffix_6 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntConst_4, (MR_Integer) 0))));

        *Str_5 = mercury__string__uint_to_string_1_f_0(UInt_8);
        *Suffix_6 = (MR_String) "u";
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_9 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntConst_4, (MR_Integer) 0)));

        *Str_5 = mercury__string__int8_to_string_1_f_0(Int8_9);
        *Suffix_6 = (MR_String) "i8";
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint8_to_string_1_f_0(UInt8_10);
            *Suffix_6 = (MR_String) "u8";
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_11 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__int16_to_string_1_f_0(Int16_11);
            *Suffix_6 = (MR_String) "i16";
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_12 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint16_to_string_1_f_0(UInt16_12);
            *Suffix_6 = (MR_String) "u16";
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_13 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__int32_to_string_1_f_0(Int32_13);
            *Suffix_6 = (MR_String) "i32";
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint32_to_string_1_f_0(UInt32_14);
            *Suffix_6 = (MR_String) "u32";
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_15 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__int64_to_string_1_f_0(Int64_15);
            *Suffix_6 = (MR_String) "i64";
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint64_to_string_1_f_0(UInt64_16);
            *Suffix_6 = (MR_String) "u64";
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_out__write_class_id_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

  parse_tree__prog_out__write_sym_name_4_p_0(Stream_5, Name_16);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "/");
  mercury__io__write_int_4_p_0(Stream_5, Arity_17);
}

void MR_CALL 
parse_tree__prog_out__write_type_name_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

  parse_tree__prog_out__write_sym_name_4_p_0(Stream_5, Name_6);
}

MR_String MR_CALL 
parse_tree__prog_out__type_name_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word Name_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Name_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_out__type_ctor_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_user_arity_to_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word SNA_5)
{
  MR_String Str_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_5, (MR_Integer) 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_5, (MR_Integer) 1))));

  Str_6 = parse_tree__prog_out__pf_sym_name_user_arity_to_string_3_f_0(PredOrFunc_4, SymName_7, Arity_8);
  return Str_6;
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_user_arity_to_string_1_f_0(
  MR_Word PFSymNameArity_3)
{
  MR_String Str_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 1))));
  MR_Integer Arity_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 2))));

  Arity_7 = (MR_Integer) (Var_8);
  Str_4 = parse_tree__prog_out__pf_sym_name_user_arity_to_string_3_f_0(PredOrFunc_5, SymName_6, Arity_7);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_user_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  MR_String Str_8;
  MR_String Var_9;
  MR_String Var_10;
  MR_String Var_12;
  MR_String Var_13;
  MR_String Var_14;
  MR_String Var_15;
  MR_String Var_17;

  Var_9 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_5);
  Var_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  Var_13 = parse_tree__error_util__add_quotes_1_f_0(Var_14);
  Var_17 = mercury__string__int_to_string_1_f_0(Arity_7);
  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_17);
  Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_15);
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_12);
  Str_8 = mercury__string__f_43_43_2_f_0(Var_9, Var_10);
  return Str_8;
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_orig_arity_to_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word SNA_5)
{
  MR_String Str_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_5, (MR_Integer) 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_5, (MR_Integer) 1))));
  MR_Word PredFormArity_9 = (MR_Word) (Arity_8);

  Str_6 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_4, SymName_7, PredFormArity_9);
  return Str_6;
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(
  MR_Word PFSymNameArity_3)
{
  MR_String Str_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 1))));
  MR_Word Arity_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_3, (MR_Integer) 2))));

  Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_5, SymName_6, Arity_7);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Word PredFormArity_7)
{
  MR_String Str_8;
  MR_Integer UserArityInt_9;
  MR_String PredOrFuncStr_10;
  MR_String SymNameStr_11;
  MR_Word Var_12;
  MR_String Var_21;
  MR_String Var_29;
  MR_String Var_30;
  MR_String Var_32;

  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_5, &Var_12, PredFormArity_7);
  UserArityInt_9 = (MR_Integer) (Var_12);
  PredOrFuncStr_10 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_5);
  SymNameStr_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_out_scalar_common_4[1]), UserArityInt_9, &Var_21);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", Var_21);
  Var_30 = mercury__string__f_43_43_2_f_0(SymNameStr_11, Var_29);
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_30);
  Str_8 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_10, Var_32);
  return Str_8;
}

MR_String MR_CALL 
parse_tree__prog_out__module_name_to_escaped_string_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_3);
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_arity_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

  parse_tree__prog_out__write_sym_name_4_p_0(Stream_5, Name_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "/");
  mercury__io__write_int_4_p_0(Stream_5, Arity_7);
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_arity_3_p_0(
  MR_Word SNA_4)
{
  MR_Word Stream_6;
  MR_Word Name_14;
  MR_Integer Arity_15;

  mercury__io__output_stream_3_p_0(&Stream_6);
  Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_4, (MR_Integer) 0))));
  Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_4, (MR_Integer) 1))));
  parse_tree__prog_out__write_sym_name_4_p_0(Stream_6, Name_14);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "/");
  mercury__io__write_int_4_p_0(Stream_6, Arity_15);
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_arity_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

void MR_CALL 
parse_tree__prog_out__write_quoted_sym_name_4_p_0(
  MR_Word Stream_5,
  MR_Word SymName_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\'");
  parse_tree__prog_out__write_sym_name_4_p_0(Stream_5, SymName_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\'");
}

void MR_CALL 
parse_tree__prog_out__write_quoted_sym_name_3_p_0(
  MR_Word SymName_4)
{
  MR_Word Stream_6;

  mercury__io__output_stream_3_p_0(&Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\'");
  parse_tree__prog_out__write_sym_name_4_p_0(Stream_6, SymName_4);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\'");
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_3_p_0(
  MR_Word SymName_4)
{
  MR_Word Stream_6;

  mercury__io__output_stream_3_p_0(&Stream_6);
  parse_tree__prog_out__write_sym_name_4_p_0(Stream_6, SymName_4);
}

void MR_CALL 
parse_tree__prog_out__write_sym_name_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Module_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

    parse_tree__prog_out__write_sym_name_4_p_0(Stream_1, Module_6);
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) ".");
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_out_scalar_common_3[0]), (MR_Word) (&parse_tree__prog_out_scalar_common_3[1]), Stream_1, Name_7);
  }
  else
  {
    MR_String Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_out_scalar_common_3[0]), (MR_Word) (&parse_tree__prog_out_scalar_common_3[1]), Stream_1, Name_16);
  }
}

MR_String MR_CALL 
parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Module_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_5;
    MR_String Var_6;
    MR_String Var_8;

    Var_5 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Module_3);
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

void MR_CALL 
parse_tree__prog_out__write_context_4_p_0(
  MR_Word Stream_5,
  MR_Word Context_6)
{
  MR_String ContextMessage_8;

  parse_tree__prog_out__context_to_string_2_p_0(Context_6, &ContextMessage_8);
  mercury__io__write_string_4_p_0(Stream_5, ContextMessage_8);
}

void MR_CALL 
parse_tree__prog_out__write_context_3_p_0(
  MR_Word Context_4)
{
  MR_Word Stream_6;
  MR_String ContextMessage_16;

  mercury__io__output_stream_3_p_0(&Stream_6);
  parse_tree__prog_out__context_to_string_2_p_0(Context_4, &ContextMessage_16);
  mercury__io__write_string_4_p_0(Stream_6, ContextMessage_16);
}

void MR_CALL 
parse_tree__prog_out__context_to_string_2_p_0(
  MR_Word Context_3,
  MR_String * ContextMessage_4)
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

    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&parse_tree__prog_out_scalar_common_4[0]), (MR_Integer) 3, LineNumber_6, &Var_14);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ": ");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_22);
    *ContextMessage_4 = mercury__string__f_43_43_2_f_0(FileName_5, Var_24);
  }
}

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_mangle_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_out____Unify____maybe_mangle_cons_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_mangle_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_out____Compare____maybe_mangle_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_out____Unify____maybe_quote_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_out____Unify____maybe_quote_cons_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_out____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_out____Compare____maybe_quote_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
