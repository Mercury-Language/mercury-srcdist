/*
** Automatically generated from `print_term.m'
** by the Mercury compiler,
** version rotd-2023-09-18
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


// :- module mdb.print_term.
// :- implementation.

/*
INIT mercury__mdb__print_term__init
ENDINIT
*/

#include "mdb.print_term.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "version_array.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.frame.mih"
#include "mdb.parse.mih"
#include "mdb.sized_pretty.mih"
#include "mdb.term_paths.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.program_representation.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc mdb__print_term__mdb__print_term__enum_functor_desc_unbound_0_0;

static const MR_EnumFunctorDescPtr mdb__print_term__mdb__print_term__enum_ordinal_ordered_unbound_0[1];

static const MR_EnumFunctorDescPtr mdb__print_term__mdb__print_term__enum_name_ordered_unbound_0[1];

static const MR_Integer mdb__print_term__mdb__print_term__functor_number_map_unbound_0[1];

static void MR_CALL 
mdb__print_term__put_comma_space_3_p_0(
  MR_Word TypeClassInfo_for_writer_9,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7);

static void MR_CALL 
mdb__print_term__write_univ_or_unbound_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10);

static void MR_CALL 
mdb__print_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_118_95_111_114_95_117_110_98_111_117_110_100_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10);

static void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__print_term__portray_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__print_term__portray_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__print_term__portray_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__print_term__term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__print_term__term_size_left_from_max_3_p_0(
  MR_Word Univ_4,
  MR_Integer MaxSize_5,
  MR_Integer * RemainingSize_6);

static void MR_CALL 
mdb__print_term__portray_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8);

static MR_Word MR_CALL 
mdb__print_term__qualified_functor_to_doc_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__print_term__portray_verbose_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8);

static void MR_CALL 
mdb__print_term__unlines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
mdb__print_term__args_to_string_verbose_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer CurSize_5,
  MR_Integer * NewSize_6,
  MR_Integer HeadVar__7_7,
  MR_Integer HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
mdb__print_term__browser_term_to_string_verbose_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_Word * Frame_16);

static void MR_CALL 
mdb__print_term__browser_term_to_string_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Integer MaxSize_8,
  MR_Integer MaxDepth_9,
  MR_String * Str_10);

static void MR_CALL 
mdb__print_term__args_to_string_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer CurSize_4,
  MR_Integer * NewSize_5,
  MR_Integer HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Word * Strs_8);

static void MR_CALL 
mdb__print_term__list_tail_to_string_list_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word TailUniv_10,
  MR_Integer MaxSize_11,
  MR_Integer Size0_12,
  MR_Integer * Size_13,
  MR_Integer MaxDepth_14,
  MR_Integer Depth0_15,
  MR_Word * TailStrs_16);

static void MR_CALL 
mdb__print_term__browser_term_to_string_3_10_p_0(
  MR_Word BrowserDb_11,
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word MaybeReturn_14,
  MR_Integer MaxSize_15,
  MR_Integer Size0_16,
  MR_Integer * Size_17,
  MR_Integer MaxDepth_18,
  MR_Integer Depth0_19,
  MR_String * Str_20);

static void MR_CALL 
mdb__print_term__browser_term_to_string_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_String * Str_16);

static MR_String MR_CALL 
mdb__print_term__bracket_string_list_1_f_0(
  MR_Word Args_3);

static void MR_CALL 
mdb__print_term__browser_term_compress_3_p_0(
  MR_Word BrowserDb_4,
  MR_Word BrowserTerm_5,
  MR_String * Str_6);

static MR_String MR_CALL 
mdb__print_term__comma_string_list_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mdb__print_term____Unify____unbound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__print_term____Compare____unbound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__print_term_scalar_common_1[5][3];

static /* final */ const MR_Box mdb__print_term_scalar_common_2[4][4];

static /* final */ const MR_Box mdb__print_term_scalar_common_3[5][5];

static /* final */ const MR_Box mdb__print_term_scalar_common_4[6][2];

static /* final */ const MR_Box mdb__print_term_scalar_common_5[7][1];

static /* final */ const MR_Box mdb__print_term_scalar_common_7[1][6];

static /* final */ const MR_Integer mdb__print_term_scalar_common_8[1][3];

static /* final */ const MR_Box mdb__print_term_scalar_common_9[1][9];

static /* final */ const MR_Box mdb__print_term_scalar_common_10[1][7];


struct mdb__print_term__vector_common_type_6_0_s {
  const MR_String mdb__print_term__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mdb__print_term__vector_common_type_6_0_s mdb__print_term_vector_common_6[4];



static /* final */ const MR_Box mdb__print_term_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_7[0])),
    ((MR_Box) (mdb__print_term__term_size_left_from_max_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_7[0])),
    ((MR_Box) (mdb__print_term__portray_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_7[0])),
    ((MR_Box) (mdb__print_term__browser_term_to_html_flat_string_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__print_term_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__print_term_scalar_common_1[1])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_10[0])),
    ((MR_Box) (mdb__print_term__portray_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__print_term_scalar_common_3[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_10[0])),
    ((MR_Box) (mdb__print_term__browser_term_to_html_flat_string_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__print_term_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_3[5][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__print_term_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__character__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__print_term_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__print_term_scalar_common_2[1])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_9[0])),
    ((MR_Box) (mdb__print_term__portray_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__print_term_scalar_common_3[0])),
    ((MR_Box) (&mdb__print_term_scalar_common_3[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__print_term_scalar_common_9[0])),
    ((MR_Box) (mdb__print_term__browser_term_to_html_flat_string_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__print_term_scalar_common_3[0])),
    ((MR_Box) (&mdb__print_term_scalar_common_3[1]))
  },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_4[6][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) ", ...")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "-")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_4[3])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_5[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_5[7][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "(")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) ", ")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) ")")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) " = ")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) ".")) },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Integer mdb__print_term_scalar_common_8[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__print_term_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdb__print_term_scalar_common_10[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__print_term_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};


static /* final */ const struct mdb__print_term__vector_common_type_6_0_s mdb__print_term_vector_common_6[4] = {
  /* row   0 */   { (MR_String) "!." },
  /* row   1 */   { (MR_String) "." },
  /* row   2 */   { (MR_String) ".." },
  /* row   3 */   { (MR_String) "=.." },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc mdb__print_term__mdb__print_term__enum_functor_desc_unbound_0_0 = {
  (MR_String) "_",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mdb__print_term__mdb__print_term__enum_ordinal_ordered_unbound_0[1] = { &mdb__print_term__mdb__print_term__enum_functor_desc_unbound_0_0 };

static const MR_EnumFunctorDescPtr mdb__print_term__mdb__print_term__enum_name_ordered_unbound_0[1] = { &mdb__print_term__mdb__print_term__enum_functor_desc_unbound_0_0 };

static const MR_Integer mdb__print_term__mdb__print_term__functor_number_map_unbound_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__print_term__mdb__print_term__type_ctor_info_unbound_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__print_term____Unify____unbound_0_0_10001)),
  ((MR_Box) (mdb__print_term____Compare____unbound_0_0_10001)),
  (MR_String) "mdb.print_term",
  (MR_String) "unbound",
  { mdb__print_term__mdb__print_term__enum_name_ordered_unbound_0 },
  { mdb__print_term__mdb__print_term__enum_ordinal_ordered_unbound_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__print_term__mdb__print_term__functor_number_map_unbound_0,

};

void MR_CALL 
mdb__print_term____Compare____unbound_0_0(
  MR_Word * HeadVar__1_1)
{
  mdb__print_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_112_114_105_110_116_95_116_101_114_109_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mdb__print_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_112_114_105_110_116_95_116_101_114_109_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mdb__print_term____Unify____unbound_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
mdb__print_term__put_comma_space_3_p_0(
  MR_Word TypeClassInfo_for_writer_9,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_9, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_writer_9)), Stream_4, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_6, STATE_VARIABLE_State_7);
}

static void MR_CALL 
mdb__print_term__write_univ_or_unbound_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10)
{
  mdb__print_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_118_95_111_114_95_117_110_98_111_117_110_100_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_writer_15, Stream_5, Univ_6, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
}

static void MR_CALL 
mdb__print_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_118_95_111_114_95_117_110_98_111_117_110_100_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10)
{
  MR_bool succeeded;
  MR_Box conv0_Var_11;

  succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mdb__print_term__mdb__print_term__type_ctor_info_unbound_0), Univ_6, &conv0_Var_11);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_15, Stream_5, (MR_Char) 95, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
  else
    mercury__stream__string_writer__write_univ_5_p_2(TypeClassInfo_for_writer_15, Stream_5, (MR_Integer) 2, Univ_6, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
}

static void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__print_term__put_comma_space_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mdb__print_term__write_univ_or_unbound_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_RemainingSize_6;

  mdb__print_term__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
}

void MR_CALL 
mdb__print_term__browser_term_to_html_flat_string_5_p_0(
  MR_Word BrowserTerm_6,
  MR_String * Str_7,
  MR_Word * Elided_8)
{
  MR_bool succeeded;
  MR_Integer RemainingSize_11;

  if (((MR_tag((MR_Word) BrowserTerm_6)) == (MR_Integer) 0))
  {
    MR_Word Univ_24 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_6, (MR_Integer) 0))));

    mdb__print_term__term_size_left_from_max_3_p_0(Univ_24, (MR_Integer) 120, &RemainingSize_11);
  }
  else
  {
    MR_String Functor_25 = ((MR_String) ((MR_hl_field(1, BrowserTerm_6, (MR_Integer) 0))));
    MR_Word Args_26 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, (MR_Integer) 1))));
    MR_Word MaybeReturn_27 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, (MR_Integer) 2))));
    MR_Integer FunctorSize_28;
    MR_Integer Arity_29;
    MR_Integer PrincipalSize_30;
    MR_Integer MaxArgsSize_31;
    MR_Box conv1_RemainingSize_11;

    mercury__string__length_2_p_0(Functor_25, &FunctorSize_28);
    mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_26, &Arity_29);
    if ((MaybeReturn_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) Arity_29 * (MR_Unsigned) 2);

      PrincipalSize_30 = (MR_Integer) ((MR_Unsigned) FunctorSize_28 + (MR_Unsigned) Var_36);
    }
    else
    {
      MR_Integer Var_32;
      MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) Arity_29 * (MR_Unsigned) 2);

      Var_32 = (MR_Integer) ((MR_Unsigned) FunctorSize_28 + (MR_Unsigned) Var_33);
      PrincipalSize_30 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) 3);
    }
    MaxArgsSize_31 = (MR_Integer) ((MR_Unsigned) 120 - (MR_Unsigned) PrincipalSize_30);
    mercury__list__foldl_4_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__print_term_scalar_common_1[4]), Args_26, ((MR_Box) (MaxArgsSize_31)), &conv1_RemainingSize_11);
    RemainingSize_11 = ((MR_Integer) (conv1_RemainingSize_11));
  }
  succeeded = (RemainingSize_11 >= (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word State_12;
    MR_Word Var_21;

    Var_21 = mercury__string__builder__init_0_f_0();
    if (((MR_tag((MR_Word) BrowserTerm_6)) == (MR_Integer) 0))
    {
      MR_Word Univ_41 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_6, (MR_Integer) 0))));
      MR_Box conv2_State_12;

      mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__print_term_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Univ_41, ((MR_Box) (Var_21)), &conv2_State_12);
      State_12 = ((MR_Word) (conv2_State_12));
    }
    else
    {
      MR_String Functor_42 = ((MR_String) ((MR_hl_field(1, BrowserTerm_6, (MR_Integer) 0))));
      MR_Word Args_43 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, (MR_Integer) 1))));
      MR_Word MaybeReturn_44 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_IO_19_47;
      MR_Word STATE_VARIABLE_IO_26_54;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv4_STATE_VARIABLE_IO_19_47;

      func_3(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_42)), ((MR_Box) (Var_21)), &conv4_STATE_VARIABLE_IO_19_47);
      STATE_VARIABLE_IO_19_47 = ((MR_Word) (conv4_STATE_VARIABLE_IO_19_47));
      if ((Args_43 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_IO_26_54 = STATE_VARIABLE_IO_19_47;
      else
      {
        MR_Word TypeClassInfo_for_output_58;
        MR_Word STATE_VARIABLE_IO_21_49;
        MR_Word STATE_VARIABLE_IO_24_52;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv6_STATE_VARIABLE_IO_21_49;
        MR_Box conv7_STATE_VARIABLE_IO_24_52;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_IO_26_54;

        func_5(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_IO_19_47)), &conv6_STATE_VARIABLE_IO_21_49);
        STATE_VARIABLE_IO_21_49 = ((MR_Word) (conv6_STATE_VARIABLE_IO_21_49));
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0((MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 1, &TypeClassInfo_for_output_58);
        mercury__stream__put_list_6_p_2((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), TypeClassInfo_for_output_58, ((MR_Box) ((MR_Integer) 0)), (MR_Word) (&mdb__print_term_scalar_common_3[4]), (MR_Word) (&mdb__print_term_scalar_common_2[3]), Args_43, ((MR_Box) (STATE_VARIABLE_IO_21_49)), &conv7_STATE_VARIABLE_IO_24_52);
        STATE_VARIABLE_IO_24_52 = ((MR_Word) (conv7_STATE_VARIABLE_IO_24_52));
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_IO_24_52)), &conv9_STATE_VARIABLE_IO_26_54);
        STATE_VARIABLE_IO_26_54 = ((MR_Word) (conv9_STATE_VARIABLE_IO_26_54));
      }
      if ((MaybeReturn_44 == (MR_Word) ((MR_Unsigned) 0U)))
        State_12 = STATE_VARIABLE_IO_26_54;
      else
      {
        MR_Word Return_45 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_44, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_IO_28_56;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv11_STATE_VARIABLE_IO_28_56;
        MR_Box conv12_State_12;

        func_10(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (STATE_VARIABLE_IO_26_54)), &conv11_STATE_VARIABLE_IO_28_56);
        STATE_VARIABLE_IO_28_56 = ((MR_Word) (conv11_STATE_VARIABLE_IO_28_56));
        mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__print_term_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Return_45, ((MR_Box) (STATE_VARIABLE_IO_28_56)), &conv12_State_12);
        State_12 = ((MR_Word) (conv12_State_12));
      }
    }
    *Str_7 = mercury__string__builder__to_string_1_f_0(State_12);
    *Elided_8 = (MR_Integer) 0;
  }
  else
  {
    MR_Word StreamDb_13;
    MR_Word BrowserDb_14;

    mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_13);
    BrowserDb_14 = (MR_Word) (StreamDb_13);
    mdb__print_term__browser_term_to_string_5_p_0(BrowserDb_14, BrowserTerm_6, (MR_Integer) 10, (MR_Integer) 5, Str_7);
    *Elided_8 = (MR_Integer) 1;
  }
}

void MR_CALL 
mdb__print_term__portray_maybe_path_7_p_0(
  MR_Word Debugger_8,
  MR_Word Caller_9,
  MR_Word Format_10,
  MR_Word Info_11,
  MR_Word MaybePath_12)
{
  if ((MaybePath_12 == (MR_Word) ((MR_Unsigned) 0U)))
    mdb__print_term__portray_6_p_0(Debugger_8, Caller_9, Format_10, Info_11);
  else
  {
    MR_Word Path_14 = ((MR_Word) ((MR_hl_field(1, MaybePath_12, (MR_Integer) 0))));
    MR_Word Info_17;

    mdb__term_paths__set_path_3_p_0(Path_14, Info_11, &Info_17);
    mdb__print_term__portray_6_p_0(Debugger_8, Caller_9, Format_10, Info_17);
  }
}

static void MR_CALL 
mdb__print_term__portray_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__print_term__put_comma_space_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
mdb__print_term__portray_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mdb__print_term__write_univ_or_unbound_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
mdb__print_term__portray_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_RemainingSize_6;

  mdb__print_term__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
}

void MR_CALL 
mdb__print_term__portray_6_p_0(
  MR_Word Debugger_7,
  MR_Word Caller_8,
  MR_Word Format_9,
  MR_Word Info_10)
{
  MR_bool succeeded;
  MR_Word Params_12;
  MR_Word SubResult_13;
  MR_Word Var_19;
  MR_Word Var_22;

  mdb__browser_info__get_format_params_4_p_0(Info_10, Caller_8, Format_9, &Params_12);
  Var_19 = ((MR_Word) ((MR_hl_field(0, Info_10, (MR_Integer) 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, Info_10, (MR_Integer) 1))));
  mdb__term_paths__deref_subterm_3_p_0(Var_19, Var_22, &SubResult_13);
  if (((MR_tag((MR_Word) SubResult_13)) == (MR_Integer) 1))
  {
    MR_Word OKPath_15 = ((MR_Word) ((MR_hl_field(1, SubResult_13, (MR_Integer) 0))));
    MR_Word ErrorDir_16 = ((MR_Word) ((MR_hl_field(1, SubResult_13, (MR_Integer) 1))));

    mdb__term_paths__report_deref_error_5_p_0(Debugger_7, OKPath_15, ErrorDir_16);
  }
  else
  {
    MR_Word BrowserTerm_14 = ((MR_Word) ((MR_hl_field(0, SubResult_13, (MR_Integer) 0))));

    switch (Format_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer RemainingSize_34;
          MR_String BrowserTermStr_36;

          if (((MR_tag((MR_Word) BrowserTerm_14)) == (MR_Integer) 0))
          {
            MR_Word Univ_54 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_14, (MR_Integer) 0))));

            mdb__print_term__term_size_left_from_max_3_p_0(Univ_54, (MR_Integer) 60, &RemainingSize_34);
          }
          else
          {
            MR_String Functor_55 = ((MR_String) ((MR_hl_field(1, BrowserTerm_14, (MR_Integer) 0))));
            MR_Word Args_56 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_14, (MR_Integer) 1))));
            MR_Word MaybeReturn_57 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_14, (MR_Integer) 2))));
            MR_Integer FunctorSize_58;
            MR_Integer Arity_59;
            MR_Integer PrincipalSize_60;
            MR_Integer MaxArgsSize_61;
            MR_Box conv1_RemainingSize_34;

            mercury__string__length_2_p_0(Functor_55, &FunctorSize_58);
            mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_56, &Arity_59);
            if ((MaybeReturn_57 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Var_66 = (MR_Integer) ((MR_Unsigned) Arity_59 * (MR_Unsigned) 2);

              PrincipalSize_60 = (MR_Integer) ((MR_Unsigned) FunctorSize_58 + (MR_Unsigned) Var_66);
            }
            else
            {
              MR_Integer Var_62;
              MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) Arity_59 * (MR_Unsigned) 2);

              Var_62 = (MR_Integer) ((MR_Unsigned) FunctorSize_58 + (MR_Unsigned) Var_63);
              PrincipalSize_60 = (MR_Integer) ((MR_Unsigned) Var_62 + (MR_Unsigned) 3);
            }
            MaxArgsSize_61 = (MR_Integer) ((MR_Unsigned) 60 - (MR_Unsigned) PrincipalSize_60);
            mercury__list__foldl_4_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__print_term_scalar_common_1[3]), Args_56, ((MR_Box) (MaxArgsSize_61)), &conv1_RemainingSize_34);
            RemainingSize_34 = ((MR_Integer) (conv1_RemainingSize_34));
          }
          succeeded = (RemainingSize_34 >= (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word State_35;
            MR_Word Var_42;

            Var_42 = mercury__string__builder__init_0_f_0();
            if (((MR_tag((MR_Word) BrowserTerm_14)) == (MR_Integer) 0))
            {
              MR_Word Univ_71 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_14, (MR_Integer) 0))));
              MR_Box conv2_State_35;

              mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__print_term_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Univ_71, ((MR_Box) (Var_42)), &conv2_State_35);
              State_35 = ((MR_Word) (conv2_State_35));
            }
            else
            {
              MR_String Functor_72 = ((MR_String) ((MR_hl_field(1, BrowserTerm_14, (MR_Integer) 0))));
              MR_Word Args_73 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_14, (MR_Integer) 1))));
              MR_Word MaybeReturn_74 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_14, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_IO_19_77;
              MR_Word STATE_VARIABLE_IO_26_84;
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
              MR_Box conv4_STATE_VARIABLE_IO_19_77;

              func_3(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_72)), ((MR_Box) (Var_42)), &conv4_STATE_VARIABLE_IO_19_77);
              STATE_VARIABLE_IO_19_77 = ((MR_Word) (conv4_STATE_VARIABLE_IO_19_77));
              if ((Args_73 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_IO_26_84 = STATE_VARIABLE_IO_19_77;
              else
              {
                MR_Word TypeClassInfo_for_output_88;
                MR_Word STATE_VARIABLE_IO_21_79;
                MR_Word STATE_VARIABLE_IO_24_82;
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv6_STATE_VARIABLE_IO_21_79;
                MR_Box conv7_STATE_VARIABLE_IO_24_82;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_IO_26_84;

                func_5(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_IO_19_77)), &conv6_STATE_VARIABLE_IO_21_79);
                STATE_VARIABLE_IO_21_79 = ((MR_Word) (conv6_STATE_VARIABLE_IO_21_79));
                mercury__private_builtin__superclass_from_typeclass_info_3_p_0((MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 1, &TypeClassInfo_for_output_88);
                mercury__stream__put_list_6_p_2((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), TypeClassInfo_for_output_88, ((MR_Box) ((MR_Integer) 0)), (MR_Word) (&mdb__print_term_scalar_common_3[3]), (MR_Word) (&mdb__print_term_scalar_common_2[2]), Args_73, ((MR_Box) (STATE_VARIABLE_IO_21_79)), &conv7_STATE_VARIABLE_IO_24_82);
                STATE_VARIABLE_IO_24_82 = ((MR_Word) (conv7_STATE_VARIABLE_IO_24_82));
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
                func_8(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_IO_24_82)), &conv9_STATE_VARIABLE_IO_26_84);
                STATE_VARIABLE_IO_26_84 = ((MR_Word) (conv9_STATE_VARIABLE_IO_26_84));
              }
              if ((MaybeReturn_74 == (MR_Word) ((MR_Unsigned) 0U)))
                State_35 = STATE_VARIABLE_IO_26_84;
              else
              {
                MR_Word Return_75 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_74, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_IO_28_86;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__print_term_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv11_STATE_VARIABLE_IO_28_86;
                MR_Box conv12_State_35;

                func_10(((MR_Box) ((MR_Word) (&mdb__print_term_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (STATE_VARIABLE_IO_26_84)), &conv11_STATE_VARIABLE_IO_28_86);
                STATE_VARIABLE_IO_28_86 = ((MR_Word) (conv11_STATE_VARIABLE_IO_28_86));
                mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__print_term_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Return_75, ((MR_Box) (STATE_VARIABLE_IO_28_86)), &conv12_State_35);
                State_35 = ((MR_Word) (conv12_State_35));
              }
            }
            BrowserTermStr_36 = mercury__string__builder__to_string_1_f_0(State_35);
          }
          else
          {
            MR_Word StreamDb_37;
            MR_Word BrowserDb_38;
            MR_Integer Var_44;
            MR_Integer Var_46;

            mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_37);
            BrowserDb_38 = (MR_Word) (StreamDb_37);
            Var_46 = ((MR_Integer) ((MR_hl_field(0, Params_12, (MR_Integer) 0))));
            Var_44 = ((MR_Integer) ((MR_hl_field(0, Params_12, (MR_Integer) 1))));
            mdb__print_term__browser_term_to_string_5_p_0(BrowserDb_38, BrowserTerm_14, Var_44, Var_46, &BrowserTermStr_36);
          }
          mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, BrowserTermStr_36);
        }
        break;
      case (MR_Integer) 3:
        mdb__print_term__portray_pretty_5_p_0(Debugger_7, BrowserTerm_14, Params_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word StreamDb_91;
          MR_Word BrowserDb_92;
          MR_String Str_93;
          MR_Integer Var_95;
          MR_Integer Var_99;

          mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_91);
          BrowserDb_92 = (MR_Word) (StreamDb_91);
          Var_95 = ((MR_Integer) ((MR_hl_field(0, Params_12, (MR_Integer) 2))));
          Var_99 = ((MR_Integer) ((MR_hl_field(0, Params_12, (MR_Integer) 3))));
          mdb__sized_pretty__browser_term_to_string_line_5_p_0(BrowserDb_92, BrowserTerm_14, Var_95, Var_99, &Str_93);
          mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Str_93);
        }
        break;
      case (MR_Integer) 2:
        mdb__print_term__portray_verbose_5_p_0(Debugger_7, BrowserTerm_14, Params_12);
        break;
    }
  }
  mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
}

static void MR_CALL 
mdb__print_term__term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_RemainingSize_6;

  mdb__print_term__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
}

static void MR_CALL 
mdb__print_term__term_size_left_from_max_3_p_0(
  MR_Word Univ_4,
  MR_Integer MaxSize_5,
  MR_Integer * RemainingSize_6)
{
  MR_bool succeeded = (MaxSize_5 < (MR_Integer) 0);

  if (succeeded)
    *RemainingSize_6 = MaxSize_5;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word MaybeFunctorArityArgs_7;
    MR_Box Var_15;

    Var_15 = mercury__univ__univ_value_1_f_0(&TypeInfo_20_20, Univ_4);
    mercury__deconstruct__limited_deconstruct_cc_3_p_0(TypeInfo_20_20, Var_15, MaxSize_5, &MaybeFunctorArityArgs_7);
    if ((MaybeFunctorArityArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *RemainingSize_6 = (MR_Integer) -1;
    else
    {
      MR_String Functor_8;
      MR_Integer Arity_9;
      MR_Word Args_10;
      MR_Integer FunctorSize_11;
      MR_Integer PrincipalSize_12;
      MR_Integer MaxArgsSize_13;
      MR_Tuple Var_16 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_7, (MR_Integer) 0))));
      MR_Integer Var_17;
      MR_Box conv1_RemainingSize_6;

      Functor_8 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      Arity_9 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      Args_10 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 2))));
      mercury__string__length_2_p_0(Functor_8, &FunctorSize_11);
      Var_17 = (MR_Integer) ((MR_Unsigned) Arity_9 * (MR_Unsigned) 2);
      PrincipalSize_12 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_17);
      MaxArgsSize_13 = (MR_Integer) ((MR_Unsigned) MaxSize_5 - (MR_Unsigned) PrincipalSize_12);
      mercury__list__foldl_4_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__print_term_scalar_common_1[2]), Args_10, ((MR_Box) (MaxArgsSize_13)), &conv1_RemainingSize_6);
      *RemainingSize_6 = ((MR_Integer) (conv1_RemainingSize_6));
    }
  }
}

static void MR_CALL 
mdb__print_term__portray_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  MR_bool succeeded;
  MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 2))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 0))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 1))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 3))));
  MR_Word Doc_30;
  MR_Word Formatters_34;
  MR_Word Limit_35;
  MR_Word Params_36;
  MR_Integer Var_38;
  MR_Word Var_39;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
  {
    MR_Word Univ_29 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_7, (MR_Integer) 0))));

    {
      Doc_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Doc_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Doc_30, 1) = ((MR_Box) (Univ_29));
    }
  }
  else
  {
    MR_String Functor_31 = ((MR_String) ((MR_hl_field(1, BrowserTerm_7, (MR_Integer) 0))));
    MR_Word Args_32 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_7, (MR_Integer) 1))));
    MR_Word MaybeReturn_33 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_7, (MR_Integer) 2))));
    MR_Word Doc0_40;

    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 3;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Functor_31, ((&mdb__print_term_vector_common_6[0 + mid_2]))->mdb__print_term__vector_common_type_6_0__vct_6_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
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
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(Functor_31, (MR_Char) 46);
      succeeded = !(succeeded);
    }
    if (succeeded)
      {
        Doc0_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Doc0_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Doc0_40, 1) = ((MR_Box) (Functor_31));
        MR_hl_field(3, Doc0_40, 2) = ((MR_Box) (Args_32));
      }
    else
    {
      MR_Word FunctorDoc_41;
      MR_Word Var_46;

      Var_46 = mercury__string__split_at_char_2_f_0((MR_Char) 46, Functor_31);
      FunctorDoc_41 = mdb__print_term__qualified_functor_to_doc_1_f_0(Var_46);
      if ((Args_32 == (MR_Word) ((MR_Unsigned) 0U)))
        Doc0_40 = FunctorDoc_41;
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_54 = mercury__pretty_printer__group_1_f_0((MR_Word) (MR_mkword(1, &mdb__print_term_scalar_common_4[4])));
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (Args_32));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_4[5])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_5[1])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (FunctorDoc_41));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
        }
        Doc0_40 = mercury__pretty_printer__indent_1_f_0(Var_48);
      }
    }
    if ((MaybeReturn_33 == (MR_Word) ((MR_Unsigned) 0U)))
      Doc_30 = Doc0_40;
    else
    {
      MR_Word Return_44 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_33, (MR_Integer) 0))));
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_66, 1) = ((MR_Box) (Return_44));
      }
      Var_65 = mercury__pretty_printer__format_arg_1_f_0(Var_66);
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_5[4])));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Doc0_40));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
      }
      {
        Doc_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Doc_30, 0) = ((MR_Box) (Var_60));
      }
    }
  }
  mercury__pretty_printer__get_default_formatter_map_3_p_0(&Formatters_34);
  Var_38 = (MR_Integer) 0;
  succeeded = (Var_16 > Var_38);
  if (succeeded)
    {
      Limit_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Limit_35, 0) = ((MR_Box) (Var_16));
    }
  else
    {
      Limit_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Limit_35, 0) = ((MR_Box) (Var_17));
    }
  {
    Params_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_36, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Params_36, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, Params_36, 2) = ((MR_Box) (Limit_35));
  }
  Var_39 = (MR_Integer) 2;
  mercury__pretty_printer__put_doc_7_p_1((MR_Word) (&mdb__print_term_scalar_common_3[2]), ((MR_Box) (Debugger_6)), Var_39, Formatters_34, Params_36, Doc_30, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static MR_Word MR_CALL 
mdb__print_term__qualified_functor_to_doc_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (MR_mkword(1, &mdb__print_term_scalar_common_5[5]));
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_6;

      Var_6 = mercury__term_io__quoted_atom_1_f_0(Var_22);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_6));
      }
    }
    else
    {
      MR_Word Var_11;
      MR_Word Var_12;
      MR_String Var_13;
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word Var_18;

      Var_13 = mercury__term_io__quoted_atom_1_f_0(Var_22);
      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
      }
      Var_18 = mdb__print_term__qualified_functor_to_doc_1_f_0(Var_21);
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_5[6])));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
      }
      {
        Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_11));
      }
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mdb__print_term__portray_verbose_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  MR_bool succeeded;
  MR_Word StreamDb_10;
  MR_Word BrowserDb_11;
  MR_String Str_12;
  MR_Integer Var_16;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Word Frame_35;
  MR_Word ClippedFrame_36;
  MR_Word Var_37;
  MR_Word MaybeFunctorArityArgs_38;
  MR_Word MaybeReturn_39;
  MR_String Functor_40;
  MR_Word Args0_42;
  MR_Tuple Var_50;

  mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_10);
  BrowserDb_11 = (MR_Word) (StreamDb_10);
  Var_20 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 0))));
  Var_16 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 1))));
  Var_21 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 2))));
  Var_22 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 3))));
  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_11, BrowserTerm_7, Var_16, &MaybeFunctorArityArgs_38, &MaybeReturn_39);
  succeeded = ((MR_Integer) 0 < Var_16);
  if (succeeded)
  {
    succeeded = ((MR_Integer) 0 < Var_20);
    if (succeeded)
    {
      succeeded = (MaybeFunctorArityArgs_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_50 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_38, (MR_Integer) 0))));
        Functor_40 = ((MR_String) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
        Args0_42 = ((MR_Word) ((MR_hl_field(0, Var_50, (MR_Integer) 2))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Args_44;
    MR_Word ArgsFrame_48;
    MR_Word Var_55;
    MR_Integer _NewSize_34;

    if ((MaybeReturn_39 == (MR_Word) ((MR_Unsigned) 0U)))
      Args_44 = Args0_42;
    else
    {
      MR_Word Return_43 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_39, (MR_Integer) 0))));
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Return_43));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args0_42, Var_51, &Args_44);
    }
    mdb__print_term__args_to_string_verbose_list_9_p_0(BrowserDb_11, Args_44, (MR_Integer) 1, Var_16, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &_NewSize_34, Var_20, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &ArgsFrame_48);
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Functor_40));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Frame_35 = mdb__frame__vglue_2_f_0(Var_55, ArgsFrame_48);
  }
  else
  {
    MR_String Line_49;
    MR_String Functor_59;
    MR_Integer Arity_60;
    MR_Word IsFunc_61;

    mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_11, BrowserTerm_7, &Functor_59, &Arity_60, &IsFunc_61);
    succeeded = (Arity_60 == (MR_Integer) 0);
    if (succeeded)
      Line_49 = Functor_59;
    else
      switch (IsFunc_61) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_85;
            MR_String Var_93;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_60, &Var_85);
            Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_85);
            Line_49 = mercury__string__f_43_43_2_f_0(Functor_59, Var_93);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_75;
            MR_String Var_82;
            MR_String Var_84;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_60, &Var_75);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) "+1");
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_82);
            Line_49 = mercury__string__f_43_43_2_f_0(Functor_59, Var_84);
          }
          break;
      }
    {
      Frame_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Frame_35, 0) = ((MR_Box) (Line_49));
      MR_hl_field(1, Frame_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (Var_22));
  }
  ClippedFrame_36 = mdb__frame__clip_2_f_0(Var_37, Frame_35);
  mdb__print_term__unlines_2_p_0(ClippedFrame_36, &Str_12);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_12);
}

static void MR_CALL 
mdb__print_term__unlines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_String Line_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Lines_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String NLine_6;
    MR_String Strs_7;

    mercury__string__append_3_p_2(Line_3, (MR_String) "\n", &NLine_6);
    mdb__print_term__unlines_2_p_0(Lines_4, &Strs_7);
    mercury__string__append_3_p_2(NLine_6, Strs_7, HeadVar__2_2);
  }
}

static void MR_CALL 
mdb__print_term__args_to_string_verbose_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer CurSize_5,
  MR_Integer * NewSize_6,
  MR_Integer HeadVar__7_7,
  MR_Integer HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *NewSize_6 = CurSize_5;
  }
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((Var_73 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TreeFrame_26;
      MR_String ArgNumS_27;
      MR_String LastBranchS_28;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_35;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_74));
      }
      mdb__print_term__browser_term_to_string_verbose_2_8_p_0(HeadVar__1_1, Var_30, HeadVar__4_4, CurSize_5, NewSize_6, HeadVar__7_7, HeadVar__8_8, &TreeFrame_26);
      mercury__string__int_to_string_2_p_0(HeadVar__3_3, &ArgNumS_27);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (ArgNumS_27));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_4[2])));
      }
      mercury__string__append_list_2_p_0(Var_31, &LastBranchS_28);
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (LastBranchS_28));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *HeadVar__9_9 = mdb__frame__hglue_2_f_0(Var_35, TreeFrame_26);
    }
    else
    {
      MR_Integer NewSize1_48;
      MR_Word TreeFrame_49;
      MR_Integer ArgNum1_50;
      MR_Word RestTreesFrame_52;
      MR_String ArgNumS_53;
      MR_String BranchFrameS_54;
      MR_Integer Height_55;
      MR_Word VBranchFrame_56;
      MR_Word LeftFrame_57;
      MR_Word TopFrame_58;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Integer Var_67;
      MR_Word Var_70;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_74));
      }
      mdb__print_term__browser_term_to_string_verbose_2_8_p_0(HeadVar__1_1, Var_60, HeadVar__4_4, CurSize_5, &NewSize1_48, HeadVar__7_7, HeadVar__8_8, &TreeFrame_49);
      ArgNum1_50 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      mdb__print_term__args_to_string_verbose_list_9_p_0(HeadVar__1_1, Var_73, ArgNum1_50, HeadVar__4_4, NewSize1_48, NewSize_6, HeadVar__7_7, HeadVar__8_8, &RestTreesFrame_52);
      mercury__string__int_to_string_2_p_0(HeadVar__3_3, &ArgNumS_53);
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (ArgNumS_53));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &mdb__print_term_scalar_common_4[2])));
      }
      mercury__string__append_list_2_p_0(Var_63, &BranchFrameS_54);
      Var_67 = mdb__frame__vsize_1_f_0(TreeFrame_49);
      Height_55 = (MR_Integer) ((MR_Unsigned) Var_67 - (MR_Unsigned) 1);
      mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Height_55, ((MR_Box) ((MR_String) "|")), &VBranchFrame_56);
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (BranchFrameS_54));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      LeftFrame_57 = mdb__frame__vglue_2_f_0(Var_70, VBranchFrame_56);
      TopFrame_58 = mdb__frame__hglue_2_f_0(LeftFrame_57, TreeFrame_49);
      *HeadVar__9_9 = mdb__frame__vglue_2_f_0(TopFrame_58, RestTreesFrame_52);
    }
  }
}

static void MR_CALL 
mdb__print_term__browser_term_to_string_verbose_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_Word * Frame_16)
{
  MR_bool succeeded;
  MR_Word MaybeFunctorArityArgs_17;
  MR_Word MaybeReturn_18;
  MR_String Functor_19;
  MR_Word Args0_21;
  MR_Tuple Var_29;

  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, MaxSize_11, &MaybeFunctorArityArgs_17, &MaybeReturn_18);
  succeeded = (CurSize_12 < MaxSize_11);
  if (succeeded)
  {
    succeeded = (CurDepth_15 < MaxDepth_14);
    if (succeeded)
    {
      succeeded = (MaybeFunctorArityArgs_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_29 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_17, (MR_Integer) 0))));
        Functor_19 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
        Args0_21 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 2))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Args_23;
    MR_Integer CurSize1_24;
    MR_Integer CurDepth1_25;
    MR_Word ArgsFrame_27;
    MR_Word Var_34;

    if ((MaybeReturn_18 == (MR_Word) ((MR_Unsigned) 0U)))
      Args_23 = Args0_21;
    else
    {
      MR_Word Return_22 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_18, (MR_Integer) 0))));
      MR_Word Var_30;

      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (Return_22));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args0_21, Var_30, &Args_23);
    }
    CurSize1_24 = (MR_Integer) ((MR_Unsigned) CurSize_12 + (MR_Unsigned) 1);
    CurDepth1_25 = (MR_Integer) ((MR_Unsigned) CurDepth_15 + (MR_Unsigned) 1);
    mdb__print_term__args_to_string_verbose_list_9_p_0(BrowserDb_9, Args_23, (MR_Integer) 1, MaxSize_11, CurSize1_24, NewSize_13, MaxDepth_14, CurDepth1_25, &ArgsFrame_27);
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Functor_19));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Frame_16 = mdb__frame__vglue_2_f_0(Var_34, ArgsFrame_27);
  }
  else
  {
    MR_String Line_28;
    MR_String Functor_38;
    MR_Integer Arity_39;
    MR_Word IsFunc_40;

    mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, &Functor_38, &Arity_39, &IsFunc_40);
    succeeded = (Arity_39 == (MR_Integer) 0);
    if (succeeded)
      Line_28 = Functor_38;
    else
      switch (IsFunc_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_64;
            MR_String Var_72;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_39, &Var_64);
            Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_64);
            Line_28 = mercury__string__f_43_43_2_f_0(Functor_38, Var_72);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_54;
            MR_String Var_61;
            MR_String Var_63;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_39, &Var_54);
            Var_61 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) "+1");
            Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_61);
            Line_28 = mercury__string__f_43_43_2_f_0(Functor_38, Var_63);
          }
          break;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Frame_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_28));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *NewSize_13 = CurSize_12;
  }
}

static void MR_CALL 
mdb__print_term__browser_term_to_string_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Integer MaxSize_8,
  MR_Integer MaxDepth_9,
  MR_String * Str_10)
{
  MR_bool succeeded;
  MR_Word MaybeFunctorArityArgs_14;
  MR_Word MaybeReturn_15;
  MR_String Functor_16;
  MR_Word Args_18;
  MR_Tuple Var_19;

  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_6, BrowserTerm_7, MaxSize_8, &MaybeFunctorArityArgs_14, &MaybeReturn_15);
  succeeded = ((MR_Integer) 0 < MaxSize_8);
  if (succeeded)
  {
    succeeded = ((MR_Integer) 0 < MaxDepth_9);
    if (succeeded)
    {
      succeeded = (MaybeFunctorArityArgs_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_19 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_14, (MR_Integer) 0))));
        Functor_16 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
        Args_18 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 2))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word ListHead_20;
    MR_Word ListTail_21;
    MR_Word Var_32;
    MR_Word Var_33;

    succeeded = (strcmp(Functor_16, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (MaybeReturn_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListHead_20 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
          Var_32 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
          succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ListTail_21 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
            Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
            succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Depth1_23 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
      MR_Integer Size2_24;
      MR_String HeadStr_25;
      MR_Word TailStrs_26;
      MR_Word Strs_27;
      MR_Word Var_36;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Integer _NewSize_13;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (ListHead_20));
      }
      mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_6, Var_36, MaxSize_8, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &Size2_24, MaxDepth_9, Depth1_23, &HeadStr_25);
      mdb__print_term__list_tail_to_string_list_8_p_0(BrowserDb_6, ListTail_21, MaxSize_8, Size2_24, &_NewSize_13, MaxDepth_9, Depth1_23, &TailStrs_26);
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailStrs_26, (MR_Word) (MR_mkword(1, &mdb__print_term_scalar_common_4[0])), &Strs_27);
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (HeadStr_25));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Strs_27));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "["));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
      }
      mercury__string__append_list_2_p_0(Var_40, Str_10);
    }
    else
    {
      succeeded = (strcmp(Functor_16, (MR_String) "[]") == 0);
      if (succeeded)
      {
        succeeded = (Args_18 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeReturn_15 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        *Str_10 = (MR_String) "[]";
      else
      {
        MR_Word ArgStrs_28;
        MR_String BracketedArgsStr_29;
        MR_Integer Depth1_57 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
        MR_Integer Size2_58;

        mdb__print_term__args_to_string_list_8_p_0(BrowserDb_6, Args_18, MaxSize_8, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &Size2_58, MaxDepth_9, Depth1_57, &ArgStrs_28);
        BracketedArgsStr_29 = mdb__print_term__bracket_string_list_1_f_0(ArgStrs_28);
        if ((MaybeReturn_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_53;
          MR_Word Var_54;

          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (BracketedArgsStr_29));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (Functor_16));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
          }
          mercury__string__append_list_2_p_0(Var_53, Str_10);
        }
        else
        {
          MR_Word Return_30 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_15, (MR_Integer) 0))));
          MR_String ReturnStr_31;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_51;
          MR_Integer _NewSize_99;

          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_46, 0) = ((MR_Box) (Return_30));
          }
          mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_6, Var_46, MaxSize_8, Size2_58, &_NewSize_99, MaxDepth_9, Depth1_57, &ReturnStr_31);
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (ReturnStr_31));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) " = "));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (BracketedArgsStr_29));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Functor_16));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
          }
          mercury__string__append_list_2_p_0(Var_47, Str_10);
        }
      }
    }
  }
  else
  {
    MR_String Functor_60;
    MR_Integer Arity_61;
    MR_Word IsFunc_62;

    mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_6, BrowserTerm_7, &Functor_60, &Arity_61, &IsFunc_62);
    succeeded = (Arity_61 == (MR_Integer) 0);
    if (succeeded)
      *Str_10 = Functor_60;
    else
      switch (IsFunc_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_86;
            MR_String Var_94;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_61, &Var_86);
            Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_86);
            *Str_10 = mercury__string__f_43_43_2_f_0(Functor_60, Var_94);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_76;
            MR_String Var_83;
            MR_String Var_85;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_61, &Var_76);
            Var_83 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "+1");
            Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_83);
            *Str_10 = mercury__string__f_43_43_2_f_0(Functor_60, Var_85);
          }
          break;
      }
  }
}

static void MR_CALL 
mdb__print_term__args_to_string_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer CurSize_4,
  MR_Integer * NewSize_5,
  MR_Integer HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Word * Strs_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Strs_8 = (MR_Word) ((MR_Unsigned) 0U);
    *NewSize_5 = CurSize_4;
  }
  else
  {
    MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Univs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer NewSize1_25;
    MR_String Str_26;
    MR_Word RestStrs_27;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Univ_17));
    }
    mdb__print_term__browser_term_to_string_2_8_p_0(HeadVar__1_1, Var_28, HeadVar__3_3, CurSize_4, &NewSize1_25, HeadVar__6_6, HeadVar__7_7, &Str_26);
    mdb__print_term__args_to_string_list_8_p_0(HeadVar__1_1, Univs_18, HeadVar__3_3, NewSize1_25, NewSize_5, HeadVar__6_6, HeadVar__7_7, &RestStrs_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Strs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Str_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (RestStrs_27));
    }
  }
}

static void MR_CALL 
mdb__print_term__list_tail_to_string_list_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word TailUniv_10,
  MR_Integer MaxSize_11,
  MR_Integer Size0_12,
  MR_Integer * Size_13,
  MR_Integer MaxDepth_14,
  MR_Integer Depth0_15,
  MR_Word * TailStrs_16)
{
  MR_bool succeeded;
  MR_Integer Limit_17;
  MR_Word MaybeFunctorArityArgs_18;
  MR_Word MaybeReturn_19;
  MR_Word Var_31;

  Limit_17 = mercury__int__max_2_f_0(MaxSize_11, (MR_Integer) 2);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (TailUniv_10));
  }
  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, Var_31, Limit_17, &MaybeFunctorArityArgs_18, &MaybeReturn_19);
  if ((MaybeFunctorArityArgs_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_49;
    MR_String TailCompressedStr_51;
    MR_String Functor_52;
    MR_Integer Arity_53;
    MR_Word IsFunc_54;

    *Size_13 = Size0_12;
    mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, Var_31, &Functor_52, &Arity_53, &IsFunc_54);
    succeeded = (Arity_53 == (MR_Integer) 0);
    if (succeeded)
      TailCompressedStr_51 = Functor_52;
    else
      switch (IsFunc_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_78;
            MR_String Var_86;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_53, &Var_78);
            Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_78);
            TailCompressedStr_51 = mercury__string__f_43_43_2_f_0(Functor_52, Var_86);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_68;
            MR_String Var_75;
            MR_String Var_77;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_53, &Var_68);
            Var_75 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "+1");
            Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_75);
            TailCompressedStr_51 = mercury__string__f_43_43_2_f_0(Functor_52, Var_77);
          }
          break;
      }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (TailCompressedStr_51));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailStrs_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) " | "));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_49));
    }
  }
  else
  {
    MR_String Functor_20;
    MR_Word Args_22;
    MR_Tuple Var_32 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_18, (MR_Integer) 0))));

    Functor_20 = ((MR_String) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
    Args_22 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 2))));
    succeeded = (strcmp(Functor_20, (MR_String) "[]") == 0);
    if (succeeded)
    {
      succeeded = (Args_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeReturn_19 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Size_13 = Size0_12;
      *TailStrs_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ListHead_23;
      MR_Word ListTail_24;
      MR_Word Var_33;
      MR_Word Var_34;

      succeeded = (strcmp(Functor_20, (MR_String) "[|]") == 0);
      if (succeeded)
      {
        succeeded = (MaybeReturn_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Args_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ListHead_23 = ((MR_Word) ((MR_hl_field(1, Args_22, (MR_Integer) 0))));
            Var_33 = ((MR_Word) ((MR_hl_field(1, Args_22, (MR_Integer) 1))));
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListTail_24 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
              Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
              succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = (Size0_12 < MaxSize_11);
        if (succeeded)
          succeeded = (Depth0_15 < MaxDepth_14);
        if (succeeded)
        {
          MR_Integer Size1_25;
          MR_String HeadStr_26;
          MR_Word TailStrs0_27;
          MR_Word Var_35;
          MR_Word Var_37;

          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_35, 0) = ((MR_Box) (ListHead_23));
          }
          mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_9, Var_35, MaxSize_11, Size0_12, &Size1_25, MaxDepth_14, Depth0_15, &HeadStr_26);
          mdb__print_term__list_tail_to_string_list_8_p_0(BrowserDb_9, ListTail_24, MaxSize_11, Size1_25, Size_13, MaxDepth_14, Depth0_15, &TailStrs0_27);
          {
            Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_37, 0) = ((MR_Box) (HeadStr_26));
            MR_hl_field(1, Var_37, 1) = ((MR_Box) (TailStrs0_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TailStrs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ", "));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_37));
          }
        }
        else
        {
          *Size_13 = Size0_12;
          *TailStrs_16 = (MR_Word) (MR_mkword(1, &mdb__print_term_scalar_common_4[1]));
        }
      }
      else
      {
        succeeded = (Size0_12 < MaxSize_11);
        if (succeeded)
          succeeded = (Depth0_15 < MaxDepth_14);
        if (succeeded)
        {
          MR_String TailStr_28;
          MR_Word Var_41;

          mdb__print_term__browser_term_to_string_3_10_p_0(BrowserDb_9, Functor_20, Args_22, MaybeReturn_19, MaxSize_11, Size0_12, Size_13, MaxDepth_14, Depth0_15, &TailStr_28);
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (TailStr_28));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TailStrs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) " | "));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_41));
          }
        }
        else
        {
          MR_String TailCompressedStr_29;
          MR_Word Var_45;

          *Size_13 = Size0_12;
          mdb__print_term__browser_term_compress_3_p_0(BrowserDb_9, Var_31, &TailCompressedStr_29);
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (TailCompressedStr_29));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TailStrs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) " | "));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_45));
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdb__print_term__browser_term_to_string_3_10_p_0(
  MR_Word BrowserDb_11,
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word MaybeReturn_14,
  MR_Integer MaxSize_15,
  MR_Integer Size0_16,
  MR_Integer * Size_17,
  MR_Integer MaxDepth_18,
  MR_Integer Depth0_19,
  MR_String * Str_20)
{
  MR_bool succeeded = (strcmp(Functor_12, (MR_String) "[|]") == 0);
  MR_Word ListHead_21;
  MR_Word ListTail_22;
  MR_Word Var_33;
  MR_Word Var_34;

  if (succeeded)
  {
    succeeded = (MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_21 = ((MR_Word) ((MR_hl_field(1, Args_13, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(1, Args_13, (MR_Integer) 1))));
        succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_22 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
          Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
          succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer Size1_23 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) 1);
    MR_Integer Depth1_24 = (MR_Integer) ((MR_Unsigned) Depth0_19 + (MR_Unsigned) 1);
    MR_Integer Size2_25;
    MR_String HeadStr_26;
    MR_Word TailStrs_27;
    MR_Word Strs_28;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_43;

    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (ListHead_21));
    }
    mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_11, Var_37, MaxSize_15, Size1_23, &Size2_25, MaxDepth_18, Depth1_24, &HeadStr_26);
    mdb__print_term__list_tail_to_string_list_8_p_0(BrowserDb_11, ListTail_22, MaxSize_15, Size2_25, Size_17, MaxDepth_18, Depth1_24, &TailStrs_27);
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailStrs_27, (MR_Word) (MR_mkword(1, &mdb__print_term_scalar_common_4[0])), &Strs_28);
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (HeadStr_26));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Strs_28));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
    }
    mercury__string__append_list_2_p_0(Var_41, Str_20);
  }
  else
  {
    succeeded = (strcmp(Functor_12, (MR_String) "[]") == 0);
    if (succeeded)
    {
      succeeded = (Args_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Size_17 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) 1);
      *Str_20 = (MR_String) "[]";
    }
    else
    {
      MR_Word ArgStrs_29;
      MR_String BracketedArgsStr_30;
      MR_Integer Size1_57 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) 1);
      MR_Integer Depth1_58 = (MR_Integer) ((MR_Unsigned) Depth0_19 + (MR_Unsigned) 1);
      MR_Integer Size2_59;

      mdb__print_term__args_to_string_list_8_p_0(BrowserDb_11, Args_13, MaxSize_15, Size1_57, &Size2_59, MaxDepth_18, Depth1_58, &ArgStrs_29);
      if ((ArgStrs_29 == (MR_Word) ((MR_Unsigned) 0U)))
        BracketedArgsStr_30 = (MR_String) "";
      else
      {
        MR_String HeadArg_61 = ((MR_String) ((MR_hl_field(1, ArgStrs_29, (MR_Integer) 0))));
        MR_Word TailArgs_62 = ((MR_Word) ((MR_hl_field(1, ArgStrs_29, (MR_Integer) 1))));
        MR_String Var_64;
        MR_String Var_65;
        MR_String Var_66;

        Var_66 = mdb__print_term__comma_string_list_1_f_0(TailArgs_62);
        Var_65 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) ")");
        Var_64 = mercury__string__f_43_43_2_f_0(HeadArg_61, Var_65);
        BracketedArgsStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_64);
      }
      if ((MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_54;
        MR_Word Var_55;

        *Size_17 = Size2_59;
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (BracketedArgsStr_30));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Functor_12));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
        }
        mercury__string__append_list_2_p_0(Var_54, Str_20);
      }
      else
      {
        MR_Word Return_31 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_14, (MR_Integer) 0))));
        MR_String ReturnStr_32;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_47, 0) = ((MR_Box) (Return_31));
        }
        mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_11, Var_47, MaxSize_15, Size2_59, Size_17, MaxDepth_18, Depth1_58, &ReturnStr_32);
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (ReturnStr_32));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) " = "));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (BracketedArgsStr_30));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Functor_12));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
        }
        mercury__string__append_list_2_p_0(Var_48, Str_20);
      }
    }
  }
}

static void MR_CALL 
mdb__print_term__browser_term_to_string_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_String * Str_16)
{
  MR_bool succeeded;
  MR_Word MaybeFunctorArityArgs_17;
  MR_Word MaybeReturn_18;
  MR_String Functor_19;
  MR_Word Args_21;
  MR_Tuple Var_22;

  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, MaxSize_11, &MaybeFunctorArityArgs_17, &MaybeReturn_18);
  succeeded = (CurSize_12 < MaxSize_11);
  if (succeeded)
  {
    succeeded = (CurDepth_15 < MaxDepth_14);
    if (succeeded)
    {
      succeeded = (MaybeFunctorArityArgs_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_22 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_17, (MR_Integer) 0))));
        Functor_19 = ((MR_String) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
        Args_21 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 2))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word ListHead_23;
    MR_Word ListTail_24;
    MR_Word Var_35;
    MR_Word Var_36;

    succeeded = (strcmp(Functor_19, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (MaybeReturn_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListHead_23 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
          Var_35 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
          succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ListTail_24 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
            Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
            succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Size1_25 = (MR_Integer) ((MR_Unsigned) CurSize_12 + (MR_Unsigned) 1);
      MR_Integer Depth1_26 = (MR_Integer) ((MR_Unsigned) CurDepth_15 + (MR_Unsigned) 1);
      MR_Integer Size2_27;
      MR_String HeadStr_28;
      MR_Word TailStrs_29;
      MR_Word Strs_30;
      MR_Word Var_39;
      MR_Word Var_43;
      MR_Word Var_45;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (ListHead_23));
      }
      mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_9, Var_39, MaxSize_11, Size1_25, &Size2_27, MaxDepth_14, Depth1_26, &HeadStr_28);
      mdb__print_term__list_tail_to_string_list_8_p_0(BrowserDb_9, ListTail_24, MaxSize_11, Size2_27, NewSize_13, MaxDepth_14, Depth1_26, &TailStrs_29);
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailStrs_29, (MR_Word) (MR_mkword(1, &mdb__print_term_scalar_common_4[0])), &Strs_30);
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (HeadStr_28));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Strs_30));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) ((MR_String) "["));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
      }
      mercury__string__append_list_2_p_0(Var_43, Str_16);
    }
    else
    {
      succeeded = (strcmp(Functor_19, (MR_String) "[]") == 0);
      if (succeeded)
      {
        succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeReturn_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        *NewSize_13 = (MR_Integer) ((MR_Unsigned) CurSize_12 + (MR_Unsigned) 1);
        *Str_16 = (MR_String) "[]";
      }
      else
      {
        MR_Word ArgStrs_31;
        MR_String BracketedArgsStr_32;
        MR_Integer Size1_59 = (MR_Integer) ((MR_Unsigned) CurSize_12 + (MR_Unsigned) 1);
        MR_Integer Depth1_60 = (MR_Integer) ((MR_Unsigned) CurDepth_15 + (MR_Unsigned) 1);
        MR_Integer Size2_61;

        mdb__print_term__args_to_string_list_8_p_0(BrowserDb_9, Args_21, MaxSize_11, Size1_59, &Size2_61, MaxDepth_14, Depth1_60, &ArgStrs_31);
        BracketedArgsStr_32 = mdb__print_term__bracket_string_list_1_f_0(ArgStrs_31);
        if ((MaybeReturn_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_56;
          MR_Word Var_57;

          *NewSize_13 = Size2_61;
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (BracketedArgsStr_32));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_56, 0) = ((MR_Box) (Functor_19));
            MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
          }
          mercury__string__append_list_2_p_0(Var_56, Str_16);
        }
        else
        {
          MR_Word Return_33 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_18, (MR_Integer) 0))));
          MR_String ReturnStr_34;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_54;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (Return_33));
          }
          mdb__print_term__browser_term_to_string_2_8_p_0(BrowserDb_9, Var_49, MaxSize_11, Size2_61, NewSize_13, MaxDepth_14, Depth1_60, &ReturnStr_34);
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (ReturnStr_34));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) " = "));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (BracketedArgsStr_32));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (Functor_19));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_51));
          }
          mercury__string__append_list_2_p_0(Var_50, Str_16);
        }
      }
    }
  }
  else
  {
    MR_String Functor_63;
    MR_Integer Arity_64;
    MR_Word IsFunc_65;

    mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, &Functor_63, &Arity_64, &IsFunc_65);
    succeeded = (Arity_64 == (MR_Integer) 0);
    if (succeeded)
      *Str_16 = Functor_63;
    else
      switch (IsFunc_65) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_89;
            MR_String Var_97;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_64, &Var_89);
            Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_89);
            *Str_16 = mercury__string__f_43_43_2_f_0(Functor_63, Var_97);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_79;
            MR_String Var_86;
            MR_String Var_88;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_64, &Var_79);
            Var_86 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) "+1");
            Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_86);
            *Str_16 = mercury__string__f_43_43_2_f_0(Functor_63, Var_88);
          }
          break;
      }
    *NewSize_13 = CurSize_12;
  }
}

static MR_String MR_CALL 
mdb__print_term__bracket_string_list_1_f_0(
  MR_Word Args_3)
{
  MR_String Str_4;

  if ((Args_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Str_4 = (MR_String) "";
  else
  {
    MR_String HeadArg_5 = ((MR_String) ((MR_hl_field(1, Args_3, (MR_Integer) 0))));
    MR_Word TailArgs_6 = ((MR_Word) ((MR_hl_field(1, Args_3, (MR_Integer) 1))));
    MR_String Var_8;
    MR_String Var_9;
    MR_String Var_10;

    Var_10 = mdb__print_term__comma_string_list_1_f_0(TailArgs_6);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ")");
    Var_8 = mercury__string__f_43_43_2_f_0(HeadArg_5, Var_9);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_8);
  }
  return Str_4;
}

static void MR_CALL 
mdb__print_term__browser_term_compress_3_p_0(
  MR_Word BrowserDb_4,
  MR_Word BrowserTerm_5,
  MR_String * Str_6)
{
  MR_bool succeeded;
  MR_String Functor_7;
  MR_Integer Arity_8;
  MR_Word IsFunc_9;

  mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_4, BrowserTerm_5, &Functor_7, &Arity_8, &IsFunc_9);
  succeeded = (Arity_8 == (MR_Integer) 0);
  if (succeeded)
    *Str_6 = Functor_7;
  else
    switch (IsFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_33;
          MR_String Var_41;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_8, &Var_33);
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_33);
          *Str_6 = mercury__string__f_43_43_2_f_0(Functor_7, Var_41);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_23;
          MR_String Var_30;
          MR_String Var_32;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__print_term_scalar_common_5[0]), Arity_8, &Var_23);
          Var_30 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) "+1");
          Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_30);
          *Str_6 = mercury__string__f_43_43_2_f_0(Functor_7, Var_32);
        }
        break;
    }
}

static MR_String MR_CALL 
mdb__print_term__comma_string_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_String HeadArg_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailArgs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_6;
    MR_String Var_7;

    Var_7 = mdb__print_term__comma_string_list_1_f_0(TailArgs_4);
    Var_6 = mercury__string__f_43_43_2_f_0(HeadArg_3, Var_7);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_6);
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdb__print_term____Unify____unbound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__print_term____Unify____unbound_0_0();
  return succeeded;
}

static void MR_CALL 
mdb__print_term____Compare____unbound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__print_term____Compare____unbound_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__print_term__init(void)
{
}

void mercury__mdb__print_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__print_term__mdb__print_term__type_ctor_info_unbound_0);
}

void mercury__mdb__print_term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__print_term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.print_term.
