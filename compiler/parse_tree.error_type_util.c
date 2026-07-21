/*
** Automatically generated from `error_type_util.m'
** by the Mercury compiler,
** version rotd-2026-07-21
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


// :- module parse_tree.error_type_util.
// :- implementation.

/*
INIT mercury__parse_tree__error_type_util__init
ENDINIT
*/

#include "parse_tree.error_type_util.mih"


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
#include "integer.mih"
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
#include "libs.indent.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__error_type_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_0;

static const MR_EnumFunctorDesc parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_1;

static const MR_EnumFunctorDescPtr parse_tree__error_type_util__parse_tree__error_type_util__enum_ordinal_ordered_maybe_add_quotes_0[2];

static const MR_EnumFunctorDescPtr parse_tree__error_type_util__parse_tree__error_type_util__enum_name_ordered_maybe_add_quotes_0[2];

static const MR_Integer parse_tree__error_type_util__parse_tree__error_type_util__functor_number_map_maybe_add_quotes_0[2];

static MR_String MR_CALL 
parse_tree__error_type_util__IntroducedFrom__func__type_to_pieces__93__1_3_f_0(
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_10,
  MR_Word HeadVar__3_64);

static MR_Word MR_CALL 
parse_tree__error_type_util__type_and_mode_to_pieces_3_f_0(
  MR_Word TVarSet_5,
  MR_Word InstVarSet_6,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
parse_tree__error_type_util__maybe_quote_name_1_f_0(
  MR_String Name0_3);

static MR_Box MR_CALL 
parse_tree__error_type_util__type_to_pieces_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0(
  MR_Word TVarSet_7,
  MR_Word InstVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word SuffixPieces_10,
  MR_Word Type_11);

static MR_Box MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0(
  MR_Word TVarSet_7,
  MR_Word InstVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word SuffixPieces_10,
  MR_Word HigherOrderType_11);

static MR_bool MR_CALL 
parse_tree__error_type_util____Unify____maybe_add_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_type_util____Compare____maybe_add_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_1[40][2];

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_3[7][1];

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_4[1][9];

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_6[1][5];




static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "["))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "]"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_2[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_2[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_2[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The type says this is a"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but its mode says it is a"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The type says this"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but its mode says it has"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[9])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[30])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[9])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "\140"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "\'"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 37U)),
    ((MR_Box) ((MR_String) "(")),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 38U)),
    ((MR_Box) ((MR_String) ")")),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 37U)),
    ((MR_Box) ((MR_String) "(")),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 37U)),
    ((MR_Box) ((MR_String) "{")),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 38U)),
    ((MR_Box) ((MR_String) "}")),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__error_type_util_scalar_common_6[0])),
    ((MR_Box) (parse_tree__error_type_util__type_pieces_5_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_3[7][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "some")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "=")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "(func)")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "func")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "pred")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "::")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "{}")) },
};

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__error_type_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__error_type_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__error_type_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__error_type_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__error_type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__error_type_util_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__error_type_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_EnumFunctorDesc parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_0 = {
  (MR_String) "do_not_add_quotes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_1 = {
  (MR_String) "add_quotes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__error_type_util__parse_tree__error_type_util__enum_ordinal_ordered_maybe_add_quotes_0[2] = {
  &parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_0,
  &parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__error_type_util__parse_tree__error_type_util__enum_name_ordered_maybe_add_quotes_0[2] = {
  &parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_1,
  &parse_tree__error_type_util__parse_tree__error_type_util__enum_functor_desc_maybe_add_quotes_0_0
};

static const MR_Integer parse_tree__error_type_util__parse_tree__error_type_util__functor_number_map_maybe_add_quotes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_type_util____Unify____maybe_add_quotes_0_0_10001)),
  ((MR_Box) (parse_tree__error_type_util____Compare____maybe_add_quotes_0_0_10001)),
  (MR_String) "parse_tree.error_type_util",
  (MR_String) "maybe_add_quotes",
  { parse_tree__error_type_util__parse_tree__error_type_util__enum_name_ordered_maybe_add_quotes_0 },
  { parse_tree__error_type_util__parse_tree__error_type_util__enum_ordinal_ordered_maybe_add_quotes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_type_util__parse_tree__error_type_util__functor_number_map_maybe_add_quotes_0,

};

static MR_String MR_CALL 
parse_tree__error_type_util__IntroducedFrom__func__type_to_pieces__93__1_3_f_0(
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_10,
  MR_Word HeadVar__3_64)
{
  MR_String HeadVar__4_65;

  HeadVar__4_65 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, VarNamePrint_10, HeadVar__3_64);
  return HeadVar__4_65;
}

void MR_CALL 
parse_tree__error_type_util____Compare____maybe_add_quotes_0_0(
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
parse_tree__error_type_util____Unify____maybe_add_quotes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__error_type_util__type_and_mode_to_pieces_3_f_0(
  MR_Word TVarSet_5,
  MR_Word InstVarSet_6,
  MR_Word HeadVar__3_3)
{
  MR_Word Pieces_9;
  MR_Word Type_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word Mode_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word TypePieces_10;
  MR_Word ModeTerm0_11;
  MR_Word ModeTerm_12;
  MR_String ModeTermStr_13;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;

  TypePieces_10 = parse_tree__error_type_util__type_pieces_5_f_0(TVarSet_5, InstVarSet_6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_7);
  ModeTerm0_11 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0((MR_Integer) 0, Mode_8);
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), ModeTerm0_11, &ModeTerm_12);
  ModeTermStr_13 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_6, (MR_Integer) 0, ModeTerm_12);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (ModeTermStr_13));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[5])));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_10, Var_18);
  return Pieces_9;
}

static MR_String MR_CALL 
parse_tree__error_type_util__maybe_quote_name_1_f_0(
  MR_String Name0_3)
{
  MR_String Name_4;
  MR_Word FunctorGraphicChars_5;

  FunctorGraphicChars_5 = parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0(Name0_3);
  switch (FunctorGraphicChars_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      Name_4 = parse_tree__error_spec__add_quotes_1_f_0(Name0_3);
      break;
    case (MR_Integer) 0:
      Name_4 = Name0_3;
      break;
  }
  return Name_4;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__type_to_pieces_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_65;

  conv0_HeadVar__4_65 = parse_tree__error_type_util__IntroducedFrom__func__type_to_pieces__93__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_65));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
parse_tree__error_type_util__type_to_pieces_6_f_0(
  MR_Word TVarSet_8,
  MR_Word InstVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word MaybeAddQuotes_11,
  MR_Word ExternalTypeParams_12,
  MR_Word Type_13)
{
  MR_Word Pieces_14;
  MR_Word StartQuotePieces_15;
  MR_Word EndQuotePieces_16;

  switch (MaybeAddQuotes_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        StartQuotePieces_15 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[37]));
        EndQuotePieces_16 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[39]));
      }
      break;
    case (MR_Integer) 0:
      {
        StartQuotePieces_15 = (MR_Word) ((MR_Unsigned) 0U);
        EndQuotePieces_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  if ((ExternalTypeParams_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_28;

    Var_28 = parse_tree__error_type_util__type_pieces_5_f_0(TVarSet_8, InstVarSet_9, VarNamePrint_10, EndQuotePieces_16, Type_13);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartQuotePieces_15, Var_28);
  }
  else
  {
    MR_Word TypeVarsSet_20;
    MR_Word ExternalTypeParamsSet_21;
    MR_Word ExistQVarsSet_22;
    MR_Word ExistQVars_78;

    parse_tree__prog_type_scan__set_of_type_vars_in_type_2_p_0(Type_13, &TypeVarsSet_20);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__error_type_util_scalar_common_1[0]), ExternalTypeParams_12, &ExternalTypeParamsSet_21);
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__error_type_util_scalar_common_1[0]), ExternalTypeParamsSet_21, TypeVarsSet_20, &ExistQVarsSet_22);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__error_type_util_scalar_common_1[0]), ExistQVarsSet_22, &ExistQVars_78);
    if ((ExistQVars_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_74;

      Var_74 = parse_tree__error_type_util__type_pieces_5_f_0(TVarSet_8, InstVarSet_9, VarNamePrint_10, EndQuotePieces_16, Type_13);
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartQuotePieces_15, Var_74);
    }
    else
    {
      MR_Word ExistQVarStrs_25;
      MR_Word ExistPieces_26;
      MR_Word ExistListPieces_27;
      MR_Word Var_29;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_5[1]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__error_type_util__type_to_pieces_6_f_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (TVarSet_8));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (VarNamePrint_10));
      }
      ExistQVarStrs_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_type_util_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, ExistQVars_78);
      ExistPieces_26 = parse_tree__error_spec__fixed_strict_list_to_pieces_1_f_0(ExistQVarStrs_25);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExistPieces_26, (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[5])));
      ExistListPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[3])), Var_34);
      Var_52 = parse_tree__error_type_util__type_pieces_5_f_0(TVarSet_8, InstVarSet_9, VarNamePrint_10, (MR_Word) ((MR_Unsigned) 0U), Type_13);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[8])), EndQuotePieces_16);
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_54);
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[7])), Var_51);
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExistListPieces_27, Var_45);
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[6])), Var_44);
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartQuotePieces_15, Var_39);
    }
  }
  return Pieces_14;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_Pieces_12;

  conv3_Pieces_12 = parse_tree__error_type_util__type_pieces_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Pieces_12));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Pieces_12;

  conv2_Pieces_12 = parse_tree__error_type_util__type_pieces_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Pieces_12));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Name_4;

  conv1_Name_4 = parse_tree__error_type_util__maybe_quote_name_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Name_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_12;

  conv0_Pieces_12 = parse_tree__error_type_util__type_pieces_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_12));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__error_type_util__type_pieces_5_f_0(
  MR_Word TVarSet_7,
  MR_Word InstVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word SuffixPieces_10,
  MR_Word Type_11)
{
  while (MR_TRUE)
  {
    MR_Word Pieces_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_15 = ((MR_Word) ((MR_hl_field(0, Type_11, 0))));
          MR_String TVarStr_17;
          MR_Word Var_39;

          TVarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_7, VarNamePrint_9, TVar_15);
          {
            Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_39, 0) = ((MR_Box) (TVarStr_17));
          }
          {
            Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_39));
            MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (SuffixPieces_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorSymName0_20 = ((MR_Word) ((MR_hl_field(1, Type_11, 0))));
          MR_Word TypeCtorSymName_23;
          MR_Word TypeCtorNameList0_24;
          MR_Word TypeCtorNameList_25;
          MR_Word Var_43;
          MR_Word ArgTypes_111 = ((MR_Word) ((MR_hl_field(1, Type_11, 1))));
          MR_String Const_112;
          MR_Word NonConstL_113;

          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(TypeCtorSymName0_20, &TypeCtorSymName_23);
          TypeCtorNameList0_24 = mdbcomp__sym_name__sym_name_to_list_1_f_0(TypeCtorSymName_23);
          TypeCtorNameList_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_type_util_scalar_common_2[6]), TypeCtorNameList0_24);
          Const_112 = mercury__string__join_list_2_f_0((MR_String) ".", TypeCtorNameList_25);
          {
            Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_43, 0) = ((MR_Box) (Const_112));
          }
          {
            NonConstL_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NonConstL_113, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, NonConstL_113, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[9])));
          }
          if ((ArgTypes_111 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_43));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (SuffixPieces_10));
            }
          else
          {
            MR_Word ArgTypePiecesList_92;
            MR_Word Var_93;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;

            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_93, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_4[0]));
              MR_hl_field(0, Var_93, 1) = ((MR_Box) (parse_tree__error_type_util__type_pieces_5_f_0_3));
              MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_93, 3) = ((MR_Box) (TVarSet_7));
              MR_hl_field(0, Var_93, 4) = ((MR_Box) (InstVarSet_8));
              MR_hl_field(0, Var_93, 5) = ((MR_Box) (VarNamePrint_9));
              MR_hl_field(0, Var_93, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ArgTypePiecesList_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), Var_93, ArgTypes_111);
            Var_96 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(ArgTypePiecesList_92);
            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[8])), SuffixPieces_10);
            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_97);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonConstL_113, Var_95);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_18 = ((MR_Word) ((MR_hl_field(2, Type_11, 0))));
          MR_String BuiltinTypeStr_19;
          MR_Word Var_40;

          parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_18, &BuiltinTypeStr_19);
          {
            Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_40, 0) = ((MR_Box) (BuiltinTypeStr_19));
          }
          {
            Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (SuffixPieces_10));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_147 = ((MR_Word) ((MR_hl_field(3, Type_11, 1))));

              if ((ArgTypes_147 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__error_type_util_scalar_common_3[6])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (SuffixPieces_10));
                }
              else
              {
                MR_Word ArgTypePiecesList_128;
                MR_Word Var_129;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_133;

                {
                  Var_129 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_129, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_4[0]));
                  MR_hl_field(0, Var_129, 1) = ((MR_Box) (parse_tree__error_type_util__type_pieces_5_f_0_4));
                  MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(0, Var_129, 3) = ((MR_Box) (TVarSet_7));
                  MR_hl_field(0, Var_129, 4) = ((MR_Box) (InstVarSet_8));
                  MR_hl_field(0, Var_129, 5) = ((MR_Box) (VarNamePrint_9));
                  MR_hl_field(0, Var_129, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                ArgTypePiecesList_128 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), Var_129, ArgTypes_147);
                Var_132 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(ArgTypePiecesList_128);
                Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[11])), SuffixPieces_10);
                Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_133);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[10])), Var_131);
              }
            }
            break;
          case (MR_Integer) 1:
            Pieces_12 = parse_tree__error_type_util__higher_order_type_pieces_5_f_0(TVarSet_7, InstVarSet_8, VarNamePrint_9, SuffixPieces_10, Type_11);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_21 = ((MR_Word) ((MR_hl_field(3, Type_11, 2))));
              MR_String Const_27;
              MR_Word NonConstL_28;
              MR_Word Var_61;
              MR_Word TVar_77 = ((MR_Word) ((MR_hl_field(3, Type_11, 1))));

              Const_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_7, VarNamePrint_9, TVar_77);
              {
                Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_61, 0) = ((MR_Box) (Const_27));
              }
              {
                NonConstL_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonConstL_28, 0) = ((MR_Box) (Var_61));
                MR_hl_field(1, NonConstL_28, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[9])));
              }
              if ((ArgTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (SuffixPieces_10));
                }
              else
              {
                MR_Word ArgTypePiecesList_34;
                MR_Word Var_72;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;

                {
                  Var_72 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_4[0]));
                  MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__error_type_util__type_pieces_5_f_0_1));
                  MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(0, Var_72, 3) = ((MR_Box) (TVarSet_7));
                  MR_hl_field(0, Var_72, 4) = ((MR_Box) (InstVarSet_8));
                  MR_hl_field(0, Var_72, 5) = ((MR_Box) (VarNamePrint_9));
                  MR_hl_field(0, Var_72, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                ArgTypePiecesList_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), Var_72, ArgTypes_21);
                Var_75 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(ArgTypePiecesList_34);
                Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[8])), SuffixPieces_10);
                Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_76);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonConstL_28, Var_74);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_13 = ((MR_Word) ((MR_hl_field(3, Type_11, 1))));
              MR_Word next_value_of_Type_11 = SubType_13;

              // direct tailcall eliminated
              ;
              Type_11 = next_value_of_Type_11;
              continue;
            }
            break;
        }
        break;
    }
    return Pieces_12;
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Pieces_12;

  conv2_Pieces_12 = parse_tree__error_type_util__type_pieces_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Pieces_12));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Pieces_9;

  conv1_Pieces_9 = parse_tree__error_type_util__type_and_mode_to_pieces_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Pieces_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_12;

  conv0_Pieces_12 = parse_tree__error_type_util__type_pieces_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_12));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__error_type_util__higher_order_type_pieces_5_f_0(
  MR_Word TVarSet_7,
  MR_Word InstVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word SuffixPieces_10,
  MR_Word HigherOrderType_11)
{
  MR_bool succeeded;
  MR_Word Pieces_12;
  MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(3, HigherOrderType_11, 1))) & (MR_Integer) 1);
  MR_Word ArgTypes_14 = ((MR_Word) ((MR_hl_field(3, HigherOrderType_11, 2))));
  MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(3, HigherOrderType_11, 3))));
  MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(3, HigherOrderType_11, 4))) & (MR_Integer) 3);
  MR_Word PurityPieces_17;
  MR_Word ArgPiecesList_18;
  MR_Word FuncResultPrefixPieces_19;
  MR_Word FuncResultSuffixPieces_20;
  MR_Word DetismPieces_21;
  MR_Word PorFMismatchPieces_22;
  MR_Word ArityMismatchPieces_23;
  MR_Word PorFArgBlockPieces_34;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word Var_161;

  switch (Purity_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      PurityPieces_17 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[13]));
      break;
    case (MR_Integer) 0:
      PurityPieces_17 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      PurityPieces_17 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[15]));
      break;
  }
  if ((HOInstInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_48;

    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_4[0]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__error_type_util__higher_order_type_pieces_5_f_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (TVarSet_7));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (InstVarSet_8));
      MR_hl_field(0, Var_48, 5) = ((MR_Box) (VarNamePrint_9));
      MR_hl_field(0, Var_48, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ArgPiecesList_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), Var_48, ArgTypes_14);
    FuncResultPrefixPieces_19 = (MR_Word) ((MR_Unsigned) 0U);
    FuncResultSuffixPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
    DetismPieces_21 = (MR_Word) ((MR_Unsigned) 0U);
    PorFMismatchPieces_22 = (MR_Word) ((MR_Unsigned) 0U);
    ArityMismatchPieces_23 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word PredInstInfo_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_15), (MR_Integer) 1));
    MR_String PorFStr_25;
    MR_Word HOPorF_26;
    MR_Word ArgModes_27;
    MR_Word Detism_29;
    MR_Integer NumArgTypes_31;
    MR_Integer NumArgModes_32;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_String Var_104;

    PorFStr_25 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PorF_13);
    HOPorF_26 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_24, 0))) & (MR_Integer) 1);
    ArgModes_27 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_24, 1))));
    Detism_29 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_24, 3))) & (MR_Integer) 7);
    succeeded = (PorF_13 == HOPorF_26);
    if (succeeded)
      PorFMismatchPieces_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HOPorFStr_30;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_63;

      HOPorFStr_30 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(HOPorF_26);
      {
        Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_55, 1) = ((MR_Box) (PorFStr_25));
      }
      {
        Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_63, 1) = ((MR_Box) (HOPorFStr_30));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[20])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[18])));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[17])));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[16])));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        PorFMismatchPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PorFMismatchPieces_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, PorFMismatchPieces_22, 1) = ((MR_Box) (Var_51));
      }
    }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_14, &NumArgTypes_31);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_27, &NumArgModes_32);
    succeeded = (NumArgTypes_31 == NumArgModes_32);
    if (succeeded)
    {
      MR_Word ArgTypesModes_33;
      MR_Word Var_74;

      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgTypes_14, ArgModes_27, &ArgTypesModes_33);
      FuncResultPrefixPieces_19 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[22]));
      FuncResultSuffixPieces_20 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[24]));
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_5[0]));
        MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__error_type_util__higher_order_type_pieces_5_f_0_2));
        MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_74, 3) = ((MR_Box) (TVarSet_7));
        MR_hl_field(0, Var_74, 4) = ((MR_Box) (InstVarSet_8));
      }
      ArgPiecesList_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_type_util_scalar_common_2[0]), (MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), Var_74, ArgTypesModes_33);
      ArityMismatchPieces_23 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_75;
      MR_Word Var_78;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_95;

      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_75, 0) = ((MR_Box) (&parse_tree__error_type_util_scalar_common_4[0]));
        MR_hl_field(0, Var_75, 1) = ((MR_Box) (parse_tree__error_type_util__higher_order_type_pieces_5_f_0_3));
        MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_75, 3) = ((MR_Box) (TVarSet_7));
        MR_hl_field(0, Var_75, 4) = ((MR_Box) (InstVarSet_8));
        MR_hl_field(0, Var_75, 5) = ((MR_Box) (VarNamePrint_9));
        MR_hl_field(0, Var_75, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ArgPiecesList_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), Var_75, ArgTypes_14);
      FuncResultPrefixPieces_19 = (MR_Word) ((MR_Unsigned) 0U);
      FuncResultSuffixPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (PorFStr_25));
      }
      {
        Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_87, 1) = ((MR_Box) (NumArgTypes_31));
      }
      {
        Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_95, 1) = ((MR_Box) (NumArgModes_32));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[20])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[28])));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[27])));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[26])));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[25])));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
      }
      {
        ArityMismatchPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArityMismatchPieces_23, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, ArityMismatchPieces_23, 1) = ((MR_Box) (Var_78));
      }
    }
    Var_104 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_29);
    {
      Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_103, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      DetismPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DetismPieces_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_type_util_scalar_common_1[29])));
      MR_hl_field(1, DetismPieces_21, 1) = ((MR_Box) (Var_102));
    }
  }
  switch (PorF_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((ArgPiecesList_18 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.error_type_util.higher_order_type_pieces\'/5", (MR_String) "function has no return value");
      else
      {
        MR_Word Var_181 = ((MR_Word) ((MR_hl_field(1, ArgPiecesList_18, 1))));
        MR_Word Var_182 = ((MR_Word) ((MR_hl_field(1, ArgPiecesList_18, 0))));

        if ((Var_181 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_134;
          MR_Word Var_135;

          Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, FuncResultSuffixPieces_20);
          Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FuncResultPrefixPieces_19, Var_135);
          PorFArgBlockPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[31])), Var_134);
        }
        else
        {
          MR_Word FuncArgPiecesList_41;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word ReturnValuePieces_162;
          MR_Box conv3_ReturnValuePieces_162;

          mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__error_type_util_scalar_common_1[1]), ArgPiecesList_18, &FuncArgPiecesList_41, &conv3_ReturnValuePieces_162);
          ReturnValuePieces_162 = ((MR_Word) (conv3_ReturnValuePieces_162));
          Var_146 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(FuncArgPiecesList_41);
          Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReturnValuePieces_162, FuncResultSuffixPieces_20);
          Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FuncResultPrefixPieces_19, Var_157);
          Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[33])), Var_156);
          Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_146, Var_147);
          PorFArgBlockPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[32])), Var_145);
        }
      }
      break;
    case (MR_Integer) 0:
      if ((ArgPiecesList_18 == (MR_Word) ((MR_Unsigned) 0U)))
        PorFArgBlockPieces_34 = (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[34]));
      else
      {
        MR_Word Var_117;
        MR_Word Var_118;

        Var_118 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(ArgPiecesList_18);
        Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[8])));
        PorFArgBlockPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_type_util_scalar_common_1[35])), Var_117);
      }
      break;
  }
  Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFMismatchPieces_22, ArityMismatchPieces_23);
  Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_10, Var_161);
  Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DetismPieces_21, Var_160);
  Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFArgBlockPieces_34, Var_159);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PurityPieces_17, Var_158);
  return Pieces_12;
}

static MR_bool MR_CALL 
parse_tree__error_type_util____Unify____maybe_add_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_type_util____Unify____maybe_add_quotes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_type_util____Compare____maybe_add_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_type_util____Compare____maybe_add_quotes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__error_type_util__init(void)
{
}

void mercury__parse_tree__error_type_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0);
}

void mercury__parse_tree__error_type_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__error_type_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.error_type_util.
