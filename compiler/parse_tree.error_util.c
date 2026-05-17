/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2026-05-17
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


// :- module parse_tree.error_util.
// :- implementation.

/*
INIT mercury__parse_tree__error_util__init
ENDINIT
*/

#include "parse_tree.error_util.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__error_util____vpti_func_3__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__error_util__pair__pti_pair_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_maybe_written_specs_0_0[2];

static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_maybe_written_specs_0_0[2];

static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_maybe_written_specs_0_0;

static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_maybe_written_specs_0_0[1];

static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_maybe_written_specs_0[1];

static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_maybe_written_specs_0[1];

static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_written_specs_0[1];

static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__506__1_1_p_0(
  MR_Word LambdaHeadVar__1_20);

static void MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__construct_sorted_line_pieces__464__1_3_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__2_32,
  MR_Word * HeadVar__3_33);

static void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_pair_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word MakeItemPiecesFunc_4,
  MR_Box Item_5,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
parse_tree__error_util__does_msg_print_anything_1_f_0(
  MR_Word Msg_3);

static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__error_util__filter_interface_generation_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeWorst_0_3,
  MR_Word * STATE_VARIABLE_MaybeWorst_4);

static MR_Box MR_CALL 
parse_tree__error_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_101_115_95_115_112_101_99_95_112_114_105_110_116_95_97_110_121_116_104_105_110_103_95_95_91_49_93_95_48_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_written_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_util____Compare____maybe_written_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[10][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][5];

static /* final */ const MR_Integer parse_tree__error_util_scalar_common_5[1][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][7];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_7[1][6];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_8[1][4];




static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_util_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_util_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_util_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_util_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__error_util_scalar_common_4[0])),
    ((MR_Box) (parse_tree__error_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_101_115_95_115_112_101_99_95_112_114_105_110_116_95_97_110_121_116_104_105_110_103_95_95_91_49_93_95_48_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__error_util_scalar_common_8[0])),
    ((MR_Box) (parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Integer parse_tree__error_util_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__error_util_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__error_util____vpti_func_3__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_util__pair__pti_pair_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__error_util_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__error_util__pair__pti_pair_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1)),
    ((MR_Box) (&parse_tree__error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__error_util____vpti_func_3__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__error_util__pair__pti_pair_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_TypeInfo) (&parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_spec_accumulator",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_maybe_written_specs_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_maybe_written_specs_0_0[2] = {
  (MR_String) "to_be_written",
  (MR_String) "already_written"
};

static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_maybe_written_specs_0_0 = {
  (MR_String) "maybe_written_specs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_util__parse_tree__error_util__field_types_maybe_written_specs_0_0,
  parse_tree__error_util__parse_tree__error_util__field_names_maybe_written_specs_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_maybe_written_specs_0_0[1] = { &parse_tree__error_util__parse_tree__error_util__du_functor_desc_maybe_written_specs_0_0 };

static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_maybe_written_specs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_maybe_written_specs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_maybe_written_specs_0[1] = { &parse_tree__error_util__parse_tree__error_util__du_functor_desc_maybe_written_specs_0_0 };

static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_written_specs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_written_specs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_written_specs_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_written_specs_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_written_specs",
  { parse_tree__error_util__parse_tree__error_util__du_name_ordered_maybe_written_specs_0 },
  { parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_maybe_written_specs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_written_specs_0,

};

static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__506__1_1_p_0(
  MR_Word LambdaHeadVar__1_20)
{
  MR_bool succeeded;
  MR_Word Phase_7;
  MR_Word ModeReportControl_8;
  MR_Word Var_21;

  switch (MR_tag((MR_Word) LambdaHeadVar__1_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Phase_7 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_20, 2))));
      break;
    case (MR_Integer) 1:
      Phase_7 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_20, 2))));
      break;
    case (MR_Integer) 2:
      Phase_7 = ((MR_Word) ((MR_hl_field(2, LambdaHeadVar__1_20, 2))));
      break;
  }
  switch (MR_tag((MR_Word) Phase_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Phase_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 5:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 6:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 7:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 8:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 9:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 10:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 11:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 12:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 13:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 14:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 15:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 16:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 17:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 18:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 19:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 20:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 21:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 22:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 23:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 24:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 25:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 26:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 27:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Control_33 = ((MR_Unsigned) ((MR_hl_field(2, Phase_7, 0))) & (MR_Integer) 1);

        {
          ModeReportControl_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeReportControl_8, 0) = ((MR_Box) (Control_33));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Control_34 = ((MR_Unsigned) ((MR_hl_field(3, Phase_7, 0))) & (MR_Integer) 1);

        {
          ModeReportControl_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeReportControl_8, 0) = ((MR_Box) (Control_34));
        }
      }
      break;
  }
  succeeded = (ModeReportControl_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(1, ModeReportControl_8, 0))));
    succeeded = (Var_21 == (MR_Integer) 1);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__construct_sorted_line_pieces__464__1_3_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__2_32,
  MR_Word * HeadVar__3_33)
{
  MR_Box conv0_HeadVar__3_33;

  mercury__pair__fst_2_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[0]), TypeInfo_for_T_26, HeadVar__2_32, &conv0_HeadVar__3_33);
  *HeadVar__3_33 = ((MR_Word) (conv0_HeadVar__3_33));
}

void MR_CALL 
parse_tree__error_util____Compare____maybe_written_specs_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_written_specs_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__error_util_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_pair_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word MakeItemPiecesFunc_4,
  MR_Box Item_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word ItemPieces_6;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, MakeItemPiecesFunc_4, 1))));
  MR_Box conv1_ItemPieces_6;

  conv1_ItemPieces_6 = func_0(((MR_Box) (MakeItemPiecesFunc_4)), ((MR_Box) (MR_mkword(1, &parse_tree__error_util_scalar_common_1[9]))), Item_5);
  ItemPieces_6 = ((MR_Word) (conv1_ItemPieces_6));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ItemPieces_6));
    MR_hl_field(0, base, 1) = Item_5;
  }
}

static MR_Word MR_CALL 
parse_tree__error_util__does_msg_print_anything_1_f_0(
  MR_Word Msg_3)
{
  MR_Word Prints_4;

  switch (MR_tag((MR_Word) Msg_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Prints_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      {
        MR_Word MsgComponents_22 = ((MR_Word) ((MR_hl_field(2, Msg_3, 1))));

        if ((MsgComponents_22 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.error_util.does_msg_print_anything\'/1", (MR_String) "MsgComponents = []");
        else
          Prints_4 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Msg_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MsgComponents_10 = ((MR_Word) ((MR_hl_field(3, Msg_3, 4))));

            if ((MsgComponents_10 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.error_util.does_msg_print_anything\'/1", (MR_String) "MsgComponents = []");
            else
              Prints_4 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          Prints_4 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return Prints_4;
}

MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word AnyModeSpecSet_3;
    MR_Word AllModeSpecSet_4;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_6;

    AnyModeSpecSet_3 = ((MR_Word) ((MR_hl_field(0, Var_5, 0))));
    AllModeSpecSet_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 1))));
    Var_6 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnyModeSpecSet_3, AllModeSpecSet_4);
    HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_6);
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__506__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
  MR_Word ProcSpecs_4,
  MR_Word STATE_VARIABLE_MaybeSpecs_0_17,
  MR_Word * STATE_VARIABLE_MaybeSpecs_18)
{
  MR_bool succeeded;
  MR_Word ProcAllModeSpecs_9;
  MR_Word ProcAnyModeSpecs_10;
  MR_Word ProcAnyModeSpecSet_11;
  MR_Word ProcAllModeSpecSet_12;

  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__error_util_scalar_common_2[2]), ProcSpecs_4, &ProcAllModeSpecs_9, &ProcAnyModeSpecs_10);
  ProcAnyModeSpecSet_11 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ProcAnyModeSpecs_10);
  ProcAllModeSpecSet_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ProcAllModeSpecs_9);
  if ((STATE_VARIABLE_MaybeSpecs_0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (ProcAnyModeSpecSet_11));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (ProcAllModeSpecSet_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeSpecs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
    }
  }
  else
  {
    MR_Word AnyModeSpecSet0_13;
    MR_Word AllModeSpecSet0_14;
    MR_Word AnyModeSpecSet_15;
    MR_Word AllModeSpecSet_16;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSpecs_0_17, 0))));
    MR_Word Var_24;

    AnyModeSpecSet0_13 = ((MR_Word) ((MR_hl_field(0, Var_22, 0))));
    AllModeSpecSet0_14 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnyModeSpecSet0_13, ProcAnyModeSpecSet_11, &AnyModeSpecSet_15);
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AllModeSpecSet0_14, ProcAllModeSpecSet_12, &AllModeSpecSet_16);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (AnyModeSpecSet_15));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (AllModeSpecSet_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeSpecs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
    }
  }
}

MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
parse_tree__error_util__filter_interface_generation_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__error_util__does_spec_print_anything_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
parse_tree__error_util__filter_interface_generation_specs_3_p_0(
  MR_Word Globals_4,
  MR_Word Specs_5,
  MR_Word * SpecsToPrint_6)
{
  MR_bool succeeded;
  MR_Word HaltInvalidInterface_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 254, &HaltInvalidInterface_7);
  switch (HaltInvalidInterface_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *SpecsToPrint_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_9;

        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
          MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__error_util__filter_interface_generation_specs_3_p_0_1));
          MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_9, 3) = ((MR_Box) (Globals_4));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_9, Specs_5, SpecsToPrint_6);
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__error_util__start_each_msg_with_blank_line_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadMsg0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailMsgs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word MaybeContext_6;
    MR_Word TailMsgs_7;
    MR_Word Var_8;
    MR_Word Var_9;

    parse_tree__error_spec__extract_msg_maybe_context_2_p_0(HeadMsg0_3, &MaybeContext_6);
    TailMsgs_7 = parse_tree__error_util__start_each_msg_with_blank_line_1_f_0(TailMsgs0_4);
    {
      Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_8, 1) = ((MR_Box) (MaybeContext_6));
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (HeadMsg0_3));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (TailMsgs_7));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_9));
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_33;

  parse_tree__error_util__IntroducedFrom__pred__construct_sorted_line_pieces__464__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__3_33);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_33));
}

static void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__error_util__construct_sorted_line_pieces_pair_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), wrapper_arg_1, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__error_util__construct_sorted_line_pieces_3_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word MakeItemPiecesFunc_4,
  MR_Word Items_5,
  MR_Word * Pieces_6)
{
  if ((Items_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_31_31;
    MR_Word ItemPiecesPairs_9;
    MR_Word SortedItemPiecesPairs_10;
    MR_Word NonLastPiecesPairs_11;
    MR_Box LastItem_13;
    MR_Word NonLastPiecesList_14;
    MR_Word NonLastPieces_15;
    MR_Word LastPieces_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word conv1_SortedItemPiecesPairs_10;
    MR_Word conv3_NonLastPiecesPairs_11;
    MR_Box conv2_Var_18;
    MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);
    MR_Box conv6_LastPieces_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__error_util__construct_sorted_line_pieces_3_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeInfo_for_T_26));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (MakeItemPiecesFunc_4));
    }
    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (&parse_tree__error_util_scalar_common_1[0]));
      MR_hl_field(0, TypeInfo_31_31, 2) = ((MR_Box) (TypeInfo_for_T_26));
    }
    mercury__list__map_3_p_0(TypeInfo_for_T_26, TypeInfo_31_31, Var_17, Items_5, &ItemPiecesPairs_9);
    mercury__list__sort_2_p_0(TypeInfo_31_31, (MR_Word) (ItemPiecesPairs_9), &conv1_SortedItemPiecesPairs_10);
    SortedItemPiecesPairs_10 = (MR_Word) (conv1_SortedItemPiecesPairs_10);
    mercury__list__det_split_last_3_p_0(TypeInfo_31_31, (MR_Word) (SortedItemPiecesPairs_10), &conv3_NonLastPiecesPairs_11, &conv2_Var_18);
    NonLastPiecesPairs_11 = (MR_Word) (conv3_NonLastPiecesPairs_11);
    Var_18 = ((MR_Word) (conv2_Var_18));
    LastItem_13 = (MR_hl_field(0, Var_18, 1));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_7[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__error_util__construct_sorted_line_pieces_3_p_0_2));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeInfo_for_T_26));
    }
    mercury__list__map_3_p_0(TypeInfo_31_31, (MR_Word) (&parse_tree__error_util_scalar_common_1[0]), (MR_Word) (Var_19), (MR_Word) (NonLastPiecesPairs_11), &NonLastPiecesList_14);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonLastPiecesList_14, &NonLastPieces_15);
    func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, MakeItemPiecesFunc_4, 1))));
    conv6_LastPieces_16 = func_5(((MR_Box) (MakeItemPiecesFunc_4)), ((MR_Box) (MR_mkword(1, &parse_tree__error_util_scalar_common_1[7]))), LastItem_13);
    LastPieces_16 = ((MR_Word) (conv6_LastPieces_16));
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonLastPieces_15, LastPieces_16);
  }
}

MR_Word MR_CALL 
parse_tree__error_util__maybe_written_specs_to_specs_1_f_0(
  MR_Word MaybeWrittenSpecs_3)
{
  MR_Word Specs_4;
  MR_Word ToBeWritten_5 = ((MR_Word) ((MR_hl_field(0, MaybeWrittenSpecs_3, 0))));
  MR_Word AlreadyWritten_6 = ((MR_Word) ((MR_hl_field(0, MaybeWrittenSpecs_3, 1))));

  Specs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ToBeWritten_5, AlreadyWritten_6);
  return Specs_4;
}

void MR_CALL 
parse_tree__error_util__add_to_be_written_specs_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_9,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_10)
{
  MR_Word ToBeWritten0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeWrittenSpecs_0_9, 0))));
  MR_Word AlreadyWritten_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeWrittenSpecs_0_9, 1))));
  MR_Word ToBeWritten_8;

  ToBeWritten_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_4, ToBeWritten0_6);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MaybeWrittenSpecs_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ToBeWritten_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (AlreadyWritten_7));
  }
}

MR_Word MR_CALL 
parse_tree__error_util__init_maybe_written_specs_0_f_0(void)
{
  return (MR_Word) (&parse_tree__error_util_scalar_common_1[4]);
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word Halt_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  Halt_6 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_opt_table_2_f_0(OptionTable_7, Specs_5);
  return Halt_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word Halt_6;
  MR_Word MaybeWorstActual_7;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorstActual_7);
  if ((MaybeWorstActual_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Halt_6 = (MR_Integer) 0;
  else
  {
    MR_Word WorstActual_8 = ((MR_Word) ((MR_hl_field(1, MaybeWorstActual_7, 0))));

    switch (WorstActual_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Halt_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Halt_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word HaltAtWarn_9;

          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) ((MR_Integer) 250)), &HaltAtWarn_9);
          switch (HaltAtWarn_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Halt_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Halt_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
    }
  }
  return Halt_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word ErrorsOrWarnings_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  ErrorsOrWarnings_6 = parse_tree__error_util__contains_errors_and_or_warnings_opt_table_2_f_0(OptionTable_7, Specs_5);
  return ErrorsOrWarnings_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word ErrorsOrWarnings_6;
  MR_Word MaybeWorstActual_7;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorstActual_7);
  if ((MaybeWorstActual_7 == (MR_Word) ((MR_Unsigned) 0U)))
    ErrorsOrWarnings_6 = (MR_Integer) 0;
  else
  {
    MR_Word WorstActual_8 = ((MR_Word) ((MR_hl_field(1, MaybeWorstActual_7, 0))));

    switch (WorstActual_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ErrorsOrWarnings_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        ErrorsOrWarnings_6 = (MR_Integer) 0;
        break;
    }
  }
  return ErrorsOrWarnings_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word Errors_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  Errors_6 = parse_tree__error_util__contains_errors_option_table_2_f_0(OptionTable_7, Specs_5);
  return Errors_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_option_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word Errors_6;
  MR_Word MaybeWorstActual_7;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorstActual_7);
  if ((MaybeWorstActual_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Errors_6 = (MR_Integer) 0;
  else
  {
    MR_Word WorstActual_8 = ((MR_Word) ((MR_hl_field(1, MaybeWorstActual_7, 0))));

    switch (WorstActual_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Errors_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        Errors_6 = (MR_Integer) 0;
        break;
    }
  }
  return Errors_6;
}

MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word MaybeWorst_6;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorst_6);
  return MaybeWorst_6;
}

MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word MaybeWorst_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_7, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorst_6);
  return MaybeWorst_6;
}

static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeWorst_0_3,
  MR_Word * STATE_VARIABLE_MaybeWorst_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_MaybeWorst_4 = STATE_VARIABLE_MaybeWorst_0_3;
    else
    {
      MR_Word Spec_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Specs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word MaybeThis_13;
      MR_Word STATE_VARIABLE_MaybeWorst_1_18;
      MR_Word Severity_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeWorst_0_3;

      switch (MR_tag((MR_Word) Spec_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Severity_22 = ((MR_Word) ((MR_hl_field(0, Spec_10, 1))));
          break;
        case (MR_Integer) 1:
          Severity_22 = ((MR_Word) ((MR_hl_field(1, Spec_10, 1))));
          break;
        case (MR_Integer) 2:
          Severity_22 = ((MR_Word) ((MR_hl_field(2, Spec_10, 1))));
          break;
      }
      parse_tree__error_util__severity_to_maybe_actual_severity_3_p_0(HeadVar__1_1, Severity_22, &MaybeThis_13);
      if ((STATE_VARIABLE_MaybeWorst_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_MaybeWorst_1_18 = MaybeThis_13;
      else
      {
        MR_Word Worst_14 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeWorst_0_3, 0))));

        if ((MaybeThis_13 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_MaybeWorst_1_18 = STATE_VARIABLE_MaybeWorst_0_3;
        else
        {
          MR_Word This_15 = ((MR_Word) ((MR_hl_field(1, MaybeThis_13, 0))));
          MR_Word Var_20;

          Var_20 = parse_tree__error_util__worst_severity_2_f_0(Worst_14, This_15);
          {
            STATE_VARIABLE_MaybeWorst_1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_MaybeWorst_1_18, 0) = ((MR_Box) (Var_20));
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Specs_11;
      next_value_of_STATE_VARIABLE_MaybeWorst_0_3 = STATE_VARIABLE_MaybeWorst_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_MaybeWorst_0_3 = next_value_of_STATE_VARIABLE_MaybeWorst_0_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
parse_tree__error_util__actual_spec_severity_is_error_2_p_0(
  MR_Word Globals_3,
  MR_Word Spec_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word OptionTable_7;
  MR_Word Severity_9;

  libs__globals__get_options_2_p_0(Globals_3, &OptionTable_7);
  switch (MR_tag((MR_Word) Spec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Severity_9 = ((MR_Word) ((MR_hl_field(0, Spec_4, 1))));
      break;
    case (MR_Integer) 1:
      Severity_9 = ((MR_Word) ((MR_hl_field(1, Spec_4, 1))));
      break;
    case (MR_Integer) 2:
      Severity_9 = ((MR_Word) ((MR_hl_field(2, Spec_4, 1))));
      break;
  }
  parse_tree__error_util__severity_to_maybe_actual_severity_3_p_0(OptionTable_7, Severity_9, &Var_5);
  succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(1, Var_5, 0))));
    succeeded = (Var_6 == (MR_Integer) 0);
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__error_util__actual_spec_severity_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Spec_5)
{
  MR_Word MaybeActualSeverity_6;
  MR_Word Severity_8;

  switch (MR_tag((MR_Word) Spec_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Severity_8 = ((MR_Word) ((MR_hl_field(0, Spec_5, 1))));
      break;
    case (MR_Integer) 1:
      Severity_8 = ((MR_Word) ((MR_hl_field(1, Spec_5, 1))));
      break;
    case (MR_Integer) 2:
      Severity_8 = ((MR_Word) ((MR_hl_field(2, Spec_5, 1))));
      break;
  }
  parse_tree__error_util__severity_to_maybe_actual_severity_3_p_0(OptionTable_4, Severity_8, &MaybeActualSeverity_6);
  return MaybeActualSeverity_6;
}

MR_Word MR_CALL 
parse_tree__error_util__actual_spec_severity_2_f_0(
  MR_Word Globals_4,
  MR_Word Spec_5)
{
  MR_Word MaybeSeverity_6;
  MR_Word OptionTable_7;
  MR_Word Severity_9;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  switch (MR_tag((MR_Word) Spec_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Severity_9 = ((MR_Word) ((MR_hl_field(0, Spec_5, 1))));
      break;
    case (MR_Integer) 1:
      Severity_9 = ((MR_Word) ((MR_hl_field(1, Spec_5, 1))));
      break;
    case (MR_Integer) 2:
      Severity_9 = ((MR_Word) ((MR_hl_field(2, Spec_5, 1))));
      break;
  }
  parse_tree__error_util__severity_to_maybe_actual_severity_3_p_0(OptionTable_7, Severity_9, &MaybeSeverity_6);
  return MaybeSeverity_6;
}

void MR_CALL 
parse_tree__error_util__severity_to_maybe_actual_severity_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Severity_5,
  MR_Word * MaybeActualSeverity_6)
{
  switch (MR_tag((MR_Word) Severity_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeActualSeverity_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[0]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word Option_7 = ((MR_Unsigned) ((MR_hl_field(1, Severity_5, 0))) & (MR_Integer) 1023);
        MR_Word OptionValue_8;

        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) (Option_7)), &OptionValue_8);
        switch (OptionValue_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeActualSeverity_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *MaybeActualSeverity_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[2]));
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OptionData_9;
        MR_Word Option_30 = ((MR_Unsigned) ((MR_hl_field(2, Severity_5, 0))) & (MR_Integer) 1023);
        MR_Box conv0_OptionData_9;

        mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_30)), &conv0_OptionData_9);
        OptionData_9 = ((MR_Word) (conv0_OptionData_9));
        switch (MR_tag((MR_Word) OptionData_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              MR_String Msg_16;
              MR_String Var_24;

              Var_24 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_30)));
              Msg_16 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) " is not a bool or accumulating option");
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.error_util.severity_to_maybe_actual_severity\'/3", Msg_16);
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OptionValue_27 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_9, 0))) & (MR_Integer) 1);

              switch (OptionValue_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *MaybeActualSeverity_6 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  *MaybeActualSeverity_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[1]));
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OptionData_9, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_String Msg_16;
                  MR_String Var_24;

                  Var_24 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_30)));
                  Msg_16 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) " is not a bool or accumulating option");
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.error_util.severity_to_maybe_actual_severity\'/3", Msg_16);
                    return;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word OptionValue_28 = ((MR_Word) ((MR_hl_field(3, OptionData_9, 1))));

                  if ((OptionValue_28 == (MR_Word) ((MR_Unsigned) 0U)))
                    *MaybeActualSeverity_6 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                    *MaybeActualSeverity_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[1]));
                }
                break;
            }
            break;
        }
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

MR_bool MR_CALL 
parse_tree__error_util__does_spec_print_anything_2_p_0(
  MR_Word _Globals_3,
  MR_Word Spec_4)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_101_115_95_115_112_101_99_95_112_114_105_110_116_95_97_110_121_116_104_105_110_103_95_95_91_49_93_95_48_2_p_0(Spec_4);
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__error_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_101_115_95_115_112_101_99_95_112_114_105_110_116_95_97_110_121_116_104_105_110_103_95_95_91_49_93_95_48_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Prints_4;

  conv0_Prints_4 = parse_tree__error_util__does_msg_print_anything_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Prints_4));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
parse_tree__error_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_101_115_95_115_112_101_99_95_112_114_105_110_116_95_97_110_121_116_104_105_110_103_95_95_91_49_93_95_48_2_p_0(
  MR_Word Spec_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Spec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_5;
        MR_Word Msgs_9 = ((MR_Word) ((MR_hl_field(2, Spec_4, 3))));
        MR_Word PrintsList_10;

        PrintsList_10 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&parse_tree__error_util_scalar_common_2[1]), Msgs_9);
        mercury__bool__or_list_2_p_0(PrintsList_10, &Var_5);
        succeeded = (Var_5 == (MR_Integer) 1);
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_util____Compare____error_spec_accumulator_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_written_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_util____Unify____maybe_written_specs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_util____Compare____maybe_written_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_util____Compare____maybe_written_specs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__error_util__init(void)
{
}

void mercury__parse_tree__error_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0);
  MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_written_specs_0);
}

void mercury__parse_tree__error_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__error_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.error_util.
