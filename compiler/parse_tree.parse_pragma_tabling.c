/*
** Automatically generated from `parse_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2020-10-09
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
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "parse_tree.error_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_tabling__pair__ti_pair_2term__type_ctor_info_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term__type_ctor_info_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0;

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
  MR_Word EvalMethod_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeContextAttribute_10);

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_98_97_99_107_101_110_100_95_119_97_114_110_105_110_103_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word EvalMethod_8,
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
  MR_Word EvalMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_size_limit_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word EvalMethod_8,
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
  MR_Word EvalMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12);

static void MR_CALL 
parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word EvalMethod_6,
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

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_4[7][1];

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_5[1][7];


/* sealed */ struct parse_tree__parse_pragma_tabling__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_pragma_tabling__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_6_0_s parse_tree__parse_pragma_tabling_vector_common_6[6];

/* sealed */ struct parse_tree__parse_pragma_tabling__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_pragma_tabling__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_pragma_tabling__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_7_0_s parse_tree__parse_pragma_tabling_vector_common_7[6];

/* sealed */ struct parse_tree__parse_pragma_tabling__vector_common_type_8_0_s {
  const MR_String parse_tree__parse_pragma_tabling__vector_common_type_8_0__vct_8_f_0;
  const MR_Word parse_tree__parse_pragma_tabling__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_8_0_s parse_tree__parse_pragma_tabling_vector_common_8[4];



static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_2[77][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have one or two arguments."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have no arguments."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: fast_loose"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: specified must have one or two arguments."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of specified:"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: size_limit must have one argument."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of size_limit:"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not allow size limits."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: statistics must have no arguments."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: allow_reset must have no arguments."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not allow disable_warning_if_ignored."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not allow fast_loose tabling."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[2])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate allow_reset attribute in"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute in"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[41])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate disable_warning_if_ignored"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate size limits attribute in"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[41])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate statistics attribute in"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[41])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate argument tabling methods"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[45])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: evaluation method"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of specified:"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected either"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hidden_arg_value"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hidden_arg_addr"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fast_loose"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "specified(...)"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "size_limit(...)"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "statistics"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "allow_reset"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning_if_ignored"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "value"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "addr"))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_implied"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "output"))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_eval_method_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term__type_ctor_info_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_4[7][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_tabling_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
};


static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_6_0_s parse_tree__parse_pragma_tabling_vector_common_6[6] = {
  /* row 0 */   {     (MR_String) "allow_reset" },
  /* row 1 */   {     (MR_String) "disable_warning_if_ignored" },
  /* row 2 */   {     (MR_String) "fast_loose" },
  /* row 3 */   {     (MR_String) "size_limit" },
  /* row 4 */   {     (MR_String) "specified" },
  /* row 5 */   {     (MR_String) "statistics" },
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_7_0_s parse_tree__parse_pragma_tabling_vector_common_7[6] = {
  /* row 0 */
  {
    (MR_String) "allow_reset",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "disable_warning_if_ignored",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "fast_loose",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "size_limit",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "specified",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "statistics",
    (MR_Integer) 5
  },
};

static /* final */ const struct parse_tree__parse_pragma_tabling__vector_common_type_8_0_s parse_tree__parse_pragma_tabling_vector_common_8[4] = {
  /* row 0 */
  {
    (MR_String) "addr",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[4]))
  },
  /* row 1 */
  {
    (MR_String) "output",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_String) "promise_implied",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[5]))
  },
  /* row 3 */
  {
    (MR_String) "value",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[6]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
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

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_tabling__pair__ti_pair_2term__type_ctor_info_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0),
    (MR_TypeInfo) (&parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_tabling__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term__type_ctor_info_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_tabling__pair__ti_pair_2term__type_ctor_info_context_0parse_tree__parse_pragma_tabling__type_ctor_info_single_tabling_attribute_0)
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_stag_ordered_single_tabling_attribute_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma_tabling",
  (MR_String) "single_tabling_attribute",
  {     parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_name_ordered_single_tabling_attribute_0 },
  {     parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__du_ptag_ordered_single_tabling_attribute_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  parse_tree__parse_pragma_tabling__parse_tree__parse_pragma_tabling__functor_number_map_single_tabling_attribute_0
};

static void MR_CALL 
parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
            MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

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
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data_pragma____Unify____call_table_strictness_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeArgTablingMethod_8)
{
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
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
        if (succeeded)
        {
          Functor_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMaybeArgTablingMethod_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeArgTablingMethod_11));
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
      Var_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
      Var_30 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[63]));
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (TermStr_12));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[8])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[64])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[76])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[71])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[75])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[74])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[73])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[65])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
      }
      Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_20, Var_21);
      Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_arg_tabling_method\'/4"));
        MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeArgTablingMethod_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attribute_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word EvalMethod_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeContextAttribute_10)
{
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
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
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
                parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_98_97_99_107_101_110_100_95_119_97_114_110_105_110_103_95_95_91_51_93_95_48_6_p_0(ContextPieces_6, EvalMethod_7, Context_13, ArgTerms_12, MaybeContextAttribute_10);
              }
              break;
            case (MR_Integer) 2:
              {
                // case "fast_loose"
                ;
                parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_102_97_115_116_95_108_111_111_115_101_95_95_91_51_93_95_48_6_p_0(ContextPieces_6, EvalMethod_7, Context_13, ArgTerms_12, MaybeContextAttribute_10);
              }
              break;
            case (MR_Integer) 3:
              {
                // case "size_limit"
                ;
                parse_tree__parse_pragma_tabling__parse_tabling_attr_size_limit_6_p_0(ContextPieces_6, EvalMethod_7, VarSet_8, Context_13, ArgTerms_12, MaybeContextAttribute_10);
              }
              break;
            case (MR_Integer) 4:
              {
                // case "specified"
                ;
                parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0(ContextPieces_6, EvalMethod_7, VarSet_8, Context_13, ArgTerms_12, MaybeContextAttribute_10);
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
      Var_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
      Var_28 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[63]));
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (TermStr_14));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[8])));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[64])));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[72])));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[71])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[70])));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[69])));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[68])));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[67])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[66])));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[65])));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
      }
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, Var_19);
      Var_77 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attribute\'/5"));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeContextAttribute_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_98_97_99_107_101_110_100_95_119_97_114_110_105_110_103_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word EvalMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word AllowsDisableWarning_13;

    switch (MR_tag((MR_Word) EvalMethod_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(EvalMethod_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            AllowsDisableWarning_13 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            AllowsDisableWarning_13 = (MR_Integer) 0;
            break;
        }
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
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_String Var_41;
          MR_Word Var_51;

          Var_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
          Var_41 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_8);
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Var_41));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[35])));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[57])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
          }
          Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, Var_34);
          {
            Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_backend_warning\'/6"));
            MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_16));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_53;

          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_19;
    MR_Word Var_31;
    MR_Word Pieces_54;
    MR_Word Spec_55;

    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
    Pieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[33])));
    {
      Spec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_backend_warning\'/6"));
      MR_hl_field(MR_mktag(1), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_55, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_55, 4) = ((MR_Box) (Pieces_54));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Spec_55));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
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
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeContextAttribute_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
    }
  }
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_18;
    MR_Word Var_30;

    Var_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[33])));
    {
      Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_allow_reset\'/6"));
      MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
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
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeContextAttribute_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
    }
  }
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_18;
    MR_Word Var_30;

    Var_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[30])));
    {
      Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_statistics\'/6"));
      MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_97_98_108_105_110_103_95_97_116_116_114_95_102_97_115_116_95_108_111_111_115_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word EvalMethod_8,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word AllowsFastLoose_45;

    switch (MR_tag((MR_Word) EvalMethod_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(EvalMethod_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            AllowsFastLoose_45 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            AllowsFastLoose_45 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        AllowsFastLoose_45 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        AllowsFastLoose_45 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        AllowsFastLoose_45 = (MR_Integer) 0;
        break;
    }
    switch (AllowsFastLoose_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FastLooseSpecs_13;
          MR_Word Pieces_46;
          MR_Word Spec_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_String Var_56;

          Var_48 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
          Var_56 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_8);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (Var_56));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[37])));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[57])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
          }
          Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_49);
          {
            Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
            MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), Spec_47, 4) = ((MR_Box) (Pieces_46));
          }
          {
            FastLooseSpecs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FastLooseSpecs_13, 0) = ((MR_Box) (Spec_47));
            MR_hl_field(MR_mktag(1), FastLooseSpecs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FastLooseSpecs_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[3])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_21;
    MR_Word Var_36;

    Var_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[13])));
    {
      Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_fast_loose\'/6"));
      MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeContextAttribute_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_size_limit_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word EvalMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_26;
      MR_Word Spec_27;
      MR_Word Var_29;
      MR_Word Var_41;

      Var_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
      Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[22])));
      {
        Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
        MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (Pieces_26));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeContextAttribute_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      }
    }
    else
    {
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 0))));

      if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LimitContextPieces_14;
        MR_Word MaybeLimit_15;
        MR_Word AllowsSizeLimit_16;
        MR_Word AllowSpecs_17;
        MR_Word Var_44;
        MR_Integer Limit_20;

        Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[25])));
        LimitContextPieces_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_44);
        parse_tree__parse_util__parse_decimal_int_4_p_0(LimitContextPieces_14, VarSet_9, Var_99, &MaybeLimit_15);
        AllowsSizeLimit_16 = parse_tree__parse_pragma_tabling__eval_method_allows_size_limit_1_f_0(EvalMethod_8);
        switch (AllowsSizeLimit_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AllowPieces_18;
              MR_Word AllowSpec_19;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_String Var_61;

              Var_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
              Var_61 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_8);
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (Var_61));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[27])));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[57])));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
              }
              AllowPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, Var_54);
              {
                AllowSpec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllowSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
                MR_hl_field(MR_mktag(1), AllowSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), AllowSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), AllowSpec_19, 3) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(1), AllowSpec_19, 4) = ((MR_Box) (AllowPieces_18));
              }
              {
                AllowSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllowSpecs_17, 0) = ((MR_Box) (AllowSpec_19));
                MR_hl_field(MR_mktag(1), AllowSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            Limit_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLimit_15, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Attribute_21;
          MR_Word Var_72;

          {
            Attribute_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Attribute_21, 0) = ((MR_Box) (Limit_20));
          }
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Attribute_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
          }
        }
        else
        {
          MR_Word Specs_22;
          MR_Word Var_73;

          Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeLimit_15);
          Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_73, AllowSpecs_17);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_22));
          }
        }
      }
      else
      {
        MR_Word Pieces_78;
        MR_Word Spec_79;
        MR_Word Var_80;
        MR_Word Var_85;

        Var_80 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
        Pieces_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_80, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[22])));
        {
          Spec_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_79, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_size_limit\'/6"));
          MR_hl_field(MR_mktag(1), Spec_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_79, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_79, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_79, 4) = ((MR_Box) (Pieces_78));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_79));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeContextAttribute_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma_tabling__eval_method_allows_size_limit_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
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
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeMaybeArgTablingMethod_8;

    parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_MaybeMaybeArgTablingMethod_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_MaybeMaybeArgTablingMethod_8));
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeMaybeArgTablingMethod_8;

    parse_tree__parse_pragma_tabling__parse_arg_tabling_method_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeMaybeArgTablingMethod_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_MaybeMaybeArgTablingMethod_8));
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0(
  MR_Word ContextPieces_7,
  MR_Word EvalMethod_8,
  MR_Word VarSet_9,
  MR_Word Context_10,
  MR_Word ArgTerms_11,
  MR_Word * MaybeContextAttribute_12)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_32;
      MR_Word Spec_33;
      MR_Word Var_36;
      MR_Word Var_48;

      Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
      Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_36, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[16])));
      {
        Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
        MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (Pieces_32));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeContextAttribute_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
      }
    }
    else
    {
      MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 1))));
      MR_Word Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 0))));

      if ((Var_197 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeHiddenArg_14 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[1]));
        MR_Word MethodsContextPieces_21;
        MR_Word MaybeMaybeArgMethods_22;
        MR_Word FastLooseSpecs_23;
        MR_Word Var_102;
        MR_Word Var_112;
        MR_Word MaybeArgMethods_24;
        MR_Word HiddenArg_25;

        Var_102 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[19])));
        MethodsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_102);
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (MethodsContextPieces_21));
        }
        parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]), (MR_String) "argument tabling methods", Var_112, VarSet_9, Var_198, &MaybeMaybeArgMethods_22);
        parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(ContextPieces_7, EvalMethod_8, Context_10, &FastLooseSpecs_23);
        succeeded = (FastLooseSpecs_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeMaybeArgMethods_22)) == (MR_Integer) 1);
          if (succeeded)
          {
            MaybeArgMethods_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeArgMethods_22, (MR_Integer) 0))));
            HiddenArg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHiddenArg_14, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word Attribute_26;
          MR_Word Var_113;
          MR_Word Var_114;

          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MaybeArgMethods_24));
            MR_hl_field(MR_mktag(1), Var_113, 1) = (MR_Box) ((MR_Unsigned) (HiddenArg_25));
          }
          {
            Attribute_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Attribute_26, 0) = ((MR_Box) (Var_113));
          }
          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (Attribute_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_114));
          }
        }
        else
        {
          MR_Word Specs_27;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_117;

          Var_115 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[1]), MaybeMaybeArgMethods_22);
          Var_117 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_hidden_arg_tabling_method_0), MaybeHiddenArg_14);
          Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_117, FastLooseSpecs_23);
          Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_115, Var_116);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_27));
          }
        }
      }
      else
      {
        MR_Word Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_197, (MR_Integer) 1))));
        MR_Word Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_197, (MR_Integer) 0))));

        if ((Var_199 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeHiddenArg_165;
          MR_Word MethodsContextPieces_166;
          MR_Word MaybeMaybeArgMethods_167;
          MR_Word FastLooseSpecs_168;
          MR_Word Var_173;
          MR_Word Var_176;
          MR_Word Var_52;
          MR_String Var_53;
          MR_Word Var_54;
          MR_Word MaybeArgMethods_152;
          MR_Word HiddenArg_153;

          succeeded = ((MR_tag((MR_Word) Var_200)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_200, (MR_Integer) 0))));
            Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_200, (MR_Integer) 1))));
            succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
                succeeded = (strcmp(Var_53, (MR_String) "hidden_arg_value") == 0);
              }
            }
          }
          if (succeeded)
            MaybeHiddenArg_165 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[1]));
          else
          {
            MR_Word Var_56;
            MR_String Var_57;
            MR_Word Var_58;

            succeeded = ((MR_tag((MR_Word) Var_200)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_200, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_200, (MR_Integer) 1))));
              succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_57, (MR_String) "hidden_arg_addr") == 0);
                }
              }
            }
            if (succeeded)
              MaybeHiddenArg_165 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[2]));
            else
            {
              MR_String HiddenArgTermStr_18;
              MR_Word HiddenArgPieces_19;
              MR_Word HiddenArgSpec_20;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_80;
              MR_Word Var_83;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_97;
              MR_Word Var_98;

              HiddenArgTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_200);
              Var_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (HiddenArgTermStr_18));
              }
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[8])));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[64])));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[63])));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[62])));
                MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[61])));
                MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[60])));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[59])));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[58])));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
              }
              HiddenArgPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_60, Var_61);
              Var_97 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_200);
              {
                HiddenArgSpec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HiddenArgSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
                MR_hl_field(MR_mktag(1), HiddenArgSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), HiddenArgSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), HiddenArgSpec_20, 3) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(1), HiddenArgSpec_20, 4) = ((MR_Box) (HiddenArgPieces_19));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (HiddenArgSpec_20));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeHiddenArg_165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeHiddenArg_165, 0) = ((MR_Box) (Var_98));
              }
            }
          }
          Var_173 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[19])));
          MethodsContextPieces_166 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_173);
          {
            Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_attr_specified_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_176, 3) = ((MR_Box) (MethodsContextPieces_166));
          }
          parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_2[0]), (MR_String) "argument tabling methods", Var_176, VarSet_9, Var_198, &MaybeMaybeArgMethods_167);
          parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(ContextPieces_7, EvalMethod_8, Context_10, &FastLooseSpecs_168);
          succeeded = (FastLooseSpecs_168 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeMaybeArgMethods_167)) == (MR_Integer) 1);
            if (succeeded)
            {
              MaybeArgMethods_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeArgMethods_167, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeHiddenArg_165)) == (MR_Integer) 1);
              if (succeeded)
                HiddenArg_153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHiddenArg_165, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word Attribute_142;
            MR_Word Var_143;
            MR_Word Var_144;

            {
              Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (MaybeArgMethods_152));
              MR_hl_field(MR_mktag(1), Var_143, 1) = (MR_Box) ((MR_Unsigned) (HiddenArg_153));
            }
            {
              Attribute_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Attribute_142, 0) = ((MR_Box) (Var_143));
            }
            {
              Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (Attribute_142));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeContextAttribute_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_144));
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
            Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_148, FastLooseSpecs_168);
            Specs_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_146, Var_147);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeContextAttribute_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_145));
            }
          }
        }
        else
        {
          MR_Word Pieces_129;
          MR_Word Spec_130;
          MR_Word Var_131;
          MR_Word Var_136;

          Var_131 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
          Pieces_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[16])));
          {
            Spec_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_attr_specified\'/6"));
            MR_hl_field(MR_mktag(1), Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_130, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), Spec_130, 4) = ((MR_Box) (Pieces_129));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Spec_130));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeContextAttribute_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_136));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__require_tabling_fast_loose_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word EvalMethod_6,
  MR_Word Context_7,
  MR_Word * Specs_8)
{
  {
    MR_Word AllowsFastLoose_9;

    switch (MR_tag((MR_Word) EvalMethod_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(EvalMethod_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            AllowsFastLoose_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            AllowsFastLoose_9 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        AllowsFastLoose_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        AllowsFastLoose_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        AllowsFastLoose_9 = (MR_Integer) 0;
        break;
    }
    switch (AllowsFastLoose_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Pieces_10;
          MR_Word Spec_11;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_15;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_String Var_20;

          Var_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
          Var_20 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_6);
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_19, 0) = ((MR_Box) (Var_20));
          }
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[37])));
          }
          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[57])));
            MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
          }
          Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_12, Var_13);
          {
            Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.require_tabling_fast_loose\'/4"));
            MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_7));
            MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (Pieces_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Specs_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeContextAttribute_10;

    parse_tree__parse_pragma_tabling__parse_tabling_attribute_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeContextAttribute_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_MaybeContextAttribute_10));
  }
}

void MR_CALL 
parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ErrorTerm_12,
  MR_String PragmaName_13,
  MR_Word PragmaTerms_14,
  MR_Word Context_15,
  MR_Integer SeqNum_16,
  MR_Word EvalMethod0_17,
  MR_Word * MaybeIOM_18)
{
  if ((PragmaTerms_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_53;
    MR_Word Spec_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_70;
    MR_Word Var_71;

    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (PragmaName_13));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[4])));
    }
    {
      Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[54])));
      MR_hl_field(MR_mktag(1), Pieces_53, 1) = ((MR_Box) (Var_59));
    }
    Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
    {
      Spec_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9"));
      MR_hl_field(MR_mktag(1), Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_54, 3) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Spec_54, 4) = ((MR_Box) (Pieces_53));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_54));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
    }
  }
  else
  {
    MR_Word Var_581 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_14, (MR_Integer) 1))));
    MR_Word Var_582 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_14, (MR_Integer) 0))));

    if ((Var_581 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_22;
      MR_Word MaybeArityOrModes_23;
      MR_Word Var_76;
      MR_Word Var_79;
      MR_Word Var_80;

      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (PragmaName_13));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[6])));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[55])));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
      }
      ContextPieces_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76);
      parse_tree__parse_util__parse_arity_or_modes_6_p_0(ModuleName_10, Var_582, ErrorTerm_12, VarSet_11, ContextPieces_22, &MaybeArityOrModes_23);
      if (((MR_tag((MR_Word) MaybeArityOrModes_23)) == (MR_Integer) 0))
        *MaybeIOM_18 = (MR_Word) (MaybeArityOrModes_23);
      else
      {
        MR_Word ArityOrModes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArityOrModes_23, (MR_Integer) 0))));
        MR_Word PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_24, (MR_Integer) 0))));
        MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArityOrModes_24, (MR_Integer) 1))));
        MR_Word MaybePredOrFunc_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_24, (MR_Integer) 2))));
        MR_Word MaybeModes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_24, (MR_Integer) 3))));
        MR_Word PredNameArityMPF_29;
        MR_Word TabledInfo_30;
        MR_Word Pragma_31;
        MR_Word ItemPragma_32;
        MR_Word Item_33;
        MR_Word Var_108;

        {
          PredNameArityMPF_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredNameArityMPF_29, 0) = ((MR_Box) (PredName_25));
          MR_hl_field(MR_mktag(0), PredNameArityMPF_29, 1) = ((MR_Box) (Arity_26));
          MR_hl_field(MR_mktag(0), PredNameArityMPF_29, 2) = ((MR_Box) (MaybePredOrFunc_27));
        }
        {
          TabledInfo_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TabledInfo_30, 0) = ((MR_Box) (EvalMethod0_17));
          MR_hl_field(MR_mktag(0), TabledInfo_30, 1) = ((MR_Box) (PredNameArityMPF_29));
          MR_hl_field(MR_mktag(0), TabledInfo_30, 2) = ((MR_Box) (MaybeModes_28));
          MR_hl_field(MR_mktag(0), TabledInfo_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pragma_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Pragma_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Pragma_31, 1) = ((MR_Box) (TabledInfo_30));
        }
        {
          ItemPragma_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemPragma_32, 0) = ((MR_Box) (Pragma_31));
          MR_hl_field(MR_mktag(0), ItemPragma_32, 1) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), ItemPragma_32, 2) = ((MR_Box) (SeqNum_16));
        }
        {
          Item_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_33, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Item_33, 1) = ((MR_Box) (ItemPragma_32));
        }
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Item_33));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_108));
        }
      }
    }
    else
    {
      MR_Word Var_583 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_581, (MR_Integer) 1))));
      MR_Word Var_584 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_581, (MR_Integer) 0))));

      if ((Var_583 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeAttrs_504;
        MR_Word ContextPieces_505;
        MR_Word MaybeArityOrModes_506;
        MR_Word Var_532;
        MR_Word Var_535;
        MR_Word Var_536;

        {
          MaybeAttrs_504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeAttrs_504, 0) = ((MR_Box) (Var_584));
        }
        {
          Var_536 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_536, 0) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(3), Var_536, 1) = ((MR_Box) (PragmaName_13));
        }
        {
          Var_535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_535, 0) = ((MR_Box) (Var_536));
          MR_hl_field(MR_mktag(1), Var_535, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[6])));
        }
        {
          Var_532 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_532, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[55])));
          MR_hl_field(MR_mktag(1), Var_532, 1) = ((MR_Box) (Var_535));
        }
        ContextPieces_505 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_532);
        parse_tree__parse_util__parse_arity_or_modes_6_p_0(ModuleName_10, Var_582, ErrorTerm_12, VarSet_11, ContextPieces_505, &MaybeArityOrModes_506);
        if (((MR_tag((MR_Word) MaybeArityOrModes_506)) == (MR_Integer) 0))
          *MaybeIOM_18 = (MR_Word) (MaybeArityOrModes_506);
        else
        {
          MR_Word AttrsListTerm_310 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttrs_504, (MR_Integer) 0))));
          MR_Word AttrContextPieces_311;
          MR_Word MaybeAttributeList_312;
          MR_Word Var_325;
          MR_Word Var_328;
          MR_Word Var_332;
          MR_Word ArityOrModes_397 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArityOrModes_506, (MR_Integer) 0))));
          MR_Word PredName_398 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_397, (MR_Integer) 0))));
          MR_Integer Arity_399 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArityOrModes_397, (MR_Integer) 1))));
          MR_Word MaybePredOrFunc_400 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_397, (MR_Integer) 2))));
          MR_Word MaybeModes_401 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_397, (MR_Integer) 3))));

          {
            Var_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_328, 0) = ((MR_Box) (Var_536));
            MR_hl_field(MR_mktag(1), Var_328, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[6])));
          }
          {
            Var_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_325, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[56])));
            MR_hl_field(MR_mktag(1), Var_325, 1) = ((MR_Box) (Var_328));
          }
          AttrContextPieces_311 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_325);
          {
            Var_332 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_332, 0) = ((MR_Box) (&parse_tree__parse_pragma_tabling_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_332, 1) = ((MR_Box) (parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_332, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_332, 3) = ((MR_Box) (AttrContextPieces_311));
            MR_hl_field(MR_mktag(0), Var_332, 4) = ((MR_Box) (EvalMethod0_17));
          }
          parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_tabling_scalar_common_1[0]), (MR_String) "tabling attributes", Var_332, VarSet_11, AttrsListTerm_310, &MaybeAttributeList_312);
          if (((MR_tag((MR_Word) MaybeAttributeList_312)) == (MR_Integer) 0))
            *MaybeIOM_18 = (MR_Word) (MaybeAttributeList_312);
          else
          {
            MR_Word AttributeList_254 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributeList_312, (MR_Integer) 0))));
            MR_Word Attributes_255;
            MR_Word DuplicateSpecs_256;
            MR_Word Var_265;

            Var_265 = parse_tree__prog_data_pragma__default_memo_table_attributes_0_f_0();
            parse_tree__parse_pragma_tabling__update_tabling_attributes_5_p_0(AttributeList_254, Var_265, &Attributes_255, (MR_Word) ((MR_Unsigned) 0U), &DuplicateSpecs_256);
            if ((DuplicateSpecs_256 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DisableWarning_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_255, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word EvalMethod_209;
              MR_Word Var_217;
              MR_Word Var_218;
              MR_Word PredNameArityMPF_219;
              MR_Word TabledInfo_220;
              MR_Word Pragma_221;
              MR_Word ItemPragma_222;
              MR_Word Item_223;

              switch (DisableWarning_208) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  EvalMethod_209 = EvalMethod0_17;
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) EvalMethod0_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(EvalMethod0_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9", (MR_String) "non-pragma eval method");
                            return;
                          }
                          break;
                        case (MR_Integer) 1:
                          EvalMethod_209 = EvalMethod0_17;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      EvalMethod_209 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_4[0]));
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9", (MR_String) "non-pragma eval method");
                        return;
                      }
                      break;
                    case (MR_Integer) 3:
                      EvalMethod_209 = EvalMethod0_17;
                      break;
                  }
                  break;
              }
              {
                PredNameArityMPF_219 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredNameArityMPF_219, 0) = ((MR_Box) (PredName_398));
                MR_hl_field(MR_mktag(0), PredNameArityMPF_219, 1) = ((MR_Box) (Arity_399));
                MR_hl_field(MR_mktag(0), PredNameArityMPF_219, 2) = ((MR_Box) (MaybePredOrFunc_400));
              }
              {
                Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Attributes_255));
              }
              {
                TabledInfo_220 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TabledInfo_220, 0) = ((MR_Box) (EvalMethod_209));
                MR_hl_field(MR_mktag(0), TabledInfo_220, 1) = ((MR_Box) (PredNameArityMPF_219));
                MR_hl_field(MR_mktag(0), TabledInfo_220, 2) = ((MR_Box) (MaybeModes_401));
                MR_hl_field(MR_mktag(0), TabledInfo_220, 3) = ((MR_Box) (Var_217));
              }
              {
                Pragma_221 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Pragma_221, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Pragma_221, 1) = ((MR_Box) (TabledInfo_220));
              }
              {
                ItemPragma_222 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemPragma_222, 0) = ((MR_Box) (Pragma_221));
                MR_hl_field(MR_mktag(0), ItemPragma_222, 1) = ((MR_Box) (Context_15));
                MR_hl_field(MR_mktag(0), ItemPragma_222, 2) = ((MR_Box) (SeqNum_16));
              }
              {
                Item_223 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Item_223, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), Item_223, 1) = ((MR_Box) (ItemPragma_222));
              }
              {
                Var_218 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (Item_223));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_218));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_18 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DuplicateSpecs_256));
              }
          }
        }
      }
      else
      {
        MR_Word Pieces_145;
        MR_Word Spec_146;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_155;
        MR_Word Var_156;

        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PragmaName_13));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[4])));
        }
        {
          Pieces_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_tabling_scalar_common_2[54])));
          MR_hl_field(MR_mktag(1), Pieces_145, 1) = ((MR_Box) (Var_149));
        }
        Var_155 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
        {
          Spec_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_146, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.parse_tabling_pragma\'/9"));
          MR_hl_field(MR_mktag(1), Spec_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_146, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_146, 3) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(1), Spec_146, 4) = ((MR_Box) (Pieces_145));
        }
        {
          Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Spec_146));
          MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_156));
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
      MR_Word ContextAttrs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Attributes_102_102;
      MR_Word STATE_VARIABLE_Specs_120_120;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Attributes_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      Attr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Attr_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Attr_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
                MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
                MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

                succeeded = (Var_65 == (MR_Integer) 1);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_102_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 0) = ((MR_Box) (Var_165));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 1) = ((MR_Box) (Var_166));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 2) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
                  }
                  STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  MR_Word Spec_130;

                  {
                    Spec_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                    MR_hl_field(MR_mktag(1), Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_130, 3) = ((MR_Box) (Context_12));
                    MR_hl_field(MR_mktag(1), Spec_130, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[51])));
                  }
                  {
                    STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (Spec_130));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                  }
                  STATE_VARIABLE_Attributes_102_102 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
                MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
                MR_Word Var_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

                succeeded = (Var_47 == (MR_Integer) 1);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_102_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 0) = ((MR_Box) (Var_174));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 1) = ((MR_Box) (Var_175));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                  }
                  STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  MR_Word Spec_136;

                  {
                    Spec_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_136, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                    MR_hl_field(MR_mktag(1), Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_136, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_136, 3) = ((MR_Box) (Context_12));
                    MR_hl_field(MR_mktag(1), Spec_136, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[43])));
                  }
                  {
                    STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (Spec_136));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                  }
                  STATE_VARIABLE_Attributes_102_102 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
                MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
                MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

                succeeded = (Var_26 == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_Attributes_102_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 0) = ((MR_Box) (Var_183));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 1) = ((MR_Box) (Var_184));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 2) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                  STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_0_4;
                }
                else
                {
                  MR_Word Spec_142;

                  {
                    Spec_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_142, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                    MR_hl_field(MR_mktag(1), Spec_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_142, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_142, 3) = ((MR_Box) (Context_12));
                    MR_hl_field(MR_mktag(1), Spec_142, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[47])));
                  }
                  {
                    STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (Spec_142));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                  }
                  STATE_VARIABLE_Attributes_102_102 = STATE_VARIABLE_Attributes_0_2;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Strictness_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Attr_13, (MR_Integer) 0))));
            MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
            MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
            MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

            succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              {
                STATE_VARIABLE_Attributes_102_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 0) = ((MR_Box) (Strictness_17));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 1) = ((MR_Box) (Var_147));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 2) = (MR_Box) (packed_word_4);
              }
              STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_0_4;
            }
            else
            {
              MR_Word Spec_19;

              {
                Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[53])));
              }
              {
                STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (Spec_19));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
              }
              STATE_VARIABLE_Attributes_102_102 = STATE_VARIABLE_Attributes_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Limit_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Attr_13, (MR_Integer) 0))));
            MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))));
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 2)));

            succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Var_85;

              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Limit_20));
              }
              {
                STATE_VARIABLE_Attributes_102_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 0) = ((MR_Box) (Var_156));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 1) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_102_102, 2) = (MR_Box) (packed_word_2);
              }
              STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_0_4;
            }
            else
            {
              MR_Word Spec_124;

              {
                Spec_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_tabling.update_tabling_attributes\'/5"));
                MR_hl_field(MR_mktag(1), Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_124, 3) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(1), Spec_124, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_tabling_scalar_common_2[49])));
              }
              {
                STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (Spec_124));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
              }
              STATE_VARIABLE_Attributes_102_102 = STATE_VARIABLE_Attributes_0_2;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ContextAttrs_14;
      next_value_of_STATE_VARIABLE_Attributes_0_2 = STATE_VARIABLE_Attributes_102_102;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_120_120;
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
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_pragma_tabling____Unify____single_tabling_attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_pragma_tabling____Compare____single_tabling_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
