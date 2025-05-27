/*
** Automatically generated from `parse_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2025-05-27
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
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_tabling__pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_tabling__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_tabling__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_2__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

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
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_97_108_108_111_119_95_114_101_115_101_116_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
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

static MR_Word MR_CALL 
parse_tree__parse_pragma_tabling__eval_method_allows_size_limit_1_f_0(
  MR_Word HeadVar__1_1);

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

static void MR_CALL 
parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(
  MR_Word Context_5,
  MR_String Attr_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

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

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_2[109][2];

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

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_2[109][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one or two arguments."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[16])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fast_loose"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "specified(...)"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "size_limit(...)"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "statistics"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "allow_reset"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning_if_ignored"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no arguments."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected either"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hidden_arg_value"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hidden_arg_addr"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "value"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "addr"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_implied"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "output"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[22])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "size_limit"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one argument."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the first argument of size_limit:"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: evaluation method"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not allow size limits."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not allow disable_warning_if_ignored."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not allow fast_loose tabling."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_3[7][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) 0)) },
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
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_2__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
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
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_tabling__pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
    (MR_TypeInfo) (&parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_tabling__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__pair__ti_pair_2term_context__type_ctor_info_term_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_tabling__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_2__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_call_table_strictness_0) };

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__field_types_single_tabling_attribute_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

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

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_1[1] = { &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_2[1] = { &parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_functor_desc_single_tabling_attribute_0_1 };

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
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              parse_tree__prog_data_pragma____Compare____call_table_strictness_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
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
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_data_pragma____Unify____call_table_strictness_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
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
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_9 = ((MR_String) ((MR_hl_field(0, Var_15, 0))));
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
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_55;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_69;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_88;
    MR_Word Var_89;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_29 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[71])));
    Var_38 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[73])));
    Var_47 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[75])));
    Var_61 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[78])));
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[41])));
    }
    Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_76);
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[37])), Var_74);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_69);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[76])), Var_60);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_55);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_46);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_37);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[69])), Var_28);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_21);
    Var_88 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_arg_tabling_method\'/4"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_88));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMaybeArgTablingMethod_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_89));
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
  MR_Word Var_23;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    Context_13 = ((MR_Word) ((MR_hl_field(0, Term_9, 2))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_11 = ((MR_String) ((MR_hl_field(0, Var_23, 0))));
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
              parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_97_108_108_111_119_95_114_101_115_101_116_95_95_91_50_44_32_51_93_95_48_6_p_0(ContextPieces_6, Context_13, ArgTerms_12, MaybeContextAttribute_10);
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
    MR_Word Pieces_21;
    MR_Word Spec_22;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_43;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_55;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_67;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_91;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_106;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_128;
    MR_Word Var_129;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    Var_36 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[23])));
    Var_48 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[25])));
    Var_60 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[27])));
    Var_72 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[29])));
    Var_84 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[31])));
    Var_99 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[35])));
    {
      Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_117, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[41])));
    }
    Var_115 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_116);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[39])), Var_114);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_106);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[33])), Var_98);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_91);
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])), Var_83);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_79);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])), Var_71);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])), Var_59);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_55);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])), Var_47);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_43);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[19])), Var_35);
    Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_25);
    Var_128 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attribute\'/5"));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Var_128));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
    }
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_129));
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
          MR_String TabledMethodStr_15;
          MR_Word Pieces_16;
          MR_Word Spec_17;
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_46;

          TabledMethodStr_15 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
          Var_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
          {
            Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_32, 1) = ((MR_Box) (TabledMethodStr_15));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
          Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[94])));
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
          Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
          Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[88])), Var_29);
          Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_22);
          {
            Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_backend_warning\'/6"));
            MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_10));
            MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_20, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_62;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_79;
    MR_Word Pieces_81;
    MR_Word Spec_82;

    Var_48 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Var_57 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[92])));
    Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[47])));
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_67);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_62);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_56);
    Pieces_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_49);
    {
      Spec_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_backend_warning\'/6"));
      MR_hl_field(0, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_82, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_82, 4) = ((MR_Box) (Pieces_81));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (Spec_82));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_97_108_108_111_119_95_114_101_115_101_116_95_95_91_50_44_32_51_93_95_48_6_p_0(
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
      MR_hl_field(0, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 4U));
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
    MR_Word Var_20;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_50;

    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Var_28 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[92])));
    Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[47])));
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_38);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_33);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_27);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_allow_reset\'/6"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
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
    MR_Word Var_20;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_50;

    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Var_28 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[91])));
    Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[47])));
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_38);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_33);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_27);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_statistics\'/6"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
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
          MR_Word Var_119;

          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_119, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_119, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[1])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_119));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FastLooseSpecs_13;
          MR_String TabledMethodStr_58;
          MR_Word Pieces_59;
          MR_Word Spec_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_69;
          MR_Word Var_70;

          TabledMethodStr_58 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
          Var_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
          {
            Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_67, 1) = ((MR_Box) (TabledMethodStr_58));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_65 = parse_tree__error_spec__color_as_subject_1_f_0(Var_66);
          Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[96])));
          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_69);
          Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[88])), Var_64);
          Pieces_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_62);
          {
            Spec_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
            MR_hl_field(0, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_60, 3) = ((MR_Box) (Context_10));
            MR_hl_field(0, Spec_60, 4) = ((MR_Box) (Pieces_59));
          }
          {
            FastLooseSpecs_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FastLooseSpecs_13, 0) = ((MR_Box) (Spec_60));
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
          MR_String TabledMethodStr_94;
          MR_Word Pieces_95;
          MR_Word Spec_96;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word FastLooseSpecs_120;

          TabledMethodStr_94 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
          Var_97 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
          {
            Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_103, 1) = ((MR_Box) (TabledMethodStr_94));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_101 = parse_tree__error_spec__color_as_subject_1_f_0(Var_102);
          Var_106 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[96])));
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
          Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_105);
          Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[88])), Var_100);
          Pieces_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_98);
          {
            Spec_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_96, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
            MR_hl_field(0, Spec_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_96, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_96, 3) = ((MR_Box) (Context_10));
            MR_hl_field(0, Spec_96, 4) = ((MR_Box) (Pieces_95));
          }
          {
            FastLooseSpecs_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FastLooseSpecs_120, 0) = ((MR_Box) (Spec_96));
            MR_hl_field(1, FastLooseSpecs_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (FastLooseSpecs_120));
          }
        }
        break;
    }
  else
  {
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_54;

    Var_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Var_32 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[45])));
    Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[47])));
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_42);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_37);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_31);
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_24);
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_fast_loose\'/6"));
      MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
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
    MR_Word Pieces_27;
    MR_Word Spec_28;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_82;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_99;

    Var_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Var_77 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[80])));
    Var_88 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[82])));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_87);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_76);
    Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_69);
    {
      Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
      MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
    }
    {
      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_99, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
    }
  }
  else
  {
    MR_Word Var_167 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, 1))));
    MR_Word Var_168 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, 0))));

    if ((Var_167 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LimitContextPieces_14;
      MR_Word MaybeLimit_15;
      MR_Word AllowsSizeLimit_16;
      MR_Word AllowSpecs_17;
      MR_Word Var_30;
      MR_Integer Limit_21;

      Var_30 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[85])));
      LimitContextPieces_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_30);
      parse_tree__parse_util__parse_decimal_int_4_p_0(LimitContextPieces_14, VarSet_9, Var_168, &MaybeLimit_15);
      AllowsSizeLimit_16 = parse_tree__parse_pragma_tabling__eval_method_allows_size_limit_1_f_0(TabledMethod_8);
      switch (AllowsSizeLimit_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String TabledMethodStr_18;
            MR_Word AllowPieces_19;
            MR_Word AllowSpec_20;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_52;
            MR_Word Var_53;

            TabledMethodStr_18 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_8);
            Var_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
            {
              Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_50, 1) = ((MR_Box) (TabledMethodStr_18));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_48 = parse_tree__error_spec__color_as_subject_1_f_0(Var_49);
            Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[90])));
            Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
            Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_52);
            Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[88])), Var_47);
            AllowPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_40);
            {
              AllowSpec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AllowSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
              MR_hl_field(0, AllowSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, AllowSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, AllowSpec_20, 3) = ((MR_Box) (Context_10));
              MR_hl_field(0, AllowSpec_20, 4) = ((MR_Box) (AllowPieces_19));
            }
            {
              AllowSpecs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllowSpecs_17, 0) = ((MR_Box) (AllowSpec_20));
              MR_hl_field(1, AllowSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          AllowSpecs_17 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      succeeded = (AllowSpecs_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeLimit_15)) == (MR_Integer) 1);
        if (succeeded)
          Limit_21 = ((MR_Integer) ((MR_hl_field(1, MaybeLimit_15, 0))));
      }
      if (succeeded)
      {
        MR_Word Attribute_22;
        MR_Word Var_65;

        {
          Attribute_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Attribute_22, 0) = ((MR_Box) (Limit_21));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (Attribute_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeContextAttribute_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_65));
        }
      }
      else
      {
        MR_Word Specs_23;
        MR_Word Var_66;

        Var_66 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeLimit_15);
        Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_66, AllowSpecs_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeContextAttribute_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
        }
      }
    }
    else
    {
      MR_Word Pieces_105;
      MR_Word Spec_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_116;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_133;

      Var_107 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
      Var_111 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[80])));
      Var_122 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[82])));
      Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
      Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_121);
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_116);
      Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_110);
      Pieces_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, Var_108);
      {
        Spec_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
        MR_hl_field(0, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_106, 3) = ((MR_Box) (Context_10));
        MR_hl_field(0, Spec_106, 4) = ((MR_Box) (Pieces_105));
      }
      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (Spec_106));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeContextAttribute_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_133));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma_tabling__eval_method_allows_size_limit_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
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

  parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_MaybeMaybeArgTablingMethod_8);
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

  parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeMaybeArgTablingMethod_8);
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
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_145;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_162;

    Var_131 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
    Var_140 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[49])));
    Var_151 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[9])));
    Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_150);
    Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_140, Var_145);
    Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_139);
    Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, Var_132);
    {
      Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
      MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_162));
    }
  }
  else
  {
    MR_Word Var_285 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, 1))));
    MR_Word Var_286 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, 0))));

    if ((Var_285 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeHiddenArg_14 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[2]));
      MR_Word MethodsContextPieces_21;
      MR_Word MaybeMaybeArgMethods_22;
      MR_Word FastLooseSpecs_23;
      MR_Word Var_107;
      MR_Word Var_123;
      MR_Word MaybeArgMethods_24;
      MR_Word HiddenArg_25;

      Var_107 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[54])));
      MethodsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_107);
      {
        Var_123 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_123, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_5[0]));
        MR_hl_field(0, Var_123, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_1));
        MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_123, 3) = ((MR_Box) (MethodsContextPieces_21));
      }
      parse_tree__parse_util__parse_list_elements_6_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]), MethodsContextPieces_21, (MR_String) "argument tabling methods", Var_123, VarSet_9, Var_286, &MaybeMaybeArgMethods_22);
      parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(ContextPieces_7, TabledMethod_8, Context_10, &FastLooseSpecs_23);
      succeeded = (FastLooseSpecs_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeMaybeArgMethods_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          MaybeArgMethods_24 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeArgMethods_22, 0))));
          HiddenArg_25 = ((MR_Word) ((MR_hl_field(1, MaybeHiddenArg_14, 0))));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word Attribute_26;
        MR_Word Var_124;
        MR_Word Var_125;

        {
          Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_124, 0) = ((MR_Box) (MaybeArgMethods_24));
          MR_hl_field(1, Var_124, 1) = (MR_Box) ((MR_Unsigned) (HiddenArg_25));
        }
        {
          Attribute_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Attribute_26, 0) = ((MR_Box) (Var_124));
        }
        {
          Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_125, 0) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_125, 1) = ((MR_Box) (Attribute_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeContextAttribute_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_125));
        }
      }
      else
      {
        MR_Word Specs_27;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;

        Var_126 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[1]), MaybeMaybeArgMethods_22);
        Var_128 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_hidden_arg_tabling_method_0), MaybeHiddenArg_14);
        Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_128, FastLooseSpecs_23);
        Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_126, Var_127);
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
      MR_Word Var_287 = ((MR_Word) ((MR_hl_field(1, Var_285, 1))));
      MR_Word Var_288 = ((MR_Word) ((MR_hl_field(1, Var_285, 0))));

      if ((Var_287 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeHiddenArg_232;
        MR_Word MethodsContextPieces_233;
        MR_Word MaybeMaybeArgMethods_234;
        MR_Word FastLooseSpecs_235;
        MR_Word Var_240;
        MR_Word Var_243;
        MR_Word Var_38;
        MR_String Var_39;
        MR_Word Var_40;
        MR_Word MaybeArgMethods_219;
        MR_Word HiddenArg_220;

        succeeded = ((MR_tag((MR_Word) Var_288)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(0, Var_288, 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(0, Var_288, 1))));
          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = ((MR_String) ((MR_hl_field(0, Var_38, 0))));
              succeeded = (strcmp(Var_39, (MR_String) "hidden_arg_value") == 0);
            }
          }
        }
        if (succeeded)
          MaybeHiddenArg_232 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[2]));
        else
        {
          MR_Word Var_42;
          MR_String Var_43;
          MR_Word Var_44;

          succeeded = ((MR_tag((MR_Word) Var_288)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_42 = ((MR_Word) ((MR_hl_field(0, Var_288, 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(0, Var_288, 1))));
            succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, 0))));
                succeeded = (strcmp(Var_43, (MR_String) "hidden_arg_addr") == 0);
              }
            }
          }
          if (succeeded)
            MaybeHiddenArg_232 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[3]));
          else
          {
            MR_String HiddenArgTermStr_18;
            MR_Word HiddenArgPieces_19;
            MR_Word HiddenArgSpec_20;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_71;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_85;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_104;
            MR_Word Var_105;

            HiddenArgTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_288);
            Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
            Var_66 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[63])));
            Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[67])));
            {
              Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_93, 1) = ((MR_Box) (HiddenArgTermStr_18));
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[41])));
            }
            Var_91 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_92);
            Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
            Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[37])), Var_90);
            Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_85);
            Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[65])), Var_76);
            Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_71);
            Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[61])), Var_65);
            HiddenArgPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_47);
            Var_104 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_288);
            {
              HiddenArgSpec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HiddenArgSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
              MR_hl_field(0, HiddenArgSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HiddenArgSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, HiddenArgSpec_20, 3) = ((MR_Box) (Var_104));
              MR_hl_field(0, HiddenArgSpec_20, 4) = ((MR_Box) (HiddenArgPieces_19));
            }
            {
              Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_105, 0) = ((MR_Box) (HiddenArgSpec_20));
              MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeHiddenArg_232 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeHiddenArg_232, 0) = ((MR_Box) (Var_105));
            }
          }
        }
        Var_240 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[54])));
        MethodsContextPieces_233 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_240);
        {
          Var_243 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_243, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_5[0]));
          MR_hl_field(0, Var_243, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_2));
          MR_hl_field(0, Var_243, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_243, 3) = ((MR_Box) (MethodsContextPieces_233));
        }
        parse_tree__parse_util__parse_list_elements_6_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]), MethodsContextPieces_233, (MR_String) "argument tabling methods", Var_243, VarSet_9, Var_286, &MaybeMaybeArgMethods_234);
        parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(ContextPieces_7, TabledMethod_8, Context_10, &FastLooseSpecs_235);
        succeeded = (FastLooseSpecs_235 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeMaybeArgMethods_234)) == (MR_Integer) 1);
          if (succeeded)
          {
            MaybeArgMethods_219 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeArgMethods_234, 0))));
            succeeded = ((MR_tag((MR_Word) MaybeHiddenArg_232)) == (MR_Integer) 1);
            if (succeeded)
              HiddenArg_220 = ((MR_Word) ((MR_hl_field(1, MaybeHiddenArg_232, 0))));
          }
        }
        if (succeeded)
        {
          MR_Word Attribute_209;
          MR_Word Var_210;
          MR_Word Var_211;

          {
            Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_210, 0) = ((MR_Box) (MaybeArgMethods_219));
            MR_hl_field(1, Var_210, 1) = (MR_Box) ((MR_Unsigned) (HiddenArg_220));
          }
          {
            Attribute_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Attribute_209, 0) = ((MR_Box) (Var_210));
          }
          {
            Var_211 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_211, 0) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_211, 1) = ((MR_Box) (Attribute_209));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_211));
          }
        }
        else
        {
          MR_Word Specs_212;
          MR_Word Var_213;
          MR_Word Var_214;
          MR_Word Var_215;

          Var_213 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[1]), MaybeMaybeArgMethods_234);
          Var_215 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_hidden_arg_tabling_method_0), MaybeHiddenArg_232);
          Var_214 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_215, FastLooseSpecs_235);
          Specs_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_213, Var_214);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_212));
          }
        }
      }
      else
      {
        MR_Word Pieces_175;
        MR_Word Spec_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_186;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_203;

        Var_177 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
        Var_181 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[49])));
        Var_192 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[9])));
        Var_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_192, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
        Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_191);
        Var_180 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_181, Var_186);
        Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[44])), Var_180);
        Pieces_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_177, Var_178);
        {
          Spec_176 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_176, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
          MR_hl_field(0, Spec_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_176, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_176, 3) = ((MR_Box) (Context_10));
          MR_hl_field(0, Spec_176, 4) = ((MR_Box) (Pieces_175));
        }
        {
          Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_203, 0) = ((MR_Box) (Spec_176));
          MR_hl_field(1, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeContextAttribute_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_203));
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
        MR_String TabledMethodStr_10;
        MR_Word Pieces_11;
        MR_Word Spec_12;
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Word Var_27;

        TabledMethodStr_10 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_6);
        Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (TabledMethodStr_10));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[96])));
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
        Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_26);
        Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[88])), Var_21);
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_14);
        {
          Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
          MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_7));
          MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String TabledMethodStr_51;
        MR_Word Pieces_52;
        MR_Word Spec_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_62;
        MR_Word Var_63;

        TabledMethodStr_51 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_6);
        Var_54 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (TabledMethodStr_51));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_58 = parse_tree__error_spec__color_as_subject_1_f_0(Var_59);
        Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[96])));
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
        Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_62);
        Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[88])), Var_57);
        Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_55);
        {
          Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
          MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_53, 3) = ((MR_Box) (Context_7));
          MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_52));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_53));
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

  parse_tree__parse_pragma_tabling__parse_tabling_attribute_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeContextAttribute_10);
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
    MR_Word Pieces_47;
    MR_Word Spec_48;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_99;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_116;
    MR_Word Var_117;

    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (PragmaName_13));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[5])));
    }
    Var_92 = parse_tree__error_spec__color_as_subject_1_f_0(Var_93);
    Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[9])));
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_104);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_99);
    Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])), Var_91);
    Var_116 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
    {
      Spec_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9"));
      MR_hl_field(0, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_48, 3) = ((MR_Box) (Var_116));
      MR_hl_field(0, Spec_48, 4) = ((MR_Box) (Pieces_47));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) (Spec_48));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_117));
    }
  }
  else
  {
    MR_Word Var_584 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_14, 1))));
    MR_Word Var_585 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_14, 0))));

    if ((Var_584 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_22;
      MR_Word MaybePredOrProcSpec_23;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (PragmaName_13));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[13])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[11])));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
      }
      ContextPieces_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52);
      parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_10, ContextPieces_22, VarSet_11, Var_585, &MaybePredOrProcSpec_23);
      if (((MR_tag((MR_Word) MaybePredOrProcSpec_23)) == (MR_Integer) 0))
        *MaybeIOM_18 = (MR_Word) (MaybePredOrProcSpec_23);
      else
      {
        MR_Word PredOrProcSpec_24 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_23, 0))));
        MR_Word Tabled_25;
        MR_Word ImplPragma_26;
        MR_Word Item_27;
        MR_Word Var_64;

        {
          Tabled_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Tabled_25, 0) = ((MR_Box) (TabledMethod0_17));
          MR_hl_field(0, Tabled_25, 1) = ((MR_Box) (PredOrProcSpec_24));
          MR_hl_field(0, Tabled_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Tabled_25, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, Tabled_25, 4) = ((MR_Box) (SeqNum_16));
        }
        {
          ImplPragma_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ImplPragma_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ImplPragma_26, 1) = ((MR_Box) (Tabled_25));
        }
        {
          Item_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_27, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Item_27, 1) = ((MR_Box) (ImplPragma_26));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Item_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_64));
        }
      }
    }
    else
    {
      MR_Word Var_586 = ((MR_Word) ((MR_hl_field(1, Var_584, 1))));
      MR_Word Var_587 = ((MR_Word) ((MR_hl_field(1, Var_584, 0))));

      if ((Var_586 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeAttrs_493;
        MR_Word ContextPieces_494;
        MR_Word MaybePredOrProcSpec_495;
        MR_Word Var_515;
        MR_Word Var_518;
        MR_Word Var_519;

        {
          MaybeAttrs_493 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAttrs_493, 0) = ((MR_Box) (Var_587));
        }
        {
          Var_519 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_519, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_519, 1) = ((MR_Box) (PragmaName_13));
        }
        {
          Var_518 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_518, 0) = ((MR_Box) (Var_519));
          MR_hl_field(1, Var_518, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[13])));
        }
        {
          Var_515 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_515, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[11])));
          MR_hl_field(1, Var_515, 1) = ((MR_Box) (Var_518));
        }
        ContextPieces_494 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_515);
        parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(ModuleName_10, ContextPieces_494, VarSet_11, Var_585, &MaybePredOrProcSpec_495);
        if (((MR_tag((MR_Word) MaybePredOrProcSpec_495)) == (MR_Integer) 0))
          *MaybeIOM_18 = (MR_Word) (MaybePredOrProcSpec_495);
        else
        {
          MR_Word AttrsListTerm_321 = ((MR_Word) ((MR_hl_field(1, MaybeAttrs_493, 0))));
          MR_Word AttrContextPieces_322;
          MR_Word MaybeAttributeList_323;
          MR_Word Var_336;
          MR_Word Var_339;
          MR_Word Var_343;
          MR_Word PredOrProcSpec_402 = ((MR_Word) ((MR_hl_field(1, MaybePredOrProcSpec_495, 0))));

          {
            Var_339 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_339, 0) = ((MR_Box) (Var_519));
            MR_hl_field(1, Var_339, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[13])));
          }
          {
            Var_336 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_336, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_tabling_scalar_common_2[14])));
            MR_hl_field(1, Var_336, 1) = ((MR_Box) (Var_339));
          }
          AttrContextPieces_322 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_336);
          {
            Var_343 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_343, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_4[0]));
            MR_hl_field(0, Var_343, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0_1));
            MR_hl_field(0, Var_343, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_343, 3) = ((MR_Box) (AttrContextPieces_322));
            MR_hl_field(0, Var_343, 4) = ((MR_Box) (TabledMethod0_17));
          }
          parse_tree__parse_util__parse_list_elements_6_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_1[0]), AttrContextPieces_322, (MR_String) "tabling attributes", Var_343, VarSet_11, AttrsListTerm_321, &MaybeAttributeList_323);
          if (((MR_tag((MR_Word) MaybeAttributeList_323)) == (MR_Integer) 0))
            *MaybeIOM_18 = (MR_Word) (MaybeAttributeList_323);
          else
          {
            MR_Word AttributeList_269 = ((MR_Word) ((MR_hl_field(1, MaybeAttributeList_323, 0))));
            MR_Word Attributes_270;
            MR_Word DuplicateSpecs_271;
            MR_Word Var_280;

            Var_280 = parse_tree__prog_data_pragma__default_memo_table_attributes_0_f_0();
            parse_tree__parse_pragma_tabling__update_tabling_attributes_5_p_0(AttributeList_269, Var_280, &Attributes_270, (MR_Word) ((MR_Unsigned) 0U), &DuplicateSpecs_271);
            if ((DuplicateSpecs_271 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DisableWarning_227 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_270, 2))) & (MR_Integer) 1);
              MR_Word TabledMethod_228;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Tabled_238;
              MR_Word ImplPragma_239;
              MR_Word Item_240;

              switch (DisableWarning_227) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  TabledMethod_228 = TabledMethod0_17;
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) TabledMethod0_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 3:
                      TabledMethod_228 = TabledMethod0_17;
                      break;
                    case (MR_Integer) 1:
                      TabledMethod_228 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_3[0]));
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9", (MR_String) "non-pragma eval method");
                        return;
                      }
                      break;
                  }
                  break;
              }
              {
                Var_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_236, 0) = ((MR_Box) (Attributes_270));
              }
              {
                Tabled_238 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Tabled_238, 0) = ((MR_Box) (TabledMethod_228));
                MR_hl_field(0, Tabled_238, 1) = ((MR_Box) (PredOrProcSpec_402));
                MR_hl_field(0, Tabled_238, 2) = ((MR_Box) (Var_236));
                MR_hl_field(0, Tabled_238, 3) = ((MR_Box) (Context_15));
                MR_hl_field(0, Tabled_238, 4) = ((MR_Box) (SeqNum_16));
              }
              {
                ImplPragma_239 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ImplPragma_239, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, ImplPragma_239, 1) = ((MR_Box) (Tabled_238));
              }
              {
                Item_240 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Item_240, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(3, Item_240, 1) = ((MR_Box) (ImplPragma_239));
              }
              {
                Var_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_237, 0) = ((MR_Box) (Item_240));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_237));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_18 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (DuplicateSpecs_271));
              }
          }
        }
      }
      else
      {
        MR_Word Pieces_146;
        MR_Word Spec_147;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_160;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_177;
        MR_Word Var_178;

        {
          Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_155, 1) = ((MR_Box) (PragmaName_13));
        }
        {
          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
          MR_hl_field(1, Var_154, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[5])));
        }
        Var_153 = parse_tree__error_spec__color_as_subject_1_f_0(Var_154);
        Var_166 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[9])));
        Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_166, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
        Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[7])), Var_165);
        Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_153, Var_160);
        Pieces_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[3])), Var_152);
        Var_177 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
        {
          Spec_147 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_147, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9"));
          MR_hl_field(0, Spec_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_147, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_147, 3) = ((MR_Box) (Var_177));
          MR_hl_field(0, Spec_147, 4) = ((MR_Box) (Pieces_146));
        }
        {
          Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_178, 0) = ((MR_Box) (Spec_147));
          MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_178));
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
      MR_Word ContextAttrs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Attributes_1_25;
      MR_Word STATE_VARIABLE_Specs_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Attributes_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      Context_12 = ((MR_Word) ((MR_hl_field(0, Var_23, 0))));
      Attr_13 = ((MR_Word) ((MR_hl_field(0, Var_23, 1))));
      switch (MR_tag((MR_Word) Attr_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Attr_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 0))));
                MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 1))));
                MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2))) >> 2)) & (MR_Integer) 1);
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2)));

                succeeded = (Var_33 == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_1_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 0) = ((MR_Box) (Var_65));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 1) = ((MR_Box) (Var_66));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 2) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                  }
                  STATE_VARIABLE_Specs_1_27 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(Context_12, (MR_String) "statistics", STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_27);
                  STATE_VARIABLE_Attributes_1_25 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 0))));
                MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 1))));
                MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2))) >> 1)) & (MR_Integer) 1);
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2)));

                succeeded = (Var_38 == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_1_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 0) = ((MR_Box) (Var_74));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 1) = ((MR_Box) (Var_75));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
                  }
                  STATE_VARIABLE_Specs_1_27 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(Context_12, (MR_String) "allow_reset", STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_27);
                  STATE_VARIABLE_Attributes_1_25 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 0))));
                MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 1))));
                MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2))) & (MR_Integer) 1);
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2)));

                succeeded = (Var_43 == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_1_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 0) = ((MR_Box) (Var_83));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 1) = ((MR_Box) (Var_84));
                    MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 2) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                  STATE_VARIABLE_Specs_1_27 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(Context_12, (MR_String) "disable_warning_if_ignored", STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_27);
                  STATE_VARIABLE_Attributes_1_25 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Strictness_17 = ((MR_Word) ((MR_hl_field(1, Attr_13, 0))));
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 1))));
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 0))));
            MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2)));

            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              {
                STATE_VARIABLE_Attributes_1_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 0) = ((MR_Box) (Strictness_17));
                MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 1) = ((MR_Box) (Var_47));
                MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 2) = (MR_Box) (packed_word_4);
              }
              STATE_VARIABLE_Specs_1_27 = STATE_VARIABLE_Specs_0_4;
            }
            else
            {
              parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(Context_12, (MR_String) "argument tabling methods", STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_27);
              STATE_VARIABLE_Attributes_1_25 = STATE_VARIABLE_Attributes_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Limit_18 = ((MR_Integer) ((MR_hl_field(2, Attr_13, 0))));
            MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 0))));
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 1))));
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, 2)));

            succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_30, 0) = ((MR_Box) (Limit_18));
              }
              {
                STATE_VARIABLE_Attributes_1_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 0) = ((MR_Box) (Var_56));
                MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 1) = ((MR_Box) (Var_30));
                MR_hl_field(0, STATE_VARIABLE_Attributes_1_25, 2) = (MR_Box) (packed_word_2);
              }
              STATE_VARIABLE_Specs_1_27 = STATE_VARIABLE_Specs_0_4;
            }
            else
            {
              parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(Context_12, (MR_String) "size limits", STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_27);
              STATE_VARIABLE_Attributes_1_25 = STATE_VARIABLE_Attributes_0_2;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ContextAttrs_14;
      next_value_of_STATE_VARIABLE_Attributes_0_2 = STATE_VARIABLE_Attributes_1_25;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Attributes_0_2 = next_value_of_STATE_VARIABLE_Attributes_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__report_duplicate_memo_attribute_4_p_0(
  MR_Word Context_5,
  MR_String Attr_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[106])));
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (Attr_6));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[108])));
  }
  Var_34 = parse_tree__error_spec__color_as_subject_1_f_0(Var_35);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[10])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_33);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_tabling_scalar_common_2[104])), Var_27);
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.report_duplicate_memo_attribute\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
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
