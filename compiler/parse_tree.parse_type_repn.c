/*
** Automatically generated from `parse_type_repn.m'
** by the Mercury compiler,
** version rotd-2019-11-12
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


// :- module parse_tree.parse_type_repn.
// :- implementation.

/*
INIT mercury__parse_tree__parse_type_repn__init
ENDINIT
*/

#include "parse_tree.parse_type_repn.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_pragma.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_defn.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_value_ordered_min_list_length_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_name_ordered_min_list_length_0[2];

static const MR_Integer parse_tree__parse_type_repn__parse_tree__parse_type_repn__functor_number_map_min_list_length_0[2];

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2061__1_2_p_0(
  MR_Word StringSpecs_13,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2048__1_2_p_0(
  MR_Word StringSpecs_13,
  MR_Word HeadVar__2_32);

static void MR_CALL 
parse_tree__parse_type_repn____Compare____min_list_length_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_repn____Unify____min_list_length_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_foreign_type_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDuRepn_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_only_functor_args_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeOnlyFunctorArgs_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_sizes_5_p_0(
  MR_Unsigned MaxNumBits_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_pos_sizes_5_p_0(
  MR_Unsigned MaxNumBits_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_pos_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeLocalPosSize_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functors_4_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDuFunctor_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_direct_args_6_p_0(
  MR_Unsigned MaxPtag_7,
  MR_Unsigned MaxNumBits_8,
  MR_Word VarSet_9,
  MR_String AtomStr_10,
  MR_Word Term_11,
  MR_Word * MaybeMaybeDirectArgs_12);

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_direct_args_loop_6_p_0(
  MR_Unsigned MaxPtag_1,
  MR_Unsigned MaxNumBits_2,
  MR_Word VarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_direct_arg_5_p_0(
  MR_Unsigned MaxPtag_6,
  MR_Unsigned MaxNumBits_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeMaybeDirectArg_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeArgPosSize_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_partial_6_p_0(
  MR_Unsigned MaxNumBits_7,
  MR_Word VarSet_8,
  MR_String AtomStr_9,
  MR_Word ArgTerms_10,
  MR_Word TermContext_11,
  MR_Word * MaybeArgPosSize_12);

static void MR_CALL 
parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeFillKindSize_8);

static void MR_CALL 
parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(
  MR_String AtomStr_6,
  MR_Word TermContext_7,
  MR_Word ArgTerms_8,
  MR_Word FillKindSize_9,
  MR_Word * MaybeFillKindSize_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_double_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeArgPosSize_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_full_or_none_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeArgPosSize_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_cell_offset_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCellOffset_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeArgOnlyOffset_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_ptag_sectag_5_p_0(
  MR_Unsigned MaxPtag_6,
  MR_Unsigned MaxNumBits_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybePtagSectag_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeUint_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_sectag_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeSectagSize_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(
  MR_Unsigned Max_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeUint_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_enum_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_direct_dummy_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_e_repn_or_enum_5_p_0(
  MR_Word VarSet_6,
  MR_Word DescPieces_7,
  MR_Word MinLength_8,
  MR_Word Term_9,
  MR_Word * MaybeCJCsERepnOrEnum_10);

static MR_Box MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0(
  MR_Word VarSet_1,
  MR_Word BasePieces_2,
  MR_Integer ElementNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_or_enum_repn_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPiecesFunc_6,
  MR_Word Term_7,
  MR_Word * MaybeForeignLangRepnOrEnum_8);

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_String Desc_8,
  MR_Word Term_9,
  MR_Word * MaybeOoMStrings_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_strings_7_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_String Desc_3,
  MR_Integer Nth_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPiecesFunc_6,
  MR_Word Term_7,
  MR_Word * MaybeForeignLangRepn_8);

static MR_Word MR_CALL 
parse_tree__parse_type_repn__require_foreign_repn_or_enum_list_spec_3_f_0(
  MR_Word DescPieces_5,
  MR_Word NonEmptyPieces_6,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_notag_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_e_repn_5_p_0(
  MR_Word VarSet_6,
  MR_Word DescPieces_7,
  MR_Word MinLength_8,
  MR_Word Term_9,
  MR_Word * MaybeCJCsERepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_111_99_95_108_105_115_116_95_116_111_95_99_95_106_95_99_115_95_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word TermContext_5,
  MR_Word Desc_6,
  MR_Word STATE_VARIABLE_Pairs_0_22,
  MR_Word * MaybeCJCsE_8);

static MR_Box MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0(
  MR_Word VarSet_1,
  MR_Word BasePieces_2,
  MR_Integer ElementNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn__ho1_4_p_0(
  MR_Word Var_85,
  MR_Integer Var_86,
  MR_Word VarSet_5,
  MR_Word ContextPiecesFunc_6,
  MR_Word Term_7,
  MR_Word * MaybeForeignLangRepn_8);

static MR_Word MR_CALL 
parse_tree__parse_type_repn__nth_element_of_2_f_0(
  MR_Word BasePieces_4,
  MR_Integer Nth_5);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_type_repn_6_p_0(
  MR_Word VarSet_7,
  MR_Word ContextPiecesFunc_8,
  MR_Word Lang_9,
  MR_Word TypeNameTerm_10,
  MR_Word AssertionTerm_11,
  MR_Word * MaybeForeignLangRepn_12);

static MR_Word MR_CALL 
parse_tree__parse_type_repn__require_foreign_repn_list_spec_3_f_0(
  MR_Word DescPieces_5,
  MR_Word NonEmptyPieces_6,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_repn__parse_string_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_String Desc_8,
  MR_Word Term_9,
  MR_Word * MaybeFunctorName_10);

static MR_Word MR_CALL 
parse_tree__parse_type_repn__malformed_du_prefix_0_f_0(void);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_has_direct_arg_functors_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_functor_with_arities_4_p_0(
  MR_String RepnStr_1,
  MR_Integer Nth_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_fits_in_n_bits_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_eqv_to_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(
  MR_String RepnStr_6,
  MR_Word RepnArgs_7,
  MR_Word RepnContext_8,
  MR_Word NoArgRepn_9,
  MR_Word * MaybeRepn_10);

static MR_bool MR_CALL 
parse_tree__parse_type_repn____Unify____min_list_length_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_repn____Compare____min_list_length_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[330][2];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[5][1];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_5[1][5];


/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0;
  const MR_Word parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_3_0_s parse_tree__parse_type_repn_vector_common_3[12];

/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_6_0_s parse_tree__parse_type_repn_vector_common_6[80];

/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_7_0_s parse_tree__parse_type_repn_vector_common_7[16];



static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[330][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_repn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_enum_foreign_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_direct_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item:"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exactly one argument."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and a description of its representation."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments: the type,"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have any arguments."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument, a type."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[12])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an integer and a fill kind."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments,"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be an integer."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a fill kind."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a list of function symbols with arities."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument,"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of function symbols with arities."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "functorname/arity"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "notag"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the second argument of"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_dummy"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[61])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have four arguments."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "enum"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In second argument of"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "third argument of"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a list of function symbols."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the third argument of"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the fourth argument of"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly four arguments."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of function symbol representations."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "fourth argument of"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du_only_functor"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[80])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "du_repn"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inside the only argument of"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed du type representation"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument representations."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly three arguments."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant_functor"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[80])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly five arguments."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nonconstant_functor"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[80])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have no argument."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a nonempty list of"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[124])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_uint64"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_int64"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_float"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be one of"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have exactly one argument."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must not have any one arguments."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrapped around type names and assertions."))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a nonempty list of foreign language names"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign type names and assertions."))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of foreign_language names wrapped around"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "list"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in that language."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a list of the names of the enum values"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[169])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the name of a foreign language and"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exactly two arguments,"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[175])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[180])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a foreign type name and a list of assertions."))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a foreign_language name wrapped around"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[183])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exactly one argument, which should be"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[193]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[194])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "erlang(\", assertions_list)"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[195])))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[197])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[198])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "csharp(type_name, assertions_list)"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[199])))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[202])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "java(type_name, assertions_list)"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[203])))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[205])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[206])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c(type_name, assertions_list)"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[207])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[209])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The permitted forms are"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which matches none of the permitted forms."))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[213])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[215])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and therefore not valid type name."))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not a string"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[218])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[220])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got an empty list."))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[222]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a nonempty list of strings,"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[223])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[225])))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "first c, then java, then csharp, then erlang."))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not follow the required order, which is"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[229]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[228])))
  },
  /* row 231 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 232 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the first argument of"))
  },
  /* row 233 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 235 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list in the second argument of"))
  },
  /* row 237 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 238 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 240 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 242 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[242]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 244 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected the empty string"))
  },
  /* row 245 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the Erlang type name, got"))
  },
  /* row 246 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type name in"))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[246]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 248 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 249 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[249]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 251 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[251]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 253 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 254 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element of the list"))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[254]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 256 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the list of foreign languages in"))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[256]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 258 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "nonempty"))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[258]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 260 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in the"))
  },
  /* row 261 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element of the list in"))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[261]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 263 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 264 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 265 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a list of strings, got"))
  },
  /* row 266 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: in the first argument of"))
  },
  /* row 267 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 268 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected one of"))
  },
  /* row 269 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 270 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c"))
  },
  /* row 271 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "csharp"))
  },
  /* row 272 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "java"))
  },
  /* row 273 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 274 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "erlang"))
  },
  /* row 275 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 276 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected either"))
  },
  /* row 277 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_type(...)"))
  },
  /* row 278 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 279 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_num(..., ...)"))
  },
  /* row 280 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected integer between 0 and"))
  },
  /* row 281 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 282 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sectag_rest_of_word"))
  },
  /* row 283 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sectag_bits(...)"))
  },
  /* row 284 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected nonnegative integer,"))
  },
  /* row 285 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_only(...)"))
  },
  /* row 286 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_local_sectag(...)"))
  },
  /* row 287 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_local_sectag_bits(...)"))
  },
  /* row 288 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_remote_sectag(...)"))
  },
  /* row 289 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_remote_sectag_bits(...)"))
  },
  /* row 290 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected nonnegative integer, got"))
  },
  /* row 291 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the third argument of"))
  },
  /* row 292 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a fill kind and size, got"))
  },
  /* row 293 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected one of"))
  },
  /* row 294 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "full(...)"))
  },
  /* row 295 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "double(...)"))
  },
  /* row 296 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "partial_first(...)"))
  },
  /* row 297 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "partial_shifted(...)"))
  },
  /* row 298 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none_shifted(...)"))
  },
  /* row 299 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none_nowhere"))
  },
  /* row 300 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg(...)"))
  },
  /* row 301 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nondirect_arg(...)"))
  },
  /* row 302 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant_functor(...)"))
  },
  /* row 303 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nonconstant_functor(...)"))
  },
  /* row 304 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 305 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local(...)"))
  },
  /* row 306 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 307 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "remote_args"))
  },
  /* row 308 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a nonempty list of"))
  },
  /* row 309 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local_args"))
  },
  /* row 310 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "notag(...)"))
  },
  /* row 311 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_dummy(...)"))
  },
  /* row 312 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "enum(...)"))
  },
  /* row 313 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du"))
  },
  /* row 314 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du_only_functor"))
  },
  /* row 315 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the argument of"))
  },
  /* row 316 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in second argument of a"))
  },
  /* row 317 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 318 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item:"))
  },
  /* row 319 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of a"))
  },
  /* row 320 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row 321 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should specify the type\'s representation."))
  },
  /* row 322 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_direct_dummy"))
  },
  /* row 323 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_notag"))
  },
  /* row 324 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_eqv_to"))
  },
  /* row 325 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fits_in_n_bits"))
  },
  /* row 326 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_word_aligned_ptr"))
  },
  /* row 327 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "has_direct_arg_functors"))
  },
  /* row 328 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "du_repn"))
  },
  /* row 329 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "maybe_foreign_type_repn"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[5][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_3_0_s parse_tree__parse_type_repn_vector_common_3[12] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
  /* row 4 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 7 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
  /* row 8 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 9 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 11 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_6_0_s parse_tree__parse_type_repn_vector_common_6[80] = {
  /* row 0 */   {     (MR_String) "ptag_local_sectag" },
  /* row 1 */   {     (MR_String) "ptag_local_sectag_bits" },
  /* row 2 */   {     (MR_String) "ptag_only" },
  /* row 3 */   {     (MR_String) "ptag_remote_sectag" },
  /* row 4 */   {     (MR_String) "ptag_remote_sectag_bits" },
  /* row 5 */   {     (MR_String) "double" },
  /* row 6 */   {     (MR_String) "full" },
  /* row 7 */   {     (MR_String) "none_nowhere" },
  /* row 8 */   {     (MR_String) "none_shifted" },
  /* row 9 */   {     (MR_String) "partial_first" },
  /* row 10 */   {     (MR_String) "partial_shifted" },
  /* row 11 */   {     (MR_String) "direct_dummy" },
  /* row 12 */   {     (MR_String) "enum" },
  /* row 13 */   {     (MR_String) "gen_du" },
  /* row 14 */   {     (MR_String) "gen_du_only_functor" },
  /* row 15 */   {     (MR_String) "notag" },
  /* row 16 */   {     (MR_String) "fits_in_n_bits" },
  /* row 17 */   {     NULL },
  /* row 18 */   {     (MR_String) "is_direct_dummy" },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "is_notag" },
  /* row 21 */   {     NULL },
  /* row 22 */   {     (MR_String) "foreign_type_repn" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     (MR_String) "is_word_aligned_ptr" },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     (MR_String) "is_eqv_to" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     NULL },
  /* row 37 */   {     (MR_String) "has_direct_arg_functors" },
  /* row 38 */   {     (MR_String) "du_repn" },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "fits_in_n_bits" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     (MR_String) "is_direct_dummy" },
  /* row 51 */   {     NULL },
  /* row 52 */   {     (MR_String) "is_notag" },
  /* row 53 */   {     NULL },
  /* row 54 */   {     (MR_String) "foreign_type_repn" },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     (MR_String) "is_word_aligned_ptr" },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     (MR_String) "is_eqv_to" },
  /* row 65 */   {     NULL },
  /* row 66 */   {     NULL },
  /* row 67 */   {     NULL },
  /* row 68 */   {     NULL },
  /* row 69 */   {     (MR_String) "has_direct_arg_functors" },
  /* row 70 */   {     (MR_String) "du_repn" },
  /* row 71 */   {     NULL },
  /* row 72 */   {     NULL },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     NULL },
  /* row 77 */   {     NULL },
  /* row 78 */   {     NULL },
  /* row 79 */   {     NULL },
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_7_0_s parse_tree__parse_type_repn_vector_common_7[16] = {
  /* row 0 */
  {
    (MR_String) "ptag_local_sectag",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "ptag_local_sectag_bits",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "ptag_only",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "ptag_remote_sectag",
    (MR_Integer) 0
  },
  /* row 4 */
  {
    (MR_String) "ptag_remote_sectag_bits",
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_String) "double",
    (MR_Integer) 0
  },
  /* row 6 */
  {
    (MR_String) "full",
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "none_nowhere",
    (MR_Integer) 2
  },
  /* row 8 */
  {
    (MR_String) "none_shifted",
    (MR_Integer) 3
  },
  /* row 9 */
  {
    (MR_String) "partial_first",
    (MR_Integer) 4
  },
  /* row 10 */
  {
    (MR_String) "partial_shifted",
    (MR_Integer) 4
  },
  /* row 11 */
  {
    (MR_String) "direct_dummy",
    (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "enum",
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) "gen_du",
    (MR_Integer) 2
  },
  /* row 14 */
  {
    (MR_String) "gen_du_only_functor",
    (MR_Integer) 3
  },
  /* row 15 */
  {
    (MR_String) "notag",
    (MR_Integer) 4
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_0 = {
  (MR_String) "min_list_length_0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_1 = {
  (MR_String) "min_list_length_1",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_value_ordered_min_list_length_0[2] = {
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_0,
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_name_ordered_min_list_length_0[2] = {
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_0,
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_min_list_length_0_1
};

static const MR_Integer parse_tree__parse_type_repn__parse_tree__parse_type_repn__functor_number_map_min_list_length_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_repn__parse_tree__parse_type_repn__type_ctor_info_min_list_length_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_repn____Unify____min_list_length_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_repn____Compare____min_list_length_0_0_10001)),
  (MR_String) "parse_tree.parse_type_repn",
  (MR_String) "min_list_length",
  {     parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_name_ordered_min_list_length_0 },
  {     parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_value_ordered_min_list_length_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_type_repn__parse_tree__parse_type_repn__functor_number_map_min_list_length_0
};

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2061__1_2_p_0(
  MR_Word StringSpecs_13,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[8]), ((MR_Box) (StringSpecs_13)), ((MR_Box) (HeadVar__2_28)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2048__1_2_p_0(
  MR_Word StringSpecs_13,
  MR_Word HeadVar__2_32)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[8]), ((MR_Box) (StringSpecs_13)), ((MR_Box) (HeadVar__2_32)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn____Compare____min_list_length_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn____Unify____min_list_length_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_item_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_114_101_112_110_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_114_101_112_110_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeTerm_13;
    MR_Word RepnTerm_14;
    MR_Word Var_41;
    MR_Word Var_42;

    if (succeeded)
    {
      TypeTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RepnTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word TypeContextPieces_15;
      MR_Word MaybeTypeSymNameAndArgs_16;
      MR_Word MaybeRepn_20;
      MR_Word Var_53;
      MR_String AtomStr_17;
      MR_Word RepnArgs_18;
      MR_Word RepnContext_19;
      MR_Word Var_54;
      MR_Integer slot_0;
      MR_String str_1;
      MR_Word TypeCtorSymName_33;
      MR_Word TypeArgVars_34;
      MR_Word Repn_35;

      TypeContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[14])));
      Var_53 = parse_tree__parse_sym_name__root_module_name_0_f_0();
      parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeContextPieces_15, Var_53, VarSet_8, TypeTerm_13, &MaybeTypeSymNameAndArgs_16);
      succeeded = ((MR_tag((MR_Word) RepnTerm_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnTerm_14, (MR_Integer) 0))));
        RepnArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnTerm_14, (MR_Integer) 1))));
        RepnContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnTerm_14, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
        if (succeeded)
        {
          AtomStr_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
          // hashed string simple lookup switch
          ;
          // compute the hash value of the input string
          ;
          slot_0 = ((MR_hash_string5(AtomStr_17)) & (MR_Integer) 31);
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          str_1 = ((&parse_tree__parse_type_repn_vector_common_6[16 + slot_0]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0;
          // did we find a match?
          ;
          if ((((str_1 != NULL)) && ((strcmp(str_1, AtomStr_17) == 0))))
          {
            // we found a match; look up the results
            ;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          succeeded = MR_FALSE;
        label_0:;
        }
      }
      if (succeeded)
      {
        MR_Integer slot_2 = ((MR_hash_string5(AtomStr_17)) & (MR_Integer) 31);
        MR_String str_3 = ((&parse_tree__parse_type_repn_vector_common_6[48 + slot_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0;

        // hashed string jump switch
        ;
        // compute the hash value of the input string
        ;
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        // did we find a match?
        ;
        if ((((str_3 != NULL)) && ((strcmp(str_3, AtomStr_17) == 0))))
        {
          // we found a match; dispatch to the corresponding code
          ;
          switch (slot_2) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "fits_in_n_bits"
                ;
                parse_tree__parse_type_repn__parse_type_repn_fits_in_n_bits_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 2:
              {
                // case "is_direct_dummy"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 0U), &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 4:
              {
                // case "is_notag"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 4U), &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 6:
              {
                // case "foreign_type_repn"
                ;
                parse_tree__parse_type_repn__parse_type_repn_foreign_type_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 12:
              {
                // case "is_word_aligned_ptr"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 8U), &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 16:
              {
                // case "is_eqv_to"
                ;
                parse_tree__parse_type_repn__parse_type_repn_eqv_to_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 21:
              {
                // case "has_direct_arg_functors"
                ;
                parse_tree__parse_type_repn__parse_type_repn_has_direct_arg_functors_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 22:
              {
                // case "du_repn"
                ;
                if ((RepnArgs_18 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word DuPieces_28;
                  MR_Word DuSpec_29;
                  MR_Word Var_58;
                  MR_Word Var_61;
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word Var_77;

                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (AtomStr_17));
                  }
                  {
                    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
                    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[19])));
                  }
                  {
                    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[318])));
                    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
                  }
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[317])));
                    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
                  }
                  {
                    DuPieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), DuPieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[316])));
                    MR_hl_field(MR_mktag(1), DuPieces_28, 1) = ((MR_Box) (Var_58));
                  }
                  {
                    DuSpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), DuSpec_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), DuSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), DuSpec_29, 2) = ((MR_Box) (RepnContext_19));
                    MR_hl_field(MR_mktag(1), DuSpec_29, 3) = ((MR_Box) (DuPieces_28));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (DuSpec_29));
                    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_77));
                  }
                }
                else
                {
                  MR_Word Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_18, (MR_Integer) 1))));
                  MR_Word Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_18, (MR_Integer) 0))));

                  if ((Var_223 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeDuRepn_22;

                    parse_tree__parse_type_repn__parse_type_repn_du_3_p_0(VarSet_8, Var_224, &MaybeDuRepn_22);
                    if (((MR_tag((MR_Word) MaybeDuRepn_22)) == (MR_Integer) 0))
                      MaybeRepn_20 = (MR_Word) (MaybeDuRepn_22);
                    else
                    {
                      MR_Word DuRepn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuRepn_22, (MR_Integer) 0))));
                      MR_Word Var_80;

                      {
                        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (DuRepn_23));
                      }
                      {
                        MaybeRepn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeRepn_20, 0) = ((MR_Box) (Var_80));
                      }
                    }
                  }
                  else
                  {
                    MR_Word DuPieces_189;
                    MR_Word DuSpec_190;
                    MR_Word Var_193;
                    MR_Word Var_196;
                    MR_Word Var_199;
                    MR_Word Var_200;
                    MR_Word Var_204;

                    {
                      Var_200 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_200, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_200, 1) = ((MR_Box) (AtomStr_17));
                    }
                    {
                      Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Var_200));
                      MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[19])));
                    }
                    {
                      Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[318])));
                      MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_199));
                    }
                    {
                      Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[317])));
                      MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_196));
                    }
                    {
                      DuPieces_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DuPieces_189, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[316])));
                      MR_hl_field(MR_mktag(1), DuPieces_189, 1) = ((MR_Box) (Var_193));
                    }
                    {
                      DuSpec_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DuSpec_190, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), DuSpec_190, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), DuSpec_190, 2) = ((MR_Box) (RepnContext_19));
                      MR_hl_field(MR_mktag(1), DuSpec_190, 3) = ((MR_Box) (DuPieces_189));
                    }
                    {
                      Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (DuSpec_190));
                      MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_204));
                    }
                  }
                }
              }
              break;
          }
        }
      }
      else
      {
        MR_String RepnTermStr_30;
        MR_Word RepnPieces_31;
        MR_Word RepnSpec_32;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_104;
        MR_Word Var_107;
        MR_Word Var_110;
        MR_Word Var_113;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_125;
        MR_Word Var_128;
        MR_Word Var_131;
        MR_Word Var_134;
        MR_Word Var_137;
        MR_Word Var_140;
        MR_Word Var_143;
        MR_Word Var_146;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_159;
        MR_Word Var_160;

        RepnTermStr_30 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, RepnTerm_14);
        Var_102 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239]));
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (RepnTermStr_30));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
        }
        {
          Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
          MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_149));
        }
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_146));
        }
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[329])));
          MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
        }
        {
          Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
          MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_140));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[328])));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[327])));
          MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_131));
        }
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[326])));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[325])));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[324])));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[323])));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_107));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[322])));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[293])));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[321])));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[320])));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[317])));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
        }
        {
          RepnPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RepnPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[319])));
          MR_hl_field(MR_mktag(1), RepnPieces_31, 1) = ((MR_Box) (Var_86));
        }
        Var_159 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RepnTerm_14);
        {
          RepnSpec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RepnSpec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), RepnSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), RepnSpec_32, 2) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(1), RepnSpec_32, 3) = ((MR_Box) (RepnPieces_31));
        }
        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (RepnSpec_32));
          MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_160));
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeTypeSymNameAndArgs_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorSymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeSymNameAndArgs_16, (MR_Integer) 0))));
        TypeArgVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeSymNameAndArgs_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeRepn_20)) == (MR_Integer) 1);
        if (succeeded)
          Repn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_20, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word TVarSet_36;
        MR_Word ItemRepnInfo_37;
        MR_Word Item_38;
        MR_Word Var_162;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_36);
        {
          ItemRepnInfo_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemRepnInfo_37, 0) = ((MR_Box) (TypeCtorSymName_33));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_37, 1) = ((MR_Box) (TypeArgVars_34));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_37, 2) = ((MR_Box) (Repn_35));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_37, 3) = ((MR_Box) (TVarSet_36));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_37, 4) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_37, 5) = ((MR_Box) (SeqNum_11));
        }
        {
          Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemRepnInfo_37));
        }
        {
          Var_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (Item_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_162));
        }
      }
      else
        *MaybeIOM_12 = (MR_Word) (&parse_tree__parse_type_repn_scalar_common_2[4]);
    }
    else
    {
      MR_Word Spec_40;
      MR_Word Var_183;

      {
        Spec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_40, 2) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_40, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[31])));
      }
      {
        Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Spec_40));
        MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_183));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_foreign_type_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10)
{
  if ((RepnArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_40;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (RepnStr_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[161])));
    }
    {
      Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
      MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_24));
    }
    {
      Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) (RepnContext_9));
      MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Pieces_19));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
    }
  }
  else
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 0))));

    if ((Var_72 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DescPieces_12;
      MR_Word MaybeCJCsERepn_13;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DescPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[315])));
        MR_hl_field(MR_mktag(1), DescPieces_12, 1) = ((MR_Box) (Var_45));
      }
      parse_tree__parse_type_repn__parse_c_j_cs_e_repn_5_p_0(VarSet_6, DescPieces_12, (MR_Integer) 1, Var_73, &MaybeCJCsERepn_13);
      if (((MR_tag((MR_Word) MaybeCJCsERepn_13)) == (MR_Integer) 0))
        *MaybeRepn_10 = (MR_Word) (MaybeCJCsERepn_13);
      else
      {
        MR_Word CJCsERepn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCJCsERepn_13, (MR_Integer) 0))));
        MR_Word Var_49;

        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (CJCsERepn_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeRepn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
        }
      }
    }
    else
    {
      MR_Word Pieces_50;
      MR_Word Spec_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_59;

      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[161])));
      }
      {
        Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_50, 1) = ((MR_Box) (Var_54));
      }
      {
        Spec_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_51, 2) = ((MR_Box) (RepnContext_9));
        MR_hl_field(MR_mktag(1), Spec_51, 3) = ((MR_Box) (Pieces_50));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_51));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDuRepn_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_String AtomStr_7;
    MR_Word ArgTerms_8;
    MR_Word TermContext_9;
    MR_Word Var_13;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      ArgTerms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      TermContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 4;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(AtomStr_7, ((&parse_tree__parse_type_repn_vector_common_6[11 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0);
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
      MR_Integer hi_5 = (MR_Integer) 4;
      MR_Integer mid_6;
      MR_Integer result_7;

      // binary string jump switch
      ;
      do
      {
        mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
        result_7 = MR_strcmp(AtomStr_7, ((&parse_tree__parse_type_repn_vector_common_7[11 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_7[11 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "direct_dummy"
                ;
                parse_tree__parse_type_repn__parse_type_repn_du_direct_dummy_4_p_0(VarSet_4, TermContext_9, ArgTerms_8, MaybeDuRepn_6);
              }
              break;
            case (MR_Integer) 1:
              {
                // case "enum"
                ;
                parse_tree__parse_type_repn__parse_type_repn_du_enum_4_p_0(VarSet_4, TermContext_9, ArgTerms_8, MaybeDuRepn_6);
              }
              break;
            case (MR_Integer) 2:
              {
                // case "gen_du"
                ;
                parse_tree__parse_type_repn__parse_type_repn_du_gen_du_4_p_0(VarSet_4, TermContext_9, ArgTerms_8, MaybeDuRepn_6);
              }
              break;
            case (MR_Integer) 3:
              {
                // case "gen_du_only_functor"
                ;
                parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_4_p_0(VarSet_4, TermContext_9, ArgTerms_8, MaybeDuRepn_6);
              }
              break;
            case (MR_Integer) 4:
              {
                // case "notag"
                ;
                parse_tree__parse_type_repn__parse_type_repn_du_notag_4_p_0(VarSet_4, TermContext_9, ArgTerms_8, MaybeDuRepn_6);
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
      MR_String TermStr_10;
      MR_Word Pieces_11;
      MR_Word Spec_12;
      MR_Word Var_16;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_62;

      TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      Var_20 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239]));
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (TermStr_10));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[314])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[313])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[312])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[311])));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[310])));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
      }
      {
        Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[293])));
        MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_16));
      }
      Var_59 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[122])), Pieces_11);
      {
        Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Var_60));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Spec_12));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_38;
      MR_Word Var_62;

      {
        Spec_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_38, 2) = ((MR_Box) (TermContext_6));
        MR_hl_field(MR_mktag(1), Spec_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[112])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Spec_38));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      }
    }
    else
    {
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));

      if ((Var_128 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_99;
        MR_Word Var_102;

        {
          Spec_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_99, 2) = ((MR_Box) (TermContext_6));
          MR_hl_field(MR_mktag(1), Spec_99, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[112])));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Spec_99));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
        }
      }
      else
      {
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_128, (MR_Integer) 1))));
        MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_128, (MR_Integer) 0))));

        if ((Var_130 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_105;
          MR_Word Var_108;

          {
            Spec_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_105, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_105, 2) = ((MR_Box) (TermContext_6));
            MR_hl_field(MR_mktag(1), Spec_105, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[112])));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Spec_105));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
          }
        }
        else
        {
          MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_130, (MR_Integer) 1))));
          MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_130, (MR_Integer) 0))));

          if ((Var_132 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_111;
            MR_Word Var_114;

            {
              Spec_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_111, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_111, 2) = ((MR_Box) (TermContext_6));
              MR_hl_field(MR_mktag(1), Spec_111, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[112])));
            }
            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Spec_111));
              MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
            }
          }
          else
          {
            MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_132, (MR_Integer) 1))));
            MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_132, (MR_Integer) 0))));

            if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeFunctorName_14;
              MR_Word MaybeOnlyFunctorArgs64_15;
              MR_Word MaybeOnlyFunctorArgs32_16;
              MR_Word MaybeCJCsERepn_18;
              MR_String FunctorName_19;
              MR_Word OnlyFunctorArgs64_20;
              MR_Word OnlyFunctorArgs32_21;
              MR_Word CJCsERepn_22;

              parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[114])), (MR_String) "function symbol", Var_129, &MaybeFunctorName_14);
              parse_tree__parse_type_repn__parse_only_functor_args_4_p_0((MR_Unsigned) 63U, VarSet_5, Var_131, &MaybeOnlyFunctorArgs64_15);
              parse_tree__parse_type_repn__parse_only_functor_args_4_p_0((MR_Unsigned) 31U, VarSet_5, Var_133, &MaybeOnlyFunctorArgs32_16);
              parse_tree__parse_type_repn__parse_c_j_cs_e_repn_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[116])), (MR_Integer) 0, Var_135, &MaybeCJCsERepn_18);
              succeeded = ((MR_tag((MR_Word) MaybeFunctorName_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                FunctorName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_14, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeOnlyFunctorArgs64_15)) == (MR_Integer) 1);
                if (succeeded)
                {
                  OnlyFunctorArgs64_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyFunctorArgs64_15, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeOnlyFunctorArgs32_16)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OnlyFunctorArgs32_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyFunctorArgs32_16, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeCJCsERepn_18)) == (MR_Integer) 1);
                    if (succeeded)
                      CJCsERepn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCJCsERepn_18, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word OnlyFunctor_23;
                MR_Word Var_87;

                {
                  OnlyFunctor_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OnlyFunctor_23, 0) = ((MR_Box) (FunctorName_19));
                  MR_hl_field(MR_mktag(0), OnlyFunctor_23, 1) = ((MR_Box) (OnlyFunctorArgs64_20));
                  MR_hl_field(MR_mktag(0), OnlyFunctor_23, 2) = ((MR_Box) (OnlyFunctorArgs32_21));
                  MR_hl_field(MR_mktag(0), OnlyFunctor_23, 3) = ((MR_Box) (CJCsERepn_22));
                }
                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (OnlyFunctor_23));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeDuRepn_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_87));
                }
              }
              else
              {
                MR_Word Specs_24;
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_93;

                Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_14);
                Var_90 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_only_functor_args_0), MaybeOnlyFunctorArgs64_15);
                Var_92 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_only_functor_args_0), MaybeOnlyFunctorArgs32_16);
                Var_93 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeCJCsERepn_18);
                Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_92, Var_93);
                Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_90, Var_91);
                Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_88, Var_89);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuRepn_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
                }
              }
            }
            else
            {
              MR_Word Spec_117;
              MR_Word Var_120;

              {
                Spec_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_117, 2) = ((MR_Box) (TermContext_6));
                MR_hl_field(MR_mktag(1), Spec_117, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[112])));
              }
              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Spec_117));
                MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuRepn_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_120));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_only_functor_args_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeOnlyFunctorArgs_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String AtomStr_9;
    MR_Word ArgTerms_10;
    MR_Word TermContext_11;
    MR_Word Var_29;

    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
        if ((strcmp(AtomStr_9, (MR_String) "local_args") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(AtomStr_9, (MR_String) "remote_args") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String TermStr_28;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_57;
        MR_Word Pieces_124;
        MR_Word Spec_125;

        TermStr_28 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (TermStr_28));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[307])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[306])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Pieces_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_124, 1) = ((MR_Box) (Var_33));
        }
        {
          Spec_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_125, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_125, 2) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(1), Spec_125, 3) = ((MR_Box) (Pieces_124));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Spec_125));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOnlyFunctorArgs_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
        }
      }
      else
      {
        MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
        MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

        if ((Var_189 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word HeadElementTerm_14;
          MR_Word TailElementTerms_15;
          MR_Word ElementTerms_13;

          succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_190, &ElementTerms_13);
          if (succeeded)
          {
            succeeded = (ElementTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadElementTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementTerms_13, (MR_Integer) 0))));
              TailElementTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementTerms_13, (MR_Integer) 1))));
            }
          }
          if (succeeded)
            if ((strcmp(AtomStr_9, (MR_String) "local_args") == 0))
            {
              MR_Word MaybeHeadArg_16;
              MR_Word TailArgs_17;
              MR_Word TailSpecs_18;
              MR_Word HeadArg_19;

              parse_tree__parse_type_repn__parse_local_pos_size_4_p_0(MaxNumBits_5, VarSet_6, HeadElementTerm_14, &MaybeHeadArg_16);
              parse_tree__parse_type_repn__parse_local_pos_sizes_5_p_0(MaxNumBits_5, VarSet_6, TailElementTerms_15, &TailArgs_17, &TailSpecs_18);
              succeeded = (TailSpecs_18 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeHeadArg_16)) == (MR_Integer) 1);
                if (succeeded)
                  HeadArg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadArg_16, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word OnlyFunctorArgs_20;
                MR_Word Var_62;

                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (HeadArg_19));
                  MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (TailArgs_17));
                }
                {
                  OnlyFunctorArgs_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OnlyFunctorArgs_20, 0) = ((MR_Box) (Var_62));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeOnlyFunctorArgs_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OnlyFunctorArgs_20));
                }
              }
              else
              {
                MR_Word Specs_21;
                MR_Word Var_63;

                Var_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_pos_size_0), MaybeHeadArg_16);
                Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_63, TailSpecs_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeOnlyFunctorArgs_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
                }
              }
            }
            else
            {
              MR_Word MaybeHeadArg_118;
              MR_Word TailArgs_119;
              MR_Word TailSpecs_120;
              MR_Word HeadArg_115;

              parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(MaxNumBits_5, VarSet_6, HeadElementTerm_14, &MaybeHeadArg_118);
              parse_tree__parse_type_repn__parse_arg_pos_sizes_5_p_0(MaxNumBits_5, VarSet_6, TailElementTerms_15, &TailArgs_119, &TailSpecs_120);
              succeeded = (TailSpecs_120 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeHeadArg_118)) == (MR_Integer) 1);
                if (succeeded)
                  HeadArg_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadArg_118, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_60;
                MR_Word OnlyFunctorArgs_113;

                {
                  Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (HeadArg_115));
                  MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (TailArgs_119));
                }
                {
                  OnlyFunctorArgs_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OnlyFunctorArgs_113, 0) = ((MR_Box) (Var_60));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeOnlyFunctorArgs_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OnlyFunctorArgs_113));
                }
              }
              else
              {
                MR_Word Var_61;
                MR_Word Specs_114;

                Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_arg_pos_size_0), MaybeHeadArg_118);
                Specs_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, TailSpecs_120);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeOnlyFunctorArgs_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_114));
                }
              }
            }
          else
          {
            MR_String LR_22;
            MR_Word Pieces_23;
            MR_Word Spec_24;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_81;

            if ((strcmp(AtomStr_9, (MR_String) "local_args") == 0))
              LR_22 = (MR_String) "local";
            else
              LR_22 = (MR_String) "remote";
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (LR_22));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[124])));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[308])));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[237])));
              MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_66));
            }
            {
              Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Pieces_23));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeOnlyFunctorArgs_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
            }
          }
        }
        else
        {
          MR_String TermStr_135;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_143;
          MR_Word Var_146;
          MR_Word Var_149;
          MR_Word Var_152;
          MR_Word Var_153;
          MR_Word Var_157;
          MR_Word Pieces_159;
          MR_Word Spec_160;

          TermStr_135 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_153, 1) = ((MR_Box) (TermStr_135));
          }
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Var_153));
            MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
          }
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
            MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_152));
          }
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
            MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_149));
          }
          {
            Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[307])));
            MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_146));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[306])));
            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
          }
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
          }
          {
            Pieces_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_159, 1) = ((MR_Box) (Var_138));
          }
          {
            Spec_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_160, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_160, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_160, 2) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(1), Spec_160, 3) = ((MR_Box) (Pieces_159));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Spec_160));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeOnlyFunctorArgs_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_157));
          }
        }
      }
    else
    {
      MR_Word Var_85;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Pieces_126;
      MR_Word Spec_127;
      MR_String TermStr_128;

      TermStr_128 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (TermStr_128));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_97));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[307])));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[309])));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
      }
      {
        Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[281])));
        MR_hl_field(MR_mktag(1), Pieces_126, 1) = ((MR_Box) (Var_85));
      }
      Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_127, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_127, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_127, 2) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(1), Spec_127, 3) = ((MR_Box) (Pieces_126));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_127));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeOnlyFunctorArgs_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_sizes_5_p_0(
  MR_Unsigned MaxNumBits_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Terms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MaybeArgPosSize_14;
    MR_Word STATE_VARIABLE_ArgPosSizes_18_18;
    MR_Word STATE_VARIABLE_Specs_19_19;

    parse_tree__parse_type_repn__parse_arg_pos_sizes_5_p_0(MaxNumBits_1, VarSet_2, Terms_11, &STATE_VARIABLE_ArgPosSizes_18_18, &STATE_VARIABLE_Specs_19_19);
    parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(MaxNumBits_1, VarSet_2, Term_10, &MaybeArgPosSize_14);
    if (((MR_tag((MR_Word) MaybeArgPosSize_14)) == (MR_Integer) 0))
    {
      MR_Word Specs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeArgPosSize_14, (MR_Integer) 0))));

      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_13, STATE_VARIABLE_Specs_19_19);
      *HeadVar__4_4 = STATE_VARIABLE_ArgPosSizes_18_18;
    }
    else
    {
      MR_Word ArgPosSize_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgPosSize_14, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPosSize_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ArgPosSizes_18_18));
      }
      *HeadVar__5_5 = STATE_VARIABLE_Specs_19_19;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_pos_sizes_5_p_0(
  MR_Unsigned MaxNumBits_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Terms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MaybeLocalPosSize_14;
    MR_Word STATE_VARIABLE_LocalPosSizes_18_18;
    MR_Word STATE_VARIABLE_Specs_19_19;

    parse_tree__parse_type_repn__parse_local_pos_sizes_5_p_0(MaxNumBits_1, VarSet_2, Terms_11, &STATE_VARIABLE_LocalPosSizes_18_18, &STATE_VARIABLE_Specs_19_19);
    parse_tree__parse_type_repn__parse_local_pos_size_4_p_0(MaxNumBits_1, VarSet_2, Term_10, &MaybeLocalPosSize_14);
    if (((MR_tag((MR_Word) MaybeLocalPosSize_14)) == (MR_Integer) 0))
    {
      MR_Word Specs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLocalPosSize_14, (MR_Integer) 0))));

      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_13, STATE_VARIABLE_Specs_19_19);
      *HeadVar__4_4 = STATE_VARIABLE_LocalPosSizes_18_18;
    }
    else
    {
      MR_Word LocalPosSize_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLocalPosSize_14, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LocalPosSize_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_LocalPosSizes_18_18));
      }
      *HeadVar__5_5 = STATE_VARIABLE_Specs_19_19;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_pos_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeLocalPosSize_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String AtomStr_9;
    MR_Word ArgTerms_10;
    MR_Word TermContext_11;
    MR_Word Var_28;

    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
        succeeded = (strcmp(AtomStr_9, (MR_String) "local") == 0);
      }
    }
    if (succeeded)
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_44;

        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
        }
        {
          Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_34));
        }
        {
          Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Pieces_25));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLocalPosSize_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
        }
      }
      else
      {
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
        MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

        if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_80;
          MR_Word Spec_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_89;

          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
          }
          {
            Pieces_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_80, 1) = ((MR_Box) (Var_84));
          }
          {
            Spec_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_81, 2) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(1), Spec_81, 3) = ((MR_Box) (Pieces_80));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Spec_81));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLocalPosSize_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
          }
        }
        else
        {
          MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 1))));
          MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 0))));

          if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeShift_14;
            MR_Word MaybeFillKindSize_15;
            MR_Unsigned Shift_16;
            MR_Word FillKindSize_17;

            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_5, VarSet_6, Var_114, &MaybeShift_14);
            parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(MaxNumBits_5, VarSet_6, Var_116, &MaybeFillKindSize_15);
            succeeded = ((MR_tag((MR_Word) MaybeShift_14)) == (MR_Integer) 1);
            if (succeeded)
            {
              Shift_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeShift_14, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeFillKindSize_15)) == (MR_Integer) 1);
              if (succeeded)
                FillKindSize_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFillKindSize_15, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word LocalPosSize_18;

              {
                LocalPosSize_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LocalPosSize_18, 0) = ((MR_Box) (Shift_16));
                MR_hl_field(MR_mktag(0), LocalPosSize_18, 1) = ((MR_Box) (FillKindSize_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeLocalPosSize_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LocalPosSize_18));
              }
            }
            else
            {
              MR_Word Specs_19;
              MR_Word Var_48;
              MR_Word Var_49;

              Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeShift_14);
              Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fill_kind_size_0), MaybeFillKindSize_15);
              Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_48, Var_49);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeLocalPosSize_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
              }
            }
          }
          else
          {
            MR_Word Pieces_91;
            MR_Word Spec_92;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_100;

            {
              Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
            }
            {
              Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_91, 1) = ((MR_Box) (Var_95));
            }
            {
              Spec_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_92, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_92, 2) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(1), Spec_92, 3) = ((MR_Box) (Pieces_91));
            }
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Spec_92));
              MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeLocalPosSize_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
            }
          }
        }
      }
    else
    {
      MR_String TermStr_27;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Pieces_74;
      MR_Word Spec_75;

      TermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (TermStr_27));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[305])));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
      }
      {
        Pieces_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[304])));
        MR_hl_field(MR_mktag(1), Pieces_74, 1) = ((MR_Box) (Var_52));
      }
      Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_75, 2) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Spec_75, 3) = ((MR_Box) (Pieces_74));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_75));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLocalPosSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_66;
      MR_Word Spec_103;

      {
        Spec_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_103, 2) = ((MR_Box) (TermContext_6));
        MR_hl_field(MR_mktag(1), Spec_103, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[102])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_103));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
      }
    }
    else
    {
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));

      if ((Var_139 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_111;
        MR_Word Spec_114;

        {
          Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) (TermContext_6));
          MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[102])));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_114));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
        }
      }
      else
      {
        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_139, (MR_Integer) 1))));
        MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_139, (MR_Integer) 0))));

        if ((Var_141 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_117;
          MR_Word Spec_120;

          {
            Spec_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_120, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_120, 2) = ((MR_Box) (TermContext_6));
            MR_hl_field(MR_mktag(1), Spec_120, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[102])));
          }
          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Spec_120));
            MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_117));
          }
        }
        else
        {
          MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_141, (MR_Integer) 1))));
          MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_141, (MR_Integer) 0))));

          if ((Var_143 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_123;
            MR_Word Spec_126;

            {
              Spec_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_126, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_126, 2) = ((MR_Box) (TermContext_6));
              MR_hl_field(MR_mktag(1), Spec_126, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[102])));
            }
            {
              Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Spec_126));
              MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_123));
            }
          }
          else
          {
            MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 1))));
            MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 0))));

            if ((Var_145 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeFunctor1_13;
              MR_Word MaybeFunctor2_14;
              MR_Word MaybeOtherFunctors_18;
              MR_Word MaybeCJCsERepn_24;
              MR_Word OtherFunctorTerms_15;
              MR_Word Functor1_25;
              MR_Word Functor2_26;
              MR_Word OtherFunctors_27;
              MR_Word CJCsERepn_28;

              parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_5, Var_140, &MaybeFunctor1_13);
              parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_5, Var_142, &MaybeFunctor2_14);
              succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_144, &OtherFunctorTerms_15);
              if (succeeded)
              {
                MR_Word OtherFunctors0_16;
                MR_Word OtherFunctorSpecs_17;

                parse_tree__parse_type_repn__parse_du_functors_4_p_0(VarSet_5, OtherFunctorTerms_15, &OtherFunctors0_16, &OtherFunctorSpecs_17);
                if ((OtherFunctorSpecs_17 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeOtherFunctors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeOtherFunctors_18, 0) = ((MR_Box) (OtherFunctors0_16));
                  }
                else
                  {
                    MaybeOtherFunctors_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeOtherFunctors_18, 0) = ((MR_Box) (OtherFunctorSpecs_17));
                  }
              }
              else
              {
                MR_Word Spec_22;
                MR_Word Var_85;
                MR_Word Var_86;

                Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_144);
                {
                  Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[106])));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_22));
                  MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeOtherFunctors_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeOtherFunctors_18, 0) = ((MR_Box) (Var_86));
                }
              }
              parse_tree__parse_type_repn__parse_c_j_cs_e_repn_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[109])), (MR_Integer) 0, Var_146, &MaybeCJCsERepn_24);
              succeeded = ((MR_tag((MR_Word) MaybeFunctor1_13)) == (MR_Integer) 1);
              if (succeeded)
              {
                Functor1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor1_13, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeFunctor2_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Functor2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor2_14, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeOtherFunctors_18)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OtherFunctors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherFunctors_18, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeCJCsERepn_24)) == (MR_Integer) 1);
                    if (succeeded)
                      CJCsERepn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCJCsERepn_24, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MoreFunctors_29;
                MR_Word Var_95;

                {
                  MoreFunctors_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MoreFunctors_29, 0) = ((MR_Box) (Functor1_25));
                  MR_hl_field(MR_mktag(0), MoreFunctors_29, 1) = ((MR_Box) (Functor2_26));
                  MR_hl_field(MR_mktag(0), MoreFunctors_29, 2) = ((MR_Box) (OtherFunctors_27));
                  MR_hl_field(MR_mktag(0), MoreFunctors_29, 3) = ((MR_Box) (CJCsERepn_28));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (MoreFunctors_29));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeDuRepn_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_95));
                }
              }
              else
              {
                MR_Word Specs_30;
                MR_Word Var_96;
                MR_Word Var_97;
                MR_Word Var_98;
                MR_Word Var_99;
                MR_Word Var_100;
                MR_Word Var_101;

                Var_96 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_0), MaybeFunctor1_13);
                Var_98 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_0), MaybeFunctor2_14);
                Var_100 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[5]), MaybeOtherFunctors_18);
                Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeCJCsERepn_24);
                Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_100, Var_101);
                Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_98, Var_99);
                Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_96, Var_97);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuRepn_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_30));
                }
              }
            }
            else
            {
              MR_Word Var_129;
              MR_Word Spec_132;

              {
                Spec_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_132, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_132, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_132, 2) = ((MR_Box) (TermContext_6));
                MR_hl_field(MR_mktag(1), Spec_132, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[102])));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_132));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuRepn_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functors_4_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MaybeDuFunctor_11;
    MR_Word STATE_VARIABLE_DuFunctors_15_15;
    MR_Word STATE_VARIABLE_Specs_16_16;

    parse_tree__parse_type_repn__parse_du_functors_4_p_0(VarSet_1, Terms_8, &STATE_VARIABLE_DuFunctors_15_15, &STATE_VARIABLE_Specs_16_16);
    parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_1, Term_7, &MaybeDuFunctor_11);
    if (((MR_tag((MR_Word) MaybeDuFunctor_11)) == (MR_Integer) 0))
    {
      MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDuFunctor_11, (MR_Integer) 0))));

      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_16_16);
      *HeadVar__3_3 = STATE_VARIABLE_DuFunctors_15_15;
    }
    else
    {
      MR_Word DuFunctor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuFunctor_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuFunctor_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_DuFunctors_15_15));
      }
      *HeadVar__4_4 = STATE_VARIABLE_Specs_16_16;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDuFunctor_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_String AtomStr_7;
    MR_Word ArgTerms_8;
    MR_Word TermContext_9;
    MR_Word Var_60;

    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      ArgTerms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      TermContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
        if ((strcmp(AtomStr_7, (MR_String) "constant_functor") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(AtomStr_7, (MR_String) "nonconstant_functor") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      if ((strcmp(AtomStr_7, (MR_String) "constant_functor") == 0))
        if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_30;
          MR_Word Spec_31;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_139;

          {
            Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
          }
          {
            Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_129));
          }
          {
            Spec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_31, 2) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(1), Spec_31, 3) = ((MR_Box) (Pieces_30));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Spec_31));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuFunctor_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_139));
          }
        }
        else
        {
          MR_Word Var_345 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
          MR_Word Var_346 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

          if ((Var_345 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_235;
            MR_Word Spec_236;
            MR_Word Var_239;
            MR_Word Var_240;
            MR_Word Var_244;

            {
              Var_240 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_240, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_240, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_239, 0) = ((MR_Box) (Var_240));
              MR_hl_field(MR_mktag(1), Var_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
            }
            {
              Pieces_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_235, 1) = ((MR_Box) (Var_239));
            }
            {
              Spec_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_236, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_236, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_236, 2) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(1), Spec_236, 3) = ((MR_Box) (Pieces_235));
            }
            {
              Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (Spec_236));
              MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuFunctor_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_244));
            }
          }
          else
          {
            MR_Word Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_345, (MR_Integer) 1))));
            MR_Word Var_350 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_345, (MR_Integer) 0))));

            if ((Var_349 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Pieces_246;
              MR_Word Spec_247;
              MR_Word Var_250;
              MR_Word Var_251;
              MR_Word Var_255;

              {
                Var_251 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_251, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_251, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (Var_251));
                MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
              }
              {
                Pieces_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_246, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                MR_hl_field(MR_mktag(1), Pieces_246, 1) = ((MR_Box) (Var_250));
              }
              {
                Spec_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_247, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_247, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_247, 2) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(1), Spec_247, 3) = ((MR_Box) (Pieces_246));
              }
              {
                Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (Spec_247));
                MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuFunctor_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_255));
              }
            }
            else
            {
              MR_Word Var_353 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_349, (MR_Integer) 1))));
              MR_Word Var_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_349, (MR_Integer) 0))));

              if ((Var_353 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word MaybeFunctorName_14;
                MR_Word MaybeSectagSize64_15;
                MR_Word MaybeSectagSize32_16;
                MR_String FunctorName_17;
                MR_Word SectagSize64_18;
                MR_Word SectagSize32_19;

                parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_4, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[129])), (MR_String) "function symbol", Var_346, &MaybeFunctorName_14);
                parse_tree__parse_type_repn__parse_sectag_size_4_p_0((MR_Unsigned) 63U, VarSet_4, Var_350, &MaybeSectagSize64_15);
                parse_tree__parse_type_repn__parse_sectag_size_4_p_0((MR_Unsigned) 31U, VarSet_4, Var_354, &MaybeSectagSize32_16);
                succeeded = ((MR_tag((MR_Word) MaybeFunctorName_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  FunctorName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_14, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSectagSize64_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SectagSize64_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSectagSize64_15, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeSectagSize32_16)) == (MR_Integer) 1);
                    if (succeeded)
                      SectagSize32_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSectagSize32_16, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                {
                  MR_Word DuFunctor_20;

                  {
                    DuFunctor_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), DuFunctor_20, 0) = ((MR_Box) (FunctorName_17));
                    MR_hl_field(MR_mktag(0), DuFunctor_20, 1) = ((MR_Box) (SectagSize64_18));
                    MR_hl_field(MR_mktag(0), DuFunctor_20, 2) = ((MR_Box) (SectagSize32_19));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeDuFunctor_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuFunctor_20));
                  }
                }
                else
                {
                  MR_Word Specs_21;
                  MR_Word Var_156;
                  MR_Word Var_157;
                  MR_Word Var_158;
                  MR_Word Var_159;

                  Var_156 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_14);
                  Var_158 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_sectag_size_0), MaybeSectagSize64_15);
                  Var_159 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_sectag_size_0), MaybeSectagSize32_16);
                  Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_158, Var_159);
                  Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_156, Var_157);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuFunctor_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
                  }
                }
              }
              else
              {
                MR_Word Pieces_257;
                MR_Word Spec_258;
                MR_Word Var_261;
                MR_Word Var_262;
                MR_Word Var_266;

                {
                  Var_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_262, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_262, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_261, 0) = ((MR_Box) (Var_262));
                  MR_hl_field(MR_mktag(1), Var_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
                }
                {
                  Pieces_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_257, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                  MR_hl_field(MR_mktag(1), Pieces_257, 1) = ((MR_Box) (Var_261));
                }
                {
                  Spec_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_258, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_258, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_258, 2) = ((MR_Box) (TermContext_9));
                  MR_hl_field(MR_mktag(1), Spec_258, 3) = ((MR_Box) (Pieces_257));
                }
                {
                  Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_266, 0) = ((MR_Box) (Spec_258));
                  MR_hl_field(MR_mktag(1), Var_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuFunctor_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_266));
                }
              }
            }
          }
        }
      else
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_88;
        MR_Word Pieces_203;
        MR_Word Spec_204;

        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])));
        }
        {
          Pieces_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_203, 1) = ((MR_Box) (Var_78));
        }
        {
          Spec_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_204, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_204, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_204, 2) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(1), Spec_204, 3) = ((MR_Box) (Pieces_203));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_204));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuFunctor_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
        }
      }
      else
      {
        MR_Word Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
        MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

        if ((Var_347 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_281;
          MR_Word Var_282;
          MR_Word Var_286;
          MR_Word Pieces_288;
          MR_Word Spec_289;

          {
            Var_282 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_282, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_282, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_281, 0) = ((MR_Box) (Var_282));
            MR_hl_field(MR_mktag(1), Var_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])));
          }
          {
            Pieces_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_288, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_288, 1) = ((MR_Box) (Var_281));
          }
          {
            Spec_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_289, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_289, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_289, 2) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(1), Spec_289, 3) = ((MR_Box) (Pieces_288));
          }
          {
            Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_286, 0) = ((MR_Box) (Spec_289));
            MR_hl_field(MR_mktag(1), Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuFunctor_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_286));
          }
        }
        else
        {
          MR_Word Var_351 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_347, (MR_Integer) 1))));
          MR_Word Var_352 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_347, (MR_Integer) 0))));

          if ((Var_351 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_292;
            MR_Word Var_293;
            MR_Word Var_297;
            MR_Word Pieces_299;
            MR_Word Spec_300;

            {
              Var_293 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_293, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_293, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_292, 0) = ((MR_Box) (Var_293));
              MR_hl_field(MR_mktag(1), Var_292, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])));
            }
            {
              Pieces_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_299, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_299, 1) = ((MR_Box) (Var_292));
            }
            {
              Spec_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_300, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_300, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_300, 2) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(1), Spec_300, 3) = ((MR_Box) (Pieces_299));
            }
            {
              Var_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_297, 0) = ((MR_Box) (Spec_300));
              MR_hl_field(MR_mktag(1), Var_297, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuFunctor_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_297));
            }
          }
          else
          {
            MR_Word Var_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_351, (MR_Integer) 1))));
            MR_Word Var_356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_351, (MR_Integer) 0))));

            if ((Var_355 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_303;
              MR_Word Var_304;
              MR_Word Var_308;
              MR_Word Pieces_310;
              MR_Word Spec_311;

              {
                Var_304 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_304, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_304, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_303, 0) = ((MR_Box) (Var_304));
                MR_hl_field(MR_mktag(1), Var_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])));
              }
              {
                Pieces_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_310, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                MR_hl_field(MR_mktag(1), Pieces_310, 1) = ((MR_Box) (Var_303));
              }
              {
                Spec_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_311, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_311, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_311, 2) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(1), Spec_311, 3) = ((MR_Box) (Pieces_310));
              }
              {
                Var_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_308, 0) = ((MR_Box) (Spec_311));
                MR_hl_field(MR_mktag(1), Var_308, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuFunctor_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_308));
              }
            }
            else
            {
              MR_Word Var_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_355, (MR_Integer) 1))));
              MR_Word Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_355, (MR_Integer) 0))));

              if ((Var_357 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_314;
                MR_Word Var_315;
                MR_Word Var_319;
                MR_Word Pieces_321;
                MR_Word Spec_322;

                {
                  Var_315 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_315, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_315, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_314, 0) = ((MR_Box) (Var_315));
                  MR_hl_field(MR_mktag(1), Var_314, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])));
                }
                {
                  Pieces_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_321, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                  MR_hl_field(MR_mktag(1), Pieces_321, 1) = ((MR_Box) (Var_314));
                }
                {
                  Spec_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_322, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_322, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_322, 2) = ((MR_Box) (TermContext_9));
                  MR_hl_field(MR_mktag(1), Spec_322, 3) = ((MR_Box) (Pieces_321));
                }
                {
                  Var_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_319, 0) = ((MR_Box) (Spec_322));
                  MR_hl_field(MR_mktag(1), Var_319, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuFunctor_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_319));
                }
              }
              else
              {
                MR_Word Var_359 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_357, (MR_Integer) 1))));
                MR_Word Var_360 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_357, (MR_Integer) 0))));

                if ((Var_359 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word MaybePtagSectag64_34;
                  MR_Word MaybePtagSectag32_35;
                  MR_Word MaybeMaybeDirectArgs64_36;
                  MR_Word MaybeMaybeDirectArgs32_37;
                  MR_Word MaybeFunctorName_199;
                  MR_Word PtagSectag64_38;
                  MR_Word PtagSectag32_39;
                  MR_Word MaybeDirectArgs64_40;
                  MR_Word MaybeDirectArgs32_41;
                  MR_String FunctorName_192;

                  parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_4, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[134])), (MR_String) "function symbol", Var_348, &MaybeFunctorName_199);
                  parse_tree__parse_type_repn__parse_ptag_sectag_5_p_0((MR_Unsigned) 7U, (MR_Unsigned) 63U, VarSet_4, Var_352, &MaybePtagSectag64_34);
                  parse_tree__parse_type_repn__parse_ptag_sectag_5_p_0((MR_Unsigned) 3U, (MR_Unsigned) 31U, VarSet_4, Var_356, &MaybePtagSectag32_35);
                  parse_tree__parse_type_repn__parse_maybe_direct_args_6_p_0((MR_Unsigned) 7U, (MR_Unsigned) 63U, VarSet_4, AtomStr_7, Var_358, &MaybeMaybeDirectArgs64_36);
                  parse_tree__parse_type_repn__parse_maybe_direct_args_6_p_0((MR_Unsigned) 3U, (MR_Unsigned) 31U, VarSet_4, AtomStr_7, Var_360, &MaybeMaybeDirectArgs32_37);
                  succeeded = ((MR_tag((MR_Word) MaybeFunctorName_199)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    FunctorName_192 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_199, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybePtagSectag64_34)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      PtagSectag64_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtagSectag64_34, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybePtagSectag32_35)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        PtagSectag32_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtagSectag32_35, (MR_Integer) 0))));
                        succeeded = ((MR_tag((MR_Word) MaybeMaybeDirectArgs64_36)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MaybeDirectArgs64_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeDirectArgs64_36, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) MaybeMaybeDirectArgs32_37)) == (MR_Integer) 1);
                          if (succeeded)
                            MaybeDirectArgs32_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeDirectArgs32_37, (MR_Integer) 0))));
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word DuFunctor_190;

                    {
                      DuFunctor_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DuFunctor_190, 0) = ((MR_Box) (FunctorName_192));
                      MR_hl_field(MR_mktag(1), DuFunctor_190, 1) = ((MR_Box) (PtagSectag64_38));
                      MR_hl_field(MR_mktag(1), DuFunctor_190, 2) = ((MR_Box) (PtagSectag32_39));
                      MR_hl_field(MR_mktag(1), DuFunctor_190, 3) = ((MR_Box) (MaybeDirectArgs64_40));
                      MR_hl_field(MR_mktag(1), DuFunctor_190, 4) = ((MR_Box) (MaybeDirectArgs32_41));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeDuFunctor_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuFunctor_190));
                    }
                  }
                  else
                  {
                    MR_Word Var_113;
                    MR_Word Var_114;
                    MR_Word Var_115;
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Word Var_118;
                    MR_Word Var_119;
                    MR_Word Var_120;
                    MR_Word Specs_191;

                    Var_113 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_199);
                    Var_115 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ptag_sectag_0), MaybePtagSectag64_34);
                    Var_117 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ptag_sectag_0), MaybePtagSectag32_35);
                    Var_119 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[6]), MaybeMaybeDirectArgs64_36);
                    Var_120 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[6]), MaybeMaybeDirectArgs32_37);
                    Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_119, Var_120);
                    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_117, Var_118);
                    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_115, Var_116);
                    Specs_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_113, Var_114);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeDuFunctor_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_191));
                    }
                  }
                }
                else
                {
                  MR_Word Var_325;
                  MR_Word Var_326;
                  MR_Word Var_330;
                  MR_Word Pieces_332;
                  MR_Word Spec_333;

                  {
                    Var_326 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_326, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_326, 1) = ((MR_Box) (AtomStr_7));
                  }
                  {
                    Var_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_325, 0) = ((MR_Box) (Var_326));
                    MR_hl_field(MR_mktag(1), Var_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])));
                  }
                  {
                    Pieces_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_332, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), Pieces_332, 1) = ((MR_Box) (Var_325));
                  }
                  {
                    Spec_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_333, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_333, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_333, 2) = ((MR_Box) (TermContext_9));
                    MR_hl_field(MR_mktag(1), Spec_333, 3) = ((MR_Box) (Pieces_332));
                  }
                  {
                    Var_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_330, 0) = ((MR_Box) (Spec_333));
                    MR_hl_field(MR_mktag(1), Var_330, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuFunctor_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_330));
                  }
                }
              }
            }
          }
        }
      }
    else
    {
      MR_String TermStr_59;
      MR_Word Var_162;
      MR_Word Var_165;
      MR_Word Var_168;
      MR_Word Var_171;
      MR_Word Var_174;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Pieces_225;
      MR_Word Spec_226;

      TermStr_59 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_178, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_178, 1) = ((MR_Box) (TermStr_59));
      }
      {
        Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
        MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_177));
      }
      {
        Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_174));
      }
      {
        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[303])));
        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_171));
      }
      {
        Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_168));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[302])));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_165));
      }
      {
        Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[281])));
        MR_hl_field(MR_mktag(1), Pieces_225, 1) = ((MR_Box) (Var_162));
      }
      Var_187 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_226, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_226, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_226, 2) = ((MR_Box) (Var_187));
        MR_hl_field(MR_mktag(1), Spec_226, 3) = ((MR_Box) (Pieces_225));
      }
      {
        Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Spec_226));
        MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuFunctor_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_188));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_direct_args_6_p_0(
  MR_Unsigned MaxPtag_7,
  MR_Unsigned MaxNumBits_8,
  MR_Word VarSet_9,
  MR_String AtomStr_10,
  MR_Word Term_11,
  MR_Word * MaybeMaybeDirectArgs_12)
{
  {
    MR_bool succeeded;
    MR_Word HeadMaybeDirectArgTerm_14;
    MR_Word TailMaybeDirectArgTerms_15;
    MR_Word MaybeDirectArgTerms_13;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_11, &MaybeDirectArgTerms_13);
    if (succeeded)
    {
      succeeded = (MaybeDirectArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadMaybeDirectArgTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgTerms_13, (MR_Integer) 0))));
        TailMaybeDirectArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgTerms_13, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeHeadMaybeDirectArg_16;
      MR_Word TailMaybeDirectArgs_17;
      MR_Word TailSpecs_18;
      MR_Word HeadMaybeDirectArg_19;

      parse_tree__parse_type_repn__parse_maybe_direct_arg_5_p_0(MaxPtag_7, MaxNumBits_8, VarSet_9, HeadMaybeDirectArgTerm_14, &MaybeHeadMaybeDirectArg_16);
      parse_tree__parse_type_repn__parse_maybe_direct_args_loop_6_p_0(MaxPtag_7, MaxNumBits_8, VarSet_9, TailMaybeDirectArgTerms_15, &TailMaybeDirectArgs_17, &TailSpecs_18);
      succeeded = (TailSpecs_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeHeadMaybeDirectArg_16)) == (MR_Integer) 1);
        if (succeeded)
          HeadMaybeDirectArg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadMaybeDirectArg_16, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (HeadMaybeDirectArg_19));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (TailMaybeDirectArgs_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeDirectArgs_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        }
      }
      else
      {
        MR_Word Specs_20;
        MR_Word Var_24;

        Var_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_direct_arg_0), MaybeHeadMaybeDirectArg_16);
        Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_24, TailSpecs_18);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeDirectArgs_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_20));
        }
      }
    }
    else
    {
      MR_Word Pieces_21;
      MR_Word Spec_22;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_40;
      MR_Word Var_41;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (AtomStr_10));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[138])));
      }
      {
        Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[237])));
        MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_27));
      }
      Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
      {
        Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (Pieces_21));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeDirectArgs_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_direct_args_loop_6_p_0(
  MR_Unsigned MaxPtag_1,
  MR_Unsigned MaxNumBits_2,
  MR_Word VarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MaybeMaybeDirectArg_17;
    MR_Word STATE_VARIABLE_MaybeDirectArgs_21_21;
    MR_Word STATE_VARIABLE_Specs_22_22;

    parse_tree__parse_type_repn__parse_maybe_direct_args_loop_6_p_0(MaxPtag_1, MaxNumBits_2, VarSet_3, Terms_14, &STATE_VARIABLE_MaybeDirectArgs_21_21, &STATE_VARIABLE_Specs_22_22);
    parse_tree__parse_type_repn__parse_maybe_direct_arg_5_p_0(MaxPtag_1, MaxNumBits_2, VarSet_3, Term_13, &MaybeMaybeDirectArg_17);
    if (((MR_tag((MR_Word) MaybeMaybeDirectArg_17)) == (MR_Integer) 0))
    {
      MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeMaybeDirectArg_17, (MR_Integer) 0))));

      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_16, STATE_VARIABLE_Specs_22_22);
      *HeadVar__5_5 = STATE_VARIABLE_MaybeDirectArgs_21_21;
    }
    else
    {
      MR_Word MaybeDirectArg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeDirectArg_17, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeDirectArg_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MaybeDirectArgs_21_21));
      }
      *HeadVar__6_6 = STATE_VARIABLE_Specs_22_22;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_direct_arg_5_p_0(
  MR_Unsigned MaxPtag_6,
  MR_Unsigned MaxNumBits_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeMaybeDirectArg_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_String AtomStr_11;
    MR_Word ArgTerms_12;
    MR_Word TermContext_13;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      TermContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
        if ((strcmp(AtomStr_11, (MR_String) "direct_arg") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(AtomStr_11, (MR_String) "nondirect_arg") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_40;

        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_30));
        }
        {
          Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) (TermContext_13));
          MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Pieces_23));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeDirectArg_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
        }
      }
      else
      {
        MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
        MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

        if ((Var_103 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((strcmp(AtomStr_11, (MR_String) "direct_arg") == 0))
          {
            MR_Word MaybePtag_15;

            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_104, &MaybePtag_15);
            if (((MR_tag((MR_Word) MaybePtag_15)) == (MR_Integer) 0))
              *MaybeMaybeDirectArg_10 = (MR_Word) (MaybePtag_15);
            else
            {
              MR_Unsigned Ptag_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_15, (MR_Integer) 0))));
              MR_Word Var_44;

              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Ptag_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMaybeDirectArg_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
              }
            }
          }
          else
          {
            MR_Word MaybeArgPosSize_18;

            parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(MaxNumBits_7, VarSet_8, Var_104, &MaybeArgPosSize_18);
            if (((MR_tag((MR_Word) MaybeArgPosSize_18)) == (MR_Integer) 0))
              *MaybeMaybeDirectArg_10 = (MR_Word) (MaybeArgPosSize_18);
            else
            {
              MR_Word ArgPosSize_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgPosSize_18, (MR_Integer) 0))));
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (ArgPosSize_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMaybeDirectArg_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
              }
            }
          }
        else
        {
          MR_Word Pieces_81;
          MR_Word Spec_82;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_90;

          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (AtomStr_11));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])));
          }
          {
            Pieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_81, 1) = ((MR_Box) (Var_85));
          }
          {
            Spec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_82, 2) = ((MR_Box) (TermContext_13));
            MR_hl_field(MR_mktag(1), Spec_82, 3) = ((MR_Box) (Pieces_81));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Spec_82));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMaybeDirectArg_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
          }
        }
      }
    else
    {
      MR_String TermStr_25;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Pieces_78;
      MR_Word Spec_79;

      TermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (TermStr_25));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[301])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[300])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Pieces_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[281])));
        MR_hl_field(MR_mktag(1), Pieces_78, 1) = ((MR_Box) (Var_47));
      }
      Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_79, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_79, 2) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Spec_79, 3) = ((MR_Box) (Pieces_78));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_79));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeDirectArg_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeArgPosSize_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String AtomStr_9;
    MR_Word ArgTerms_10;
    MR_Word TermContext_11;
    MR_Word Var_17;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 5;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(AtomStr_9, ((&parse_tree__parse_type_repn_vector_common_6[5 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0);
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
        result_7 = MR_strcmp(AtomStr_9, ((&parse_tree__parse_type_repn_vector_common_7[5 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_7[5 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "double"
                ;
                parse_tree__parse_type_repn__parse_arg_pos_size_double_5_p_0(VarSet_6, AtomStr_9, ArgTerms_10, TermContext_11, MaybeArgPosSize_8);
              }
              break;
            case (MR_Integer) 1:
              {
                // case "full"
                ;
                parse_tree__parse_type_repn__parse_arg_pos_size_full_or_none_5_p_0(VarSet_6, AtomStr_9, ArgTerms_10, TermContext_11, MaybeArgPosSize_8);
              }
              break;
            case (MR_Integer) 2:
              {
                // case "none_nowhere"
                ;
                if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
                  *MaybeArgPosSize_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[3]));
                else
                {
                  MR_Word Pieces_14;
                  MR_Word Spec_15;
                  MR_Word Var_20;
                  MR_Word Var_21;
                  MR_Word Var_30;

                  {
                    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (AtomStr_9));
                  }
                  {
                    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
                    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[140])));
                  }
                  {
                    Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_20));
                  }
                  {
                    Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (TermContext_11));
                    MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
                  }
                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Spec_15));
                    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeArgPosSize_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                // case "none_shifted"
                ;
                parse_tree__parse_type_repn__parse_arg_pos_size_full_or_none_5_p_0(VarSet_6, AtomStr_9, ArgTerms_10, TermContext_11, MaybeArgPosSize_8);
              }
              break;
            case (MR_Integer) 4:
              {
                // case "partial_first", "partial_shifted"
                ;
                parse_tree__parse_type_repn__parse_arg_pos_size_partial_6_p_0(MaxNumBits_5, VarSet_6, AtomStr_9, ArgTerms_10, TermContext_11, MaybeArgPosSize_8);
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
      MR_String TermStr_16;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Pieces_87;
      MR_Word Spec_88;

      TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      Var_39 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239]));
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TermStr_16));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[299])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[298])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[297])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[296])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[295])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[294])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Pieces_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[293])));
        MR_hl_field(MR_mktag(1), Pieces_87, 1) = ((MR_Box) (Var_35));
      }
      Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_88, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_88, 2) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Spec_88, 3) = ((MR_Box) (Pieces_87));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_88));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_partial_6_p_0(
  MR_Unsigned MaxNumBits_7,
  MR_Word VarSet_8,
  MR_String AtomStr_9,
  MR_Word ArgTerms_10,
  MR_Word TermContext_11,
  MR_Word * MaybeArgPosSize_12)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_39;
      MR_Word Spec_40;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_63;

      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (AtomStr_9));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])));
      }
      {
        Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_39, 1) = ((MR_Box) (Var_53));
      }
      {
        Spec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_40, 2) = ((MR_Box) (TermContext_11));
        MR_hl_field(MR_mktag(1), Spec_40, 3) = ((MR_Box) (Pieces_39));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_40));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
      }
    }
    else
    {
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

      if ((Var_135 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_80;
        MR_Word Spec_81;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_89;

        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])));
        }
        {
          Pieces_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_80, 1) = ((MR_Box) (Var_84));
        }
        {
          Spec_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_81, 2) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(1), Spec_81, 3) = ((MR_Box) (Pieces_80));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Spec_81));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgPosSize_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
        }
      }
      else
      {
        MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 1))));
        MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));

        if ((Var_137 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_91;
          MR_Word Spec_92;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_100;

          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])));
          }
          {
            Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_91, 1) = ((MR_Box) (Var_95));
          }
          {
            Spec_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_92, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_92, 2) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(1), Spec_92, 3) = ((MR_Box) (Pieces_91));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Spec_92));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeArgPosSize_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
          }
        }
        else
        {
          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_137, (MR_Integer) 1))));
          MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_137, (MR_Integer) 0))));

          if ((Var_139 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_102;
            MR_Word Spec_103;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_111;

            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])));
            }
            {
              Pieces_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_102, 1) = ((MR_Box) (Var_106));
            }
            {
              Spec_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_103, 2) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(1), Spec_103, 3) = ((MR_Box) (Pieces_102));
            }
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_103));
              MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeArgPosSize_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
            }
          }
          else
          {
            MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_139, (MR_Integer) 1))));
            MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_139, (MR_Integer) 0))));

            if ((Var_141 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeArgOnlyOffset_17;
              MR_Word MaybeCellOffset_18;
              MR_Word MaybeShift_19;
              MR_Word MaybeFillKindSize_20;
              MR_Word ArgOnlyOffset_21;
              MR_Word CellOffset_22;
              MR_Unsigned Shift_23;
              MR_Word FillKindSize_24;

              parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_8, Var_136, &MaybeArgOnlyOffset_17);
              parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_8, Var_138, &MaybeCellOffset_18);
              parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_7, VarSet_8, Var_140, &MaybeShift_19);
              parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(MaxNumBits_7, VarSet_8, Var_142, &MaybeFillKindSize_20);
              succeeded = ((MR_tag((MR_Word) MaybeArgOnlyOffset_17)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgOnlyOffset_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgOnlyOffset_17, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeCellOffset_18)) == (MR_Integer) 1);
                if (succeeded)
                {
                  CellOffset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCellOffset_18, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeShift_19)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Shift_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeShift_19, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeFillKindSize_20)) == (MR_Integer) 1);
                    if (succeeded)
                      FillKindSize_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFillKindSize_20, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgPosSize_25;

                if ((strcmp(AtomStr_9, (MR_String) "partial_first") == 0))
                  {
                    ArgPosSize_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 1) = ((MR_Box) (ArgOnlyOffset_21));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 2) = ((MR_Box) (CellOffset_22));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 3) = ((MR_Box) (Shift_23));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 4) = ((MR_Box) (FillKindSize_24));
                  }
                else
                  {
                    ArgPosSize_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 1) = ((MR_Box) (ArgOnlyOffset_21));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 2) = ((MR_Box) (CellOffset_22));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 3) = ((MR_Box) (Shift_23));
                    MR_hl_field(MR_mktag(3), ArgPosSize_25, 4) = ((MR_Box) (FillKindSize_24));
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeArgPosSize_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPosSize_25));
                }
              }
              else
              {
                MR_Word Specs_26;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;

                Var_69 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_17);
                Var_71 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_18);
                Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeShift_19);
                Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fill_kind_size_0), MaybeFillKindSize_20);
                Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_73, Var_74);
                Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_71, Var_72);
                Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_69, Var_70);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeArgPosSize_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_26));
                }
              }
            }
            else
            {
              MR_Word Pieces_113;
              MR_Word Spec_114;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_122;

              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (AtomStr_9));
              }
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
                MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[98])));
              }
              {
                Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_117));
              }
              {
                Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) (TermContext_11));
                MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Pieces_113));
              }
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Spec_114));
                MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeArgPosSize_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_122));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeFillKindSize_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String AtomStr_9;
    MR_Word ArgTerms_10;
    MR_Word TermContext_11;
    MR_Word FillKind_12;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data__fill_kind_string_2_p_1(&FillKind_12, AtomStr_9);
      }
    }
    if (succeeded)
      switch (FillKind_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 7:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 24U), MaybeFillKindSize_8);
          break;
        case (MR_Integer) 0:
          if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_20;
            MR_Word Spec_21;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_44;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[154])));
            }
            {
              Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_34));
            }
            {
              Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Pieces_20));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_21));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeFillKindSize_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
            }
          }
          else
          {
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

            if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeUint_14;

              parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_5, VarSet_6, Var_89, &MaybeUint_14);
              if (((MR_tag((MR_Word) MaybeUint_14)) == (MR_Integer) 0))
                *MaybeFillKindSize_8 = (MR_Word) (MaybeUint_14);
              else
              {
                MR_Unsigned Uint_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeUint_14, (MR_Integer) 0))));
                MR_Word Var_47;

                {
                  Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Uint_15));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeFillKindSize_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
                }
              }
            }
            else
            {
              MR_Word Pieces_66;
              MR_Word Spec_67;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_75;

              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (AtomStr_9));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[154])));
              }
              {
                Pieces_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                MR_hl_field(MR_mktag(1), Pieces_66, 1) = ((MR_Box) (Var_70));
              }
              {
                Spec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_67, 2) = ((MR_Box) (TermContext_11));
                MR_hl_field(MR_mktag(1), Spec_67, 3) = ((MR_Box) (Pieces_66));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Spec_67));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeFillKindSize_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_75));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 4U), MaybeFillKindSize_8);
          break;
        case (MR_Integer) 3:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 8U), MaybeFillKindSize_8);
          break;
        case (MR_Integer) 1:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 0U), MaybeFillKindSize_8);
          break;
        case (MR_Integer) 5:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 16U), MaybeFillKindSize_8);
          break;
        case (MR_Integer) 6:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 20U), MaybeFillKindSize_8);
          break;
        case (MR_Integer) 4:
          parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 12U), MaybeFillKindSize_8);
          break;
      }
    else
    {
      MR_String TermStr_22;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Pieces_63;
      MR_Word Spec_64;

      TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (TermStr_22));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Pieces_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[292])));
        MR_hl_field(MR_mktag(1), Pieces_63, 1) = ((MR_Box) (Var_50));
      }
      Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_64, 2) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Spec_64, 3) = ((MR_Box) (Pieces_63));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFillKindSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(
  MR_String AtomStr_6,
  MR_Word TermContext_7,
  MR_Word ArgTerms_8,
  MR_Word FillKindSize_9,
  MR_Word * MaybeFillKindSize_10)
{
  if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFillKindSize_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FillKindSize_9));
    }
  else
  {
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_27;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (AtomStr_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[156])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) (TermContext_7));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Pieces_13));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFillKindSize_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_double_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeArgPosSize_10)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_35;
      MR_Word Spec_36;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_55;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
      }
      {
        Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_45));
      }
      {
        Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) (TermContext_9));
        MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Pieces_35));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
      }
    }
    else
    {
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
      MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

      if ((Var_145 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_101;
        MR_Word Spec_102;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_110;

        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
        }
        {
          Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_101, 1) = ((MR_Box) (Var_105));
        }
        {
          Spec_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_102, 2) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(1), Spec_102, 3) = ((MR_Box) (Pieces_101));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Spec_102));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgPosSize_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_110));
        }
      }
      else
      {
        MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_145, (MR_Integer) 1))));
        MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_145, (MR_Integer) 0))));

        if ((Var_147 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_112;
          MR_Word Spec_113;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_121;

          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
          }
          {
            Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_112, 1) = ((MR_Box) (Var_116));
          }
          {
            Spec_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_113, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_113, 2) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(1), Spec_113, 3) = ((MR_Box) (Pieces_112));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Spec_113));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeArgPosSize_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_121));
          }
        }
        else
        {
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_147, (MR_Integer) 1))));
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_147, (MR_Integer) 0))));

          if ((Var_149 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeArgOnlyOffset_14;
            MR_Word MaybeCellOffset_15;
            MR_Word MaybeDW_19;
            MR_Word DoubleWordKind0_18;
            MR_String Arg3Str_16;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word ArgOnlyOffset_22;
            MR_Word CellOffset_23;
            MR_Word DoubleWordKind_24;

            parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_146, &MaybeArgOnlyOffset_14);
            parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_148, &MaybeCellOffset_15);
            succeeded = ((MR_tag((MR_Word) Var_150)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_150, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_150, (MR_Integer) 1))));
              succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Arg3Str_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data__double_word_kind_string_2_p_1(&DoubleWordKind0_18, Arg3Str_16);
                }
              }
            }
            if (succeeded)
              {
                MaybeDW_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeDW_19, 0) = ((MR_Box) (DoubleWordKind0_18));
              }
            else
            {
              MR_Word DwPieces_20;
              MR_Word DwSpec_21;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_92;
              MR_Word Var_93;

              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[152])));
              }
              {
                DwPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DwPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[291])));
                MR_hl_field(MR_mktag(1), DwPieces_20, 1) = ((MR_Box) (Var_64));
              }
              Var_92 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_150);
              {
                DwSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DwSpec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), DwSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), DwSpec_21, 2) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(1), DwSpec_21, 3) = ((MR_Box) (DwPieces_20));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (DwSpec_21));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeDW_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeDW_19, 0) = ((MR_Box) (Var_93));
              }
            }
            succeeded = ((MR_tag((MR_Word) MaybeArgOnlyOffset_14)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgOnlyOffset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgOnlyOffset_14, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCellOffset_15)) == (MR_Integer) 1);
              if (succeeded)
              {
                CellOffset_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCellOffset_15, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeDW_19)) == (MR_Integer) 1);
                if (succeeded)
                  DoubleWordKind_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDW_19, (MR_Integer) 0))));
              }
            }
            if (succeeded)
            {
              MR_Word ArgPosSize_25;

              {
                ArgPosSize_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgPosSize_25, 0) = ((MR_Box) (ArgOnlyOffset_22));
                MR_hl_field(MR_mktag(2), ArgPosSize_25, 1) = ((MR_Box) (CellOffset_23));
                MR_hl_field(MR_mktag(2), ArgPosSize_25, 2) = (MR_Box) ((MR_Unsigned) (DoubleWordKind_24));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeArgPosSize_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPosSize_25));
              }
            }
            else
            {
              MR_Word Specs_26;
              MR_Word Var_95;
              MR_Word Var_96;

              Var_95 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_14);
              Var_96 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_15);
              Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_95, Var_96);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeArgPosSize_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_26));
              }
            }
          }
          else
          {
            MR_Word Pieces_123;
            MR_Word Spec_124;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word Var_132;

            {
              Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
            }
            {
              Pieces_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_123, 1) = ((MR_Box) (Var_127));
            }
            {
              Spec_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_124, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_124, 2) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(1), Spec_124, 3) = ((MR_Box) (Pieces_123));
            }
            {
              Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Spec_124));
              MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeArgPosSize_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_132));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_pos_size_full_or_none_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeArgPosSize_10)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_24;
      MR_Word Spec_25;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_41;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
      }
      {
        Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_24, 1) = ((MR_Box) (Var_31));
      }
      {
        Spec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_25, 2) = ((MR_Box) (TermContext_9));
        MR_hl_field(MR_mktag(1), Spec_25, 3) = ((MR_Box) (Pieces_24));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      }
    }
    else
    {
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

      if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_50;
        MR_Word Spec_51;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_59;

        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
        }
        {
          Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_50, 1) = ((MR_Box) (Var_54));
        }
        {
          Spec_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_51, 2) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(1), Spec_51, 3) = ((MR_Box) (Pieces_50));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_51));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgPosSize_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        }
      }
      else
      {
        MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 1))));
        MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0))));

        if ((Var_85 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeArgOnlyOffset_13;
          MR_Word MaybeCellOffset_14;
          MR_Word ArgOnlyOffset_15;
          MR_Word CellOffset_16;

          parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_84, &MaybeArgOnlyOffset_13);
          parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_86, &MaybeCellOffset_14);
          succeeded = ((MR_tag((MR_Word) MaybeArgOnlyOffset_13)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgOnlyOffset_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgOnlyOffset_13, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCellOffset_14)) == (MR_Integer) 1);
            if (succeeded)
              CellOffset_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCellOffset_14, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word ArgPosSize_17;

            if ((strcmp(AtomStr_7, (MR_String) "full") == 0))
              {
                ArgPosSize_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPosSize_17, 0) = ((MR_Box) (ArgOnlyOffset_15));
                MR_hl_field(MR_mktag(1), ArgPosSize_17, 1) = ((MR_Box) (CellOffset_16));
              }
            else
              {
                ArgPosSize_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgPosSize_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), ArgPosSize_17, 1) = ((MR_Box) (ArgOnlyOffset_15));
                MR_hl_field(MR_mktag(3), ArgPosSize_17, 2) = ((MR_Box) (CellOffset_16));
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeArgPosSize_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPosSize_17));
            }
          }
          else
          {
            MR_Word Specs_18;
            MR_Word Var_45;
            MR_Word Var_46;

            Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_13);
            Var_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_14);
            Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_45, Var_46);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeArgPosSize_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_18));
            }
          }
        }
        else
        {
          MR_Word Pieces_61;
          MR_Word Spec_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_70;

          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
          }
          {
            Pieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_61, 1) = ((MR_Box) (Var_65));
          }
          {
            Spec_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_62, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_62, 2) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(1), Spec_62, 3) = ((MR_Box) (Pieces_61));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_62));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeArgPosSize_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_cell_offset_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCellOffset_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Integer IntN_12;
    MR_Word Base_7;
    MR_Word N_8;
    MR_Word Signedness_9;
    MR_Word Size_10;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          Base_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))) & (MR_Integer) 3);
          N_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
          Signedness_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Size_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Base_7 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (Signedness_9 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Size_10 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = mercury__integer__to_int_2_p_0(N_8, &IntN_12);
                if (succeeded)
                {
                  Var_18 = (MR_Integer) 0;
                  succeeded = (IntN_12 >= Var_18);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_19 = (MR_Word) (IntN_12);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCellOffset_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
      }
    }
    else
    {
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_32;
      MR_Word Var_33;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[290])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_22));
      }
      Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCellOffset_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeArgOnlyOffset_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Integer IntN_12;
    MR_Word Base_7;
    MR_Word N_8;
    MR_Word Signedness_9;
    MR_Word Size_10;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          Base_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))) & (MR_Integer) 3);
          N_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
          Signedness_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Size_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Base_7 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (Signedness_9 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Size_10 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = mercury__integer__to_int_2_p_0(N_8, &IntN_12);
                if (succeeded)
                {
                  Var_18 = (MR_Integer) 0;
                  succeeded = (IntN_12 >= Var_18);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_19 = (MR_Word) (IntN_12);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeArgOnlyOffset_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
      }
    }
    else
    {
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_32;
      MR_Word Var_33;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[290])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_22));
      }
      Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgOnlyOffset_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_ptag_sectag_5_p_0(
  MR_Unsigned MaxPtag_6,
  MR_Unsigned MaxNumBits_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybePtagSectag_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_String AtomStr_11;
    MR_Word ArgTerms_12;
    MR_Word TermContext_13;
    MR_Word Var_44;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      TermContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 4;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(AtomStr_11, ((&parse_tree__parse_type_repn_vector_common_6[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0);
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
      MR_Integer hi_5 = (MR_Integer) 4;
      MR_Integer mid_6;
      MR_Integer result_7;

      // binary string jump switch
      ;
      do
      {
        mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
        result_7 = MR_strcmp(AtomStr_11, ((&parse_tree__parse_type_repn_vector_common_7[0 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_7[0 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "ptag_local_sectag", "ptag_remote_sectag"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_91;
                  MR_Word Pieces_176;
                  MR_Word Spec_177;

                  {
                    Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
                  }
                  {
                    Pieces_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), Pieces_176, 1) = ((MR_Box) (Var_81));
                  }
                  {
                    Spec_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_177, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_177, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_177, 2) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(1), Spec_177, 3) = ((MR_Box) (Pieces_176));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Spec_177));
                    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybePtagSectag_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_91));
                  }
                }
                else
                {
                  MR_Word Var_327 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_328 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_327 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_230;
                    MR_Word Var_231;
                    MR_Word Var_235;
                    MR_Word Pieces_237;
                    MR_Word Spec_238;

                    {
                      Var_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_231, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_231, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (Var_231));
                      MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
                    }
                    {
                      Pieces_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_237, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                      MR_hl_field(MR_mktag(1), Pieces_237, 1) = ((MR_Box) (Var_230));
                    }
                    {
                      Spec_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_238, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_238, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_238, 2) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(1), Spec_238, 3) = ((MR_Box) (Pieces_237));
                    }
                    {
                      Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (Spec_238));
                      MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybePtagSectag_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_235));
                    }
                  }
                  else
                  {
                    MR_Word Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_327, (MR_Integer) 1))));
                    MR_Word Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_327, (MR_Integer) 0))));

                    if ((Var_333 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word MaybeSectag_24;
                      MR_Word MaybePtag_173;
                      MR_Unsigned Sectag_25;
                      MR_Unsigned Ptag_170;

                      parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_328, &MaybePtag_173);
                      parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_8, Var_334, &MaybeSectag_24);
                      succeeded = ((MR_tag((MR_Word) MaybePtag_173)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Ptag_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_173, (MR_Integer) 0))));
                        succeeded = ((MR_tag((MR_Word) MaybeSectag_24)) == (MR_Integer) 1);
                        if (succeeded)
                          Sectag_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectag_24, (MR_Integer) 0))));
                      }
                      if (succeeded)
                        if ((strcmp(AtomStr_11, (MR_String) "ptag_local_sectag") == 0))
                        {
                          MR_Word Var_98;
                          MR_Word Var_99;

                          {
                            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Sectag_25));
                            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Ptag_170));
                            MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Var_99));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybePtagSectag_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_98));
                          }
                        }
                        else
                        {
                          MR_Word Var_95;
                          MR_Word Var_96;

                          {
                            Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (Sectag_25));
                            MR_hl_field(MR_mktag(2), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Ptag_170));
                            MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Var_96));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybePtagSectag_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_95));
                          }
                        }
                      else
                      {
                        MR_Word Var_101;
                        MR_Word Var_102;
                        MR_Word Specs_169;

                        Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybePtag_173);
                        Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_24);
                        Specs_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_101, Var_102);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybePtagSectag_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_169));
                        }
                      }
                    }
                    else
                    {
                      MR_Word Var_241;
                      MR_Word Var_242;
                      MR_Word Var_246;
                      MR_Word Pieces_248;
                      MR_Word Spec_249;

                      {
                        Var_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_242, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_242, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (Var_242));
                        MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[57])));
                      }
                      {
                        Pieces_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_248, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                        MR_hl_field(MR_mktag(1), Pieces_248, 1) = ((MR_Box) (Var_241));
                      }
                      {
                        Spec_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_249, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_249, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_249, 2) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(1), Spec_249, 3) = ((MR_Box) (Pieces_248));
                      }
                      {
                        Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) (Spec_249));
                        MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybePtagSectag_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_246));
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "ptag_local_sectag_bits", "ptag_remote_sectag_bits"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_53;
                  MR_Word Var_54;
                  MR_Word Var_63;
                  MR_Word Pieces_201;
                  MR_Word Spec_202;

                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
                  }
                  {
                    Pieces_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), Pieces_201, 1) = ((MR_Box) (Var_53));
                  }
                  {
                    Spec_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_202, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_202, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_202, 2) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(1), Spec_202, 3) = ((MR_Box) (Pieces_201));
                  }
                  {
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_202));
                    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybePtagSectag_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
                  }
                }
                else
                {
                  MR_Word Var_329 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_330 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_329 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_263;
                    MR_Word Var_264;
                    MR_Word Var_268;
                    MR_Word Pieces_270;
                    MR_Word Spec_271;

                    {
                      Var_264 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_264, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_264, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_263, 0) = ((MR_Box) (Var_264));
                      MR_hl_field(MR_mktag(1), Var_263, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
                    }
                    {
                      Pieces_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_270, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                      MR_hl_field(MR_mktag(1), Pieces_270, 1) = ((MR_Box) (Var_263));
                    }
                    {
                      Spec_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_271, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_271, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_271, 2) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(1), Spec_271, 3) = ((MR_Box) (Pieces_270));
                    }
                    {
                      Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (Spec_271));
                      MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybePtagSectag_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_268));
                    }
                  }
                  else
                  {
                    MR_Word Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_329, (MR_Integer) 1))));
                    MR_Word Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_329, (MR_Integer) 0))));

                    if ((Var_335 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_274;
                      MR_Word Var_275;
                      MR_Word Var_279;
                      MR_Word Pieces_281;
                      MR_Word Spec_282;

                      {
                        Var_275 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_275, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_275, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (Var_275));
                        MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
                      }
                      {
                        Pieces_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_281, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                        MR_hl_field(MR_mktag(1), Pieces_281, 1) = ((MR_Box) (Var_274));
                      }
                      {
                        Spec_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_282, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_282, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_282, 2) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(1), Spec_282, 3) = ((MR_Box) (Pieces_281));
                      }
                      {
                        Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (Spec_282));
                        MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybePtagSectag_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_279));
                      }
                    }
                    else
                    {
                      MR_Word Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 1))));
                      MR_Word Var_338 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 0))));

                      if ((Var_337 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word MaybeSectagNumBits_32;
                        MR_Word MaybePtag_195;
                        MR_Word MaybeSectag_199;
                        MR_Unsigned SectagNumBits_33;
                        MR_Unsigned Ptag_191;
                        MR_Unsigned Sectag_193;

                        parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_330, &MaybePtag_195);
                        parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_8, Var_336, &MaybeSectag_199);
                        parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_7, VarSet_8, Var_338, &MaybeSectagNumBits_32);
                        succeeded = ((MR_tag((MR_Word) MaybePtag_195)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Ptag_191 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_195, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) MaybeSectag_199)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Sectag_193 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectag_199, (MR_Integer) 0))));
                            succeeded = ((MR_tag((MR_Word) MaybeSectagNumBits_32)) == (MR_Integer) 1);
                            if (succeeded)
                              SectagNumBits_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectagNumBits_32, (MR_Integer) 0))));
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word SectagSize_34;

                          {
                            SectagSize_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), SectagSize_34, 0) = ((MR_Box) (SectagNumBits_33));
                          }
                          if ((strcmp(AtomStr_11, (MR_String) "ptag_local_sectag_bits") == 0))
                          {
                            MR_Word Var_70;
                            MR_Word Var_71;

                            {
                              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Sectag_193));
                              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (SectagSize_34));
                            }
                            {
                              Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Ptag_191));
                              MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_71));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *MaybePtagSectag_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_70));
                            }
                          }
                          else
                          {
                            MR_Word Var_68;
                            MR_Word Var_69;

                            {
                              Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (Sectag_193));
                              MR_hl_field(MR_mktag(2), Var_69, 1) = ((MR_Box) (SectagSize_34));
                            }
                            {
                              Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Ptag_191));
                              MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_69));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *MaybePtagSectag_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
                            }
                          }
                        }
                        else
                        {
                          MR_Word Var_72;
                          MR_Word Var_73;
                          MR_Word Var_74;
                          MR_Word Var_75;
                          MR_Word Specs_190;

                          Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybePtag_195);
                          Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_199);
                          Var_75 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectagNumBits_32);
                          Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_74, Var_75);
                          Specs_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_72, Var_73);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            *MaybePtagSectag_10 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_190));
                          }
                        }
                      }
                      else
                      {
                        MR_Word Var_285;
                        MR_Word Var_286;
                        MR_Word Var_290;
                        MR_Word Pieces_292;
                        MR_Word Spec_293;

                        {
                          Var_286 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_286, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_286, 1) = ((MR_Box) (AtomStr_11));
                        }
                        {
                          Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (Var_286));
                          MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])));
                        }
                        {
                          Pieces_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_292, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                          MR_hl_field(MR_mktag(1), Pieces_292, 1) = ((MR_Box) (Var_285));
                        }
                        {
                          Spec_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Spec_293, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(1), Spec_293, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(1), Spec_293, 2) = ((MR_Box) (TermContext_13));
                          MR_hl_field(MR_mktag(1), Spec_293, 3) = ((MR_Box) (Pieces_292));
                        }
                        {
                          Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_290, 0) = ((MR_Box) (Spec_293));
                          MR_hl_field(MR_mktag(1), Var_290, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybePtagSectag_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_290));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "ptag_only"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Pieces_21;
                  MR_Word Spec_22;
                  MR_Word Var_106;
                  MR_Word Var_107;
                  MR_Word Var_116;

                  {
                    Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
                    MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])));
                  }
                  {
                    Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_106));
                  }
                  {
                    Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (Pieces_21));
                  }
                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Spec_22));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybePtagSectag_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_116));
                  }
                }
                else
                {
                  MR_Word Var_331 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_332 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_331 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybePtag_15;

                    parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_332, &MaybePtag_15);
                    if (((MR_tag((MR_Word) MaybePtag_15)) == (MR_Integer) 0))
                      *MaybePtagSectag_10 = (MR_Word) (MaybePtag_15);
                    else
                    {
                      MR_Unsigned Ptag_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_15, (MR_Integer) 0))));
                      MR_Word Var_119;

                      {
                        Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Ptag_16));
                        MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybePtagSectag_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_119));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Pieces_305;
                    MR_Word Spec_306;
                    MR_Word Var_309;
                    MR_Word Var_310;
                    MR_Word Var_314;

                    {
                      Var_310 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_310, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_310, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_309, 0) = ((MR_Box) (Var_310));
                      MR_hl_field(MR_mktag(1), Var_309, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])));
                    }
                    {
                      Pieces_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_305, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
                      MR_hl_field(MR_mktag(1), Pieces_305, 1) = ((MR_Box) (Var_309));
                    }
                    {
                      Spec_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_306, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_306, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_306, 2) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(1), Spec_306, 3) = ((MR_Box) (Pieces_305));
                    }
                    {
                      Var_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_314, 0) = ((MR_Box) (Spec_306));
                      MR_hl_field(MR_mktag(1), Var_314, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybePtagSectag_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_314));
                    }
                  }
                }
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
      MR_String TermStr_43;
      MR_Word Var_123;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_129;
      MR_Word Var_132;
      MR_Word Var_135;
      MR_Word Var_138;
      MR_Word Var_141;
      MR_Word Var_144;
      MR_Word Var_147;
      MR_Word Var_150;
      MR_Word Var_153;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Pieces_221;
      MR_Word Spec_222;

      TermStr_43 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      Var_127 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239]));
      {
        Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) (TermStr_43));
      }
      {
        Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_156));
      }
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_153));
      }
      {
        Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[289])));
        MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
      }
      {
        Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[288])));
        MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
      }
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[287])));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[286])));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
      }
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[285])));
        MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
      }
      {
        Pieces_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[281])));
        MR_hl_field(MR_mktag(1), Pieces_221, 1) = ((MR_Box) (Var_123));
      }
      Var_166 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_222, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_222, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_222, 2) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(1), Spec_222, 3) = ((MR_Box) (Pieces_221));
      }
      {
        Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Spec_222));
        MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePtagSectag_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_167));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeUint_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Unsigned UintN_13;
    MR_Word Base_7;
    MR_Word N_8;
    MR_Word Signedness_9;
    MR_Word Size_10;
    MR_Integer IntN_12;
    MR_Word Var_17;
    MR_Word Var_18;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          Base_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))) & (MR_Integer) 3);
          N_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
          Signedness_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Size_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Base_7 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (Signedness_9 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Size_10 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = mercury__integer__to_int_2_p_0(N_8, &IntN_12);
                if (succeeded)
                  succeeded = mercury__uint__from_int_2_p_0(IntN_12, &UintN_13);
              }
            }
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeUint_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UintN_13));
      }
    else
    {
      MR_String TermStr_14;
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_21;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_34;
      MR_Word Var_35;

      TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (TermStr_14));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[284])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_21));
      }
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Pieces_15));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeUint_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_sectag_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeSectagSize_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String AtomStr_9;
    MR_Word ArgTerms_10;
    MR_Word TermContext_11;
    MR_Word Var_24;

    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        if ((strcmp(AtomStr_9, (MR_String) "sectag_bits") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(AtomStr_9, (MR_String) "sectag_rest_of_word") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      if ((strcmp(AtomStr_9, (MR_String) "sectag_bits") == 0))
        if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_38;
          MR_Word Pieces_87;
          MR_Word Spec_88;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])));
          }
          {
            Pieces_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_87, 1) = ((MR_Box) (Var_28));
          }
          {
            Spec_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_88, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_88, 2) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(1), Spec_88, 3) = ((MR_Box) (Pieces_87));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Spec_88));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSectagSize_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
          }
        }
        else
        {
          MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
          MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

          if ((Var_118 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeSectagNumBits_17;

            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_5, VarSet_6, Var_119, &MaybeSectagNumBits_17);
            if (((MR_tag((MR_Word) MaybeSectagNumBits_17)) == (MR_Integer) 0))
              *MaybeSectagSize_8 = (MR_Word) (MaybeSectagNumBits_17);
            else
            {
              MR_Unsigned SectagNumBits_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectagNumBits_17, (MR_Integer) 0))));
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (SectagNumBits_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeSectagSize_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
              }
            }
          }
          else
          {
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_103;
            MR_Word Pieces_105;
            MR_Word Spec_106;

            {
              Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[69])));
            }
            {
              Pieces_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
              MR_hl_field(MR_mktag(1), Pieces_105, 1) = ((MR_Box) (Var_98));
            }
            {
              Spec_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_106, 2) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(1), Spec_106, 3) = ((MR_Box) (Pieces_105));
            }
            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_106));
              MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSectagSize_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
            }
          }
        }
      else
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeSectagSize_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[2]));
      else
      {
        MR_Word Pieces_14;
        MR_Word Spec_15;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_54;

        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_44));
        }
        {
          Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_15));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSectagSize_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
        }
      }
    else
    {
      MR_String TermStr_23;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Pieces_93;
      MR_Word Spec_94;

      TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TermStr_23));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[283])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[282])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Pieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[281])));
        MR_hl_field(MR_mktag(1), Pieces_93, 1) = ((MR_Box) (Var_59));
      }
      Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_94, 2) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Spec_94, 3) = ((MR_Box) (Pieces_93));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_94));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSectagSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(
  MR_Unsigned Max_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeUint_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Unsigned UintN_15;
    MR_Word Base_9;
    MR_Word N_10;
    MR_Word Signedness_11;
    MR_Word Size_12;
    MR_Integer IntN_14;
    MR_Word Var_19;
    MR_Word Var_20;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          Base_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))) & (MR_Integer) 3);
          N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
          Signedness_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Size_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Base_9 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (Signedness_11 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Size_12 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = mercury__integer__to_int_2_p_0(N_10, &IntN_14);
                if (succeeded)
                {
                  succeeded = mercury__uint__from_int_2_p_0(IntN_14, &UintN_15);
                  if (succeeded)
                    succeeded = (UintN_15 <= Max_5);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeUint_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UintN_15));
      }
    else
    {
      MR_String TermStr_16;
      MR_Word Pieces_17;
      MR_Word Spec_18;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Integer Var_25;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_39;
      MR_Word Var_40;

      TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      Var_25 = mercury__uint__cast_to_int_1_f_0(Max_5);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (TermStr_16));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[280])));
        MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_23));
      }
      Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Pieces_17));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeUint_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_enum_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_43;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      Var_65 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[79])));
      {
        Spec_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_43, 2) = ((MR_Box) (TermContext_6));
        MR_hl_field(MR_mktag(1), Spec_43, 3) = ((MR_Box) (Var_64));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
      }
    }
    else
    {
      MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));

      if ((Var_184 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_140;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_145;

        Var_144 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
        Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_144, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[79])));
        {
          Spec_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_140, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_140, 2) = ((MR_Box) (TermContext_6));
          MR_hl_field(MR_mktag(1), Spec_140, 3) = ((MR_Box) (Var_143));
        }
        {
          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Spec_140));
          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_145));
        }
      }
      else
      {
        MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_184, (MR_Integer) 1))));
        MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_184, (MR_Integer) 0))));

        if ((Var_186 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_149;
          MR_Word Var_152;
          MR_Word Var_153;
          MR_Word Var_154;

          Var_153 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
          Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_153, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[79])));
          {
            Spec_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_149, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_149, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_149, 2) = ((MR_Box) (TermContext_6));
            MR_hl_field(MR_mktag(1), Spec_149, 3) = ((MR_Box) (Var_152));
          }
          {
            Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Spec_149));
            MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_154));
          }
        }
        else
        {
          MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_186, (MR_Integer) 1))));
          MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_186, (MR_Integer) 0))));

          if ((Var_188 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_158;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_163;

            Var_162 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
            Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_162, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[79])));
            {
              Spec_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_158, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_158, 2) = ((MR_Box) (TermContext_6));
              MR_hl_field(MR_mktag(1), Spec_158, 3) = ((MR_Box) (Var_161));
            }
            {
              Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Spec_158));
              MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_163));
            }
          }
          else
          {
            MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_188, (MR_Integer) 1))));
            MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_188, (MR_Integer) 0))));

            if ((Var_190 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeEnumFunctorName1_14;
              MR_Word MaybeEnumFunctorName2_16;
              MR_Word LaterEnumFunctorNames_19;
              MR_Word LaterEnumSpecs_20;
              MR_Word MaybeCJCsERepnOrEnum_24;
              MR_Word LaterEnumFunctorTerms_17;
              MR_String EnumFunctorName1_25;
              MR_String EnumFunctorName2_26;
              MR_Word CJCsERepnOrEnum_27;

              parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[82])), (MR_String) "function symbol", Var_185, &MaybeEnumFunctorName1_14);
              parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[84])), (MR_String) "function symbol", Var_187, &MaybeEnumFunctorName2_16);
              succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_189, &LaterEnumFunctorTerms_17);
              if (succeeded)
                parse_tree__parse_type_repn__parse_strings_7_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[86])), (MR_String) "function symbol", (MR_Integer) 1, LaterEnumFunctorTerms_17, &LaterEnumFunctorNames_19, &LaterEnumSpecs_20);
              else
              {
                MR_Word LaterEnumSpec_22;
                MR_Word Var_119;

                LaterEnumFunctorNames_19 = (MR_Word) ((MR_Unsigned) 0U);
                Var_119 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_189);
                {
                  LaterEnumSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), LaterEnumSpec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), LaterEnumSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), LaterEnumSpec_22, 2) = ((MR_Box) (Var_119));
                  MR_hl_field(MR_mktag(1), LaterEnumSpec_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[93])));
                }
                {
                  LaterEnumSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), LaterEnumSpecs_20, 0) = ((MR_Box) (LaterEnumSpec_22));
                  MR_hl_field(MR_mktag(1), LaterEnumSpecs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              parse_tree__parse_type_repn__parse_c_j_cs_e_repn_or_enum_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[96])), (MR_Integer) 0, Var_191, &MaybeCJCsERepnOrEnum_24);
              succeeded = (LaterEnumSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeEnumFunctorName1_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  EnumFunctorName1_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEnumFunctorName1_14, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeEnumFunctorName2_16)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    EnumFunctorName2_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEnumFunctorName2_16, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeCJCsERepnOrEnum_24)) == (MR_Integer) 1);
                    if (succeeded)
                      CJCsERepnOrEnum_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCJCsERepnOrEnum_24, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word EnumRepn_28;
                MR_Word Var_128;

                {
                  EnumRepn_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), EnumRepn_28, 0) = ((MR_Box) (EnumFunctorName1_25));
                  MR_hl_field(MR_mktag(0), EnumRepn_28, 1) = ((MR_Box) (EnumFunctorName2_26));
                  MR_hl_field(MR_mktag(0), EnumRepn_28, 2) = ((MR_Box) (LaterEnumFunctorNames_19));
                  MR_hl_field(MR_mktag(0), EnumRepn_28, 3) = ((MR_Box) (CJCsERepnOrEnum_27));
                }
                Var_128 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnumRepn_28)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeDuRepn_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_128));
                }
              }
              else
              {
                MR_Word Specs_29;
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_133;

                Var_129 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeEnumFunctorName1_14);
                Var_131 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeEnumFunctorName2_16);
                Var_133 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[4]), MaybeCJCsERepnOrEnum_24);
                Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LaterEnumSpecs_20, Var_133);
                Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_131, Var_132);
                Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_129, Var_130);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuRepn_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_29));
                }
              }
            }
            else
            {
              MR_Word Spec_167;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Var_172;

              Var_171 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
              Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_171, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[79])));
              {
                Spec_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_167, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_167, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_167, 2) = ((MR_Box) (TermContext_6));
                MR_hl_field(MR_mktag(1), Spec_167, 3) = ((MR_Box) (Var_170));
              }
              {
                Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Spec_167));
                MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuRepn_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_172));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_direct_dummy_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_26;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[71])));
      {
        Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) (TermContext_6));
        MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Var_40));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      }
    }
    else
    {
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));

      if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        Var_76 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[71])));
        {
          Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) (TermContext_6));
          MR_hl_field(MR_mktag(1), Spec_72, 3) = ((MR_Box) (Var_75));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_72));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
        }
      }
      else
      {
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 1))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 0))));

        if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeFunctorName_12;
          MR_Word MaybeCJCsERepnOrEnum_14;
          MR_String FunctorName_15;
          MR_Word CJCsERepnOrEnum_16;

          parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[73])), (MR_String) "function symbol", Var_99, &MaybeFunctorName_12);
          parse_tree__parse_type_repn__parse_c_j_cs_e_repn_or_enum_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[75])), (MR_Integer) 0, Var_101, &MaybeCJCsERepnOrEnum_14);
          succeeded = ((MR_tag((MR_Word) MaybeFunctorName_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            FunctorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_12, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCJCsERepnOrEnum_14)) == (MR_Integer) 1);
            if (succeeded)
              CJCsERepnOrEnum_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCJCsERepnOrEnum_14, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word DirectDummyRepn_17;
            MR_Word DuRepn_18;

            {
              DirectDummyRepn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DirectDummyRepn_17, 0) = ((MR_Box) (FunctorName_15));
              MR_hl_field(MR_mktag(0), DirectDummyRepn_17, 1) = ((MR_Box) (CJCsERepnOrEnum_16));
            }
            DuRepn_18 = (MR_Word) ((MR_Word) (DirectDummyRepn_17));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuRepn_18));
            }
          }
          else
          {
            MR_Word Specs_19;
            MR_Word Var_65;
            MR_Word Var_66;

            Var_65 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_12);
            Var_66 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[4]), MaybeCJCsERepnOrEnum_14);
            Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_65, Var_66);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
            }
          }
        }
        else
        {
          MR_Word Spec_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;

          Var_85 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[71])));
          {
            Spec_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_81, 2) = ((MR_Box) (TermContext_6));
            MR_hl_field(MR_mktag(1), Spec_81, 3) = ((MR_Box) (Var_84));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_81));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_e_repn_or_enum_5_p_0(
  MR_Word VarSet_6,
  MR_Word DescPieces_7,
  MR_Word MinLength_8,
  MR_Word Term_9,
  MR_Word * MaybeCJCsERepnOrEnum_10)
{
  {
    MR_bool succeeded;
    MR_Word ForeignPairs_12;
    MR_Word ForeignSpecs_13;
    MR_Word MinSpecs_14;
    MR_Word MaybeCJCsERepnOrEnum0_20;
    MR_Word Var_33;
    MR_Word ForeignTerms_11;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_9, &ForeignTerms_11);
    if (succeeded)
    {
      parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0(VarSet_6, DescPieces_7, (MR_Integer) 1, ForeignTerms_11, &ForeignPairs_12, &ForeignSpecs_13);
      switch (MinLength_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MinSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          if ((ForeignPairs_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MinSpec_17;
            MR_Word Pieces_44;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_55;
            MR_Word Var_70;

            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[259])), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[167])));
            Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[243])), Var_55);
            Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_7, Var_50);
            Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[241])), Var_49);
            Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
            {
              MinSpec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MinSpec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), MinSpec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), MinSpec_17, 2) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), MinSpec_17, 3) = ((MR_Box) (Pieces_44));
            }
            {
              MinSpecs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MinSpecs_14, 0) = ((MR_Box) (MinSpec_17));
              MR_hl_field(MR_mktag(1), MinSpecs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            MinSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
    else
    {
      MR_Word NonEmptyPieces_18;
      MR_Word ForeignSpec_19;

      ForeignPairs_12 = (MR_Word) ((MR_Unsigned) 0U);
      switch (MinLength_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NonEmptyPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          NonEmptyPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[259]));
          break;
      }
      ForeignSpec_19 = parse_tree__parse_type_repn__require_foreign_repn_or_enum_list_spec_3_f_0(DescPieces_7, NonEmptyPieces_18, Term_9);
      {
        ForeignSpecs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ForeignSpecs_13, 0) = ((MR_Box) (ForeignSpec_19));
        MR_hl_field(MR_mktag(1), ForeignSpecs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      MinSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_111_99_95_108_105_115_116_95_116_111_95_99_95_106_95_99_115_95_101_95_95_91_49_93_95_48_4_p_0(Var_33, DescPieces_7, ForeignPairs_12, &MaybeCJCsERepnOrEnum0_20);
    succeeded = (ForeignSpecs_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MinSpecs_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeCJCsERepnOrEnum0_20)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      *MaybeCJCsERepnOrEnum_10 = MaybeCJCsERepnOrEnum0_20;
    else
    {
      MR_Word Specs_22;
      MR_Word Var_34;
      MR_Word Var_35;

      Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[4]), MaybeCJCsERepnOrEnum0_20);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MinSpecs_14, Var_35);
      Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ForeignSpecs_13, Var_34);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCJCsERepnOrEnum_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_22));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_1;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__parse_type_repn__nth_element_of_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_1;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0(
  MR_Word VarSet_1,
  MR_Word BasePieces_2,
  MR_Integer ElementNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ContextPiecesFunc_17;
    MR_Word MaybeForeignLangRepnOrEnum_18;
    MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) ElementNum_3 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_ForeignPairs_24_24;
    MR_Word STATE_VARIABLE_Specs_25_25;

    parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0(VarSet_1, BasePieces_2, Var_23, Terms_14, &STATE_VARIABLE_ForeignPairs_24_24, &STATE_VARIABLE_Specs_25_25);
    {
      ContextPiecesFunc_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 1) = ((MR_Box) (parse_tree__parse_type_repn__parse_foreign_language_type_repn_or_enums_6_p_0_1));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 3) = ((MR_Box) (BasePieces_2));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 4) = ((MR_Box) (ElementNum_3));
    }
    parse_tree__parse_type_repn__parse_foreign_language_type_or_enum_repn_4_p_0(VarSet_1, ContextPiecesFunc_17, Term_13, &MaybeForeignLangRepnOrEnum_18);
    if (((MR_tag((MR_Word) MaybeForeignLangRepnOrEnum_18)) == (MR_Integer) 0))
    {
      MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeForeignLangRepnOrEnum_18, (MR_Integer) 0))));

      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_16, STATE_VARIABLE_Specs_25_25);
      *HeadVar__5_5 = STATE_VARIABLE_ForeignPairs_24_24;
    }
    else
    {
      MR_Word Lang_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLangRepnOrEnum_18, (MR_Integer) 0))));
      MR_Word RepnOrEnum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLangRepnOrEnum_18, (MR_Integer) 1))));
      MR_Word Var_30;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Lang_19));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (RepnOrEnum_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ForeignPairs_24_24));
      }
      *HeadVar__6_6 = STATE_VARIABLE_Specs_25_25;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_or_enum_repn_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPiecesFunc_6,
  MR_Word Term_7,
  MR_Word * MaybeForeignLangRepnOrEnum_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String FunctorStr_9;
    MR_Word ArgTerms_10;
    MR_Word TermContext_11;
    MR_Word Var_36;

    if (succeeded)
    {
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        if ((strcmp(FunctorStr_9, (MR_String) "foreign_enum") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(FunctorStr_9, (MR_String) "foreign_type") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      if ((strcmp(FunctorStr_9, (MR_String) "foreign_enum") == 0))
        if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_40;
          MR_Word Var_43;
          MR_Word Var_73;
          MR_Word Pieces_231;
          MR_Word Spec_232;
          MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
          MR_Box conv1_Var_43;

          conv1_Var_43 = func_0(((MR_Box) (ContextPiecesFunc_6)));
          Var_43 = ((MR_Word) (conv1_Var_43));
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
          }
          Pieces_231 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[181])));
          {
            Spec_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_232, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_232, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_232, 2) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(1), Spec_232, 3) = ((MR_Box) (Pieces_231));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_232));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeForeignLangRepnOrEnum_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
          }
        }
        else
        {
          MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
          MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

          if ((Var_314 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_254;
            MR_Word Var_257;
            MR_Word Var_261;
            MR_Word Pieces_263;
            MR_Word Spec_264;
            MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
            MR_Box conv3_Var_257;

            conv3_Var_257 = func_2(((MR_Box) (ContextPiecesFunc_6)));
            Var_257 = ((MR_Word) (conv3_Var_257));
            {
              Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
              MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (Var_257));
            }
            Pieces_263 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_254, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[181])));
            {
              Spec_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_264, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_264, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_264, 2) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(1), Spec_264, 3) = ((MR_Box) (Pieces_263));
            }
            {
              Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_261, 0) = ((MR_Box) (Spec_264));
              MR_hl_field(MR_mktag(1), Var_261, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeForeignLangRepnOrEnum_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_261));
            }
          }
          else
          {
            MR_Word Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 1))));
            MR_Word Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 0))));

            if ((Var_318 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeLang_26;
              MR_Word MaybeOoMStrings_28;
              MR_Word Var_141;
              MR_String Var_142;
              MR_Word Lang0_25;
              MR_String LangStr_23;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Integer lo_0;
              MR_Integer hi_1;
              MR_Integer mid_2;
              MR_Integer result_3;
              MR_Box MR_CALL (* func_6)(MR_Box);
              MR_Box conv7_Var_141;
              MR_Word OoMStrings_29;
              MR_Word Lang_224;

              succeeded = ((MR_tag((MR_Word) Var_315)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_315, (MR_Integer) 0))));
                Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_315, (MR_Integer) 1))));
                succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_77)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    LangStr_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 0))));
                    // binary string simple lookup switch
                    ;
                    lo_0 = (MR_Integer) 0;
                    hi_1 = (MR_Integer) 3;
                    do
                    {
                      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                      result_3 = MR_strcmp(LangStr_23, ((&parse_tree__parse_type_repn_vector_common_3[8 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
                      if ((result_3 == (MR_Integer) 0))
                      {
                        Lang0_25 = ((&parse_tree__parse_type_repn_vector_common_3[8 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1;
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
                  MaybeLang_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeLang_26, 0) = ((MR_Box) (Lang0_25));
                }
              else
              {
                MR_String ArgTermStr1_27;
                MR_Word Var_79;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_86;
                MR_Word Var_89;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_95;
                MR_Word Var_98;
                MR_Word Var_101;
                MR_Word Var_104;
                MR_Word Var_107;
                MR_Word Var_110;
                MR_Word Var_113;
                MR_Word Var_116;
                MR_Word Var_119;
                MR_Word Var_122;
                MR_Word Var_125;
                MR_Word Var_128;
                MR_Word Var_129;
                MR_Word Var_138;
                MR_Word Var_139;
                MR_Word Pieces_219;
                MR_Word Spec_220;
                MR_Box MR_CALL (* func_4)(MR_Box);
                MR_Box conv5_Var_82;

                ArgTermStr1_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Var_315);
                func_4 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
                conv5_Var_82 = func_4(((MR_Box) (ContextPiecesFunc_6)));
                Var_82 = ((MR_Word) (conv5_Var_82));
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
                  MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
                }
                Var_93 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239]));
                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ArgTermStr1_27));
                }
                {
                  Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
                  MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
                }
                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
                }
                {
                  Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[275])));
                  MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
                }
                {
                  Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[274])));
                  MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
                }
                {
                  Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
                  MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
                }
                {
                  Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[272])));
                  MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
                }
                {
                  Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
                }
                {
                  Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[271])));
                  MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
                }
                {
                  Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_107));
                }
                {
                  Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[270])));
                  MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[269])));
                  MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_101));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[268])));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[267])));
                  MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[266])));
                  MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[251])));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
                }
                Pieces_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_79, Var_83);
                Var_138 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_315);
                {
                  Spec_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_220, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_220, 2) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(1), Spec_220, 3) = ((MR_Box) (Pieces_219));
                }
                {
                  Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Spec_220));
                  MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeLang_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeLang_26, 0) = ((MR_Box) (Var_139));
                }
              }
              func_6 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
              conv7_Var_141 = func_6(((MR_Box) (ContextPiecesFunc_6)));
              Var_141 = ((MR_Word) (conv7_Var_141));
              Var_142 = (MR_String) "enum values";
              parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0(VarSet_5, Var_141, Var_142, Var_319, &MaybeOoMStrings_28);
              succeeded = ((MR_tag((MR_Word) MaybeLang_26)) == (MR_Integer) 1);
              if (succeeded)
              {
                Lang_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLang_26, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeOoMStrings_28)) == (MR_Integer) 1);
                if (succeeded)
                  OoMStrings_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOoMStrings_28, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_143;

                {
                  Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (OoMStrings_29));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeForeignLangRepnOrEnum_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Lang_224));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_143));
                }
              }
              else
              {
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Specs_223;

                Var_144 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeLang_26);
                Var_145 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[7]), MaybeOoMStrings_28);
                Specs_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_144, Var_145);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeForeignLangRepnOrEnum_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_223));
                }
              }
            }
            else
            {
              MR_Word Var_266;
              MR_Word Var_269;
              MR_Word Var_273;
              MR_Word Pieces_275;
              MR_Word Spec_276;
              MR_Box MR_CALL (* func_8)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
              MR_Box conv9_Var_269;

              conv9_Var_269 = func_8(((MR_Box) (ContextPiecesFunc_6)));
              Var_269 = ((MR_Word) (conv9_Var_269));
              {
                Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_266, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
                MR_hl_field(MR_mktag(1), Var_266, 1) = ((MR_Box) (Var_269));
              }
              Pieces_275 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_266, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[181])));
              {
                Spec_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_276, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_276, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_276, 2) = ((MR_Box) (TermContext_11));
                MR_hl_field(MR_mktag(1), Spec_276, 3) = ((MR_Box) (Pieces_275));
              }
              {
                Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (Spec_276));
                MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeForeignLangRepnOrEnum_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_273));
              }
            }
          }
        }
      else
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_20;
        MR_Word Spec_21;
        MR_Word Var_147;
        MR_Word Var_150;
        MR_Word Var_177;
        MR_Box MR_CALL (* func_10)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
        MR_Box conv11_Var_150;

        conv11_Var_150 = func_10(((MR_Box) (ContextPiecesFunc_6)));
        Var_150 = ((MR_Word) (conv11_Var_150));
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_150));
        }
        Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_147, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[192])));
        {
          Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Pieces_20));
        }
        {
          Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeForeignLangRepnOrEnum_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_177));
        }
      }
      else
      {
        MR_Word Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
        MR_Word Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

        if ((Var_316 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeForeignLangRepn_13;

          parse_tree__parse_type_repn__parse_foreign_language_type_repn_4_p_0(VarSet_5, ContextPiecesFunc_6, Var_317, &MaybeForeignLangRepn_13);
          if (((MR_tag((MR_Word) MaybeForeignLangRepn_13)) == (MR_Integer) 0))
            *MaybeForeignLangRepnOrEnum_8 = (MR_Word) (MaybeForeignLangRepn_13);
          else
          {
            MR_Word Lang_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLangRepn_13, (MR_Integer) 0))));
            MR_Word ForeignRepn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLangRepn_13, (MR_Integer) 1))));
            MR_Word Var_180 = (MR_Word) ((MR_Word) (ForeignRepn_15));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeForeignLangRepnOrEnum_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Lang_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_180));
            }
          }
        }
        else
        {
          MR_Word Pieces_290;
          MR_Word Spec_291;
          MR_Word Var_292;
          MR_Word Var_295;
          MR_Word Var_299;
          MR_Box MR_CALL (* func_12)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
          MR_Box conv13_Var_295;

          conv13_Var_295 = func_12(((MR_Box) (ContextPiecesFunc_6)));
          Var_295 = ((MR_Word) (conv13_Var_295));
          {
            Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_292, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
            MR_hl_field(MR_mktag(1), Var_292, 1) = ((MR_Box) (Var_295));
          }
          Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_292, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[192])));
          {
            Spec_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_291, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_291, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_291, 2) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(1), Spec_291, 3) = ((MR_Box) (Pieces_290));
          }
          {
            Var_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_299, 0) = ((MR_Box) (Spec_291));
            MR_hl_field(MR_mktag(1), Var_299, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeForeignLangRepnOrEnum_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_299));
          }
        }
      }
    else
    {
      MR_String TermStr_35;
      MR_Word Var_181;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Word Var_188;
      MR_Word Var_191;
      MR_Word Var_194;
      MR_Word Var_197;
      MR_Word Var_200;
      MR_Word Var_203;
      MR_Word Var_206;
      MR_Word Var_207;
      MR_Word Var_216;
      MR_Word Var_217;
      MR_Word Pieces_243;
      MR_Word Spec_244;
      MR_Box MR_CALL (* func_14)(MR_Box);
      MR_Box conv15_Var_184;

      TermStr_35 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      func_14 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
      conv15_Var_184 = func_14(((MR_Box) (ContextPiecesFunc_6)));
      Var_184 = ((MR_Word) (conv15_Var_184));
      {
        Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
        MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_184));
      }
      {
        Var_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_207, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_207, 1) = ((MR_Box) (TermStr_35));
      }
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Var_207));
        MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_206));
      }
      {
        Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_203));
      }
      {
        Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[279])));
        MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_200));
      }
      {
        Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[278])));
        MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_197));
      }
      {
        Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[277])));
        MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_194));
      }
      {
        Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[276])));
        MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_191));
      }
      {
        Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[251])));
        MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Var_188));
      }
      Pieces_243 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_181, Var_185);
      Var_216 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_244, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_244, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_244, 2) = ((MR_Box) (Var_216));
        MR_hl_field(MR_mktag(1), Spec_244, 3) = ((MR_Box) (Pieces_243));
      }
      {
        Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Spec_244));
        MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeForeignLangRepnOrEnum_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_217));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2061__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2048__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_String Desc_8,
  MR_Word Term_9,
  MR_Word * MaybeOoMStrings_10)
{
  {
    MR_bool succeeded;
    MR_Word StringTerms_11;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_9, &StringTerms_11);
    if (succeeded)
    {
      MR_Word Strings_12;
      MR_Word StringSpecs_13;

      parse_tree__parse_type_repn__parse_strings_7_p_0(VarSet_6, ContextPieces_7, Desc_8, (MR_Integer) 1, StringTerms_11, &Strings_12, &StringSpecs_13);
      if ((Strings_12 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((StringTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_14;
          MR_Word Spec_15;
          MR_Word Var_29;
          MR_Word Var_33;
          MR_Word Var_50;
          MR_Word Var_51;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (StringSpecs_13));
            MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140parse_tree.parse_type_repn.parse_one_or_more_strings\'/5", (MR_String) "StringTerms = [] but StringSpecs != []");
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (ContextPieces_7));
          }
          Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[226])));
          Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_15));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeOoMStrings_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
          }
        }
        else
        {
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__parse_type_repn__parse_one_or_more_strings_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (StringSpecs_13));
            MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_not_3_p_0(Var_25, (MR_String) "predicate \140parse_tree.parse_type_repn.parse_one_or_more_strings\'/5", (MR_String) "StringTerms != [] and Strings = [] but StringSpecs = []");
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeOoMStrings_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (StringSpecs_13));
          }
        }
      else
      {
        MR_String HeadString_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), Strings_12, (MR_Integer) 0))));
        MR_Word TailStrings_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strings_12, (MR_Integer) 1))));

        if ((StringSpecs_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (HeadString_18));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (TailStrings_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeOoMStrings_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeOoMStrings_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (StringSpecs_13));
          }
      }
    }
    else
    {
      MR_String TermStr_22;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Pieces_75;
      MR_Word Spec_76;

      TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_9);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (ContextPieces_7));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (TermStr_22));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[265])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[251])));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
      }
      Pieces_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, Var_56);
      Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_76, 2) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Spec_76, 3) = ((MR_Box) (Pieces_75));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_76));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeOoMStrings_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_strings_7_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_String Desc_3,
  MR_Integer Nth_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Term_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Terms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Nth_4 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Strs_28_28;
      MR_Word STATE_VARIABLE_Specs_29_29;
      MR_String Str_20;
      MR_Word Var_31;
      MR_Word Var_32;

      parse_tree__parse_type_repn__parse_strings_7_p_0(VarSet_1, ContextPieces_2, Desc_3, Var_27, Terms_17, &STATE_VARIABLE_Strs_28_28, &STATE_VARIABLE_Specs_29_29);
      succeeded = ((MR_tag((MR_Word) Term_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_16, (MR_Integer) 0))));
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_16, (MR_Integer) 1))));
        succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 2);
          if (succeeded)
            Str_20 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_31, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Str_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Strs_28_28));
        }
        *HeadVar__7_7 = STATE_VARIABLE_Specs_29_29;
      }
      else
      {
        MR_String TermStr_22;
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_65;

        TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, Term_16);
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Nth_4));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[262])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[260])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Desc_3));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (TermStr_22));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[263])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_2, Var_44);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_43);
        Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_16);
        {
          Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Pieces_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_29_29));
        }
        *HeadVar__6_6 = STATE_VARIABLE_Strs_28_28;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPiecesFunc_6,
  MR_Word Term_7,
  MR_Word * MaybeForeignLangRepn_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Lang_12;
    MR_Word TypeNameTerm_13;
    MR_Word AssertionTerm_14;
    MR_String FunctorStr_9;
    MR_Word ArgTerms_10;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(FunctorStr_9, ((&parse_tree__parse_type_repn_vector_common_3[4 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            Lang_12 = ((&parse_tree__parse_type_repn_vector_common_3[4 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1;
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
        if (succeeded)
        {
          succeeded = (ArgTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeNameTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
            succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              AssertionTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_type_repn__parse_foreign_type_repn_6_p_0(VarSet_5, ContextPiecesFunc_6, Lang_12, TypeNameTerm_13, AssertionTerm_14, MaybeForeignLangRepn_8);
    else
    {
      MR_String TermStr_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Box MR_CALL (* func_0)(MR_Box);
      MR_Box conv1_Var_26;

      TermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      func_0 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_6, (MR_Integer) 1))));
      conv1_Var_26 = func_0(((MR_Box) (ContextPiecesFunc_6)));
      Var_26 = ((MR_Word) (conv1_Var_26));
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TermStr_15));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[216])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[248])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, Var_27);
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[241])), Var_25);
      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Pieces_16));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeForeignLangRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_repn__require_foreign_repn_or_enum_list_spec_3_f_0(
  MR_Word DescPieces_5,
  MR_Word NonEmptyPieces_6,
  MR_Word Term_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_20;
    MR_Word Var_35;

    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NonEmptyPieces_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[167])));
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[243])), Var_20);
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_5, Var_15);
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[241])), Var_14);
    Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_notag_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8)
{
  {
    MR_bool succeeded;

    if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_26;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[59])));
      {
        Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) (TermContext_6));
        MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Var_40));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      }
    }
    else
    {
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));

      if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        Var_76 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[59])));
        {
          Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) (TermContext_6));
          MR_hl_field(MR_mktag(1), Spec_72, 3) = ((MR_Box) (Var_75));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_72));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
        }
      }
      else
      {
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 1))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 0))));

        if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeFunctorName_12;
          MR_Word MaybeCJCsERepn_14;
          MR_String FunctorName_15;
          MR_Word CJCsERepn_16;

          parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[64])), (MR_String) "function symbol", Var_99, &MaybeFunctorName_12);
          parse_tree__parse_type_repn__parse_c_j_cs_e_repn_5_p_0(VarSet_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[67])), (MR_Integer) 0, Var_101, &MaybeCJCsERepn_14);
          succeeded = ((MR_tag((MR_Word) MaybeFunctorName_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            FunctorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_12, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCJCsERepn_14)) == (MR_Integer) 1);
            if (succeeded)
              CJCsERepn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCJCsERepn_14, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word NotagRepn_17;
            MR_Word DuRepn_18;

            {
              NotagRepn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NotagRepn_17, 0) = ((MR_Box) (FunctorName_15));
              MR_hl_field(MR_mktag(0), NotagRepn_17, 1) = ((MR_Box) (CJCsERepn_16));
            }
            DuRepn_18 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NotagRepn_17)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuRepn_18));
            }
          }
          else
          {
            MR_Word Specs_19;
            MR_Word Var_65;
            MR_Word Var_66;

            Var_65 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_12);
            Var_66 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeCJCsERepn_14);
            Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_65, Var_66);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
            }
          }
        }
        else
        {
          MR_Word Spec_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;

          Var_85 = parse_tree__parse_type_repn__malformed_du_prefix_0_f_0();
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[59])));
          {
            Spec_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_81, 2) = ((MR_Box) (TermContext_6));
            MR_hl_field(MR_mktag(1), Spec_81, 3) = ((MR_Box) (Var_84));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_81));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_e_repn_5_p_0(
  MR_Word VarSet_6,
  MR_Word DescPieces_7,
  MR_Word MinLength_8,
  MR_Word Term_9,
  MR_Word * MaybeCJCsERepn_10)
{
  {
    MR_bool succeeded;
    MR_Word ForeignPairs_12;
    MR_Word ForeignSpecs_13;
    MR_Word MinSpecs_14;
    MR_Word MaybeCJCsERepn0_20;
    MR_Word Var_33;
    MR_Word ForeignTerms_11;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_9, &ForeignTerms_11);
    if (succeeded)
    {
      parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0(VarSet_6, DescPieces_7, (MR_Integer) 1, ForeignTerms_11, &ForeignPairs_12, &ForeignSpecs_13);
      switch (MinLength_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MinSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          if ((ForeignPairs_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MinSpec_17;
            MR_Word Pieces_44;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_55;
            MR_Word Var_70;

            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[259])), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[167])));
            Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[243])), Var_55);
            Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_7, Var_50);
            Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[241])), Var_49);
            Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
            {
              MinSpec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MinSpec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), MinSpec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), MinSpec_17, 2) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), MinSpec_17, 3) = ((MR_Box) (Pieces_44));
            }
            {
              MinSpecs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MinSpecs_14, 0) = ((MR_Box) (MinSpec_17));
              MR_hl_field(MR_mktag(1), MinSpecs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            MinSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
    else
    {
      MR_Word NonEmptyPieces_18;
      MR_Word ForeignSpec_19;

      ForeignPairs_12 = (MR_Word) ((MR_Unsigned) 0U);
      switch (MinLength_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NonEmptyPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          NonEmptyPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[259]));
          break;
      }
      ForeignSpec_19 = parse_tree__parse_type_repn__require_foreign_repn_list_spec_3_f_0(DescPieces_7, NonEmptyPieces_18, Term_9);
      {
        ForeignSpecs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ForeignSpecs_13, 0) = ((MR_Box) (ForeignSpec_19));
        MR_hl_field(MR_mktag(1), ForeignSpecs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      MinSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_111_99_95_108_105_115_116_95_116_111_95_99_95_106_95_99_115_95_101_95_95_91_49_93_95_48_4_p_0(Var_33, DescPieces_7, ForeignPairs_12, &MaybeCJCsERepn0_20);
    succeeded = (ForeignSpecs_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MinSpecs_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeCJCsERepn0_20)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      *MaybeCJCsERepn_10 = MaybeCJCsERepn0_20;
    else
    {
      MR_Word Specs_22;
      MR_Word Var_34;
      MR_Word Var_35;

      Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeCJCsERepn0_20);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MinSpecs_14, Var_35);
      Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ForeignSpecs_13, Var_34);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCJCsERepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_22));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_111_99_95_108_105_115_116_95_116_111_95_99_95_106_95_99_115_95_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word TermContext_5,
  MR_Word Desc_6,
  MR_Word STATE_VARIABLE_Pairs_0_22,
  MR_Word * MaybeCJCsE_8)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_Pairs_0_22 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word MaybeValueC_10;
    MR_Word MaybeValueJava_12;
    MR_Word MaybeValueCsharp_14;
    MR_Word MaybeValueErlang_16;
    MR_Word STATE_VARIABLE_Pairs_26_26;
    MR_Word STATE_VARIABLE_Pairs_30_30;
    MR_Word STATE_VARIABLE_Pairs_34_34;
    MR_Word STATE_VARIABLE_Pairs_38_38;
    MR_Box ValueC_9;
    MR_Word STATE_VARIABLE_Pairs_23_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Box ValueJava_11;
    MR_Word STATE_VARIABLE_Pairs_27_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box ValueCsharp_13;
    MR_Word STATE_VARIABLE_Pairs_31_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Box ValueErlang_15;
    MR_Word STATE_VARIABLE_Pairs_35_35;
    MR_Word Var_36;
    MR_Word Var_37;

    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_0_22, (MR_Integer) 0))));
      STATE_VARIABLE_Pairs_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_0_22, (MR_Integer) 1))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
      ValueC_9 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      succeeded = (Var_25 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Pairs_26_26 = STATE_VARIABLE_Pairs_23_23;
      {
        MaybeValueC_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeValueC_10, 0) = ValueC_9;
      }
    }
    else
    {
      MaybeValueC_10 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Pairs_26_26 = STATE_VARIABLE_Pairs_0_22;
    }
    succeeded = (STATE_VARIABLE_Pairs_26_26 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_26_26, (MR_Integer) 0))));
      STATE_VARIABLE_Pairs_27_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_26_26, (MR_Integer) 1))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
      ValueJava_11 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1));
      succeeded = (Var_29 == (MR_Integer) 2);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Pairs_30_30 = STATE_VARIABLE_Pairs_27_27;
      {
        MaybeValueJava_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeValueJava_12, 0) = ValueJava_11;
      }
    }
    else
    {
      MaybeValueJava_12 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Pairs_30_30 = STATE_VARIABLE_Pairs_26_26;
    }
    succeeded = (STATE_VARIABLE_Pairs_30_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_30_30, (MR_Integer) 0))));
      STATE_VARIABLE_Pairs_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_30_30, (MR_Integer) 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
      ValueCsharp_13 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      succeeded = (Var_33 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Pairs_34_34 = STATE_VARIABLE_Pairs_31_31;
      {
        MaybeValueCsharp_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeValueCsharp_14, 0) = ValueCsharp_13;
      }
    }
    else
    {
      MaybeValueCsharp_14 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Pairs_34_34 = STATE_VARIABLE_Pairs_30_30;
    }
    succeeded = (STATE_VARIABLE_Pairs_34_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_34_34, (MR_Integer) 0))));
      STATE_VARIABLE_Pairs_35_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pairs_34_34, (MR_Integer) 1))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      ValueErlang_15 = (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1));
      succeeded = (Var_37 == (MR_Integer) 3);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Pairs_38_38 = STATE_VARIABLE_Pairs_35_35;
      {
        MaybeValueErlang_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeValueErlang_16, 0) = ValueErlang_15;
      }
    }
    else
    {
      MaybeValueErlang_16 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Pairs_38_38 = STATE_VARIABLE_Pairs_34_34;
    }
    if ((STATE_VARIABLE_Pairs_38_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word CJCsE_17;

      {
        CJCsE_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CJCsE_17, 0) = ((MR_Box) (MaybeValueC_10));
        MR_hl_field(MR_mktag(0), CJCsE_17, 1) = ((MR_Box) (MaybeValueJava_12));
        MR_hl_field(MR_mktag(0), CJCsE_17, 2) = ((MR_Box) (MaybeValueCsharp_14));
        MR_hl_field(MR_mktag(0), CJCsE_17, 3) = ((MR_Box) (MaybeValueErlang_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCJCsE_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CJCsE_17));
      }
    }
    else
    {
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_43;
      MR_Word Var_55;

      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Desc_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[230])));
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[257])), Var_43);
      {
        Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) (TermContext_5));
        MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Pieces_20));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCJCsE_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_1;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__parse_type_repn__nth_element_of_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_1;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0(
  MR_Word VarSet_1,
  MR_Word BasePieces_2,
  MR_Integer ElementNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ContextPiecesFunc_17;
    MR_Word MaybeForeignLangRepn_18;
    MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) ElementNum_3 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_ForeignPairs_24_24;
    MR_Word STATE_VARIABLE_Specs_25_25;

    parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0(VarSet_1, BasePieces_2, Var_23, Terms_14, &STATE_VARIABLE_ForeignPairs_24_24, &STATE_VARIABLE_Specs_25_25);
    {
      ContextPiecesFunc_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 1) = ((MR_Box) (parse_tree__parse_type_repn__parse_foreign_language_type_repns_6_p_0_1));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 3) = ((MR_Box) (BasePieces_2));
      MR_hl_field(MR_mktag(0), ContextPiecesFunc_17, 4) = ((MR_Box) (ElementNum_3));
    }
    parse_tree__parse_type_repn__parse_foreign_language_type_repn__ho1_4_p_0(BasePieces_2, ElementNum_3, VarSet_1, ContextPiecesFunc_17, Term_13, &MaybeForeignLangRepn_18);
    if (((MR_tag((MR_Word) MaybeForeignLangRepn_18)) == (MR_Integer) 0))
    {
      MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeForeignLangRepn_18, (MR_Integer) 0))));

      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_16, STATE_VARIABLE_Specs_25_25);
      *HeadVar__5_5 = STATE_VARIABLE_ForeignPairs_24_24;
    }
    else
    {
      MR_Word Lang_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLangRepn_18, (MR_Integer) 0))));
      MR_Word Repn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLangRepn_18, (MR_Integer) 1))));
      MR_Word Var_30;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Lang_19));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Repn_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ForeignPairs_24_24));
      }
      *HeadVar__6_6 = STATE_VARIABLE_Specs_25_25;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_type_repn__ho1_4_p_0(
  MR_Word Var_85,
  MR_Integer Var_86,
  MR_Word VarSet_5,
  MR_Word ContextPiecesFunc_6,
  MR_Word Term_7,
  MR_Word * MaybeForeignLangRepn_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Lang_12;
    MR_Word TypeNameTerm_13;
    MR_Word AssertionTerm_14;
    MR_String FunctorStr_9;
    MR_Word ArgTerms_10;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(FunctorStr_9, ((&parse_tree__parse_type_repn_vector_common_3[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            Lang_12 = ((&parse_tree__parse_type_repn_vector_common_3[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1;
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
        if (succeeded)
        {
          succeeded = (ArgTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeNameTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
            succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              AssertionTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_type_repn__parse_foreign_type_repn_6_p_0(VarSet_5, ContextPiecesFunc_6, Lang_12, TypeNameTerm_13, AssertionTerm_14, MaybeForeignLangRepn_8);
    else
    {
      MR_String TermStr_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_80;
      MR_Word Var_81;

      TermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      Var_26 = parse_tree__parse_type_repn__nth_element_of_2_f_0(Var_85, Var_86);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TermStr_15));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[216])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[248])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, Var_27);
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[241])), Var_25);
      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Pieces_16));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeForeignLangRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_repn__nth_element_of_2_f_0(
  MR_Word BasePieces_4,
  MR_Integer Nth_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Nth_5));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[255])));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[253])));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_9));
    }
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_6, BasePieces_4);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_type_repn_6_p_0(
  MR_Word VarSet_7,
  MR_Word ContextPiecesFunc_8,
  MR_Word Lang_9,
  MR_Word TypeNameTerm_10,
  MR_Word AssertionTerm_11,
  MR_Word * MaybeForeignLangRepn_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TypeNameTerm_10)) == (MR_Integer) 0);
    MR_Word MaybeTypeName_15;
    MR_Word AssertionContextPieces_21;
    MR_Word AssertionSet_22;
    MR_Word AssertionSpecs_23;
    MR_Word Var_75;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_86;
    MR_String TypeNameStr_13;
    MR_Word TypeNameContext_14;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box MR_CALL (* func_2)(MR_Box);
    MR_Box conv3_Var_81;
    MR_String TypeName_24;

    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeNameTerm_10, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeNameTerm_10, (MR_Integer) 1))));
      TypeNameContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeNameTerm_10, (MR_Integer) 2))));
      succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 2);
        if (succeeded)
          TypeNameStr_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_28, (MR_Integer) 0))));
      }
    }
    if (succeeded)
      switch (Lang_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MaybeTypeName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTypeName_15, 0) = ((MR_Box) (TypeNameStr_13));
          }
          break;
        case (MR_Integer) 3:
          {
            succeeded = (strcmp(TypeNameStr_13, (MR_String) "") == 0);
            if (succeeded)
              {
                MaybeTypeName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTypeName_15, 0) = ((MR_Box) (TypeNameStr_13));
              }
            else
            {
              MR_String TypeNameTermStr_16;
              MR_Word ErlangPieces_17;
              MR_Word ErlangSpec_18;
              MR_Word Var_32;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_45;

              TypeNameTermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, TypeNameTerm_10);
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TypeNameTermStr_16));
              }
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
              }
              {
                Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[245])));
                MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
              }
              {
                ErlangPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErlangPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[244])));
                MR_hl_field(MR_mktag(1), ErlangPieces_17, 1) = ((MR_Box) (Var_32));
              }
              {
                ErlangSpec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErlangSpec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), ErlangSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), ErlangSpec_18, 2) = ((MR_Box) (TypeNameContext_14));
                MR_hl_field(MR_mktag(1), ErlangSpec_18, 3) = ((MR_Box) (ErlangPieces_17));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ErlangSpec_18));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeTypeName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeTypeName_15, 0) = ((MR_Box) (Var_45));
              }
            }
          }
          break;
      }
    else
    {
      MR_Word TypeNamePieces_19;
      MR_Word TypeNameSpec_20;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_String TypeNameTermStr_89;
      MR_Box MR_CALL (* func_0)(MR_Box);
      MR_Box conv1_Var_52;

      TypeNameTermStr_89 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, TypeNameTerm_10);
      func_0 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_8, (MR_Integer) 1))));
      conv1_Var_52 = func_0(((MR_Box) (ContextPiecesFunc_8)));
      Var_52 = ((MR_Word) (conv1_Var_52));
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (TypeNameTermStr_89));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[221])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[248])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, Var_53);
      TypeNamePieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[247])), Var_51);
      Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeNameTerm_10);
      {
        TypeNameSpec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeNameSpec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), TypeNameSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), TypeNameSpec_20, 2) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), TypeNameSpec_20, 3) = ((MR_Box) (TypeNamePieces_19));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (TypeNameSpec_20));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeTypeName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeTypeName_15, 0) = ((MR_Box) (Var_73));
      }
    }
    func_2 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), ContextPiecesFunc_8, (MR_Integer) 1))));
    conv3_Var_81 = func_2(((MR_Box) (ContextPiecesFunc_8)));
    Var_81 = ((MR_Word) (conv3_Var_81));
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_81, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[252])));
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[250])), Var_80);
    AssertionContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_75);
    Var_86 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
    parse_tree__parse_pragma__parse_foreign_type_assertions_7_p_0(AssertionContextPieces_21, VarSet_7, AssertionTerm_11, Var_86, &AssertionSet_22, (MR_Word) ((MR_Unsigned) 0U), &AssertionSpecs_23);
    succeeded = (AssertionSpecs_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeName_15)) == (MR_Integer) 1);
      if (succeeded)
        TypeName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeTypeName_15, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Assertions_25 = (MR_Word) (AssertionSet_22);
      MR_Word Repn_26;

      {
        Repn_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Repn_26, 0) = ((MR_Box) (TypeName_24));
        MR_hl_field(MR_mktag(0), Repn_26, 1) = ((MR_Box) (Assertions_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeForeignLangRepn_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Lang_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Repn_26));
      }
    }
    else
    {
      MR_Word Specs_27;
      MR_Word Var_88;

      Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTypeName_15);
      Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_88, AssertionSpecs_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeForeignLangRepn_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_27));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_repn__require_foreign_repn_list_spec_3_f_0(
  MR_Word DescPieces_5,
  MR_Word NonEmptyPieces_6,
  MR_Word Term_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_20;
    MR_Word Var_35;

    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NonEmptyPieces_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[167])));
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[243])), Var_20);
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_5, Var_15);
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[241])), Var_14);
    Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_string_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_String Desc_8,
  MR_Word Term_9,
  MR_Word * MaybeFunctorName_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_String FunctorName_11;
    MR_Word Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          FunctorName_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFunctorName_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FunctorName_11));
      }
    else
    {
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_18;
      MR_Word Var_20;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_41;
      MR_Word Var_42;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_9);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Desc_8));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[238])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
      }
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_18);
      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFunctorName_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_repn__malformed_du_prefix_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[122]));
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_has_direct_arg_functors_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8)
{
  {
    MR_bool succeeded;

    if ((RepnArgs_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_35;
      MR_Word Pieces_55;
      MR_Word Spec_56;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (RepnStr_5));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[49])));
      }
      {
        Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_22));
      }
      {
        Spec_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_56, 2) = ((MR_Box) (RepnContext_7));
        MR_hl_field(MR_mktag(1), Spec_56, 3) = ((MR_Box) (Pieces_55));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
    }
    else
    {
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 1))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 0))));

      if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word FunctorTerms_10;

        succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_81, &FunctorTerms_10);
        if (succeeded)
        {
          MR_Word MaybeFunctors_11;

          parse_tree__parse_type_repn__parse_functor_with_arities_4_p_0(RepnStr_5, (MR_Integer) 1, FunctorTerms_10, &MaybeFunctors_11);
          if (((MR_tag((MR_Word) MaybeFunctors_11)) == (MR_Integer) 0))
            *MaybeRepn_8 = (MR_Word) (MaybeFunctors_11);
          else
          {
            MR_Word Functors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctors_11, (MR_Integer) 0))));
            MR_Word Var_39;

            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (Functors_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRepn_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
            }
          }
        }
        else
        {
          MR_Word Pieces_14;
          MR_Word Spec_15;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_52;
          MR_Word Var_53;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (RepnStr_5));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
          }
          {
            Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[237])));
            MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_42));
          }
          Var_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_81);
          {
            Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Pieces_14));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Spec_15));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
          }
        }
      }
      else
      {
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_65;
        MR_Word Pieces_67;
        MR_Word Spec_68;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (RepnStr_5));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[49])));
        }
        {
          Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_67, 1) = ((MR_Box) (Var_60));
        }
        {
          Spec_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_68, 2) = ((MR_Box) (RepnContext_7));
          MR_hl_field(MR_mktag(1), Spec_68, 3) = ((MR_Box) (Pieces_67));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_functor_with_arities_4_p_0(
  MR_String RepnStr_1,
  MR_Integer Nth_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[1]));
    else
    {
      MR_Word Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Terms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MaybeHeadFunctor_15;
      MR_Word MaybeTailFunctors_18;
      MR_Integer Var_52;
      MR_Word SymName_13;
      MR_Integer Arity_14;
      MR_Word HeadFunctor_19;
      MR_Word TailFunctors_20;

      succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10, &SymName_13, &Arity_14);
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (SymName_13));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Arity_14));
        }
        {
          MaybeHeadFunctor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeHeadFunctor_15, 0) = ((MR_Box) (Var_22));
        }
      }
      else
      {
        MR_Word Pieces_16;
        MR_Word Spec_17;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_49;
        MR_Word Var_50;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Nth_2));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (RepnStr_1));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[55])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[236])));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[235])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[234])));
          MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_25));
        }
        Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
        {
          Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Pieces_16));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeHeadFunctor_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeHeadFunctor_15, 0) = ((MR_Box) (Var_50));
        }
      }
      Var_52 = (MR_Integer) ((MR_Unsigned) Nth_2 + (MR_Unsigned) 1);
      parse_tree__parse_type_repn__parse_functor_with_arities_4_p_0(RepnStr_1, Var_52, Terms_11, &MaybeTailFunctors_18);
      succeeded = ((MR_tag((MR_Word) MaybeHeadFunctor_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadFunctor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadFunctor_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailFunctors_18)) == (MR_Integer) 1);
        if (succeeded)
          TailFunctors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailFunctors_18, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (HeadFunctor_19));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (TailFunctors_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
        }
      }
      else
      {
        MR_Word Specs_21;
        MR_Word Var_55;
        MR_Word Var_56;

        Var_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), MaybeHeadFunctor_15);
        Var_56 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[0]), MaybeTailFunctors_18);
        Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_55, Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_fits_in_n_bits_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8)
{
  {
    MR_bool succeeded;

    if ((RepnArgs_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_49;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (RepnStr_5));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[41])));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_36));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) (RepnContext_7));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Pieces_29));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
      }
    }
    else
    {
      MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 1))));
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 0))));

      if ((Var_127 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_94;
        MR_Word Spec_95;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_103;

        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (RepnStr_5));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[41])));
        }
        {
          Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
          MR_hl_field(MR_mktag(1), Pieces_94, 1) = ((MR_Box) (Var_98));
        }
        {
          Spec_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_95, 2) = ((MR_Box) (RepnContext_7));
          MR_hl_field(MR_mktag(1), Spec_95, 3) = ((MR_Box) (Pieces_94));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_95));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
        }
      }
      else
      {
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 1))));
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 0))));

        if ((Var_129 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeNumBits_12;
          MR_Word MaybeFillKind_18;
          MR_Integer N0_11;
          MR_Word FillKind2_17;
          MR_String AtomStr2_15;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Integer N_21;
          MR_Word FillKind_22;

          succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_128, &N0_11);
          if (succeeded)
            {
              MaybeNumBits_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeNumBits_12, 0) = ((MR_Box) (N0_11));
            }
          else
          {
            MR_Word NumBitsPieces_13;
            MR_Word NumBitsSpec_14;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_65;
            MR_Word Var_66;

            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (RepnStr_5));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[43])));
            }
            {
              NumBitsPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NumBitsPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[232])));
              MR_hl_field(MR_mktag(1), NumBitsPieces_13, 1) = ((MR_Box) (Var_55));
            }
            Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_128);
            {
              NumBitsSpec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NumBitsSpec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), NumBitsSpec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), NumBitsSpec_14, 2) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(1), NumBitsSpec_14, 3) = ((MR_Box) (NumBitsPieces_13));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (NumBitsSpec_14));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeNumBits_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeNumBits_12, 0) = ((MR_Box) (Var_66));
            }
          }
          succeeded = ((MR_tag((MR_Word) Var_130)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 0))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 1))));
            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
              if (succeeded)
              {
                AtomStr2_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data__fill_kind_string_2_p_1(&FillKind2_17, AtomStr2_15);
              }
            }
          }
          if (succeeded)
            {
              MaybeFillKind_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeFillKind_18, 0) = ((MR_Box) (FillKind2_17));
            }
          else
          {
            MR_Word FillKindPieces_19;
            MR_Word FillKindSpec_20;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_82;
            MR_Word Var_83;

            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (RepnStr_5));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[45])));
            }
            {
              FillKindPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FillKindPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[233])));
              MR_hl_field(MR_mktag(1), FillKindPieces_19, 1) = ((MR_Box) (Var_72));
            }
            Var_82 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_130);
            {
              FillKindSpec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FillKindSpec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), FillKindSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), FillKindSpec_20, 2) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(1), FillKindSpec_20, 3) = ((MR_Box) (FillKindPieces_19));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (FillKindSpec_20));
              MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeFillKind_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeFillKind_18, 0) = ((MR_Box) (Var_83));
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeNumBits_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNumBits_12, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeFillKind_18)) == (MR_Integer) 1);
            if (succeeded)
              FillKind_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFillKind_18, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word Var_85;

            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (N_21));
              MR_hl_field(MR_mktag(1), Var_85, 1) = (MR_Box) ((MR_Unsigned) (FillKind_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRepn_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_85));
            }
          }
          else
          {
            MR_Word Specs_23;
            MR_Word Var_86;
            MR_Word Var_87;

            Var_86 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeNumBits_12);
            Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_fill_kind_0), MaybeFillKind_18);
            Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_86, Var_87);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRepn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_23));
            }
          }
        }
        else
        {
          MR_Word Pieces_105;
          MR_Word Spec_106;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_114;

          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (RepnStr_5));
          }
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
            MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[41])));
          }
          {
            Pieces_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
            MR_hl_field(MR_mktag(1), Pieces_105, 1) = ((MR_Box) (Var_109));
          }
          {
            Spec_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_106, 2) = ((MR_Box) (RepnContext_7));
            MR_hl_field(MR_mktag(1), Spec_106, 3) = ((MR_Box) (Pieces_105));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Spec_106));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_eqv_to_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10)
{
  if ((RepnArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_20;
    MR_Word Spec_21;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_35;

    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (RepnStr_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[35])));
    }
    {
      Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
      MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_25));
    }
    {
      Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) (RepnContext_9));
      MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Pieces_20));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
    }
  }
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 0))));

    if ((Var_73 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_13;
      MR_Word MaybeEqvType_14;

      ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[37])));
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[0])), VarSet_6, ContextPieces_13, Var_74, &MaybeEqvType_14);
      if (((MR_tag((MR_Word) MaybeEqvType_14)) == (MR_Integer) 0))
        *MaybeRepn_10 = (MR_Word) (MaybeEqvType_14);
      else
      {
        MR_Word EqvType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEqvType_14, (MR_Integer) 0))));
        MR_Word Var_49;

        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (EqvType_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeRepn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
        }
      }
    }
    else
    {
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_60;

      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[35])));
      }
      {
        Pieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Pieces_51, 1) = ((MR_Box) (Var_55));
      }
      {
        Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) (RepnContext_9));
        MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Pieces_51));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(
  MR_String RepnStr_6,
  MR_Word RepnArgs_7,
  MR_Word RepnContext_8,
  MR_Word NoArgRepn_9,
  MR_Word * MaybeRepn_10)
{
  if ((RepnArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRepn_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NoArgRepn_9));
    }
  else
  {
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_27;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (RepnStr_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[33])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) (RepnContext_8));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Pieces_13));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn____Unify____min_list_length_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_repn____Unify____min_list_length_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn____Compare____min_list_length_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_repn____Compare____min_list_length_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_type_repn__init(void)
{
}

void mercury__parse_tree__parse_type_repn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_type_repn__parse_tree__parse_type_repn__type_ctor_info_min_list_length_0);
}

void mercury__parse_tree__parse_type_repn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_type_repn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_type_repn.
