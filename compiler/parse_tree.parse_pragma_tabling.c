/*
** Automatically generated from `parse_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2023-01-05
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


// :- module parse_tree.parse_pragma_tabling.
// :- implementation.

/*
INIT mercury__parse_tree__parse_pragma_tabling__init
ENDINIT
*/

#include "parse_tree.parse_pragma_tabling.mih"


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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_tabling__pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_tabling__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_1;

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_2;

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_3;

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_4;

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_2[1];

static const MR_DuPtagLayout parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_ptag_ordered_single_tabling_attribute_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_name_ordered_single_tabling_attribute_0[5];

static const MR_Integer parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__functor_number_map_single_tabling_attribute_0[5];

static void MR_CALL 
parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeArgTablingMethod_8);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attribute_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word TabledMethod_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeContextAttribute_10);

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_98_97_99_107_101_110_100_95_119_97_114_110_105_110_103_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_115_116_97_116_105_115_116_105_99_115_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_102_97_115_116_95_108_111_111_115_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_size_limit_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word TabledMethod_6,
  MR_Word Context_7,
  MR_Word * Specs_8);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_tabling__update_tabling_attributes_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_bool MR_CALL 
parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_2[77][2];

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_3[7][1];

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_4[1][8];

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_5[1][7];


struct parse_tree__parse_pragma_tabling__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_pragma_tabling__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_6_0_s parse_tree__parse_pragma_tabling_vector_common_6[6];

struct parse_tree__parse_pragma_tabling__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_pragma_tabling__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_pragma_tabling__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_7_0_s parse_tree__parse_pragma_tabling_vector_common_7[6];

struct parse_tree__parse_pragma_tabling__vector_common_type_8_0_s {
  const MR_String parse_tree__parse_pragma_tabling__vector_common_type_8_0__vct_8_f_0;
  const MR_Word parse_tree__parse_pragma_tabling__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_8_0_s parse_tree__parse_pragma_tabling_vector_common_8[4];



static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_2[77][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration must have one or two arguments."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fast_loose"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "specified(...)"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "size_limit(...)"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "statistics"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "allow_reset"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning_if_ignored"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have no arguments."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: fast_loose"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[23])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: specified must have one or two arguments."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first argument of specified:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the second argument of specified:"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected either"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hidden_arg_value"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hidden_arg_addr"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "value"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "addr"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_implied"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "output"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: size_limit must have one argument."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first argument of size_limit:"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: evaluation method"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not allow size limits."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: statistics must have no arguments."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: allow_reset must have no arguments."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not allow disable_warning_if_ignored."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not allow fast_loose tabling."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[63]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate allow_reset attribute in"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute in"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[67]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[64])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate disable_warning_if_ignored"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[69]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate size limits attribute in"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[64])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate statistics attribute in"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[64])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate argument tabling methods"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[75]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[68])))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_3[7][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
};


static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_6_0_s parse_tree__parse_pragma_tabling_vector_common_6[6] = {
  /* row   0 */   { (MR_String) "allow_reset" },
  /* row   1 */   { (MR_String) "disable_warning_if_ignored" },
  /* row   2 */   { (MR_String) "fast_loose" },
  /* row   3 */   { (MR_String) "size_limit" },
  /* row   4 */   { (MR_String) "specified" },
  /* row   5 */   { (MR_String) "statistics" },
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_7_0_s parse_tree__parse_pragma_tabling_vector_common_7[6] = {
  /* row   0 */
  {
    (MR_String) "allow_reset",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "disable_warning_if_ignored",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "fast_loose",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "size_limit",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "specified",
    (MR_Integer) 4
  },
  /* row   5 */
  {
    (MR_String) "statistics",
    (MR_Integer) 5
  },
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_8_0_s parse_tree__parse_pragma_tabling_vector_common_8[4] = {
  /* row   0 */
  {
    (MR_String) "addr",
    (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[4]))
  },
  /* row   1 */
  {
    (MR_String) "output",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_String) "promise_implied",
    (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[5]))
  },
  /* row   3 */
  {
    (MR_String) "value",
    (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[6]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_tabling__pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
    (MR_TypeInfo) (&parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_tabling__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_call_table_strictness_0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_0 = {
  (MR_String) "attr_strictness",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_1 = {
  (MR_String) "attr_size_limit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_2 = {
  (MR_String) "attr_statistics",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_3 = {
  (MR_String) "attr_allow_reset",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_4 = {
  (MR_String) "attr_ignore_without_warning",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_0[3] = {
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_2,
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_3,
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_4
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_1[1] = {
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_2[1] = {
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_1
};

static const MR_DuPtagLayout parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_ptag_ordered_single_tabling_attribute_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_name_ordered_single_tabling_attribute_0[5] = {
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_3,
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_4,
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_1,
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_2,
  &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_0
};

static const MR_Integer parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__functor_number_map_single_tabling_attribute_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma_tabling",
  (MR_String) "single_tabling_attribute",
  { parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_name_ordered_single_tabling_attribute_0 },
  { parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_ptag_ordered_single_tabling_attribute_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__functor_number_map_single_tabling_attribute_0,

};

static void MR_CALL 
parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__prog_data_pragma____Compare____call_table_strictness_0_0(HeadVar__1_1, Var_29, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_28 < ArgY1_14);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_28 > ArgY1_14);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data_pragma____Unify____call_table_strictness_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeArgTablingMethod_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word MaybeArgTablingMethod_11;
  MR_String Functor_9;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_9 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Functor_9, ((&parse_tree__parse_pragma_tabling_vector_common_8[0 + mid_2]))->parse_tree__parse_pragma_tabling__vector_common_type_8_0__vct_8_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            MaybeArgTablingMethod_11 = ((&parse_tree__parse_pragma_tabling_vector_common_8[0 + mid_2]))->parse_tree__parse_pragma_tabling__vector_common_type_8_0__vct_8_f_1;
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
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeMaybeArgTablingMethod_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeArgTablingMethod_11));
    }
  else
  {
    MR_String TermStr_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_67;
    MR_Word Var_68;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_30 = (MR_Word) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[12]));
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[21])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[19])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[41])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[17])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[40])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[39])));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[38])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
    }
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_21);
    Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_arg_tabling_method\'/4"));
      MR_hl_field(1, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_14, 3) = ((MR_Box) (Var_67));
      MR_hl_field(1, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMaybeArgTablingMethod_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attribute_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word TabledMethod_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeContextAttribute_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_String Functor_11;
  MR_Word ArgTerms_12;
  MR_Word Context_13;
  MR_Word Var_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
    Context_13 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_11 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 5;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Functor_11, ((&parse_tree__parse_pragma_tabling_vector_common_6[0 + mid_2]))->parse_tree__parse_pragma_tabling__vector_common_type_6_0__vct_6_f_0);
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
  }
  if (succeeded)
  {
    MR_Integer lo_4 = (MR_Integer) 0;
    MR_Integer hi_5 = (MR_Integer) 5;
    MR_Integer mid_6;
    MR_Integer result_7;

    // binary string jump switch
    ;
    do
    {
      mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
      result_7 = MR_strcmp(Functor_11, ((&parse_tree__parse_pragma_tabling_vector_common_7[0 + mid_6]))->parse_tree__parse_pragma_tabling__vector_common_type_7_0__vct_7_f_0);
      if ((result_7 == (MR_Integer) 0))
      {
        switch (((&parse_tree__parse_pragma_tabling_vector_common_7[0 + mid_6]))->parse_tree__parse_pragma_tabling__vector_common_type_7_0__vct_7_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // case "allow_reset"
              ;
              if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_87;

                {
                  Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_87, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeContextAttribute_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_87));
                }
              }
              else
              {
                MR_Word Pieces_85;
                MR_Word Spec_86;
                MR_Word Var_88;
                MR_Word Var_93;

                Var_88 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
                Pieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[56])));
                {
                  Spec_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_86, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_allow_reset\'/6"));
                  MR_hl_field(1, Spec_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_86, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(1, Spec_86, 3) = ((MR_Box) (Context_13));
                  MR_hl_field(1, Spec_86, 4) = ((MR_Box) (Pieces_85));
                }
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (Spec_86));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeContextAttribute_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_93));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              // case "disable_warning_if_ignored"
              ;
              parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_98_97_99_107_101_110_100_95_119_97_114_110_105_110_103_95_95_91_51_93_95_48_6_p_0(ContextPieces_6, TabledMethod_7, Context_13, ArgTerms_12, MaybeContextAttribute_10);
            }
            break;
          case (MR_Integer) 2:
            {
              // case "fast_loose"
              ;
              parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_102_97_115_116_95_108_111_111_115_101_95_95_91_51_93_95_48_6_p_0(ContextPieces_6, TabledMethod_7, Context_13, ArgTerms_12, MaybeContextAttribute_10);
            }
            break;
          case (MR_Integer) 3:
            {
              // case "size_limit"
              ;
              parse_tree__parse_pragma_tabling__parse_tabling_attr_size_limit_6_p_0(ContextPieces_6, TabledMethod_7, VarSet_8, Context_13, ArgTerms_12, MaybeContextAttribute_10);
            }
            break;
          case (MR_Integer) 4:
            {
              // case "specified"
              ;
              parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0(ContextPieces_6, TabledMethod_7, VarSet_8, Context_13, ArgTerms_12, MaybeContextAttribute_10);
            }
            break;
          case (MR_Integer) 5:
            {
              // case "statistics"
              ;
              parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_115_116_97_116_105_115_116_105_99_115_95_95_91_50_44_32_51_93_95_48_6_p_0(ContextPieces_6, Context_13, ArgTerms_12, MaybeContextAttribute_10);
            }
            break;
        }
        // break out of search loop
        ;
        break;
      }
      else
      if ((result_7 < (MR_Integer) 0))
        hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
      else
        lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
    }
    while ((lo_4 <= hi_5));
  }
  else
  {
    MR_String TermStr_14;
    MR_Word Pieces_15;
    MR_Word Spec_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_77;
    MR_Word Var_78;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    Var_28 = (MR_Word) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[12]));
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[21])));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[19])));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[18])));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[17])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[16])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[15])));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[14])));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[13])));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[11])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
    }
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, Var_19);
    Var_77 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attribute\'/5"));
      MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Var_77));
      MR_hl_field(1, Spec_16, 4) = ((MR_Box) (Pieces_15));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_98_97_99_107_101_110_100_95_119_97_114_110_105_110_103_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word AllowsDisableWarning_13;

    switch (MR_tag((MR_Word) TabledMethod_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AllowsDisableWarning_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        AllowsDisableWarning_13 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        AllowsDisableWarning_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        AllowsDisableWarning_13 = (MR_Integer) 0;
        break;
    }
    switch (AllowsDisableWarning_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Pieces_15;
          MR_Word Spec_16;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_String Var_28;
          MR_Word Var_38;

          Var_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
          Var_28 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
          {
            Var_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_27, 0) = ((MR_Box) (Var_28));
          }
          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[58])));
          }
          {
            Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
            MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
          }
          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
          }
          Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_21);
          {
            Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_backend_warning\'/6"));
            MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Context_10));
            MR_hl_field(1, Spec_16, 4) = ((MR_Box) (Pieces_15));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (Spec_16));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_19;

          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_19, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_40;
    MR_Word Var_52;
    MR_Word Pieces_54;
    MR_Word Spec_55;

    Var_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Pieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[56])));
    {
      Spec_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_backend_warning\'/6"));
      MR_hl_field(1, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_55, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_55, 4) = ((MR_Box) (Pieces_54));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_55));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_115_116_97_116_105_115_116_105_99_115_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (Context_10));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeContextAttribute_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
    }
  }
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_19;
    MR_Word Var_31;

    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[53])));
    {
      Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_statistics\'/6"));
      MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_17, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_102_97_115_116_95_108_111_111_115_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (MR_tag((MR_Word) TabledMethod_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_22, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[1])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_90;

          {
            Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_90, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_90, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[1])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FastLooseSpecs_13;
          MR_Word Pieces_42;
          MR_Word Spec_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_String Var_52;

          Var_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
          Var_52 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
          {
            Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_51, 0) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[60])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
          }
          Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_45);
          {
            Spec_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
            MR_hl_field(1, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_43, 3) = ((MR_Box) (Context_10));
            MR_hl_field(1, Spec_43, 4) = ((MR_Box) (Pieces_42));
          }
          {
            FastLooseSpecs_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FastLooseSpecs_13, 0) = ((MR_Box) (Spec_43));
            MR_hl_field(1, FastLooseSpecs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (FastLooseSpecs_13));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Pieces_69;
          MR_Word Spec_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_74;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_String Var_78;
          MR_Word FastLooseSpecs_91;

          Var_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
          Var_78 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
          {
            Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_77, 0) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[60])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
          }
          Pieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_72);
          {
            Spec_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_70, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
            MR_hl_field(1, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_70, 3) = ((MR_Box) (Context_10));
            MR_hl_field(1, Spec_70, 4) = ((MR_Box) (Pieces_69));
          }
          {
            FastLooseSpecs_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FastLooseSpecs_91, 0) = ((MR_Box) (Spec_70));
            MR_hl_field(1, FastLooseSpecs_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (FastLooseSpecs_91));
          }
        }
        break;
    }
  else
  {
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_23;
    MR_Word Var_38;

    Var_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[26])));
    {
      Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_fast_loose\'/6"));
      MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_size_limit_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  MR_bool succeeded;

  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_26;
    MR_Word Spec_27;
    MR_Word Var_60;
    MR_Word Var_72;

    Var_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])));
    {
      Spec_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
      MR_hl_field(1, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_27, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_27, 4) = ((MR_Box) (Pieces_26));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
  else
  {
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));

    if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LimitContextPieces_14;
      MR_Word MaybeLimit_15;
      MR_Word AllowSpecs_17;
      MR_Word Var_29;
      MR_Integer Limit_20;

      Var_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[47])));
      LimitContextPieces_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_29);
      parse_tree__parse_util__parse_decimal_int_4_p_0(LimitContextPieces_14, VarSet_9, Var_99, &MaybeLimit_15);
      switch (MR_tag((MR_Word) TabledMethod_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          AllowSpecs_17 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          AllowSpecs_17 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word AllowPieces_18;
            MR_Word AllowSpec_19;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_41;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_String Var_46;

            Var_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
            Var_46 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
            {
              Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_45, 0) = ((MR_Box) (Var_46));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[50])));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
            }
            AllowPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_39);
            {
              AllowSpec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllowSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
              MR_hl_field(1, AllowSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, AllowSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, AllowSpec_19, 3) = ((MR_Box) (Context_10));
              MR_hl_field(1, AllowSpec_19, 4) = ((MR_Box) (AllowPieces_18));
            }
            {
              AllowSpecs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllowSpecs_17, 0) = ((MR_Box) (AllowSpec_19));
              MR_hl_field(1, AllowSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AllowPieces_110;
            MR_Word AllowSpec_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_115;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_String Var_119;

            Var_112 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
            Var_119 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
            {
              Var_118 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_118, 0) = ((MR_Box) (Var_119));
            }
            {
              Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
              MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[50])));
            }
            {
              Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_115, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
              MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_117));
            }
            {
              Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_115));
            }
            AllowPieces_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_113);
            {
              AllowSpec_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllowSpec_111, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
              MR_hl_field(1, AllowSpec_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, AllowSpec_111, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, AllowSpec_111, 3) = ((MR_Box) (Context_10));
              MR_hl_field(1, AllowSpec_111, 4) = ((MR_Box) (AllowPieces_110));
            }
            {
              AllowSpecs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllowSpecs_17, 0) = ((MR_Box) (AllowSpec_111));
              MR_hl_field(1, AllowSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      succeeded = (AllowSpecs_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeLimit_15)) == (MR_Integer) 1);
        if (succeeded)
          Limit_20 = ((MR_Integer) ((MR_hl_field(1, MaybeLimit_15, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Attribute_21;
        MR_Word Var_57;

        {
          Attribute_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Attribute_21, 0) = ((MR_Box) (Limit_20));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (Attribute_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeContextAttribute_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
        }
      }
      else
      {
        MR_Word Specs_22;
        MR_Word Var_58;

        Var_58 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeLimit_15);
        Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_58, AllowSpecs_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeContextAttribute_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_22));
        }
      }
    }
    else
    {
      MR_Word Pieces_78;
      MR_Word Spec_79;
      MR_Word Var_80;
      MR_Word Var_85;

      Var_80 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
      Pieces_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])));
      {
        Spec_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_79, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
        MR_hl_field(1, Spec_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_79, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_79, 3) = ((MR_Box) (Context_10));
        MR_hl_field(1, Spec_79, 4) = ((MR_Box) (Pieces_78));
      }
      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_79));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeContextAttribute_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeMaybeArgTablingMethod_8;

  parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_MaybeMaybeArgTablingMethod_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_MaybeMaybeArgTablingMethod_8));
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeMaybeArgTablingMethod_8;

  parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeMaybeArgTablingMethod_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeMaybeArgTablingMethod_8));
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word TabledMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  MR_bool succeeded;

  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_32;
    MR_Word Spec_33;
    MR_Word Var_104;
    MR_Word Var_116;

    Var_104 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[29])));
    {
      Spec_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
      MR_hl_field(1, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_33, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_33, 4) = ((MR_Box) (Pieces_32));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_116));
    }
  }
  else
  {
    MR_Word Var_197 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    MR_Word Var_198 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));

    if ((Var_197 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeHiddenArg_14 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[2]));
      MR_Word MethodsContextPieces_21;
      MR_Word MaybeMaybeArgMethods_22;
      MR_Word FastLooseSpecs_23;
      MR_Word Var_86;
      MR_Word Var_96;
      MR_Word MaybeArgMethods_24;
      MR_Word HiddenArg_25;

      Var_86 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[32])));
      MethodsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_86);
      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_96, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_5[0]));
        MR_hl_field(0, Var_96, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_1));
        MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_96, 3) = ((MR_Box) (MethodsContextPieces_21));
      }
      parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]), (MR_String) "argument tabling methods", Var_96, VarSet_9, Var_198, &MaybeMaybeArgMethods_22);
      parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(ContextPieces_7, TabledMethod_8, Context_10, &FastLooseSpecs_23);
      succeeded = (FastLooseSpecs_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeMaybeArgMethods_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          MaybeArgMethods_24 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeArgMethods_22, (MR_Integer) 0))));
          HiddenArg_25 = ((MR_Word) ((MR_hl_field(1, MaybeHiddenArg_14, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word Attribute_26;
        MR_Word Var_97;
        MR_Word Var_98;

        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (MaybeArgMethods_24));
          MR_hl_field(1, Var_97, 1) = (MR_Box) ((MR_Unsigned) (HiddenArg_25));
        }
        {
          Attribute_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Attribute_26, 0) = ((MR_Box) (Var_97));
        }
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_98, 0) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_98, 1) = ((MR_Box) (Attribute_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeContextAttribute_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_98));
        }
      }
      else
      {
        MR_Word Specs_27;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;

        Var_99 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[1]), MaybeMaybeArgMethods_22);
        Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_hidden_arg_tabling_method_0), MaybeHiddenArg_14);
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_101, FastLooseSpecs_23);
        Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_99, Var_100);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeContextAttribute_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
        }
      }
    }
    else
    {
      MR_Word Var_199 = ((MR_Word) ((MR_hl_field(1, Var_197, (MR_Integer) 1))));
      MR_Word Var_200 = ((MR_Word) ((MR_hl_field(1, Var_197, (MR_Integer) 0))));

      if ((Var_199 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeHiddenArg_165;
        MR_Word MethodsContextPieces_166;
        MR_Word MaybeMaybeArgMethods_167;
        MR_Word FastLooseSpecs_168;
        MR_Word Var_173;
        MR_Word Var_176;
        MR_Word Var_38;
        MR_String Var_39;
        MR_Word Var_40;
        MR_Word MaybeArgMethods_152;
        MR_Word HiddenArg_153;

        succeeded = ((MR_tag((MR_Word) Var_200)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(0, Var_200, (MR_Integer) 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(0, Var_200, (MR_Integer) 1))));
          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = ((MR_String) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
              succeeded = (strcmp(Var_39, (MR_String) "hidden_arg_value") == 0);
            }
          }
        }
        if (succeeded)
          MaybeHiddenArg_165 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[2]));
        else
        {
          MR_Word Var_42;
          MR_String Var_43;
          MR_Word Var_44;

          succeeded = ((MR_tag((MR_Word) Var_200)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_42 = ((MR_Word) ((MR_hl_field(0, Var_200, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(0, Var_200, (MR_Integer) 1))));
            succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
                succeeded = (strcmp(Var_43, (MR_String) "hidden_arg_addr") == 0);
              }
            }
          }
          if (succeeded)
            MaybeHiddenArg_165 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[3]));
          else
          {
            MR_String HiddenArgTermStr_18;
            MR_Word HiddenArgPieces_19;
            MR_Word HiddenArgSpec_20;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_49;
            MR_Word Var_52;
            MR_Word Var_54;
            MR_Word Var_57;
            MR_Word Var_60;
            MR_Word Var_63;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_83;
            MR_Word Var_84;

            HiddenArgTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_200);
            Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_73, 1) = ((MR_Box) (HiddenArgTermStr_18));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[21])));
            }
            {
              Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[19])));
              MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[12])));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[37])));
              MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[36])));
              MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[35])));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[34])));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
            }
            {
              Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[33])));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
            }
            HiddenArgPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_47);
            Var_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_200);
            {
              HiddenArgSpec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HiddenArgSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
              MR_hl_field(1, HiddenArgSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, HiddenArgSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, HiddenArgSpec_20, 3) = ((MR_Box) (Var_83));
              MR_hl_field(1, HiddenArgSpec_20, 4) = ((MR_Box) (HiddenArgPieces_19));
            }
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (HiddenArgSpec_20));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeHiddenArg_165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeHiddenArg_165, 0) = ((MR_Box) (Var_84));
            }
          }
        }
        Var_173 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[32])));
        MethodsContextPieces_166 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_173);
        {
          Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_176, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_5[0]));
          MR_hl_field(0, Var_176, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_2));
          MR_hl_field(0, Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_176, 3) = ((MR_Box) (MethodsContextPieces_166));
        }
        parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]), (MR_String) "argument tabling methods", Var_176, VarSet_9, Var_198, &MaybeMaybeArgMethods_167);
        parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(ContextPieces_7, TabledMethod_8, Context_10, &FastLooseSpecs_168);
        succeeded = (FastLooseSpecs_168 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeMaybeArgMethods_167)) == (MR_Integer) 1);
          if (succeeded)
          {
            MaybeArgMethods_152 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeArgMethods_167, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeHiddenArg_165)) == (MR_Integer) 1);
            if (succeeded)
              HiddenArg_153 = ((MR_Word) ((MR_hl_field(1, MaybeHiddenArg_165, (MR_Integer) 0))));
          }
        }
        if (succeeded)
        {
          MR_Word Attribute_142;
          MR_Word Var_143;
          MR_Word Var_144;

          {
            Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_143, 0) = ((MR_Box) (MaybeArgMethods_152));
            MR_hl_field(1, Var_143, 1) = (MR_Box) ((MR_Unsigned) (HiddenArg_153));
          }
          {
            Attribute_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Attribute_142, 0) = ((MR_Box) (Var_143));
          }
          {
            Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_144, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_144, 1) = ((MR_Box) (Attribute_142));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_144));
          }
        }
        else
        {
          MR_Word Specs_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;

          Var_146 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[1]), MaybeMaybeArgMethods_167);
          Var_148 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_hidden_arg_tabling_method_0), MaybeHiddenArg_165);
          Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_148, FastLooseSpecs_168);
          Specs_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_146, Var_147);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_145));
          }
        }
      }
      else
      {
        MR_Word Pieces_129;
        MR_Word Spec_130;
        MR_Word Var_131;
        MR_Word Var_136;

        Var_131 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
        Pieces_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[29])));
        {
          Spec_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
          MR_hl_field(1, Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_130, 3) = ((MR_Box) (Context_10));
          MR_hl_field(1, Spec_130, 4) = ((MR_Box) (Pieces_129));
        }
        {
          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_136, 0) = ((MR_Box) (Spec_130));
          MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeContextAttribute_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_136));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word TabledMethod_6,
  MR_Word Context_7,
  MR_Word * Specs_8)
{
  switch (MR_tag((MR_Word) TabledMethod_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Pieces_10;
        MR_Word Spec_11;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_15;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_String Var_20;

        Var_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
        Var_20 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_6);
        {
          Var_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_19, 0) = ((MR_Box) (Var_20));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[60])));
        }
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
        }
        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_15));
        }
        Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_13);
        {
          Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
          MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Context_7));
          MR_hl_field(1, Spec_11, 4) = ((MR_Box) (Pieces_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Pieces_42;
        MR_Word Spec_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_String Var_51;

        Var_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
        Var_51 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_6);
        {
          Var_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_50, 0) = ((MR_Box) (Var_51));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[60])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
        }
        Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_45);
        {
          Spec_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
          MR_hl_field(1, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_43, 3) = ((MR_Box) (Context_7));
          MR_hl_field(1, Spec_43, 4) = ((MR_Box) (Pieces_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_43));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeContextAttribute_10;

  parse_tree__parse_pragma_tabling__parse_tabling_attribute_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeContextAttribute_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeContextAttribute_10));
}

void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ErrorTerm_12,
  MR_String PragmaName_13,
  MR_Word PragmaTerms_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word TabledMethod0_17,
  MR_Word * MaybeIOM_18)
{
  if ((PragmaTerms_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_48;
    MR_Word Spec_49;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_101;
    MR_Word Var_102;

    {
      Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_91, 1) = ((MR_Box) (PragmaName_13));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[5])));
    }
    {
      Pieces_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[2])));
      MR_hl_field(1, Pieces_48, 1) = ((MR_Box) (Var_90));
    }
    Var_101 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
    {
      Spec_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9"));
      MR_hl_field(1, Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_49, 3) = ((MR_Box) (Var_101));
      MR_hl_field(1, Spec_49, 4) = ((MR_Box) (Pieces_48));
    }
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (Spec_49));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
    }
  }
  else
  {
    MR_Word Var_543 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_14, (MR_Integer) 1))));
    MR_Word Var_544 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_14, (MR_Integer) 0))));

    if ((Var_543 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_22;
      MR_Word MaybePredOrProcSpec_23;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (PragmaName_13));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[8])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[6])));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
      }
      ContextPieces_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53);
      parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_10, ContextPieces_22, VarSet_11, Var_544, &MaybePredOrProcSpec_23);
      if (((MR_tag((MR_Word) MaybePredOrProcSpec_23)) == (MR_Integer) 0))
        *MaybeIOM_18 = (MR_Word) (MaybePredOrProcSpec_23);
      else
      {
        MR_Word PredOrProcSpec_24 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_23, (MR_Integer) 0))));
        MR_Word TabledInfo_25;
        MR_Word Pragma_26;
        MR_Word ItemPragma_27;
        MR_Word Item_28;
        MR_Word Var_65;

        {
          TabledInfo_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TabledInfo_25, 0) = ((MR_Box) (TabledMethod0_17));
          MR_hl_field(0, TabledInfo_25, 1) = ((MR_Box) (PredOrProcSpec_24));
          MR_hl_field(0, TabledInfo_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pragma_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Pragma_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Pragma_26, 1) = ((MR_Box) (TabledInfo_25));
        }
        {
          ItemPragma_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemPragma_27, 0) = ((MR_Box) (Pragma_26));
          MR_hl_field(0, ItemPragma_27, 1) = ((MR_Box) (Context_15));
          MR_hl_field(0, ItemPragma_27, 2) = ((MR_Box) (SeqNum_16));
        }
        {
          Item_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_28, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Item_28, 1) = ((MR_Box) (ItemPragma_27));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Item_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_65));
        }
      }
    }
    else
    {
      MR_Word Var_545 = ((MR_Word) ((MR_hl_field(1, Var_543, (MR_Integer) 1))));
      MR_Word Var_546 = ((MR_Word) ((MR_hl_field(1, Var_543, (MR_Integer) 0))));

      if ((Var_545 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeAttrs_472;
        MR_Word ContextPieces_473;
        MR_Word MaybePredOrProcSpec_474;
        MR_Word Var_495;
        MR_Word Var_498;
        MR_Word Var_499;

        {
          MaybeAttrs_472 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAttrs_472, 0) = ((MR_Box) (Var_546));
        }
        {
          Var_499 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_499, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_499, 1) = ((MR_Box) (PragmaName_13));
        }
        {
          Var_498 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_498, 0) = ((MR_Box) (Var_499));
          MR_hl_field(1, Var_498, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[8])));
        }
        {
          Var_495 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_495, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[6])));
          MR_hl_field(1, Var_495, 1) = ((MR_Box) (Var_498));
        }
        ContextPieces_473 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_495);
        parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_10, ContextPieces_473, VarSet_11, Var_544, &MaybePredOrProcSpec_474);
        if (((MR_tag((MR_Word) MaybePredOrProcSpec_474)) == (MR_Integer) 0))
          *MaybeIOM_18 = (MR_Word) (MaybePredOrProcSpec_474);
        else
        {
          MR_Word AttrsListTerm_293 = ((MR_Word) ((MR_hl_field(1, MaybeAttrs_472, (MR_Integer) 0))));
          MR_Word AttrContextPieces_294;
          MR_Word MaybeAttributeList_295;
          MR_Word Var_308;
          MR_Word Var_311;
          MR_Word Var_315;
          MR_Word PredOrProcSpec_377 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_474, (MR_Integer) 0))));

          {
            Var_311 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_311, 0) = ((MR_Box) (Var_499));
            MR_hl_field(1, Var_311, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[8])));
          }
          {
            Var_308 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_308, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[9])));
            MR_hl_field(1, Var_308, 1) = ((MR_Box) (Var_311));
          }
          AttrContextPieces_294 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_308);
          {
            Var_315 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_315, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_4[0]));
            MR_hl_field(0, Var_315, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0_1));
            MR_hl_field(0, Var_315, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_315, 3) = ((MR_Box) (AttrContextPieces_294));
            MR_hl_field(0, Var_315, 4) = ((MR_Box) (TabledMethod0_17));
          }
          parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_1[0]), (MR_String) "tabling attributes", Var_315, VarSet_11, AttrsListTerm_293, &MaybeAttributeList_295);
          if (((MR_tag((MR_Word) MaybeAttributeList_295)) == (MR_Integer) 0))
            *MaybeIOM_18 = (MR_Word) (MaybeAttributeList_295);
          else
          {
            MR_Word AttributeList_239 = ((MR_Word) ((MR_hl_field(1, MaybeAttributeList_295, (MR_Integer) 0))));
            MR_Word Attributes_240;
            MR_Word DuplicateSpecs_241;
            MR_Word Var_250;

            Var_250 = parse_tree__prog_data_pragma__default_memo_table_attributes_0_f_0();
            parse_tree__parse_pragma_tabling__update_tabling_attributes_5_p_0(AttributeList_239, Var_250, &Attributes_240, (MR_Word) ((MR_Unsigned) 0U), &DuplicateSpecs_241);
            if ((DuplicateSpecs_241 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DisableWarning_195 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_240, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word TabledMethod_196;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word TabledInfo_206;
              MR_Word Pragma_207;
              MR_Word ItemPragma_208;
              MR_Word Item_209;

              switch (DisableWarning_195) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  TabledMethod_196 = TabledMethod0_17;
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) TabledMethod0_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      TabledMethod_196 = TabledMethod0_17;
                      break;
                    case (MR_Integer) 1:
                      TabledMethod_196 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[0]));
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9", (MR_String) "non-pragma eval method");
                        return;
                      }
                      break;
                    case (MR_Integer) 3:
                      TabledMethod_196 = TabledMethod0_17;
                      break;
                  }
                  break;
              }
              {
                Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_204, 0) = ((MR_Box) (Attributes_240));
              }
              {
                TabledInfo_206 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TabledInfo_206, 0) = ((MR_Box) (TabledMethod_196));
                MR_hl_field(0, TabledInfo_206, 1) = ((MR_Box) (PredOrProcSpec_377));
                MR_hl_field(0, TabledInfo_206, 2) = ((MR_Box) (Var_204));
              }
              {
                Pragma_207 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Pragma_207, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Pragma_207, 1) = ((MR_Box) (TabledInfo_206));
              }
              {
                ItemPragma_208 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ItemPragma_208, 0) = ((MR_Box) (Pragma_207));
                MR_hl_field(0, ItemPragma_208, 1) = ((MR_Box) (Context_15));
                MR_hl_field(0, ItemPragma_208, 2) = ((MR_Box) (SeqNum_16));
              }
              {
                Item_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Item_209, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(3, Item_209, 1) = ((MR_Box) (ItemPragma_208));
              }
              {
                Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_205, 0) = ((MR_Box) (Item_209));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_205));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_18 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (DuplicateSpecs_241));
              }
          }
        }
      }
      else
      {
        MR_Word Pieces_135;
        MR_Word Spec_136;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_145;
        MR_Word Var_146;

        {
          Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_140, 1) = ((MR_Box) (PragmaName_13));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[5])));
        }
        {
          Pieces_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_135, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[2])));
          MR_hl_field(1, Pieces_135, 1) = ((MR_Box) (Var_139));
        }
        Var_145 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
        {
          Spec_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_136, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9"));
          MR_hl_field(1, Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_136, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_136, 3) = ((MR_Box) (Var_145));
          MR_hl_field(1, Spec_136, 4) = ((MR_Box) (Pieces_135));
        }
        {
          Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_146, 0) = ((MR_Box) (Spec_136));
          MR_hl_field(1, Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_146));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__update_tabling_attributes_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_Attributes_3 = STATE_VARIABLE_Attributes_0_2;
    }
    else
    {
      MR_Word Context_12;
      MR_Word Attr_13;
      MR_Word ContextAttrs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Attributes_27_27;
      MR_Word STATE_VARIABLE_Specs_45_45;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Attributes_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      Context_12 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      Attr_13 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Attr_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Attr_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
                MR_Word Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
                MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

                succeeded = (Var_64 == (MR_Integer) 1);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 0) = ((MR_Box) (Var_161));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 1) = ((MR_Box) (Var_162));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 2) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
                  }
                  STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  MR_Word Spec_130;

                  {
                    Spec_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                    MR_hl_field(1, Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(1, Spec_130, 3) = ((MR_Box) (Context_12));
                    MR_hl_field(1, Spec_130, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[74])));
                  }
                  {
                    STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_130));
                    MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                  }
                  STATE_VARIABLE_Attributes_27_27 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
                MR_Word Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
                MR_Word Var_82 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

                succeeded = (Var_82 == (MR_Integer) 1);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 0) = ((MR_Box) (Var_170));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 1) = ((MR_Box) (Var_171));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                  }
                  STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  MR_Word Spec_136;

                  {
                    Spec_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_136, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                    MR_hl_field(1, Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_136, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(1, Spec_136, 3) = ((MR_Box) (Context_12));
                    MR_hl_field(1, Spec_136, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[66])));
                  }
                  {
                    STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_136));
                    MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                  }
                  STATE_VARIABLE_Attributes_27_27 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
                MR_Word Var_180 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
                MR_Word Var_100 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

                succeeded = (Var_100 == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 0) = ((MR_Box) (Var_179));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 1) = ((MR_Box) (Var_180));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 2) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                  STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  MR_Word Spec_142;

                  {
                    Spec_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_142, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                    MR_hl_field(1, Spec_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_142, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(1, Spec_142, 3) = ((MR_Box) (Context_12));
                    MR_hl_field(1, Spec_142, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[70])));
                  }
                  {
                    STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_142));
                    MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                  }
                  STATE_VARIABLE_Attributes_27_27 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Strictness_17 = ((MR_Word) ((MR_hl_field(1, Attr_13, (MR_Integer) 0))));
            MR_Word Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
            MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              {
                STATE_VARIABLE_Attributes_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 0) = ((MR_Box) (Strictness_17));
                MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 1) = ((MR_Box) (Var_143));
                MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 2) = (MR_Box) (packed_word_4);
              }
              STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_4;
            }
            else
            {
              MR_Word Spec_19;

              {
                Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Context_12));
                MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[76])));
              }
              {
                STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_19));
                MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
              }
              STATE_VARIABLE_Attributes_27_27 = STATE_VARIABLE_Attributes_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Limit_20 = ((MR_Integer) ((MR_hl_field(2, Attr_13, (MR_Integer) 0))));
            MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

            succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_48, 0) = ((MR_Box) (Limit_20));
              }
              {
                STATE_VARIABLE_Attributes_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 0) = ((MR_Box) (Var_152));
                MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 1) = ((MR_Box) (Var_48));
                MR_hl_field(0, STATE_VARIABLE_Attributes_27_27, 2) = (MR_Box) (packed_word_2);
              }
              STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_4;
            }
            else
            {
              MR_Word Spec_124;

              {
                Spec_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                MR_hl_field(1, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_124, 3) = ((MR_Box) (Context_12));
                MR_hl_field(1, Spec_124, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[72])));
              }
              {
                STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_124));
                MR_hl_field(1, STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
              }
              STATE_VARIABLE_Attributes_27_27 = STATE_VARIABLE_Attributes_0_2;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ContextAttrs_14;
      next_value_of_STATE_VARIABLE_Attributes_0_2 = STATE_VARIABLE_Attributes_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_45_45;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Attributes_0_2 = next_value_of_STATE_VARIABLE_Attributes_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_pragma_tabling__init(void)
{
}

void mercury__parse_tree__parse_pragma_tabling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0);
}

void mercury__parse_tree__parse_pragma_tabling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_pragma_tabling__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_pragma_tabling.
