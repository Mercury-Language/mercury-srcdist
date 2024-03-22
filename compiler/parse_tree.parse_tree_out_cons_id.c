/*
** Automatically generated from `parse_tree_out_cons_id.m'
** by the Mercury compiler,
** version rotd-2024-03-22
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


// :- module parse_tree.parse_tree_out_cons_id.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_cons_id__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_cons_id.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_mangle_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_mangle_cons_0[2];

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_mangle_cons_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_quote_cons_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_quote_cons_0[2];

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_quote_cons_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_strip_qual_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_strip_qual_0[2];

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_strip_qual_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_needs_brackets_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_needs_brackets_0[2];

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_needs_brackets_0[2];

static void MR_CALL 
parse_tree__parse_tree_out_cons_id__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__284__1_3_p_0(
  MR_Char LambdaHeadVar__1_45,
  MR_String LambdaHeadVar__2_46,
  MR_String * LambdaHeadVar__3_47);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_strip_qual_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_strip_qual_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_quote_cons_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_quote_cons_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_mangle_cons_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_mangle_cons_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0(
  MR_Word MangleCons_6,
  MR_Word QuoteCons_7,
  MR_Word StripQual_8,
  MR_Word ConsId_9);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_mangle_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_mangle_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_quote_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_strip_qual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_strip_qual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_4[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_5[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_6[1][6];




static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_cons_id_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_5[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_cons_id_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_0 = {
  (MR_String) "dont_mangle_cons",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_1 = {
  (MR_String) "mangle_cons",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_mangle_cons_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_mangle_cons_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_mangle_cons_0_1
};

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_mangle_cons_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_maybe_mangle_cons_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Unify____maybe_mangle_cons_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Compare____maybe_mangle_cons_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_cons_id",
  (MR_String) "maybe_mangle_cons",
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_mangle_cons_0 },
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_mangle_cons_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_mangle_cons_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_0 = {
  (MR_String) "dont_quote_cons",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_1 = {
  (MR_String) "quote_cons",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_quote_cons_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_quote_cons_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_quote_cons_0_1
};

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_quote_cons_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_maybe_quote_cons_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Unify____maybe_quote_cons_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Compare____maybe_quote_cons_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_cons_id",
  (MR_String) "maybe_quote_cons",
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_quote_cons_0 },
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_quote_cons_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_quote_cons_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_0 = {
  (MR_String) "dont_strip_qual",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_1 = {
  (MR_String) "strip_qual",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_strip_qual_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_strip_qual_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_maybe_strip_qual_0_1
};

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_strip_qual_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_maybe_strip_qual_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Unify____maybe_strip_qual_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Compare____maybe_strip_qual_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_cons_id",
  (MR_String) "maybe_strip_qual",
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_maybe_strip_qual_0 },
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_maybe_strip_qual_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_maybe_strip_qual_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_needs_brackets_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_functor_desc_needs_brackets_0_0
};

static const MR_Integer parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_needs_brackets_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Unify____needs_brackets_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_cons_id____Compare____needs_brackets_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_cons_id",
  (MR_String) "needs_brackets",
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_name_ordered_needs_brackets_0 },
  { parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__enum_ordinal_ordered_needs_brackets_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__functor_number_map_needs_brackets_0,

};

static void MR_CALL 
parse_tree__parse_tree_out_cons_id__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__284__1_3_p_0(
  MR_Char LambdaHeadVar__1_45,
  MR_String LambdaHeadVar__2_46,
  MR_String * LambdaHeadVar__3_47)
{
  MR_bool succeeded = (LambdaHeadVar__1_45 == (MR_Char) 42);

  if (succeeded)
    mercury__string__append_3_p_2(LambdaHeadVar__2_46, (MR_String) "star", LambdaHeadVar__3_47);
  else
  {
    MR_String CharStr_20;

    mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_45, &CharStr_20);
    mercury__string__append_3_p_2(LambdaHeadVar__2_46, CharStr_20, LambdaHeadVar__3_47);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____needs_brackets_0_0(
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
parse_tree__parse_tree_out_cons_id____Unify____needs_brackets_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_strip_qual_0_0(
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
parse_tree__parse_tree_out_cons_id____Unify____maybe_strip_qual_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_quote_cons_0_0(
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
parse_tree__parse_tree_out_cons_id____Unify____maybe_quote_cons_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_mangle_cons_0_0(
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
parse_tree__parse_tree_out_cons_id____Unify____maybe_mangle_cons_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_cons_id__unqual_cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0((MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 1, ConsId_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0((MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, ConsId_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_cons_id__maybe_quoted_cons_id_and_arity_to_string_1_f_0(
  MR_Word ConsId_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, ConsId_3);
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__3_47;

  parse_tree__parse_tree_out_cons_id__IntroducedFrom__pred__cons_id_and_arity_to_string_maybe_quoted__284__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_47);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_47));
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_maybe_quoted_4_f_0(
  MR_Word MangleCons_6,
  MR_Word QuoteCons_7,
  MR_Word StripQual_8,
  MR_Word ConsId_9)
{
  MR_bool succeeded;
  MR_String String_10;

  switch (MR_tag((MR_Word) ConsId_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_10 = (MR_String) "<typeclass_info_cell_constructor>";
      break;
    case (MR_Integer) 1:
      String_10 = (MR_String) "<type_info_cell_constructor>";
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_82;
        MR_String Var_83;
        MR_String Var_84;
        MR_String Var_86;
        MR_String Var_87;
        MR_Word PredProcId_110 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 2));
        MR_Integer PredId_111 = ((MR_Integer) ((MR_hl_field(0, PredProcId_110, (MR_Integer) 0))));
        MR_Integer ProcId_112 = ((MR_Integer) ((MR_hl_field(0, PredProcId_110, (MR_Integer) 1))));

        Var_83 = mercury__string__int_to_string_1_f_0(PredId_111);
        Var_87 = mercury__string__int_to_string_1_f_0(ProcId_112);
        Var_86 = mercury__string__f_43_43_2_f_0(Var_87, (MR_String) ">");
        Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_86);
        Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
        String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_82);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_90;
            MR_String Var_91;
            MR_String Var_92;
            MR_String Var_94;
            MR_String Var_95;
            MR_Word PredProcId_113 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer PredId_114 = ((MR_Integer) ((MR_hl_field(0, PredProcId_113, (MR_Integer) 0))));
            MR_Integer ProcId_115 = ((MR_Integer) ((MR_hl_field(0, PredProcId_113, (MR_Integer) 1))));

            Var_91 = mercury__string__int_to_string_1_f_0(PredId_114);
            Var_95 = mercury__string__int_to_string_1_f_0(ProcId_115);
            Var_94 = mercury__string__f_43_43_2_f_0(Var_95, (MR_String) ">");
            Var_92 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_94);
            Var_90 = mercury__string__f_43_43_2_f_0(Var_91, Var_92);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_90);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_98;
            MR_String Var_99;
            MR_String Var_100;
            MR_String Var_102;
            MR_String Var_103;
            MR_Word PredProcId_116 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer PredId_117 = ((MR_Integer) ((MR_hl_field(0, PredProcId_116, (MR_Integer) 0))));
            MR_Integer ProcId_118 = ((MR_Integer) ((MR_hl_field(0, PredProcId_116, (MR_Integer) 1))));

            Var_99 = mercury__string__int_to_string_1_f_0(PredId_117);
            Var_103 = mercury__string__int_to_string_1_f_0(ProcId_118);
            Var_102 = mercury__string__f_43_43_2_f_0(Var_103, (MR_String) ">");
            Var_100 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_102);
            Var_98 = mercury__string__f_43_43_2_f_0(Var_99, Var_100);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_98);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_String SymNameString0_14;
            MR_String SymNameString_15;
            MR_String ArityString_22;

            switch (StripQual_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SymNameString0_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_11);
                break;
              case (MR_Integer) 1:
                SymNameString0_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
                break;
            }
            switch (MangleCons_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SymNameString_15 = SymNameString0_14;
                break;
              case (MR_Integer) 1:
                {
                  MR_String SymNameString1_21;

                  succeeded = mercury__string__contains_char_2_p_0(SymNameString0_14, (MR_Char) 42);
                  if (succeeded)
                  {
                    MR_Box conv1_SymNameString1_21;

                    mercury__string__foldl_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_1[2]), SymNameString0_14, ((MR_Box) ((MR_String) "")), &conv1_SymNameString1_21);
                    SymNameString1_21 = ((MR_String) (conv1_SymNameString1_21));
                  }
                  else
                    SymNameString1_21 = SymNameString0_14;
                  SymNameString_15 = mercury__term_io__escaped_string_1_f_0(SymNameString1_21);
                }
                break;
            }
            mercury__string__int_to_string_2_p_0(Arity_12, &ArityString_22);
            switch (QuoteCons_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_50;

                  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityString_22);
                  String_10 = mercury__string__f_43_43_2_f_0(SymNameString_15, Var_50);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_53;
                  MR_String Var_54;

                  Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", ArityString_22);
                  Var_53 = mercury__string__f_43_43_2_f_0(SymNameString_15, Var_54);
                  String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_53);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_57;
            MR_Integer Arity_108 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            Var_57 = mercury__string__int_to_string_1_f_0(Arity_108);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_57);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word PredProcId_29 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer PredId_31 = ((MR_Integer) ((MR_hl_field(0, PredProcId_29, (MR_Integer) 0))));
            MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(0, PredProcId_29, (MR_Integer) 1))));
            MR_String Var_63;
            MR_String Var_64;
            MR_String Var_65;
            MR_String Var_67;
            MR_String Var_68;

            Var_64 = mercury__string__int_to_string_1_f_0(PredId_31);
            Var_68 = mercury__string__int_to_string_1_f_0(ProcId_32);
            Var_67 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) ">");
            Var_65 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_67);
            Var_63 = mercury__string__f_43_43_2_f_0(Var_64, Var_65);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "closure_cons<pred ", Var_63);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_23 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String _Suffix_24;

            parse_tree__parse_tree_out_cons_id__int_const_to_string_and_suffix_3_p_0(IntConst_23, &String_10, &_Suffix_24);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_25 = MR_unbox_float((MR_hl_field(3, ConsId_9, (MR_Integer) 1)));

            String_10 = mercury__string__float_to_string_1_f_0(Float_25);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char CharConst_26 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_9, (MR_Integer) 1)));

            String_10 = mercury__term_io__quoted_char_to_string_1_f_0(CharConst_26);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String StringConst_27 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            String_10 = mercury__term_io__quoted_string_1_f_0(StringConst_27);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_28 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (QuoteCons_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                String_10 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_28);
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_59;
                  MR_String Var_60;

                  Var_60 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_28);
                  Var_59 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "\'");
                  String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_59);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Module_33 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Ctor_34 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_String Var_71;
            MR_String Var_72;
            MR_String Var_73;
            MR_String Var_75;
            MR_String Var_76;
            MR_String Var_78;
            MR_String Var_79;
            MR_Integer Arity_109 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));

            Var_72 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_33);
            Var_79 = mercury__string__int_to_string_1_f_0(Arity_109);
            Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) ">");
            Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_78);
            Var_75 = mercury__string__f_43_43_2_f_0(Ctor_34, Var_76);
            Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_75);
            Var_71 = mercury__string__f_43_43_2_f_0(Var_72, Var_73);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_71);
          }
          break;
        case (MR_Integer) 11:
          String_10 = (MR_String) "<base_typeclass_info>";
          break;
        case (MR_Integer) 12:
          String_10 = (MR_String) "<type_info_const>";
          break;
        case (MR_Integer) 13:
          String_10 = (MR_String) "<typeclass_info_const>";
          break;
        case (MR_Integer) 14:
          String_10 = (MR_String) "<ground_term_const>";
          break;
      }
      break;
  }
  return String_10;
}

void MR_CALL 
parse_tree__parse_tree_out_cons_id__int_const_to_string_and_suffix_3_p_0(
  MR_Word IntConst_4,
  MR_String * Str_5,
  MR_String * Suffix_6)
{
  switch (MR_tag((MR_Word) IntConst_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(0, IntConst_4, (MR_Integer) 0))));

        *Str_5 = mercury__string__int_to_string_1_f_0(Int_7);
        *Suffix_6 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_12 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_4, (MR_Integer) 0))));

        *Str_5 = mercury__string__uint_to_string_1_f_0(UInt_12);
        *Suffix_6 = (MR_String) "u";
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_8 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_4, (MR_Integer) 0)));

        *Str_5 = mercury__string__int8_to_string_1_f_0(Int8_8);
        *Suffix_6 = (MR_String) "i8";
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IntConst_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_13 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint8_to_string_1_f_0(UInt8_13);
            *Suffix_6 = (MR_String) "u8";
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_9 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__int16_to_string_1_f_0(Int16_9);
            *Suffix_6 = (MR_String) "i16";
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint16_to_string_1_f_0(UInt16_14);
            *Suffix_6 = (MR_String) "u16";
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_10 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__int32_to_string_1_f_0(Int32_10);
            *Suffix_6 = (MR_String) "i32";
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_15 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint32_to_string_1_f_0(UInt32_15);
            *Suffix_6 = (MR_String) "u32";
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_11 = MR_unbox_int64((MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__int64_to_string_1_f_0(Int64_11);
            *Suffix_6 = (MR_String) "i64";
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            *Str_5 = mercury__string__uint64_to_string_1_f_0(UInt64_16);
            *Suffix_6 = (MR_String) "u64";
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_156,
  MR_Word Lang_7,
  MR_Word NeedsBrackets_8,
  MR_Word ConsId_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_58,
  MR_Box * STATE_VARIABLE_U_59)
{
  switch (MR_tag((MR_Word) ConsId_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<typeclass_info_cell_constructor>", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
      break;
    case (MR_Integer) 1:
      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<type_info_cell_constructor>", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
      break;
    case (MR_Integer) 2:
      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<tabling info>", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<table_io_entry_desc>", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          break;
        case (MR_Integer) 1:
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<deep_profiling_proc_layout>", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          break;
        case (MR_Integer) 2:
          {
            MR_Word Name_12 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            switch (NeedsBrackets_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_156, Name_12, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                break;
              case (MR_Integer) 0:
                parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_pt_output_156, Name_12, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "tuple{}", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
              break;
            case (MR_Integer) 0:
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "{}", S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
              break;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShroudedPredProcId_31 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer PredInt_33 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_31, (MR_Integer) 0))));
            MR_Integer ProcInt_34 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_31, (MR_Integer) 1))));
            MR_Box STATE_VARIABLE_U_83_83;
            MR_Box STATE_VARIABLE_U_84_84;
            MR_Box STATE_VARIABLE_U_86_86;
            MR_Box STATE_VARIABLE_U_87_87;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<closure_cons(", S_10, STATE_VARIABLE_U_0_58, &STATE_VARIABLE_U_83_83);
            parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, PredInt_33, S_10, STATE_VARIABLE_U_83_83, &STATE_VARIABLE_U_84_84);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ", ", S_10, STATE_VARIABLE_U_84_84, &STATE_VARIABLE_U_86_86);
            parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, ProcInt_34, S_10, STATE_VARIABLE_U_86_86, &STATE_VARIABLE_U_87_87);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ")>", S_10, STATE_VARIABLE_U_87_87, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_16 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) IntConst_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(0, IntConst_16, (MR_Integer) 0))));

                  parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, Int_17, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_18 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_16, (MR_Integer) 0))));

                  parse_tree__parse_tree_output__add_uint_4_p_0(TypeClassInfo_for_pt_output_156, UInt_18, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_19 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_16, (MR_Integer) 0)));

                  parse_tree__parse_tree_output__add_int8_4_p_0(TypeClassInfo_for_pt_output_156, Int8_19, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IntConst_16, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_20 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_uint8_4_p_0(TypeClassInfo_for_pt_output_156, UInt8_20, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_21 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_int16_4_p_0(TypeClassInfo_for_pt_output_156, Int16_21, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_22 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_uint16_4_p_0(TypeClassInfo_for_pt_output_156, UInt16_22, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_23 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_int32_4_p_0(TypeClassInfo_for_pt_output_156, Int32_23, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_24 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_uint32_4_p_0(TypeClassInfo_for_pt_output_156, UInt32_24, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_25 = MR_unbox_int64((MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_int64_4_p_0(TypeClassInfo_for_pt_output_156, Int64_25, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_26 = MR_unbox_uint64((MR_hl_field(3, IntConst_16, (MR_Integer) 1)));

                      parse_tree__parse_tree_output__add_uint64_4_p_0(TypeClassInfo_for_pt_output_156, UInt64_26, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_27 = MR_unbox_float((MR_hl_field(3, ConsId_9, (MR_Integer) 1)));

            parse_tree__parse_tree_output__add_float_4_p_0(TypeClassInfo_for_pt_output_156, Float_27, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_28 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_9, (MR_Integer) 1)));
            MR_String Var_77;

            Var_77 = mercury__term_io__quoted_char_to_string_1_f_0(Char_28);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_77, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Str_29 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            parse_tree__parse_tree_output__add_quoted_string_4_p_0(TypeClassInfo_for_pt_output_156, Str_29, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_30 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_80;

            Var_80 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_30);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_80, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String TypeName_36 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));
            MR_String ModuleStr_38;
            MR_String ArityStr_39;
            MR_Word Var_90;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_99;

            ModuleStr_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_35);
            mercury__string__int_to_string_2_p_0(Arity_37, &ArityStr_39);
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (ArityStr_39));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_tree_out_cons_id_scalar_common_5[0])));
            }
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) "/"));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (TypeName_36));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) ((MR_String) "."));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (ModuleStr_38));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
            }
            parse_tree__parse_tree_output__add_strings_4_p_0(TypeClassInfo_for_pt_output_156, Var_90, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ModuleSymName_40 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Word ClassId_41 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_Integer InstanceNum_42 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));
            MR_String InstanceStr_43 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 4))));
            MR_String ModuleNameStr_44;
            MR_Word ClassName_45;
            MR_Integer ClassArity_46;
            MR_String ClassStr_47;
            MR_String ModuleInstanceStr_48;
            MR_String ConsIdStr_49;
            MR_String Var_106;
            MR_String Var_158;
            MR_String Var_165;
            MR_String Var_167;
            MR_String Var_168;
            MR_String Var_171;
            MR_String Var_173;
            MR_String Var_174;
            MR_String Var_181;
            MR_String Var_183;
            MR_String Var_184;
            MR_String Var_187;
            MR_String Var_189;
            MR_String Var_190;

            ModuleNameStr_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_40);
            ClassName_45 = ((MR_Word) ((MR_hl_field(0, ClassId_41, (MR_Integer) 0))));
            ClassArity_46 = ((MR_Integer) ((MR_hl_field(0, ClassId_41, (MR_Integer) 1))));
            Var_106 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_45);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_4[0]), ClassArity_46, &Var_158);
            Var_165 = mercury__string__f_43_43_2_f_0(Var_158, (MR_String) ")");
            Var_167 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_165);
            Var_168 = mercury__string__f_43_43_2_f_0(Var_106, Var_167);
            ClassStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", Var_168);
            Var_171 = mercury__string__f_43_43_2_f_0(InstanceStr_43, (MR_String) ")");
            Var_173 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_171);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_4[0]), InstanceNum_42, &Var_174);
            Var_181 = mercury__string__f_43_43_2_f_0(Var_174, Var_173);
            Var_183 = mercury__string__f_43_43_2_f_0((MR_String) ", instance number ", Var_181);
            Var_184 = mercury__string__f_43_43_2_f_0(ModuleNameStr_44, Var_183);
            ModuleInstanceStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "from module ", Var_184);
            Var_187 = mercury__string__f_43_43_2_f_0(ModuleInstanceStr_48, (MR_String) ">");
            Var_189 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_187);
            Var_190 = mercury__string__f_43_43_2_f_0(ClassStr_47, Var_189);
            ConsIdStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "<base_typeclass_info for ", Var_190);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, ConsIdStr_49, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer TIConstNum_51 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Var_129;
            MR_String Var_132;
            MR_String Var_133;

            Var_133 = mercury__string__int_to_string_1_f_0(TIConstNum_51);
            Var_132 = mercury__string__f_43_43_2_f_0(Var_133, (MR_String) ">");
            Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", Var_132);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_129, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer TCIConstNum_52 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Var_135;
            MR_String Var_138;
            MR_String Var_139;

            Var_139 = mercury__string__int_to_string_1_f_0(TCIConstNum_52);
            Var_138 = mercury__string__f_43_43_2_f_0(Var_139, (MR_String) ">");
            Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", Var_138);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_135, S_10, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer ConstNum_53 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Word SubConsId_54 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_String Var_141;
            MR_Box STATE_VARIABLE_U_142_142;
            MR_String Var_144;
            MR_String Var_145;
            MR_Box STATE_VARIABLE_U_148_148;

            Var_145 = mercury__string__int_to_string_1_f_0(ConstNum_53);
            Var_144 = mercury__string__f_43_43_2_f_0(Var_145, (MR_String) ", ");
            Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", Var_144);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_141, S_10, STATE_VARIABLE_U_0_58, &STATE_VARIABLE_U_142_142);
            parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_156, Lang_7, (MR_Integer) 1, SubConsId_54, S_10, STATE_VARIABLE_U_142_142, &STATE_VARIABLE_U_148_148);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ">", S_10, STATE_VARIABLE_U_148_148, STATE_VARIABLE_U_59);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_cons_id__mercury_output_cons_id_6_p_0(
  MR_Word Lang_7,
  MR_Word NeedsBrackets_8,
  MR_Word ConsId_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_2[3]), Lang_7, NeedsBrackets_8, ConsId_9, Stream_10);
}

void MR_CALL 
parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_156,
  MR_Word Lang_7,
  MR_Word NeedsBrackets_8,
  MR_Word ConsId_9,
  MR_Word S_10)
{
  switch (MR_tag((MR_Word) ConsId_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box conv30_STATE_VARIABLE_U_59;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<typeclass_info_cell_constructor>", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_U_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box conv28_STATE_VARIABLE_U_59;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<type_info_cell_constructor>", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_U_59);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box conv24_STATE_VARIABLE_U_59;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<tabling info>", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_59);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv23_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<table_io_entry_desc>", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box conv7_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<deep_profiling_proc_layout>", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Name_12 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            switch (NeedsBrackets_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_156, Name_12, S_10);
                break;
              case (MR_Integer) 0:
                parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_156, Name_12, S_10);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box conv25_STATE_VARIABLE_U_59;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "tuple{}", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_59);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box conv26_STATE_VARIABLE_U_59;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "{}", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_59);
              }
              break;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShroudedPredProcId_31 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer PredInt_33 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_31, (MR_Integer) 0))));
            MR_Integer ProcInt_34 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_31, (MR_Integer) 1))));
            MR_Box conv2_STATE_VARIABLE_U_83_83;
            MR_Box conv3_STATE_VARIABLE_U_84_84;
            MR_Box conv4_STATE_VARIABLE_U_86_86;
            MR_Box conv5_STATE_VARIABLE_U_87_87;
            MR_Box conv6_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<closure_cons(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_83_83);
            parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, PredInt_33, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_84_84);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ", ", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_86_86);
            parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, ProcInt_34, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_87_87);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ")>", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_16 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) IntConst_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(0, IntConst_16, (MR_Integer) 0))));
                  MR_Box conv16_STATE_VARIABLE_U_59;

                  parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, Int_17, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_59);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_18 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_16, (MR_Integer) 0))));
                  MR_Box conv21_STATE_VARIABLE_U_59;

                  parse_tree__parse_tree_output__add_uint_4_p_0(TypeClassInfo_for_pt_output_156, UInt_18, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_59);
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_19 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_16, (MR_Integer) 0)));
                  MR_Box conv15_STATE_VARIABLE_U_59;

                  parse_tree__parse_tree_output__add_int8_4_p_0(TypeClassInfo_for_pt_output_156, Int8_19, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_59);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IntConst_16, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_20 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv20_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint8_4_p_0(TypeClassInfo_for_pt_output_156, UInt8_20, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_21 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv12_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_int16_4_p_0(TypeClassInfo_for_pt_output_156, Int16_21, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_22 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv17_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint16_4_p_0(TypeClassInfo_for_pt_output_156, UInt16_22, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_23 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv13_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_int32_4_p_0(TypeClassInfo_for_pt_output_156, Int32_23, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_24 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv18_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint32_4_p_0(TypeClassInfo_for_pt_output_156, UInt32_24, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_25 = MR_unbox_int64((MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv14_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_int64_4_p_0(TypeClassInfo_for_pt_output_156, Int64_25, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_59);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_26 = MR_unbox_uint64((MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv19_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint64_4_p_0(TypeClassInfo_for_pt_output_156, UInt64_26, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_59);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_27 = MR_unbox_float((MR_hl_field(3, ConsId_9, (MR_Integer) 1)));
            MR_Box conv8_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_float_4_p_0(TypeClassInfo_for_pt_output_156, Float_27, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_28 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_9, (MR_Integer) 1)));
            MR_String Var_77;
            MR_Box conv1_STATE_VARIABLE_U_59;

            Var_77 = mercury__term_io__quoted_char_to_string_1_f_0(Char_28);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_77, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Str_29 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Box conv22_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_quoted_string_4_p_0(TypeClassInfo_for_pt_output_156, Str_29, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_30 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_80;
            MR_Box conv11_STATE_VARIABLE_U_59;

            Var_80 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_30);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_80, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String TypeName_36 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));
            MR_String ModuleStr_38;
            MR_String ArityStr_39;
            MR_Word Var_90;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_99;
            MR_Box conv27_STATE_VARIABLE_U_59;

            ModuleStr_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_35);
            mercury__string__int_to_string_2_p_0(Arity_37, &ArityStr_39);
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (ArityStr_39));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_tree_out_cons_id_scalar_common_5[0])));
            }
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) "/"));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (TypeName_36));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) ((MR_String) "."));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (ModuleStr_38));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
            }
            parse_tree__parse_tree_output__add_strings_4_p_0(TypeClassInfo_for_pt_output_156, Var_90, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ModuleSymName_40 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Word ClassId_41 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_Integer InstanceNum_42 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));
            MR_String InstanceStr_43 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 4))));
            MR_String ModuleNameStr_44;
            MR_Word ClassName_45;
            MR_Integer ClassArity_46;
            MR_String ClassStr_47;
            MR_String ModuleInstanceStr_48;
            MR_String ConsIdStr_49;
            MR_String Var_106;
            MR_String Var_158;
            MR_String Var_165;
            MR_String Var_167;
            MR_String Var_168;
            MR_String Var_171;
            MR_String Var_173;
            MR_String Var_174;
            MR_String Var_181;
            MR_String Var_183;
            MR_String Var_184;
            MR_String Var_187;
            MR_String Var_189;
            MR_String Var_190;
            MR_Box conv0_STATE_VARIABLE_U_59;

            ModuleNameStr_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_40);
            ClassName_45 = ((MR_Word) ((MR_hl_field(0, ClassId_41, (MR_Integer) 0))));
            ClassArity_46 = ((MR_Integer) ((MR_hl_field(0, ClassId_41, (MR_Integer) 1))));
            Var_106 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_45);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_4[0]), ClassArity_46, &Var_158);
            Var_165 = mercury__string__f_43_43_2_f_0(Var_158, (MR_String) ")");
            Var_167 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_165);
            Var_168 = mercury__string__f_43_43_2_f_0(Var_106, Var_167);
            ClassStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", Var_168);
            Var_171 = mercury__string__f_43_43_2_f_0(InstanceStr_43, (MR_String) ")");
            Var_173 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_171);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_4[0]), InstanceNum_42, &Var_174);
            Var_181 = mercury__string__f_43_43_2_f_0(Var_174, Var_173);
            Var_183 = mercury__string__f_43_43_2_f_0((MR_String) ", instance number ", Var_181);
            Var_184 = mercury__string__f_43_43_2_f_0(ModuleNameStr_44, Var_183);
            ModuleInstanceStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "from module ", Var_184);
            Var_187 = mercury__string__f_43_43_2_f_0(ModuleInstanceStr_48, (MR_String) ">");
            Var_189 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_187);
            Var_190 = mercury__string__f_43_43_2_f_0(ClassStr_47, Var_189);
            ConsIdStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "<base_typeclass_info for ", Var_190);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, ConsIdStr_49, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer TIConstNum_51 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Var_129;
            MR_String Var_132;
            MR_String Var_133;
            MR_Box conv29_STATE_VARIABLE_U_59;

            Var_133 = mercury__string__int_to_string_1_f_0(TIConstNum_51);
            Var_132 = mercury__string__f_43_43_2_f_0(Var_133, (MR_String) ">");
            Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", Var_132);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_129, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer TCIConstNum_52 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Var_135;
            MR_String Var_138;
            MR_String Var_139;
            MR_Box conv31_STATE_VARIABLE_U_59;

            Var_139 = mercury__string__int_to_string_1_f_0(TCIConstNum_52);
            Var_138 = mercury__string__f_43_43_2_f_0(Var_139, (MR_String) ">");
            Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", Var_138);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_135, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_U_59);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer ConstNum_53 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Word SubConsId_54 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_String Var_141;
            MR_String Var_144;
            MR_String Var_145;
            MR_Box conv9_STATE_VARIABLE_U_142_142;
            MR_Box conv10_STATE_VARIABLE_U_59;

            Var_145 = mercury__string__int_to_string_1_f_0(ConstNum_53);
            Var_144 = mercury__string__f_43_43_2_f_0(Var_145, (MR_String) ", ");
            Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", Var_144);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_141, ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_142_142);
            parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_156, Lang_7, (MR_Integer) 1, SubConsId_54, S_10);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ">", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_59);
          }
          break;
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word NeedsBrackets_6,
  MR_Word ConsId_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_2[1]), Lang_5, NeedsBrackets_6, ConsId_7, State0_9, &State_10);
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_156,
  MR_Word Lang_7,
  MR_Word NeedsBrackets_8,
  MR_Word ConsId_9,
  MR_Word STATE_VARIABLE_U_0_58,
  MR_Word * STATE_VARIABLE_U_59)
{
  switch (MR_tag((MR_Word) ConsId_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box conv30_STATE_VARIABLE_U_59;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<typeclass_info_cell_constructor>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv30_STATE_VARIABLE_U_59);
        *STATE_VARIABLE_U_59 = ((MR_Word) (conv30_STATE_VARIABLE_U_59));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box conv28_STATE_VARIABLE_U_59;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<type_info_cell_constructor>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv28_STATE_VARIABLE_U_59);
        *STATE_VARIABLE_U_59 = ((MR_Word) (conv28_STATE_VARIABLE_U_59));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box conv24_STATE_VARIABLE_U_59;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<tabling info>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv24_STATE_VARIABLE_U_59);
        *STATE_VARIABLE_U_59 = ((MR_Word) (conv24_STATE_VARIABLE_U_59));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv23_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<table_io_entry_desc>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv23_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv23_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box conv7_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<deep_profiling_proc_layout>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv7_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv7_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Name_12 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            switch (NeedsBrackets_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_156, Name_12, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                break;
              case (MR_Integer) 0:
                parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_156, Name_12, STATE_VARIABLE_U_0_58, STATE_VARIABLE_U_59);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box conv25_STATE_VARIABLE_U_59;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "tuple{}", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv25_STATE_VARIABLE_U_59);
                *STATE_VARIABLE_U_59 = ((MR_Word) (conv25_STATE_VARIABLE_U_59));
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box conv26_STATE_VARIABLE_U_59;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "{}", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv26_STATE_VARIABLE_U_59);
                *STATE_VARIABLE_U_59 = ((MR_Word) (conv26_STATE_VARIABLE_U_59));
              }
              break;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShroudedPredProcId_31 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Integer PredInt_33 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_31, (MR_Integer) 0))));
            MR_Integer ProcInt_34 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_31, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_U_83_83;
            MR_Word STATE_VARIABLE_U_84_84;
            MR_Word STATE_VARIABLE_U_86_86;
            MR_Word STATE_VARIABLE_U_87_87;
            MR_Box conv2_STATE_VARIABLE_U_83_83;
            MR_Box conv3_STATE_VARIABLE_U_84_84;
            MR_Box conv4_STATE_VARIABLE_U_86_86;
            MR_Box conv5_STATE_VARIABLE_U_87_87;
            MR_Box conv6_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) "<closure_cons(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv2_STATE_VARIABLE_U_83_83);
            STATE_VARIABLE_U_83_83 = ((MR_Word) (conv2_STATE_VARIABLE_U_83_83));
            parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, PredInt_33, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_83_83)), &conv3_STATE_VARIABLE_U_84_84);
            STATE_VARIABLE_U_84_84 = ((MR_Word) (conv3_STATE_VARIABLE_U_84_84));
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_84_84)), &conv4_STATE_VARIABLE_U_86_86);
            STATE_VARIABLE_U_86_86 = ((MR_Word) (conv4_STATE_VARIABLE_U_86_86));
            parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, ProcInt_34, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_86_86)), &conv5_STATE_VARIABLE_U_87_87);
            STATE_VARIABLE_U_87_87 = ((MR_Word) (conv5_STATE_VARIABLE_U_87_87));
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ")>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_87_87)), &conv6_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv6_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_16 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) IntConst_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(0, IntConst_16, (MR_Integer) 0))));
                  MR_Box conv16_STATE_VARIABLE_U_59;

                  parse_tree__parse_tree_output__add_int_4_p_0(TypeClassInfo_for_pt_output_156, Int_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv16_STATE_VARIABLE_U_59);
                  *STATE_VARIABLE_U_59 = ((MR_Word) (conv16_STATE_VARIABLE_U_59));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_18 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_16, (MR_Integer) 0))));
                  MR_Box conv21_STATE_VARIABLE_U_59;

                  parse_tree__parse_tree_output__add_uint_4_p_0(TypeClassInfo_for_pt_output_156, UInt_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv21_STATE_VARIABLE_U_59);
                  *STATE_VARIABLE_U_59 = ((MR_Word) (conv21_STATE_VARIABLE_U_59));
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_19 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_16, (MR_Integer) 0)));
                  MR_Box conv15_STATE_VARIABLE_U_59;

                  parse_tree__parse_tree_output__add_int8_4_p_0(TypeClassInfo_for_pt_output_156, Int8_19, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv15_STATE_VARIABLE_U_59);
                  *STATE_VARIABLE_U_59 = ((MR_Word) (conv15_STATE_VARIABLE_U_59));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IntConst_16, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_20 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv20_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint8_4_p_0(TypeClassInfo_for_pt_output_156, UInt8_20, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv20_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv20_STATE_VARIABLE_U_59));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_21 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv12_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_int16_4_p_0(TypeClassInfo_for_pt_output_156, Int16_21, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv12_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv12_STATE_VARIABLE_U_59));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_22 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv17_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint16_4_p_0(TypeClassInfo_for_pt_output_156, UInt16_22, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv17_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv17_STATE_VARIABLE_U_59));
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_23 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv13_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_int32_4_p_0(TypeClassInfo_for_pt_output_156, Int32_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv13_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv13_STATE_VARIABLE_U_59));
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_24 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv18_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint32_4_p_0(TypeClassInfo_for_pt_output_156, UInt32_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv18_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv18_STATE_VARIABLE_U_59));
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_25 = MR_unbox_int64((MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv14_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_int64_4_p_0(TypeClassInfo_for_pt_output_156, Int64_25, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv14_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv14_STATE_VARIABLE_U_59));
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_26 = MR_unbox_uint64((MR_hl_field(3, IntConst_16, (MR_Integer) 1)));
                      MR_Box conv19_STATE_VARIABLE_U_59;

                      parse_tree__parse_tree_output__add_uint64_4_p_0(TypeClassInfo_for_pt_output_156, UInt64_26, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv19_STATE_VARIABLE_U_59);
                      *STATE_VARIABLE_U_59 = ((MR_Word) (conv19_STATE_VARIABLE_U_59));
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_27 = MR_unbox_float((MR_hl_field(3, ConsId_9, (MR_Integer) 1)));
            MR_Box conv8_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_float_4_p_0(TypeClassInfo_for_pt_output_156, Float_27, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv8_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv8_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_28 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_9, (MR_Integer) 1)));
            MR_String Var_77;
            MR_Box conv1_STATE_VARIABLE_U_59;

            Var_77 = mercury__term_io__quoted_char_to_string_1_f_0(Char_28);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_77, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv1_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv1_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Str_29 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Box conv22_STATE_VARIABLE_U_59;

            parse_tree__parse_tree_output__add_quoted_string_4_p_0(TypeClassInfo_for_pt_output_156, Str_29, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv22_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv22_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_30 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_80;
            MR_Box conv11_STATE_VARIABLE_U_59;

            Var_80 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_30);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_80, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv11_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv11_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String TypeName_36 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));
            MR_String ModuleStr_38;
            MR_String ArityStr_39;
            MR_Word Var_90;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_99;
            MR_Box conv27_STATE_VARIABLE_U_59;

            ModuleStr_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_35);
            mercury__string__int_to_string_2_p_0(Arity_37, &ArityStr_39);
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (ArityStr_39));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_tree_out_cons_id_scalar_common_5[0])));
            }
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) "/"));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (TypeName_36));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) ((MR_String) "."));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (ModuleStr_38));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
            }
            parse_tree__parse_tree_output__add_strings_4_p_0(TypeClassInfo_for_pt_output_156, Var_90, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv27_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv27_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ModuleSymName_40 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Word ClassId_41 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_Integer InstanceNum_42 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 3))));
            MR_String InstanceStr_43 = ((MR_String) ((MR_hl_field(3, ConsId_9, (MR_Integer) 4))));
            MR_String ModuleNameStr_44;
            MR_Word ClassName_45;
            MR_Integer ClassArity_46;
            MR_String ClassStr_47;
            MR_String ModuleInstanceStr_48;
            MR_String ConsIdStr_49;
            MR_String Var_106;
            MR_String Var_158;
            MR_String Var_165;
            MR_String Var_167;
            MR_String Var_168;
            MR_String Var_171;
            MR_String Var_173;
            MR_String Var_174;
            MR_String Var_181;
            MR_String Var_183;
            MR_String Var_184;
            MR_String Var_187;
            MR_String Var_189;
            MR_String Var_190;
            MR_Box conv0_STATE_VARIABLE_U_59;

            ModuleNameStr_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_40);
            ClassName_45 = ((MR_Word) ((MR_hl_field(0, ClassId_41, (MR_Integer) 0))));
            ClassArity_46 = ((MR_Integer) ((MR_hl_field(0, ClassId_41, (MR_Integer) 1))));
            Var_106 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_45);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_4[0]), ClassArity_46, &Var_158);
            Var_165 = mercury__string__f_43_43_2_f_0(Var_158, (MR_String) ")");
            Var_167 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_165);
            Var_168 = mercury__string__f_43_43_2_f_0(Var_106, Var_167);
            ClassStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", Var_168);
            Var_171 = mercury__string__f_43_43_2_f_0(InstanceStr_43, (MR_String) ")");
            Var_173 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_171);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_cons_id_scalar_common_4[0]), InstanceNum_42, &Var_174);
            Var_181 = mercury__string__f_43_43_2_f_0(Var_174, Var_173);
            Var_183 = mercury__string__f_43_43_2_f_0((MR_String) ", instance number ", Var_181);
            Var_184 = mercury__string__f_43_43_2_f_0(ModuleNameStr_44, Var_183);
            ModuleInstanceStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "from module ", Var_184);
            Var_187 = mercury__string__f_43_43_2_f_0(ModuleInstanceStr_48, (MR_String) ">");
            Var_189 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_187);
            Var_190 = mercury__string__f_43_43_2_f_0(ClassStr_47, Var_189);
            ConsIdStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "<base_typeclass_info for ", Var_190);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, ConsIdStr_49, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv0_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv0_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer TIConstNum_51 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Var_129;
            MR_String Var_132;
            MR_String Var_133;
            MR_Box conv29_STATE_VARIABLE_U_59;

            Var_133 = mercury__string__int_to_string_1_f_0(TIConstNum_51);
            Var_132 = mercury__string__f_43_43_2_f_0(Var_133, (MR_String) ">");
            Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", Var_132);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_129, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv29_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv29_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer TCIConstNum_52 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_String Var_135;
            MR_String Var_138;
            MR_String Var_139;
            MR_Box conv31_STATE_VARIABLE_U_59;

            Var_139 = mercury__string__int_to_string_1_f_0(TCIConstNum_52);
            Var_138 = mercury__string__f_43_43_2_f_0(Var_139, (MR_String) ">");
            Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", Var_138);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_135, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv31_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv31_STATE_VARIABLE_U_59));
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer ConstNum_53 = ((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
            MR_Word SubConsId_54 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 2))));
            MR_String Var_141;
            MR_Word STATE_VARIABLE_U_142_142;
            MR_String Var_144;
            MR_String Var_145;
            MR_Word STATE_VARIABLE_U_148_148;
            MR_Box conv9_STATE_VARIABLE_U_142_142;
            MR_Box conv10_STATE_VARIABLE_U_59;

            Var_145 = mercury__string__int_to_string_1_f_0(ConstNum_53);
            Var_144 = mercury__string__f_43_43_2_f_0(Var_145, (MR_String) ", ");
            Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", Var_144);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, Var_141, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_58)), &conv9_STATE_VARIABLE_U_142_142);
            STATE_VARIABLE_U_142_142 = ((MR_Word) (conv9_STATE_VARIABLE_U_142_142));
            parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_156, Lang_7, (MR_Integer) 1, SubConsId_54, STATE_VARIABLE_U_142_142, &STATE_VARIABLE_U_148_148);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_156, (MR_String) ">", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_148_148)), &conv10_STATE_VARIABLE_U_59);
            *STATE_VARIABLE_U_59 = ((MR_Word) (conv10_STATE_VARIABLE_U_59));
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_mangle_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_cons_id____Unify____maybe_mangle_cons_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_mangle_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_cons_id____Compare____maybe_mangle_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_quote_cons_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_cons_id____Unify____maybe_quote_cons_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_quote_cons_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_cons_id____Compare____maybe_quote_cons_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____maybe_strip_qual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_cons_id____Unify____maybe_strip_qual_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____maybe_strip_qual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_cons_id____Compare____maybe_strip_qual_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_cons_id____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_cons_id____Unify____needs_brackets_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_cons_id____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_cons_id____Compare____needs_brackets_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_tree_out_cons_id__init(void)
{
}

void mercury__parse_tree__parse_tree_out_cons_id__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_maybe_mangle_cons_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_maybe_quote_cons_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_maybe_strip_qual_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_cons_id__parse_tree__parse_tree_out_cons_id__type_ctor_info_needs_brackets_0);
}

void mercury__parse_tree__parse_tree_out_cons_id__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_cons_id__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_cons_id.
