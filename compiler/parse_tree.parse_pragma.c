/*
** Automatically generated from `parse_pragma.m'
** by the Mercury compiler,
** version rotd-2020-10-27
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


// :- module parse_tree.parse_pragma.
// :- implementation.

/*
INIT mercury__parse_tree__parse_pragma__init
ENDINIT
*/

#include "parse_tree.parse_pragma.mih"


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
#include "int.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_pragma_analysis.mih"
#include "parse_tree.parse_pragma_foreign.mih"
#include "parse_tree.parse_pragma_tabling.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_required_feature_0;

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_value_ordered_seen_none_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_seen_none_0[2];

static const MR_Integer parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_seen_none_0[2];

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__155__1_3_p_0(
  MR_Word LambdaHeadVar__1_69,
  MR_Integer LambdaHeadVar__2_70,
  MR_Word * LambdaHeadVar__3_71);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__223__1_3_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Integer LambdaHeadVar__2_42,
  MR_Word * LambdaHeadVar__3_43);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__216__1_3_p_0(
  MR_Word LambdaHeadVar__1_44,
  MR_Integer LambdaHeadVar__2_45,
  MR_Word * LambdaHeadVar__3_46);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__230__1_3_p_0(
  MR_Word LambdaHeadVar__1_38,
  MR_Integer LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__188__1_3_p_0(
  MR_Word LambdaHeadVar__1_56,
  MR_Integer LambdaHeadVar__2_57,
  MR_Word * LambdaHeadVar__3_58);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__202__1_3_p_0(
  MR_Word LambdaHeadVar__1_50,
  MR_Integer LambdaHeadVar__2_51,
  MR_Word * LambdaHeadVar__3_52);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__209__1_3_p_0(
  MR_Word LambdaHeadVar__1_47,
  MR_Integer LambdaHeadVar__2_48,
  MR_Word * LambdaHeadVar__3_49);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__181__1_3_p_0(
  MR_Word LambdaHeadVar__1_59,
  MR_Integer LambdaHeadVar__2_60,
  MR_Word * LambdaHeadVar__3_61);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__162__1_3_p_0(
  MR_Word LambdaHeadVar__1_66,
  MR_Integer LambdaHeadVar__2_67,
  MR_Word * LambdaHeadVar__3_68);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__195__1_3_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Integer LambdaHeadVar__2_54,
  MR_Word * LambdaHeadVar__3_55);

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__169__1_3_p_0(
  MR_Word LambdaHeadVar__1_63,
  MR_Integer LambdaHeadVar__2_64,
  MR_Word * LambdaHeadVar__3_65);

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____seen_none_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma__parse_required_feature_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeReqFeature_6);

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_type_spec_pair_2_p_0(
  MR_Word Term_3,
  MR_Word * TypeSpec_4);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word ErrorTerm_11,
  MR_String PragmaName_12,
  MR_Word PragmaTerms_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_97_103_109_97_95_114_101_113_117_105_114_101_95_116_97_105_108_95_114_101_99_117_114_115_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word ModuleName_9,
  MR_String PragmaName_10,
  MR_Word PragmaTerms_11,
  MR_Word VarSet_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_tail_recursion_options_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeRTR_7);

static MR_Word MR_CALL 
parse_tree__parse_pragma__pragma_require_tailrec_unknown_term_error_2_f_0(
  MR_Word Term_4,
  MR_Word Context_5);

static MR_Word MR_CALL 
parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(
  MR_String ThisName_5,
  MR_String EarlierName_6,
  MR_Word Context_7);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_feature_set_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_feature_set_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_fact_table_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_pred_name_and_arity_6_p_0(
  MR_Word ModuleName_7,
  MR_String PragmaName_8,
  MR_Word NameAndArityTerm_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word * MaybeNameAndArity_12);

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_pragma_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_String ArgNum_9,
  MR_String ExpectedFunctor_10,
  MR_Word Term_11,
  MR_Word * MaybeNamesArities_12);

static void MR_CALL 
parse_tree__parse_pragma__parse_name_and_arity_list_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_String Wrapper_8,
  MR_Word Term_9,
  MR_Word * MaybeNamesArities_10);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_proc_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(
  MR_Word Term_4,
  MR_Word VarSet_5,
  MR_Word * MaybeObsoleteInFavourOf_6);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ErrorTerm_12,
  MR_String PragmaName_13,
  MR_Word PragmaTerms_14,
  MR_Word Context_15,
  MR_Integer SeqNum_16,
  MR_Word PorF_17,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_options_4_p_0(
  MR_Word VarSet_5,
  MR_Word MaybeOptionsTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeMaybeBackend_8);

static void MR_CALL 
parse_tree__parse_pragma__parse_symname_arity_4_p_0(
  MR_Word VarSet_5,
  MR_Word PredTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeSymNameArity_8);

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_source_file_3_p_0(
  MR_Word PragmaTerms_4,
  MR_Word Context_5,
  MR_Word * MaybeIOM_6);

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(
  MR_Word ModuleName_11,
  MR_String PragmaName_12,
  MR_String NameKind_13,
  MR_Word MakePragma_14,
  MR_Word PragmaTerms_15,
  MR_Word ErrorTerm_16,
  MR_Word VarSet_17,
  MR_Word Context_18,
  MR_Integer SeqNum_19,
  MR_Word * MaybeIOM_20);

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_decl_pragma_10_p_0(
  MR_Word ModuleName_11,
  MR_String PragmaName_12,
  MR_String NameKind_13,
  MR_Word MakePragma_14,
  MR_Word PragmaTerms_15,
  MR_Word ErrorTerm_16,
  MR_Word VarSet_17,
  MR_Word Context_18,
  MR_Integer SeqNum_19,
  MR_Word * MaybeIOM_20);

static void MR_CALL 
parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(
  MR_Word ModuleName_8,
  MR_String PragmaName_9,
  MR_String NameKind_10,
  MR_Word NameAndArityTerm_11,
  MR_Word ErrorTerm_12,
  MR_Word VarSet_13,
  MR_Word * MaybeNameAndArity_14);

static MR_Word MR_CALL 
parse_tree__parse_pragma__report_unrecognized_pragma_1_f_0(
  MR_Word Context_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____seen_none_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_1[139][2];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_2[16][3];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_3[7][1];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_5[3][6];


/* sealed */ struct parse_tree__parse_pragma__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_pragma__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__parse_pragma__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__parse_pragma__vector_common_type_6_0_s parse_tree__parse_pragma_vector_common_6[16];



static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_1[139][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_backend_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a recognized pragma name."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- pragma pragma_name(pragma_arguments)."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have exactly one argument."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration should be a string."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "source_file"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of a"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[20])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have one or two arguments."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the arity must be an integer."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be Name/Arity."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[32])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[32])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first  argument of"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "suggested replacement predicates and/or functions."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of the names and arities of the"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of a"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have three or four arguments."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[47])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have two or three arguments."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have two arguments."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[6])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "require_feature_set"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[20])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_2[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration, got"))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected either an empty list,"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a singleton list containing either"))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "low_level_backend"))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "high_level_backend"))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "second argument of"))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the predicate name in the"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not for the expected module, which is"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element in the second argument of"))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a name/arity pair, got"))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected predname/arity,"))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a list as the argument of"))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected predicate name/arity, got"))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a type substitution, got"))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a string specifying a filename,"))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: conflicting "))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attributes: "))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "conflicts with earlier attribute"))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unrecognised "))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute: "))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected attribute list, got"))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected the name of a required feature,"))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which must be one of"))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "concurrency"))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "single_prec_float"))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "double_prec_float"))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "parallel_conj"))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "trailing"))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "strict_sequential"))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "conservative_gc"))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing works only with sequential conjunctions"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "floats cannot be both single- and double-precision"))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_require_feature_set_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_pragma__parse_pragma_type_8_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[120])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 14U)
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_required_feature_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
};


static /* final */ const struct parse_tree__parse_pragma__vector_common_type_6_0_s parse_tree__parse_pragma_vector_common_6[16] = {
  /* row 0 */
  {
    (MR_String) "concurrency",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 2 */
  {
    (MR_String) "memo",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 5 */
  {
    (MR_String) "conservative_gc",
    (MR_Integer) 7
  },
  /* row 6 */
  {
    (MR_String) "trailing",
    (MR_Integer) 5
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    (MR_String) "single_prec_float",
    (MR_Integer) 1
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    (MR_String) "double_prec_float",
    (MR_Integer) 2
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 14 */
  {
    (MR_String) "strict_sequential",
    (MR_Integer) 6
  },
  /* row 15 */
  {
    (MR_String) "parallel_conj",
    (MR_Integer) 4
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_required_feature_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0 = {
  (MR_String) "seen_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1 = {
  (MR_String) "have_not_seen_none",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_value_ordered_seen_none_0[2] = {
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0,
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_seen_none_0[2] = {
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_1,
  &parse_tree__parse_pragma__parse_tree__parse_pragma__enum_functor_desc_seen_none_0_0
};

static const MR_Integer parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_seen_none_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_pragma__parse_tree__parse_pragma__type_ctor_info_seen_none_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_pragma____Unify____seen_none_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma____Compare____seen_none_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma",
  (MR_String) "seen_none",
  {     parse_tree__parse_pragma__parse_tree__parse_pragma__enum_name_ordered_seen_none_0 },
  {     parse_tree__parse_pragma__parse_tree__parse_pragma__enum_value_ordered_seen_none_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_pragma__parse_tree__parse_pragma__functor_number_map_seen_none_0
};

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__155__1_3_p_0(
  MR_Word LambdaHeadVar__1_69,
  MR_Integer LambdaHeadVar__2_70,
  MR_Word * LambdaHeadVar__3_71)
{
  {
    MR_Word PredNameArity_22;

    {
      PredNameArity_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_22, 0) = ((MR_Box) (LambdaHeadVar__1_69));
      MR_hl_field(MR_mktag(0), PredNameArity_22, 1) = ((MR_Box) (LambdaHeadVar__2_70));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_71 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_22));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__223__1_3_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Integer LambdaHeadVar__2_42,
  MR_Word * LambdaHeadVar__3_43)
{
  {
    MR_Word PredNameArity_137;

    {
      PredNameArity_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_137, 0) = ((MR_Box) (LambdaHeadVar__1_41));
      MR_hl_field(MR_mktag(0), PredNameArity_137, 1) = ((MR_Box) (LambdaHeadVar__2_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_43 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_137));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__216__1_3_p_0(
  MR_Word LambdaHeadVar__1_44,
  MR_Integer LambdaHeadVar__2_45,
  MR_Word * LambdaHeadVar__3_46)
{
  {
    MR_Word PredNameArity_130;

    {
      PredNameArity_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_130, 0) = ((MR_Box) (LambdaHeadVar__1_44));
      MR_hl_field(MR_mktag(0), PredNameArity_130, 1) = ((MR_Box) (LambdaHeadVar__2_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_46 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_130));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__230__1_3_p_0(
  MR_Word LambdaHeadVar__1_38,
  MR_Integer LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40)
{
  {
    MR_Word PredNameArity_144;

    {
      PredNameArity_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_144, 0) = ((MR_Box) (LambdaHeadVar__1_38));
      MR_hl_field(MR_mktag(0), PredNameArity_144, 1) = ((MR_Box) (LambdaHeadVar__2_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_40 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_144));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__188__1_3_p_0(
  MR_Word LambdaHeadVar__1_56,
  MR_Integer LambdaHeadVar__2_57,
  MR_Word * LambdaHeadVar__3_58)
{
  {
    MR_Word PredNameArity_102;

    {
      PredNameArity_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_102, 0) = ((MR_Box) (LambdaHeadVar__1_56));
      MR_hl_field(MR_mktag(0), PredNameArity_102, 1) = ((MR_Box) (LambdaHeadVar__2_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_58 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_102));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__202__1_3_p_0(
  MR_Word LambdaHeadVar__1_50,
  MR_Integer LambdaHeadVar__2_51,
  MR_Word * LambdaHeadVar__3_52)
{
  {
    MR_Word PredNameArity_116;

    {
      PredNameArity_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_116, 0) = ((MR_Box) (LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(0), PredNameArity_116, 1) = ((MR_Box) (LambdaHeadVar__2_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_52 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_116));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__209__1_3_p_0(
  MR_Word LambdaHeadVar__1_47,
  MR_Integer LambdaHeadVar__2_48,
  MR_Word * LambdaHeadVar__3_49)
{
  {
    MR_Word PredNameArity_123;

    {
      PredNameArity_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_123, 0) = ((MR_Box) (LambdaHeadVar__1_47));
      MR_hl_field(MR_mktag(0), PredNameArity_123, 1) = ((MR_Box) (LambdaHeadVar__2_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_49 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_123));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__181__1_3_p_0(
  MR_Word LambdaHeadVar__1_59,
  MR_Integer LambdaHeadVar__2_60,
  MR_Word * LambdaHeadVar__3_61)
{
  {
    MR_Word PredNameArity_95;

    {
      PredNameArity_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_95, 0) = ((MR_Box) (LambdaHeadVar__1_59));
      MR_hl_field(MR_mktag(0), PredNameArity_95, 1) = ((MR_Box) (LambdaHeadVar__2_60));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_61 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_95));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__162__1_3_p_0(
  MR_Word LambdaHeadVar__1_66,
  MR_Integer LambdaHeadVar__2_67,
  MR_Word * LambdaHeadVar__3_68)
{
  {
    MR_Word PredNameArity_81;

    {
      PredNameArity_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_81, 0) = ((MR_Box) (LambdaHeadVar__1_66));
      MR_hl_field(MR_mktag(0), PredNameArity_81, 1) = ((MR_Box) (LambdaHeadVar__2_67));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_68 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_81));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__195__1_3_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Integer LambdaHeadVar__2_54,
  MR_Word * LambdaHeadVar__3_55)
{
  {
    MR_Word PredNameArity_109;

    {
      PredNameArity_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_109, 0) = ((MR_Box) (LambdaHeadVar__1_53));
      MR_hl_field(MR_mktag(0), PredNameArity_109, 1) = ((MR_Box) (LambdaHeadVar__2_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_55 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_109));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__169__1_3_p_0(
  MR_Word LambdaHeadVar__1_63,
  MR_Integer LambdaHeadVar__2_64,
  MR_Word * LambdaHeadVar__3_65)
{
  {
    MR_Word PredNameArity_88;

    {
      PredNameArity_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameArity_88, 0) = ((MR_Box) (LambdaHeadVar__1_63));
      MR_hl_field(MR_mktag(0), PredNameArity_88, 1) = ((MR_Box) (LambdaHeadVar__2_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_65 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PredNameArity_88));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0(
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
parse_tree__parse_pragma____Unify____seen_none_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_required_feature_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeReqFeature_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word ReqFeature_9;
    MR_String Functor_7;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Integer slot_0;
    MR_String str_1;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Functor_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
          // hashed string simple lookup switch
          ;
          // compute the hash value of the input string
          ;
          slot_0 = ((MR_hash_string5(Functor_7)) & (MR_Integer) 15);
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          str_1 = ((&parse_tree__parse_pragma_vector_common_6[0 + slot_0]))->parse_tree__parse_pragma__vector_common_type_6_0__vct_6_f_0;
          // did we find a match?
          ;
          if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_7) == 0))))
          {
            // we found a match; look up the results
            ;
            ReqFeature_9 = ((&parse_tree__parse_pragma_vector_common_6[0 + slot_0]))->parse_tree__parse_pragma__vector_common_type_6_0__vct_6_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeReqFeature_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ReqFeature_9));
      }
    else
    {
      MR_String TermStr_10;
      MR_Word Pieces_11;
      MR_Word Spec_12;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_38;
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
      MR_Word Var_85;
      MR_Word Var_86;

      TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      Var_24 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[94]));
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TermStr_10));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[95])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[138])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[137])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[135])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[134])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[133])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[132])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[131])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[130])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[129])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[128])));
        MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_17));
      }
      Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_required_feature\'/3"));
        MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_11));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_12));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeReqFeature_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_type_spec_pair_2_p_0(
  MR_Word Term_3,
  MR_Word * TypeSpec_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeVarTerm_5;
    MR_Word SpecTypeTerm0_6;
    MR_Word TypeVar0_8;
    MR_Word TypeVar_10;
    MR_Word SpecType_11;
    MR_Word Var_12;
    MR_String Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = (strcmp(Var_13, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeVarTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
            succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SpecTypeTerm0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) TypeVarTerm_5)) == (MR_Integer) 1);
                if (succeeded)
                {
                  TypeVar0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeVarTerm_5, (MR_Integer) 0))));
                  TypeCtorInfo_19_19 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
                  mercury__term__coerce_var_2_p_0(TypeCtorInfo_19_19, TypeCtorInfo_20_20, TypeVar0_8, &TypeVar_10);
                  Var_17 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[6]));
                  succeeded = parse_tree__parse_type_name__maybe_parse_type_3_p_0(Var_17, SpecTypeTerm0_6, &SpecType_11);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *TypeSpec_4 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeVar_10));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SpecType_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_pragma__parse_pragma_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = (PragmaTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word PragmaTerm_13;
    MR_String PragmaName_14;
    MR_Word PragmaArgTerms_15;
    MR_Word PragmaContext_16;
    MR_Word Var_20;
    MR_Word Var_21;

    if (succeeded)
    {
      PragmaTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) PragmaTerm_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaTerm_13, (MR_Integer) 0))));
          PragmaArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaTerm_13, (MR_Integer) 1))));
          PragmaContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaTerm_13, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
          if (succeeded)
            PragmaName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeIOMPrime_17;

      succeeded = parse_tree__parse_pragma__parse_pragma_type_8_p_0(ModuleName_7, VarSet_8, PragmaTerm_13, PragmaName_14, PragmaArgTerms_15, PragmaContext_16, SeqNum_11, &MaybeIOMPrime_17);
      if (succeeded)
        *MaybeIOM_12 = MaybeIOMPrime_17;
      else
      {
        MR_Word Pieces_18;
        MR_Word Spec_19;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_35;

        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (PragmaName_14));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[8])));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[88])));
          MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_24));
        }
        {
          Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma\'/6"));
          MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
        }
      }
    }
    else
    {
      MR_Word Var_37;
      MR_Word Spec_39;

      {
        Spec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_39, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.report_unrecognized_pragma\'/1"));
        MR_hl_field(MR_mktag(1), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_39, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[18])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_39));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_LambdaHeadVar__3_71;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__155__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv10_LambdaHeadVar__3_71);
    *wrapper_arg_3 = ((MR_Box) (conv10_LambdaHeadVar__3_71));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_LambdaHeadVar__3_43;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__223__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv9_LambdaHeadVar__3_43);
    *wrapper_arg_3 = ((MR_Box) (conv9_LambdaHeadVar__3_43));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__3_46;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__216__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv8_LambdaHeadVar__3_46);
    *wrapper_arg_3 = ((MR_Box) (conv8_LambdaHeadVar__3_46));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__3_40;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__230__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv7_LambdaHeadVar__3_40);
    *wrapper_arg_3 = ((MR_Box) (conv7_LambdaHeadVar__3_40));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__3_58;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__188__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv6_LambdaHeadVar__3_58);
    *wrapper_arg_3 = ((MR_Box) (conv6_LambdaHeadVar__3_58));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__3_52;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__202__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_52);
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_52));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__3_49;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__209__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_49);
    *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_49));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__3_61;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__181__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_LambdaHeadVar__3_61);
    *wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_61));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_68;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__162__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_68);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_68));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_55;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__195__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_55);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_55));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_65;

    parse_tree__parse_pragma__IntroducedFrom__pred__parse_pragma_type__169__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_65);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_65));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word ErrorTerm_11,
  MR_String PragmaName_12,
  MR_Word PragmaTerms_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(PragmaName_12, 0)) {
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(PragmaName_12, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "check_termination"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "consider_used"))
                case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (MR_offset_streq(1, PragmaName_12, (MR_String) "does_not_terminate"))
            case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 101:
          if (((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 120))
            switch (MR_nth_code_unit(PragmaName_12, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, PragmaName_12, (MR_String) "exceptions"))
                  case_num_0 = (MR_Integer) 3;
                break;
              case (MR_Integer) 116:
                if (((((((((((((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PragmaName_12, 8)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(PragmaName_12, 9)) {
                    case (MR_Integer) 102:
                      if (MR_offset_streq(10, PragmaName_12, (MR_String) "external_func"))
                        case_num_0 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 112:
                      if (MR_offset_streq(10, PragmaName_12, (MR_String) "external_pred"))
                        case_num_0 = (MR_Integer) 5;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(PragmaName_12, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "fact_table"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 111:
              if (((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(PragmaName_12, 8)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_code"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 100:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_decl"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 101:
                    switch (MR_nth_code_unit(PragmaName_12, 9)) {
                      case (MR_Integer) 110:
                        if (MR_offset_streq(10, PragmaName_12, (MR_String) "foreign_enum"))
                          case_num_0 = (MR_Integer) 9;
                        break;
                      case (MR_Integer) 120:
                        if (((((((((MR_nth_code_unit(PragmaName_12, 10)) == (MR_Integer) 112)) && (((MR_nth_code_unit(PragmaName_12, 11)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PragmaName_12, 12)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 13)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(PragmaName_12, 14)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(15, PragmaName_12, (MR_String) "foreign_export_enum"))
                                case_num_0 = (MR_Integer) 11;
                              break;
                          }
                        break;
                    }
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_import_module"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_proc"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "foreign_type"))
                      case_num_0 = (MR_Integer) 14;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 105:
          if (MR_offset_streq(1, PragmaName_12, (MR_String) "inline"))
            case_num_0 = (MR_Integer) 15;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, PragmaName_12, (MR_String) "loop_check"))
            case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(PragmaName_12, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "memo"))
                case_num_0 = (MR_Integer) 17;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "minimal_model"))
                case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "mm_tabling_info"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "mode_check_clauses"))
                case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 110:
          if (((((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(PragmaName_12, 3)) {
              case (MR_Integer) 100:
                if (MR_offset_streq(4, PragmaName_12, (MR_String) "no_determinism_warning"))
                  case_num_0 = (MR_Integer) 21;
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(4, PragmaName_12, (MR_String) "no_inline"))
                  case_num_0 = (MR_Integer) 22;
                break;
            }
          break;
        case (MR_Integer) 111:
          switch (MR_nth_code_unit(PragmaName_12, 1)) {
            case (MR_Integer) 98:
              if (((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(PragmaName_12, 8)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 23;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "obsolete_proc"))
                      case_num_0 = (MR_Integer) 24;
                    break;
                }
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "oisu"))
                case_num_0 = (MR_Integer) 25;
              break;
          }
          break;
        case (MR_Integer) 112:
          if (((((((((((((((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(PragmaName_12, 8)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(9, PragmaName_12, (MR_String) "promise_equivalent_clauses"))
                  case_num_0 = (MR_Integer) 26;
                break;
              case (MR_Integer) 112:
                if (MR_offset_streq(9, PragmaName_12, (MR_String) "promise_pure"))
                  case_num_0 = (MR_Integer) 27;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(9, PragmaName_12, (MR_String) "promise_semipure"))
                  case_num_0 = (MR_Integer) 28;
                break;
            }
          break;
        case (MR_Integer) 114:
          if (((((((((((((((MR_nth_code_unit(PragmaName_12, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(PragmaName_12, 8)) {
              case (MR_Integer) 102:
                if (MR_offset_streq(9, PragmaName_12, (MR_String) "require_feature_set"))
                  case_num_0 = (MR_Integer) 29;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(9, PragmaName_12, (MR_String) "require_tail_recursion"))
                  case_num_0 = (MR_Integer) 30;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(PragmaName_12, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "source_file"))
                case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 116:
              if (((((((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PragmaName_12, 8)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PragmaName_12, 9)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(PragmaName_12, 10)) {
                  case (MR_Integer) 114:
                    if (MR_offset_streq(11, PragmaName_12, (MR_String) "structure_reuse"))
                      case_num_0 = (MR_Integer) 32;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(11, PragmaName_12, (MR_String) "structure_sharing"))
                      case_num_0 = (MR_Integer) 33;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(PragmaName_12, 1)) {
            case (MR_Integer) 101:
              if (((((((((((((MR_nth_code_unit(PragmaName_12, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PragmaName_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PragmaName_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PragmaName_12, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PragmaName_12, 6)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PragmaName_12, 7)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(PragmaName_12, 8)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(9, PragmaName_12, (MR_String) "terminates"))
                      case_num_0 = (MR_Integer) 34;
                    break;
                  case (MR_Integer) 105:
                    if (((((MR_nth_code_unit(PragmaName_12, 9)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PragmaName_12, 10)) == (MR_Integer) 110))))
                      switch (MR_nth_code_unit(PragmaName_12, 11)) {
                        case (MR_Integer) 50:
                          if (MR_offset_streq(12, PragmaName_12, (MR_String) "termination2_info"))
                            case_num_0 = (MR_Integer) 35;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(12, PragmaName_12, (MR_String) "termination_info"))
                            case_num_0 = (MR_Integer) 36;
                          break;
                      }
                    break;
                }
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "trailing_info"))
                case_num_0 = (MR_Integer) 37;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, PragmaName_12, (MR_String) "type_spec"))
                case_num_0 = (MR_Integer) 38;
              break;
          }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, PragmaName_12, (MR_String) "unused_args"))
            case_num_0 = (MR_Integer) 39;
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, PragmaName_12, (MR_String) "where"))
            case_num_0 = (MR_Integer) 40;
          break;
      }
      switch (case_num_0) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            // case "check_termination"
            ;
            parse_tree__parse_pragma__parse_name_arity_decl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[5]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            // case "consider_used"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[6]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            // case "does_not_terminate"
            ;
            parse_tree__parse_pragma__parse_name_arity_decl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[7]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            // case "exceptions"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_exceptions_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            // case "external_func"
            ;
            parse_tree__parse_pragma__parse_pragma_external_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Integer) 1, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            // case "external_pred"
            ;
            parse_tree__parse_pragma__parse_pragma_external_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Integer) 0, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            // case "fact_table"
            ;
            parse_tree__parse_pragma__parse_pragma_fact_table_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            // case "foreign_code"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_code_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            // case "foreign_decl"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_decl_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            // case "foreign_enum"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            // case "foreign_export"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            // case "foreign_export_enum"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            // case "foreign_import_module"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_import_module_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            // case "foreign_proc"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            // case "foreign_type"
            ;
            parse_tree__parse_pragma_foreign__parse_pragma_foreign_type_8_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[4])), MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            // case "inline"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[8]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            // case "loop_check"
            ;
            parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) ((MR_Unsigned) 4U), MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 17:
          {
            // case "memo"
            ;
            parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[5])), MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 18:
          {
            // case "minimal_model"
            ;
            parse_tree__parse_pragma_tabling__parse_tabling_pragma_9_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaName_12, PragmaTerms_13, Context_14, SeqNum_15, (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_3[5])), MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 19:
          {
            // case "mm_tabling_info"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_mm_tabling_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 20:
          {
            // case "mode_check_clauses"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[9]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 21:
          {
            // case "no_determinism_warning"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[10]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 22:
          {
            // case "no_inline"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[11]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 23:
          {
            // case "obsolete"
            ;
            parse_tree__parse_pragma__parse_pragma_obsolete_7_p_0(ModuleName_9, PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 24:
          {
            // case "obsolete_proc"
            ;
            parse_tree__parse_pragma__parse_pragma_obsolete_proc_7_p_0(ModuleName_9, PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 25:
          {
            // case "oisu"
            ;
            parse_tree__parse_pragma__parse_oisu_pragma_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 26:
          {
            // case "promise_equivalent_clauses"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[12]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 27:
          {
            // case "promise_pure"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[13]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 28:
          {
            // case "promise_semipure"
            ;
            parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[14]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 29:
          {
            // case "require_feature_set"
            ;
            parse_tree__parse_pragma__parse_pragma_require_feature_set_6_p_0(VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 30:
          {
            // case "require_tail_recursion"
            ;
            parse_tree__parse_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_97_103_109_97_95_114_101_113_117_105_114_101_95_116_97_105_108_95_114_101_99_117_114_115_105_111_110_95_95_91_52_93_95_48_8_p_0(ModuleName_9, PragmaName_12, PragmaTerms_13, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 31:
          {
            // case "source_file"
            ;
            parse_tree__parse_pragma__parse_pragma_source_file_3_p_0(PragmaTerms_13, Context_14, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 32:
          {
            // case "structure_reuse"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_structure_reuse_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 33:
          {
            // case "structure_sharing"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_structure_sharing_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 34:
          {
            // case "terminates"
            ;
            parse_tree__parse_pragma__parse_name_arity_decl_pragma_10_p_0(ModuleName_9, PragmaName_12, (MR_String) "predicate or function", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[15]), PragmaTerms_13, ErrorTerm_11, VarSet_10, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 35:
          {
            // case "termination2_info"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_termination2_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 36:
          {
            // case "termination_info"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_termination_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 37:
          {
            // case "trailing_info"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_trailing_info_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 38:
          {
            // case "type_spec"
            ;
            parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 39:
          {
            // case "unused_args"
            ;
            parse_tree__parse_pragma_analysis__parse_pragma_unused_args_7_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, PragmaTerms_13, Context_14, SeqNum_15, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 40:
          {
            // case "where"
            ;
            {
              MR_Word WhereTerm_25;
              MR_Word BeforeWherePragmaTerms_26;
              MR_Word BeforeWhereContext_27;
              MR_Word BeforeWhereTerm_24;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_32;
              MR_String Var_33;

              succeeded = (PragmaTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BeforeWhereTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_13, (MR_Integer) 0))));
                Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_13, (MR_Integer) 1))));
                succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  WhereTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                  succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) BeforeWhereTerm_24)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeWhereTerm_24, (MR_Integer) 0))));
                      BeforeWherePragmaTerms_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeWhereTerm_24, (MR_Integer) 1))));
                      BeforeWhereContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeWhereTerm_24, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_33, (MR_String) "foreign_type") == 0);
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MaybeMaybeUC_28;

                parse_tree__parse_type_defn__parse_where_unify_compare_4_p_0(ModuleName_9, VarSet_10, WhereTerm_25, &MaybeMaybeUC_28);
                parse_tree__parse_pragma_foreign__parse_pragma_foreign_type_8_p_0(ModuleName_9, VarSet_10, ErrorTerm_11, BeforeWherePragmaTerms_26, BeforeWhereContext_27, SeqNum_15, MaybeMaybeUC_28, MaybeIOM_16);
              }
              else
              {
                MR_Word Spec_29;
                MR_Word Var_34;

                Spec_29 = parse_tree__parse_pragma__report_unrecognized_pragma_1_f_0(Context_14);
                {
                  Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Spec_29));
                  MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
                }
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_97_103_109_97_95_114_101_113_117_105_114_101_95_116_97_105_108_95_114_101_99_117_114_115_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word ModuleName_9,
  MR_String PragmaName_10,
  MR_Word PragmaTerms_11,
  MR_Word VarSet_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;

    if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_53;
      MR_Word Pieces_108;
      MR_Word Spec_109;

      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (PragmaName_10));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[32])));
      }
      {
        Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Pieces_108, 1) = ((MR_Box) (Var_42));
      }
      {
        Spec_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_109, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_tail_recursion\'/8"));
        MR_hl_field(MR_mktag(1), Spec_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_109, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_109, 3) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(1), Spec_109, 4) = ((MR_Box) (Pieces_108));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Spec_109));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
      }
    }
    else
    {
      MR_Word Var_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
      MR_Word Var_356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

      if ((Var_355 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ContextPieces_20;
        MR_Word MaybeProc_21;
        MR_Word MaybeOptions_24;
        MR_Word Var_58;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_70;
        MR_Word Proc_29;
        MR_Word Options_30;

        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (PragmaName_10));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[47])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[113])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58);
        parse_tree__parse_util__parse_arity_or_modes_6_p_0(ModuleName_9, Var_356, Var_356, VarSet_13, ContextPieces_20, &MaybeProc_21);
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Context_14));
        }
        {
          MaybeOptions_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOptions_24, 0) = ((MR_Box) (Var_70));
        }
        succeeded = ((MR_tag((MR_Word) MaybeProc_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          Proc_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProc_21, (MR_Integer) 0))));
          Options_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOptions_24, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word PragmaType_31;
          MR_Word PragmaInfo_32;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;

          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Proc_29));
            MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (Options_30));
          }
          {
            PragmaType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PragmaType_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), PragmaType_31, 1) = ((MR_Box) (Var_103));
          }
          {
            PragmaInfo_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PragmaInfo_32, 0) = ((MR_Box) (PragmaType_31));
            MR_hl_field(MR_mktag(0), PragmaInfo_32, 1) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), PragmaInfo_32, 2) = ((MR_Box) (SeqNum_15));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (PragmaInfo_32));
          }
          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Var_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_104));
          }
        }
        else
        {
          MR_Word Specs_33;
          MR_Word Var_106;
          MR_Word Var_107;

          Var_106 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_mpf_mmode_0), MaybeProc_21);
          Var_107 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0), MaybeOptions_24);
          Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_106, Var_107);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
          }
        }
      }
      else
      {
        MR_Word Var_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_355, (MR_Integer) 1))));
        MR_Word Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_355, (MR_Integer) 0))));

        if ((Var_357 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word OptionsTerm_188;
          MR_Word MaybeOptionsTerm_283;
          MR_Word ContextPieces_284;
          MR_Word MaybeProc_285;
          MR_Word MaybeOptions_288;
          MR_Word Var_298;
          MR_Word Var_301;
          MR_Word Var_302;
          MR_Word OptionsTerms_157;
          MR_Word Proc_269;
          MR_Word Options_270;

          {
            MaybeOptionsTerm_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionsTerm_283, 0) = ((MR_Box) (Var_358));
          }
          {
            Var_302 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_302, 0) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(3), Var_302, 1) = ((MR_Box) (PragmaName_10));
          }
          {
            Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_301, 0) = ((MR_Box) (Var_302));
            MR_hl_field(MR_mktag(1), Var_301, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[47])));
          }
          {
            Var_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_298, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[113])));
            MR_hl_field(MR_mktag(1), Var_298, 1) = ((MR_Box) (Var_301));
          }
          ContextPieces_284 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_298);
          parse_tree__parse_util__parse_arity_or_modes_6_p_0(ModuleName_9, Var_356, Var_356, VarSet_13, ContextPieces_284, &MaybeProc_285);
          OptionsTerm_188 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOptionsTerm_283, (MR_Integer) 0))));
          succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(OptionsTerm_188, &OptionsTerms_157);
          if (succeeded)
            parse_tree__parse_pragma__parse_pragma_require_tail_recursion_options_7_p_0(OptionsTerms_157, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_14, &MaybeOptions_288);
          else
          {
            MR_Word OptionsContext_131;
            MR_String OptionsTermStr_132;
            MR_Word Pieces_133;
            MR_Word Spec_134;
            MR_Word Var_137;
            MR_Word Var_140;
            MR_Word Var_143;
            MR_Word Var_145;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_154;

            OptionsContext_131 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OptionsTerm_188);
            OptionsTermStr_132 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_13, OptionsTerm_188);
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (OptionsTermStr_132));
            }
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
            }
            {
              Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[127])));
              MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_148));
            }
            {
              Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_145));
            }
            {
              Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[106])));
              MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
            }
            {
              Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[122])));
              MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_140));
            }
            {
              Pieces_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[115])));
              MR_hl_field(MR_mktag(1), Pieces_133, 1) = ((MR_Box) (Var_137));
            }
            {
              Spec_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_134, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_tail_recursion\'/8"));
              MR_hl_field(MR_mktag(1), Spec_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_134, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_134, 3) = ((MR_Box) (OptionsContext_131));
              MR_hl_field(MR_mktag(1), Spec_134, 4) = ((MR_Box) (Pieces_133));
            }
            {
              Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Spec_134));
              MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeOptions_288 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeOptions_288, 0) = ((MR_Box) (Var_154));
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeProc_285)) == (MR_Integer) 1);
          if (succeeded)
          {
            Proc_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProc_285, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeOptions_288)) == (MR_Integer) 1);
            if (succeeded)
              Options_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOptions_288, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word PragmaType_258;
            MR_Word PragmaInfo_259;
            MR_Word Var_260;
            MR_Word Var_261;
            MR_Word Var_262;

            {
              Var_260 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_260, 0) = ((MR_Box) (Proc_269));
              MR_hl_field(MR_mktag(0), Var_260, 1) = ((MR_Box) (Options_270));
            }
            {
              PragmaType_258 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), PragmaType_258, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), PragmaType_258, 1) = ((MR_Box) (Var_260));
            }
            {
              PragmaInfo_259 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_259, 0) = ((MR_Box) (PragmaType_258));
              MR_hl_field(MR_mktag(0), PragmaInfo_259, 1) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), PragmaInfo_259, 2) = ((MR_Box) (SeqNum_15));
            }
            {
              Var_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_262, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), Var_262, 1) = ((MR_Box) (PragmaInfo_259));
            }
            {
              Var_261 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_261, 0) = ((MR_Box) (Var_262));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_261));
            }
          }
          else
          {
            MR_Word Specs_263;
            MR_Word Var_264;
            MR_Word Var_265;

            Var_264 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_mpf_mmode_0), MaybeProc_285);
            Var_265 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0), MaybeOptions_288);
            Specs_263 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_264, Var_265);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_263));
            }
          }
        }
        else
        {
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_123;
          MR_Word Pieces_125;
          MR_Word Spec_126;

          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (PragmaName_10));
          }
          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
            MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[32])));
          }
          {
            Pieces_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
            MR_hl_field(MR_mktag(1), Pieces_125, 1) = ((MR_Box) (Var_117));
          }
          {
            Spec_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_126, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_tail_recursion\'/8"));
            MR_hl_field(MR_mktag(1), Spec_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_126, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_126, 3) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(1), Spec_126, 4) = ((MR_Box) (Pieces_125));
          }
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Spec_126));
            MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_123));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_tail_recursion_options_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeRTR_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          if ((STATE_VARIABLE_Specs_0_5 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word WarnOrError_22;
            MR_Word Type_23;
            MR_Word RTR_24;

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
              WarnOrError_22 = (MR_Integer) 0;
            else
              WarnOrError_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
              Type_23 = (MR_Integer) 1;
            else
              Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
            {
              RTR_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RTR_24, 0) = (MR_Box) (((((MR_Unsigned) (WarnOrError_22) << 1)) | (MR_Unsigned) (Type_23)));
              MR_hl_field(MR_mktag(1), RTR_24, 1) = ((MR_Box) (HeadVar__6_6));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRTR_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RTR_24));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRTR_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_27_27;

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_0_5;
            else
            {
              MR_Word WarnOrError0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
              MR_String WarnOrErrorString_15;
              MR_Word SpecA_16;

              libs__compiler_util__warning_or_error_string_2_p_0(WarnOrError0_14, &WarnOrErrorString_15);
              SpecA_16 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0((MR_String) "none", WarnOrErrorString_15, HeadVar__6_6);
              {
                STATE_VARIABLE_Specs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_27_27, 0) = ((MR_Box) (SpecA_16));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((STATE_VARIABLE_Specs_27_27 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_30;

                {
                  Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (HeadVar__6_6));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeRTR_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeRTR_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_27_27));
                }
            else
            {
              MR_Word Type0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
              MR_String TypeString_18;
              MR_Word SpecB_19;
              MR_Word STATE_VARIABLE_Specs_29_96;

              parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(Type0_17, &TypeString_18);
              SpecB_19 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0((MR_String) "none", TypeString_18, HeadVar__6_6);
              {
                STATE_VARIABLE_Specs_29_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_96, 0) = ((MR_Box) (SpecB_19));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_96, 1) = ((MR_Box) (STATE_VARIABLE_Specs_27_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeRTR_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_29_96));
              }
            }
          }
          break;
      }
    else
    {
      MR_Word Term_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeWarnOrError_44;
      MR_Word MaybeType_48;
      MR_Word SeenNone_49;
      MR_Word STATE_VARIABLE_Specs_56_56;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      if (((MR_tag((MR_Word) Term_31)) == (MR_Integer) 0))
      {
        MR_Word Functor_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_31, (MR_Integer) 0))));
        MR_Word Context_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_31, (MR_Integer) 2))));
        MR_String Name_42;
        MR_Word WarnOrError_43;

        succeeded = ((MR_tag((MR_Word) Functor_39)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_39, (MR_Integer) 0))));
          succeeded = libs__compiler_util__warning_or_error_string_2_p_1(&WarnOrError_43, Name_42);
        }
        if (succeeded)
        {
          if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MaybeWarnOrError_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeWarnOrError_44, 0) = ((MR_Box) (WarnOrError_43));
            }
            STATE_VARIABLE_Specs_56_56 = STATE_VARIABLE_Specs_0_5;
          }
          else
          {
            MR_Word WarnOrErrorFirst_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
            MR_String WarnOrErrorFirstString_46;
            MR_Word Spec_47;

            libs__compiler_util__warning_or_error_string_2_p_0(WarnOrErrorFirst_45, &WarnOrErrorFirstString_46);
            Spec_47 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(Name_42, WarnOrErrorFirstString_46, Context_41);
            MaybeWarnOrError_44 = HeadVar__3_3;
            {
              STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_47));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          }
          MaybeType_48 = HeadVar__4_4;
          SeenNone_49 = HeadVar__2_2;
        }
        else
        {
          MR_Word Type_50;
          MR_String Name_65;

          succeeded = ((MR_tag((MR_Word) Functor_39)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_65 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_39, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_1(&Type_50, Name_65);
          }
          if (succeeded)
          {
            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                MaybeType_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeType_48, 0) = ((MR_Box) (Type_50));
              }
              STATE_VARIABLE_Specs_56_56 = STATE_VARIABLE_Specs_0_5;
            }
            else
            {
              MR_Word TypeFirst_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
              MR_String TypeFirstString_52;
              MR_Word Spec_60;

              parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(TypeFirst_51, &TypeFirstString_52);
              Spec_60 = parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(Name_65, TypeFirstString_52, Context_41);
              MaybeType_48 = HeadVar__4_4;
              {
                STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_60));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            MaybeWarnOrError_44 = HeadVar__3_3;
            SeenNone_49 = HeadVar__2_2;
          }
          else
          {
            MR_String Var_58;

            succeeded = ((MR_tag((MR_Word) Functor_39)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_39, (MR_Integer) 0))));
              succeeded = (strcmp(Var_58, (MR_String) "none") == 0);
            }
            if (succeeded)
            {
              SeenNone_49 = (MR_Integer) 0;
              MaybeWarnOrError_44 = HeadVar__3_3;
              MaybeType_48 = HeadVar__4_4;
              STATE_VARIABLE_Specs_56_56 = STATE_VARIABLE_Specs_0_5;
            }
            else
            {
              MR_Word Spec_63;
              MR_Word VarSet_72;
              MR_Word Pieces_73;
              MR_Word Var_76;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_String Var_84;

              mercury__varset__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &VarSet_72);
              Var_84 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_72, Term_31);
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[126])));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[122])));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
              }
              {
                Pieces_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[125])));
                MR_hl_field(MR_mktag(1), Pieces_73, 1) = ((MR_Box) (Var_76));
              }
              {
                Spec_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_63, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.pragma_require_tailrec_unknown_term_error\'/2"));
                MR_hl_field(MR_mktag(1), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_63, 3) = ((MR_Box) (Context_41));
                MR_hl_field(MR_mktag(1), Spec_63, 4) = ((MR_Box) (Pieces_73));
              }
              {
                STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_63));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
              SeenNone_49 = HeadVar__2_2;
              MaybeType_48 = HeadVar__4_4;
              MaybeWarnOrError_44 = HeadVar__3_3;
            }
          }
        }
      }
      else
      {
        MR_Word Context_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_31, (MR_Integer) 1))));
        MR_Word Spec_68;

        Spec_68 = parse_tree__parse_pragma__pragma_require_tailrec_unknown_term_error_2_f_0(Term_31, Context_67);
        {
          STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
        }
        SeenNone_49 = HeadVar__2_2;
        MaybeType_48 = HeadVar__4_4;
        MaybeWarnOrError_44 = HeadVar__3_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_32;
      next_value_of_HeadVar__2_2 = SeenNone_49;
      next_value_of_HeadVar__3_3 = MaybeWarnOrError_44;
      next_value_of_HeadVar__4_4 = MaybeType_48;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__pragma_require_tailrec_unknown_term_error_2_f_0(
  MR_Word Term_4,
  MR_Word Context_5)
{
  {
    MR_Word Spec_6;
    MR_Word VarSet_7;
    MR_Word Pieces_8;
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_19;

    mercury__varset__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &VarSet_7);
    Var_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_4);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[126])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[122])));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[125])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_11));
    }
    {
      Spec_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.pragma_require_tailrec_unknown_term_error\'/2"));
      MR_hl_field(MR_mktag(1), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_6, 3) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(1), Spec_6, 4) = ((MR_Box) (Pieces_8));
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__conflicting_attributes_error_3_f_0(
  MR_String ThisName_5,
  MR_String EarlierName_6,
  MR_Word Context_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (ThisName_5));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (EarlierName_6));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[124])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[123])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[122])));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[121])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_12));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.conflicting_attributes_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_feature_set_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeReqFeature_6;

    parse_tree__parse_pragma__parse_required_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeReqFeature_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_MaybeReqFeature_6));
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_require_feature_set_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_33;
    MR_Word Var_49;
    MR_Word Var_50;

    Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_feature_set\'/6"));
      MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[79])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
    }
  }
  else
  {
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeFeatureList_14;

      parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_String) "a list of features", (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[4]), VarSet_7, Var_94, &MaybeFeatureList_14);
      if (((MR_tag((MR_Word) MaybeFeatureList_14)) == (MR_Integer) 0))
        *MaybeIOM_12 = (MR_Word) (MaybeFeatureList_14);
      else
      {
        MR_Word FeatureList_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFeatureList_14, (MR_Integer) 0))));
        MR_Word FeatureListContext_17;
        MR_Word ConflictSpecs_18;

        FeatureListContext_17 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_94);
        parse_tree__parse_util__report_any_conflicts_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), FeatureListContext_17, (MR_String) "conflicting features in feature set", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[81])), FeatureList_15, &ConflictSpecs_18);
        if ((ConflictSpecs_18 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((FeatureList_15 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeIOM_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[3]));
          else
          {
            MR_Word FeatureSet_23;
            MR_Word RFSInfo_24;
            MR_Word Pragma_25;
            MR_Word ItemPragma_26;
            MR_Word Item_27;
            MR_Word Var_66;

            FeatureSet_23 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), FeatureList_15);
            RFSInfo_24 = (MR_Word) (FeatureSet_23);
            {
              Pragma_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Pragma_25, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Pragma_25, 1) = ((MR_Box) (RFSInfo_24));
            }
            {
              ItemPragma_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_26, 0) = ((MR_Box) (Pragma_25));
              MR_hl_field(MR_mktag(0), ItemPragma_26, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemPragma_26, 2) = ((MR_Box) (SeqNum_11));
            }
            {
              Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), Item_27, 1) = ((MR_Box) (ItemPragma_26));
            }
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Item_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_66));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConflictSpecs_18));
          }
      }
    }
    else
    {
      MR_Word Spec_76;
      MR_Word Var_80;
      MR_Word Var_81;

      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_76, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_require_feature_set\'/6"));
        MR_hl_field(MR_mktag(1), Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_76, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_76, 3) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Spec_76, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[79])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Spec_76));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_fact_table_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;

    if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Spec_93;

      Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
        MR_hl_field(MR_mktag(1), Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_93, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Spec_93, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[76])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_93));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
      }
    }
    else
    {
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

      if ((Var_123 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Spec_103;

        Var_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_103, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
          MR_hl_field(MR_mktag(1), Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_103, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_103, 3) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), Spec_103, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[76])));
        }
        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Spec_103));
          MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
        }
      }
      else
      {
        MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_123, (MR_Integer) 1))));
        MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_123, (MR_Integer) 0))));

        if ((Var_125 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeNameAndArity_17;

          parse_tree__parse_pragma__parse_pred_name_and_arity_6_p_0(ModuleName_8, (MR_String) "fact_table", Var_124, ErrorTerm_10, VarSet_9, &MaybeNameAndArity_17);
          if (((MR_tag((MR_Word) MaybeNameAndArity_17)) == (MR_Integer) 0))
          {
            MR_Word Specs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeNameAndArity_17, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_30));
            }
          }
          else
          {
            MR_Word PredName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_17, (MR_Integer) 0))));
            MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_17, (MR_Integer) 1))));
            MR_String FileName_20;
            MR_Word Var_59;
            MR_Word Var_60;

            succeeded = ((MR_tag((MR_Word) Var_126)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_126, (MR_Integer) 0))));
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_126, (MR_Integer) 1))));
              succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 2);
                if (succeeded)
                  FileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_59, (MR_Integer) 0))));
              }
            }
            if (succeeded)
            {
              MR_Word PredNameArity_22;
              MR_Word FactTableInfo_23;
              MR_Word Pragma_24;
              MR_Word ItemPragma_25;
              MR_Word Item_26;
              MR_Word Var_61;

              {
                PredNameArity_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredNameArity_22, 0) = ((MR_Box) (PredName_18));
                MR_hl_field(MR_mktag(0), PredNameArity_22, 1) = ((MR_Box) (Arity_19));
              }
              {
                FactTableInfo_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FactTableInfo_23, 0) = ((MR_Box) (PredNameArity_22));
                MR_hl_field(MR_mktag(0), FactTableInfo_23, 1) = ((MR_Box) (FileName_20));
              }
              {
                Pragma_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Pragma_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Pragma_24, 1) = ((MR_Box) (FactTableInfo_23));
              }
              {
                ItemPragma_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemPragma_25, 0) = ((MR_Box) (Pragma_24));
                MR_hl_field(MR_mktag(0), ItemPragma_25, 1) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), ItemPragma_25, 2) = ((MR_Box) (SeqNum_13));
              }
              {
                Item_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Item_26, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), Item_26, 1) = ((MR_Box) (ItemPragma_25));
              }
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Item_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_61));
              }
            }
            else
            {
              MR_String FileNameTermStr_27;
              MR_Word Pieces_28;
              MR_Word Spec_29;
              MR_Word Var_64;
              MR_Word Var_67;
              MR_Word Var_70;
              MR_Word Var_72;
              MR_Word Var_75;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_89;
              MR_Word Var_90;

              FileNameTermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_126);
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (FileNameTermStr_27));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[95])));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[119])));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[106])));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[118])));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
              }
              {
                Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[115])));
                MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_64));
              }
              Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_126);
              {
                Spec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
                MR_hl_field(MR_mktag(1), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_29, 3) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(1), Spec_29, 4) = ((MR_Box) (Pieces_28));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Spec_29));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
              }
            }
          }
        }
        else
        {
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Spec_112;

          Var_108 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_112, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_fact_table\'/7"));
            MR_hl_field(MR_mktag(1), Spec_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_112, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_112, 3) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(1), Spec_112, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[76])));
          }
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Spec_112));
            MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_109));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pred_name_and_arity_6_p_0(
  MR_Word ModuleName_7,
  MR_String PragmaName_8,
  MR_Word NameAndArityTerm_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word * MaybeNameAndArity_12)
{
  parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(ModuleName_7, PragmaName_8, (MR_String) "predicate or function", NameAndArityTerm_9, ErrorTerm_10, VarSet_11, MaybeNameAndArity_12);
}

static MR_bool MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_TypeSpec_4;

    succeeded = parse_tree__parse_pragma__parse_type_spec_pair_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TypeSpec_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_TypeSpec_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_type_spec_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded = (PragmaTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word PredAndModesTerm_15;
    MR_Word TypeSubnTerm_16;
    MR_Word MaybeName_17;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;

    if (succeeded)
    {
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
      succeeded = (Var_125 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_125, (MR_Integer) 0))));
        Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_125, (MR_Integer) 1))));
        if ((Var_127 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          PredAndModesTerm_15 = Var_126;
          TypeSubnTerm_16 = Var_128;
          MaybeName_17 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_115_115;
          MR_Word SpecNameTerm_18;
          MR_Word SpecContext_21;
          MR_String FileName_22;
          MR_Word SpecName_24;
          MR_Word Var_48;
          MR_String Var_49;
          MR_String Var_23;

          PredAndModesTerm_15 = Var_126;
          TypeSubnTerm_16 = Var_128;
          SpecNameTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 1))));
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) SpecNameTerm_18)) == (MR_Integer) 0);
            if (succeeded)
            {
              SpecContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecNameTerm_18, (MR_Integer) 2))));
              mercury__term__context_file_2_p_0(SpecContext_21, &FileName_22);
              Var_49 = (MR_String) ".m";
              succeeded = mercury__string__remove_suffix_3_p_0(FileName_22, Var_49, &Var_23);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeCtorInfo_115_115 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(TypeCtorInfo_115_115, ModuleName_8, SpecNameTerm_18, &SpecName_24);
                if (succeeded)
                {
                  {
                    MaybeName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeName_17, 0) = ((MR_Box) (SpecName_24));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ArityOrModesContextPieces_25;
      MR_Word MaybeArityOrModes_26;

      ArityOrModesContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[67])));
      parse_tree__parse_util__parse_arity_or_modes_6_p_0(ModuleName_8, PredAndModesTerm_15, ErrorTerm_10, VarSet_9, ArityOrModesContextPieces_25, &MaybeArityOrModes_26);
      if (((MR_tag((MR_Word) MaybeArityOrModes_26)) == (MR_Integer) 0))
        *MaybeIOM_14 = (MR_Word) (MaybeArityOrModes_26);
      else
      {
        MR_Word ArityOrModes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArityOrModes_26, (MR_Integer) 0))));
        MR_Word PredName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_27, (MR_Integer) 0))));
        MR_Integer Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArityOrModes_27, (MR_Integer) 1))));
        MR_Word MaybePredOrFunc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_27, (MR_Integer) 2))));
        MR_Word MaybeModes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityOrModes_27, (MR_Integer) 3))));
        MR_Word TypeSubnTerms_32;
        MR_Word TVarSet_33;
        MR_Word TypeSubns_34;

        parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeSubnTerm_16, &TypeSubnTerms_32);
        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_33);
        succeeded = mercury__list__map_3_p_2((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[0]), (MR_Word) (&parse_tree__parse_pragma_scalar_common_2[3]), TypeSubnTerms_32, &TypeSubns_34);
        if (succeeded)
        {
          MR_Word SpecializedName_36;
          MR_Word TypeSpecInfo_38;
          MR_Word Pragma_39;
          MR_Word ItemPragma_40;
          MR_Word Item_41;
          MR_Word Var_67;
          MR_Word Var_68;

          if ((MaybeName_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String UnqualName_37;
            MR_Word Var_66;

            UnqualName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_28);
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (TVarSet_33));
              MR_hl_field(MR_mktag(2), Var_66, 1) = ((MR_Box) (TypeSubns_34));
            }
            parse_tree__prog_util__make_pred_name_6_p_0(ModuleName_8, (MR_String) "TypeSpecOf", MaybePredOrFunc_30, UnqualName_37, Var_66, &SpecializedName_36);
          }
          else
            SpecializedName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeName_17, (MR_Integer) 0))));
          Var_67 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0));
          {
            TypeSpecInfo_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 0) = ((MR_Box) (PredName_28));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 1) = ((MR_Box) (SpecializedName_36));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 2) = ((MR_Box) (Arity_29));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 3) = ((MR_Box) (MaybePredOrFunc_30));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 4) = ((MR_Box) (MaybeModes_31));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 5) = ((MR_Box) (TypeSubns_34));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 6) = ((MR_Box) (TVarSet_33));
            MR_hl_field(MR_mktag(0), TypeSpecInfo_38, 7) = ((MR_Box) (Var_67));
          }
          Pragma_39 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (TypeSpecInfo_38)));
          {
            ItemPragma_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemPragma_40, 0) = ((MR_Box) (Pragma_39));
            MR_hl_field(MR_mktag(0), ItemPragma_40, 1) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(0), ItemPragma_40, 2) = ((MR_Box) (SeqNum_13));
          }
          {
            Item_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_41, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_41, 1) = ((MR_Box) (ItemPragma_40));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Item_41));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
          }
        }
        else
        {
          MR_String TypeSubnTermStr_42;
          MR_Word Pieces_43;
          MR_Word Spec_44;
          MR_Word Var_71;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_Word Var_79;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_93;
          MR_Word Var_94;

          TypeSubnTermStr_42 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, TypeSubnTerm_16);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (TypeSubnTermStr_42));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[117])));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[106])));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[116])));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
          }
          {
            Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[115])));
            MR_hl_field(MR_mktag(1), Pieces_43, 1) = ((MR_Box) (Var_71));
          }
          Var_93 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeSubnTerm_16);
          {
            Spec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_type_spec\'/7"));
            MR_hl_field(MR_mktag(1), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_44, 3) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(1), Spec_44, 4) = ((MR_Box) (Pieces_43));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Spec_44));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
          }
        }
      }
    }
    else
    {
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Spec_114;

      Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_type_spec\'/7"));
        MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[71])));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_114));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_pragma_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;

    if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_49;
      MR_Word Var_71;
      MR_Word Var_72;

      Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
        MR_hl_field(MR_mktag(1), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_49, 3) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Spec_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[63])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_49));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      }
    }
    else
    {
      MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
      MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

      if ((Var_162 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_126;
        MR_Word Var_130;
        MR_Word Var_131;

        Var_130 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_126, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
          MR_hl_field(MR_mktag(1), Spec_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_126, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_126, 3) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(1), Spec_126, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[63])));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Spec_126));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_131));
        }
      }
      else
      {
        MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_162, (MR_Integer) 1))));
        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_162, (MR_Integer) 0))));

        if ((Var_164 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_135;
          MR_Word Var_139;
          MR_Word Var_140;

          Var_139 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_135, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
            MR_hl_field(MR_mktag(1), Spec_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_135, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_135, 3) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(1), Spec_135, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[63])));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Spec_135));
            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_140));
          }
        }
        else
        {
          MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_164, (MR_Integer) 1))));
          MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_164, (MR_Integer) 0))));

          if ((Var_166 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeTypeCtor_23;
            MR_Word MaybeCreatorsNamesArities_27;
            MR_Word MaybeMutatorsNamesArities_28;
            MR_Word MaybeDestructorsNamesArities_30;
            MR_Word Name_21;
            MR_Integer Arity_22;
            MR_Word TypeCtor_31;
            MR_Word CreatorsNamesArities_32;
            MR_Word MutatorsNamesArities_33;
            MR_Word DestructorsNamesArities_34;

            succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, Var_163, &Name_21, &Arity_22);
            if (succeeded)
            {
              MR_Word Var_77;

              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Name_21));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (Arity_22));
              }
              {
                MaybeTypeCtor_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTypeCtor_23, 0) = ((MR_Box) (Var_77));
              }
            }
            else
            {
              MR_String TypeCtorTermStr_24;
              MR_Word Pieces_25;
              MR_Word TypeCtorSpec_26;
              MR_Word Var_80;
              MR_Word Var_83;
              MR_Word Var_86;
              MR_Word Var_88;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_102;
              MR_Word Var_103;

              TypeCtorTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_163);
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (TypeCtorTermStr_24));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
              }
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[114])));
                MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
              }
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[106])));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[111])));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
              }
              {
                Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[113])));
                MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_80));
              }
              Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                TypeCtorSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TypeCtorSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
                MR_hl_field(MR_mktag(1), TypeCtorSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), TypeCtorSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), TypeCtorSpec_26, 3) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(1), TypeCtorSpec_26, 4) = ((MR_Box) (Pieces_25));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (TypeCtorSpec_26));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeTypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeTypeCtor_23, 0) = ((MR_Box) (Var_103));
              }
            }
            parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "second", (MR_String) "creators", Var_165, &MaybeCreatorsNamesArities_27);
            parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "third", (MR_String) "mutators", Var_167, &MaybeMutatorsNamesArities_28);
            MaybeDestructorsNamesArities_30 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[2]));
            succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_23)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtor_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtor_23, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCreatorsNamesArities_27)) == (MR_Integer) 1);
              if (succeeded)
              {
                CreatorsNamesArities_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCreatorsNamesArities_27, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeMutatorsNamesArities_28)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MutatorsNamesArities_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMutatorsNamesArities_28, (MR_Integer) 0))));
                  DestructorsNamesArities_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDestructorsNamesArities_30, (MR_Integer) 0))));
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
            {
              MR_Word OISUInfo_35;
              MR_Word Pragma_36;
              MR_Word ItemPragma_37;
              MR_Word Item_38;
              MR_Word Var_112;

              {
                OISUInfo_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), OISUInfo_35, 0) = ((MR_Box) (TypeCtor_31));
                MR_hl_field(MR_mktag(0), OISUInfo_35, 1) = ((MR_Box) (CreatorsNamesArities_32));
                MR_hl_field(MR_mktag(0), OISUInfo_35, 2) = ((MR_Box) (MutatorsNamesArities_33));
                MR_hl_field(MR_mktag(0), OISUInfo_35, 3) = ((MR_Box) (DestructorsNamesArities_34));
              }
              {
                Pragma_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Pragma_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Pragma_36, 1) = ((MR_Box) (OISUInfo_35));
              }
              {
                ItemPragma_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemPragma_37, 0) = ((MR_Box) (Pragma_36));
                MR_hl_field(MR_mktag(0), ItemPragma_37, 1) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), ItemPragma_37, 2) = ((MR_Box) (SeqNum_13));
              }
              {
                Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemPragma_37));
              }
              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Item_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_112));
              }
            }
            else
            {
              MR_Word Specs_39;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;

              Var_113 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_23);
              Var_115 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeCreatorsNamesArities_27);
              Var_117 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeMutatorsNamesArities_28);
              Var_118 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeDestructorsNamesArities_30);
              Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_117, Var_118);
              Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_115, Var_116);
              Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_113, Var_114);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_39));
              }
            }
          }
          else
          {
            MR_Word Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_166, (MR_Integer) 1))));
            MR_Word Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_166, (MR_Integer) 0))));

            if ((Var_388 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DestructorsTerm2_29;
              MR_Word MaybeDestructorsTerm_266;
              MR_Word MaybeTypeCtor_269;
              MR_Word MaybeCreatorsNamesArities_273;
              MR_Word MaybeMutatorsNamesArities_274;
              MR_Word MaybeDestructorsNamesArities_275;
              MR_Word Name_196;
              MR_Integer Arity_197;
              MR_Word TypeCtor_243;
              MR_Word CreatorsNamesArities_244;
              MR_Word MutatorsNamesArities_245;
              MR_Word DestructorsNamesArities_246;

              {
                MaybeDestructorsTerm_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeDestructorsTerm_266, 0) = ((MR_Box) (Var_389));
              }
              succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, Var_163, &Name_196, &Arity_197);
              if (succeeded)
              {
                MR_Word Var_169;

                {
                  Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Name_196));
                  MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (Arity_197));
                }
                {
                  MaybeTypeCtor_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeTypeCtor_269, 0) = ((MR_Box) (Var_169));
                }
              }
              else
              {
                MR_String TypeCtorTermStr_170;
                MR_Word Pieces_171;
                MR_Word TypeCtorSpec_172;
                MR_Word Var_175;
                MR_Word Var_178;
                MR_Word Var_181;
                MR_Word Var_183;
                MR_Word Var_186;
                MR_Word Var_187;
                MR_Word Var_192;
                MR_Word Var_193;

                TypeCtorTermStr_170 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_163);
                {
                  Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (TypeCtorTermStr_170));
                }
                {
                  Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
                  MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
                }
                {
                  Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[114])));
                  MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_186));
                }
                {
                  Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_183));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[106])));
                  MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_181));
                }
                {
                  Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[111])));
                  MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_178));
                }
                {
                  Pieces_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[113])));
                  MR_hl_field(MR_mktag(1), Pieces_171, 1) = ((MR_Box) (Var_175));
                }
                Var_192 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
                {
                  TypeCtorSpec_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), TypeCtorSpec_172, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
                  MR_hl_field(MR_mktag(1), TypeCtorSpec_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), TypeCtorSpec_172, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), TypeCtorSpec_172, 3) = ((MR_Box) (Var_192));
                  MR_hl_field(MR_mktag(1), TypeCtorSpec_172, 4) = ((MR_Box) (Pieces_171));
                }
                {
                  Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (TypeCtorSpec_172));
                  MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeTypeCtor_269 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeTypeCtor_269, 0) = ((MR_Box) (Var_193));
                }
              }
              parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "second", (MR_String) "creators", Var_165, &MaybeCreatorsNamesArities_273);
              parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "third", (MR_String) "mutators", Var_167, &MaybeMutatorsNamesArities_274);
              DestructorsTerm2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDestructorsTerm_266, (MR_Integer) 0))));
              parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(ModuleName_8, VarSet_9, (MR_String) "fourth", (MR_String) "destructors", DestructorsTerm2_29, &MaybeDestructorsNamesArities_275);
              succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_269)) == (MR_Integer) 1);
              if (succeeded)
              {
                TypeCtor_243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtor_269, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeCreatorsNamesArities_273)) == (MR_Integer) 1);
                if (succeeded)
                {
                  CreatorsNamesArities_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCreatorsNamesArities_273, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeMutatorsNamesArities_274)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MutatorsNamesArities_245 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMutatorsNamesArities_274, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeDestructorsNamesArities_275)) == (MR_Integer) 1);
                    if (succeeded)
                      DestructorsNamesArities_246 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDestructorsNamesArities_275, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word OISUInfo_228;
                MR_Word Pragma_229;
                MR_Word ItemPragma_230;
                MR_Word Item_231;
                MR_Word Var_232;

                {
                  OISUInfo_228 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OISUInfo_228, 0) = ((MR_Box) (TypeCtor_243));
                  MR_hl_field(MR_mktag(0), OISUInfo_228, 1) = ((MR_Box) (CreatorsNamesArities_244));
                  MR_hl_field(MR_mktag(0), OISUInfo_228, 2) = ((MR_Box) (MutatorsNamesArities_245));
                  MR_hl_field(MR_mktag(0), OISUInfo_228, 3) = ((MR_Box) (DestructorsNamesArities_246));
                }
                {
                  Pragma_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Pragma_229, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Pragma_229, 1) = ((MR_Box) (OISUInfo_228));
                }
                {
                  ItemPragma_230 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemPragma_230, 0) = ((MR_Box) (Pragma_229));
                  MR_hl_field(MR_mktag(0), ItemPragma_230, 1) = ((MR_Box) (Context_12));
                  MR_hl_field(MR_mktag(0), ItemPragma_230, 2) = ((MR_Box) (SeqNum_13));
                }
                {
                  Item_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item_231, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                  MR_hl_field(MR_mktag(3), Item_231, 1) = ((MR_Box) (ItemPragma_230));
                }
                {
                  Var_232 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_232, 0) = ((MR_Box) (Item_231));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_232));
                }
              }
              else
              {
                MR_Word Specs_233;
                MR_Word Var_234;
                MR_Word Var_235;
                MR_Word Var_236;
                MR_Word Var_237;
                MR_Word Var_238;
                MR_Word Var_239;

                Var_234 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_269);
                Var_236 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeCreatorsNamesArities_273);
                Var_238 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeMutatorsNamesArities_274);
                Var_239 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeDestructorsNamesArities_275);
                Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_238, Var_239);
                Var_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_236, Var_237);
                Specs_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_234, Var_235);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_233));
                }
              }
            }
            else
            {
              MR_Word Spec_144;
              MR_Word Var_148;
              MR_Word Var_149;

              Var_148 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                Spec_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_144, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_pragma\'/7"));
                MR_hl_field(MR_mktag(1), Spec_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_144, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_144, 3) = ((MR_Box) (Var_148));
                MR_hl_field(MR_mktag(1), Spec_144, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[63])));
              }
              {
                Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Spec_144));
                MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_149));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_oisu_preds_term_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_String ArgNum_9,
  MR_String ExpectedFunctor_10,
  MR_Word Term_11,
  MR_Word * MaybeNamesArities_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0);
    MR_Word Arg_16;
    MR_String Functor_13;
    MR_Word Args_14;
    MR_Word Var_19;
    MR_Word Var_20;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 0))));
      Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        succeeded = (strcmp(Functor_13, ExpectedFunctor_10) == 0);
        if (succeeded)
        {
          succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_pragma__parse_name_and_arity_list_5_p_0(ModuleName_7, VarSet_8, ExpectedFunctor_10, Arg_16, MaybeNamesArities_12);
    else
    {
      MR_Word Pieces_17;
      MR_Word Spec_18;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_String Var_39;
      MR_Word Var_50;
      MR_Word Var_51;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (ArgNum_9));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(ExpectedFunctor_10, (MR_String) "([pred1/arity1, ..., predn/arityn])");
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[112])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[97])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[111])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[110])));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
      }
      {
        Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_23));
      }
      Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
      {
        Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_oisu_preds_term\'/6"));
        MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (Pieces_17));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNamesArities_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_name_and_arity_list_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_String Wrapper_8,
  MR_Word Term_9,
  MR_Word * MaybeNamesArities_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
    {
      MR_Word Functor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      MR_String Var_54;

      succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Functor_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_54 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_11, (MR_Integer) 0))));
          succeeded = (strcmp(Var_54, (MR_String) "[]") == 0);
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNamesArities_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Args_12));
        }
      else
      {
        MR_Word Arg1_14;
        MR_Word Arg2_15;
        MR_String Var_56;
        MR_Word Var_57;
        MR_Word Var_58;

        succeeded = ((MR_tag((MR_Word) Functor_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_56 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_11, (MR_Integer) 0))));
          succeeded = (strcmp(Var_56, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Arg1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
              succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))));
                Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 1))));
                succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word MaybeHeadNameArity_18;
          MR_Word MaybeTailNamesArities_22;
          MR_Word Arg1Name_16;
          MR_Integer Arg1Arity_17;
          MR_Word HeadNameArity_23;
          MR_Word TailNamesArities_24;

          succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_6, Arg1_14, &Arg1Name_16, &Arg1Arity_17);
          if (succeeded)
          {
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Arg1Name_16));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Arg1Arity_17));
            }
            {
              MaybeHeadNameArity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeHeadNameArity_18, 0) = ((MR_Box) (Var_59));
            }
          }
          else
          {
            MR_String Arg1Str_19;
            MR_Word Pieces_20;
            MR_Word Spec_21;
            MR_Word Var_62;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_76;
            MR_Word Var_77;

            Arg1Str_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Arg1_14);
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Arg1Str_19));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[95])));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
            }
            {
              Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[108])));
              MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_62));
            }
            Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Arg1_14);
            {
              Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_and_arity_list\'/5"));
              MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Spec_21, 4) = ((MR_Box) (Pieces_20));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_21));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeHeadNameArity_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeHeadNameArity_18, 0) = ((MR_Box) (Var_77));
            }
          }
          parse_tree__parse_pragma__parse_name_and_arity_list_5_p_0(ModuleName_6, VarSet_7, Wrapper_8, Arg2_15, &MaybeTailNamesArities_22);
          succeeded = ((MR_tag((MR_Word) MaybeHeadNameArity_18)) == (MR_Integer) 1);
          if (succeeded)
          {
            HeadNameArity_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadNameArity_18, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeTailNamesArities_22)) == (MR_Integer) 1);
            if (succeeded)
              TailNamesArities_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailNamesArities_22, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word Var_79;

            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (HeadNameArity_23));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (TailNamesArities_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeNamesArities_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
            }
          }
          else
          {
            MR_Word HeadSpecs_25;
            MR_Word TailSpecs_26;
            MR_Word Var_80;

            HeadSpecs_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), MaybeHeadNameArity_18);
            TailSpecs_26 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[3]), MaybeTailNamesArities_22);
            Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadSpecs_25, TailSpecs_26);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNamesArities_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_80));
            }
          }
        }
        else
        {
          MR_String TermStr_27;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_88;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Pieces_105;
          MR_Word Spec_106;

          TermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Wrapper_8));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (TermStr_27));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[95])));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[94])));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
          }
          {
            Pieces_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[109])));
            MR_hl_field(MR_mktag(1), Pieces_105, 1) = ((MR_Box) (Var_83));
          }
          Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_and_arity_list\'/5"));
            MR_hl_field(MR_mktag(1), Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_106, 3) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(1), Spec_106, 4) = ((MR_Box) (Pieces_105));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_106));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNamesArities_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
          }
        }
      }
    }
    else
    {
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Pieces_107;
      MR_Word Spec_108;
      MR_String TermStr_109;

      TermStr_109 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Wrapper_8));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (TermStr_109));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[95])));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[94])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Pieces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[109])));
        MR_hl_field(MR_mktag(1), Pieces_107, 1) = ((MR_Box) (Var_32));
      }
      Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_108, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_and_arity_list\'/5"));
        MR_hl_field(MR_mktag(1), Spec_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_108, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_108, 3) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Spec_108, 4) = ((MR_Box) (Pieces_107));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_108));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNamesArities_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_proc_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;

    if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_35;
      MR_Word Var_52;
      MR_Word Var_53;

      Var_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_proc\'/7"));
        MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_35, 3) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Spec_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[45])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Spec_35));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
      }
    }
    else
    {
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

      if ((Var_157 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeObsoleteInFavourOf_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[1]));
        MR_Word PredAndModesContextPieces_18;
        MR_Word MaybePredAndModes_19;
        MR_Word Var_71;
        MR_Word PredName_20;
        MR_Word PredOrFunc_21;
        MR_Word Modes_22;
        MR_Word ObsoleteInFavourOf_23;

        PredAndModesContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[50])));
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ModuleName_8));
        }
        parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_71, VarSet_11, PredAndModesContextPieces_18, Var_158, &MaybePredAndModes_19);
        succeeded = ((MR_tag((MR_Word) MaybePredAndModes_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_19, (MR_Integer) 0))));
          PredOrFunc_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_19, (MR_Integer) 1))));
          Modes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_19, (MR_Integer) 2))));
          ObsoleteInFavourOf_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_16, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word PredNameModesPF_24;
          MR_Word ObsoletePragma_25;
          MR_Word Pragma_26;
          MR_Word ItemPragma_27;
          MR_Word Item_28;
          MR_Word Var_72;

          {
            PredNameModesPF_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredNameModesPF_24, 0) = ((MR_Box) (PredName_20));
            MR_hl_field(MR_mktag(0), PredNameModesPF_24, 1) = ((MR_Box) (Modes_22));
            MR_hl_field(MR_mktag(0), PredNameModesPF_24, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          }
          {
            ObsoletePragma_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ObsoletePragma_25, 0) = ((MR_Box) (PredNameModesPF_24));
            MR_hl_field(MR_mktag(0), ObsoletePragma_25, 1) = ((MR_Box) (ObsoleteInFavourOf_23));
          }
          Pragma_26 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ObsoletePragma_25)));
          {
            ItemPragma_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemPragma_27, 0) = ((MR_Box) (Pragma_26));
            MR_hl_field(MR_mktag(0), ItemPragma_27, 1) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(0), ItemPragma_27, 2) = ((MR_Box) (SeqNum_13));
          }
          {
            Item_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_28, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_28, 1) = ((MR_Box) (ItemPragma_27));
          }
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Item_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
          }
        }
        else
        {
          MR_Word Specs_29;
          MR_Word Var_73;
          MR_Word Var_74;

          Var_73 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[2]), MaybePredAndModes_19);
          Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_16);
          Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_73, Var_74);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_29));
          }
        }
      }
      else
      {
        MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_157, (MR_Integer) 1))));
        MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_157, (MR_Integer) 0))));

        if ((Var_159 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeObsoleteInFavourOf_124;
          MR_Word PredAndModesContextPieces_125;
          MR_Word MaybePredAndModes_126;
          MR_Word Var_138;
          MR_Word PredName_105;
          MR_Word PredOrFunc_106;
          MR_Word Modes_107;
          MR_Word ObsoleteInFavourOf_108;

          parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(Var_160, VarSet_11, &MaybeObsoleteInFavourOf_124);
          PredAndModesContextPieces_125 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[50])));
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (ModuleName_8));
          }
          parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_138, VarSet_11, PredAndModesContextPieces_125, Var_158, &MaybePredAndModes_126);
          succeeded = ((MR_tag((MR_Word) MaybePredAndModes_126)) == (MR_Integer) 1);
          if (succeeded)
          {
            PredName_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_126, (MR_Integer) 0))));
            PredOrFunc_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_126, (MR_Integer) 1))));
            Modes_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_126, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) MaybeObsoleteInFavourOf_124)) == (MR_Integer) 1);
            if (succeeded)
              ObsoleteInFavourOf_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_124, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word PredNameModesPF_91;
            MR_Word ObsoletePragma_92;
            MR_Word Pragma_93;
            MR_Word ItemPragma_94;
            MR_Word Item_95;
            MR_Word Var_96;

            {
              PredNameModesPF_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_91, 0) = ((MR_Box) (PredName_105));
              MR_hl_field(MR_mktag(0), PredNameModesPF_91, 1) = ((MR_Box) (Modes_107));
              MR_hl_field(MR_mktag(0), PredNameModesPF_91, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_106));
            }
            {
              ObsoletePragma_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ObsoletePragma_92, 0) = ((MR_Box) (PredNameModesPF_91));
              MR_hl_field(MR_mktag(0), ObsoletePragma_92, 1) = ((MR_Box) (ObsoleteInFavourOf_108));
            }
            Pragma_93 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ObsoletePragma_92)));
            {
              ItemPragma_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_94, 0) = ((MR_Box) (Pragma_93));
              MR_hl_field(MR_mktag(0), ItemPragma_94, 1) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(0), ItemPragma_94, 2) = ((MR_Box) (SeqNum_13));
            }
            {
              Item_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_95, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Item_95, 1) = ((MR_Box) (ItemPragma_94));
            }
            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Item_95));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_96));
            }
          }
          else
          {
            MR_Word Specs_97;
            MR_Word Var_98;
            MR_Word Var_99;

            Var_98 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_scalar_common_1[2]), MaybePredAndModes_126);
            Var_99 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_124);
            Specs_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_98, Var_99);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_97));
            }
          }
        }
        else
        {
          MR_Word Spec_83;
          MR_Word Var_87;
          MR_Word Var_88;

          Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_proc\'/7"));
            MR_hl_field(MR_mktag(1), Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_83, 3) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Spec_83, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[45])));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_83));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_7_p_0(
  MR_Word ModuleName_8,
  MR_Word PragmaTerms_9,
  MR_Word ErrorTerm_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;

    if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_33;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete\'/7"));
        MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[42])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
      }
    }
    else
    {
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

      if ((Var_137 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeObsoleteInFavourOf_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[1]));
        MR_Word MaybeNameAndArity_18;
        MR_Word PredName_19;
        MR_Integer PredArity_20;
        MR_Word ObsoleteInFavourOf_21;

        parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(ModuleName_8, (MR_String) "obsolete", (MR_String) "predicate or function", Var_138, Var_138, VarSet_11, &MaybeNameAndArity_18);
        succeeded = ((MR_tag((MR_Word) MaybeNameAndArity_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_18, (MR_Integer) 0))));
          PredArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_18, (MR_Integer) 1))));
          ObsoleteInFavourOf_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_16, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word PredNameArity_22;
          MR_Word ObsoletePragma_23;
          MR_Word Pragma_24;
          MR_Word ItemPragma_25;
          MR_Word Item_26;
          MR_Word Var_60;

          {
            PredNameArity_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredNameArity_22, 0) = ((MR_Box) (PredName_19));
            MR_hl_field(MR_mktag(0), PredNameArity_22, 1) = ((MR_Box) (PredArity_20));
          }
          {
            ObsoletePragma_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ObsoletePragma_23, 0) = ((MR_Box) (PredNameArity_22));
            MR_hl_field(MR_mktag(0), ObsoletePragma_23, 1) = ((MR_Box) (ObsoleteInFavourOf_21));
          }
          Pragma_24 = (MR_Word) ((MR_Word) (ObsoletePragma_23));
          {
            ItemPragma_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemPragma_25, 0) = ((MR_Box) (Pragma_24));
            MR_hl_field(MR_mktag(0), ItemPragma_25, 1) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(0), ItemPragma_25, 2) = ((MR_Box) (SeqNum_13));
          }
          {
            Item_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_26, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_26, 1) = ((MR_Box) (ItemPragma_25));
          }
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Item_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_60));
          }
        }
        else
        {
          MR_Word Specs_27;
          MR_Word Var_61;
          MR_Word Var_62;

          Var_61 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeNameAndArity_18);
          Var_62 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_16);
          Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, Var_62);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_27));
          }
        }
      }
      else
      {
        MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_137, (MR_Integer) 1))));
        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_137, (MR_Integer) 0))));

        if ((Var_139 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeObsoleteInFavourOf_107;
          MR_Word MaybeNameAndArity_108;
          MR_Word PredName_90;
          MR_Integer PredArity_91;
          MR_Word ObsoleteInFavourOf_92;

          parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(Var_140, VarSet_11, &MaybeObsoleteInFavourOf_107);
          parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(ModuleName_8, (MR_String) "obsolete", (MR_String) "predicate or function", Var_138, Var_138, VarSet_11, &MaybeNameAndArity_108);
          succeeded = ((MR_tag((MR_Word) MaybeNameAndArity_108)) == (MR_Integer) 1);
          if (succeeded)
          {
            PredName_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_108, (MR_Integer) 0))));
            PredArity_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_108, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) MaybeObsoleteInFavourOf_107)) == (MR_Integer) 1);
            if (succeeded)
              ObsoleteInFavourOf_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_107, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word PredNameArity_77;
            MR_Word ObsoletePragma_78;
            MR_Word Pragma_79;
            MR_Word ItemPragma_80;
            MR_Word Item_81;
            MR_Word Var_82;

            {
              PredNameArity_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_77, 0) = ((MR_Box) (PredName_90));
              MR_hl_field(MR_mktag(0), PredNameArity_77, 1) = ((MR_Box) (PredArity_91));
            }
            {
              ObsoletePragma_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ObsoletePragma_78, 0) = ((MR_Box) (PredNameArity_77));
              MR_hl_field(MR_mktag(0), ObsoletePragma_78, 1) = ((MR_Box) (ObsoleteInFavourOf_92));
            }
            Pragma_79 = (MR_Word) ((MR_Word) (ObsoletePragma_78));
            {
              ItemPragma_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_80, 0) = ((MR_Box) (Pragma_79));
              MR_hl_field(MR_mktag(0), ItemPragma_80, 1) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(0), ItemPragma_80, 2) = ((MR_Box) (SeqNum_13));
            }
            {
              Item_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_81, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Item_81, 1) = ((MR_Box) (ItemPragma_80));
            }
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Item_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_82));
            }
          }
          else
          {
            MR_Word Specs_83;
            MR_Word Var_84;
            MR_Word Var_85;

            Var_84 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeNameAndArity_108);
            Var_85 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeObsoleteInFavourOf_107);
            Specs_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_84, Var_85);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_83));
            }
          }
        }
        else
        {
          MR_Word Spec_69;
          MR_Word Var_73;
          MR_Word Var_74;

          Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete\'/7"));
            MR_hl_field(MR_mktag(1), Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_69, 3) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Spec_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[42])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Spec_69));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_3_p_0(
  MR_Word Term_4,
  MR_Word VarSet_5,
  MR_Word * MaybeObsoleteInFavourOf_6)
{
  {
    MR_bool succeeded;
    MR_Word Terms_7;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_4, &Terms_7);
    if (succeeded)
      parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0((MR_Integer) 1, Terms_7, VarSet_5, MaybeObsoleteInFavourOf_6);
    else
    {
      MR_Word Spec_9;
      MR_Word Var_31;
      MR_Word Var_32;

      Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_4);
      {
        Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_in_favour_of\'/3"));
        MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[58])));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Spec_9));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeObsoleteInFavourOf_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[1]));
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Terms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MaybeHeadSNA_15;
      MR_Word MaybeTailSNAs_18;
      MR_Integer Var_56;
      MR_Word SymName_13;
      MR_Integer Arity_14;
      MR_Word HeadSNA_19;
      MR_Word TailSNAs_20;

      succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9, &SymName_13, &Arity_14);
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (SymName_13));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Arity_14));
        }
        {
          MaybeHeadSNA_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeHeadSNA_15, 0) = ((MR_Box) (Var_22));
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
        MR_Word Var_36;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_String Var_43;
        MR_Word Var_53;
        MR_Word Var_54;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (HeadVar__1_1));
        }
        Var_43 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3, Term_9);
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[107])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[106])));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[105])));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[104])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[103])));
          MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_25));
        }
        Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_obsolete_in_favour_of_snas\'/4"));
          MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeHeadSNA_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeHeadSNA_15, 0) = ((MR_Box) (Var_54));
        }
      }
      Var_56 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
      parse_tree__parse_pragma__parse_pragma_obsolete_in_favour_of_snas_4_p_0(Var_56, Terms_10, HeadVar__3_3, &MaybeTailSNAs_18);
      succeeded = ((MR_tag((MR_Word) MaybeHeadSNA_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadSNA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadSNA_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailSNAs_18)) == (MR_Integer) 1);
        if (succeeded)
          TailSNAs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailSNAs_18, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_58;

        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (HeadSNA_19));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (TailSNAs_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
        }
      }
      else
      {
        MR_Word Specs_21;
        MR_Word Var_59;
        MR_Word Var_60;

        Var_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), MaybeHeadSNA_15);
        Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[1]), MaybeTailSNAs_18);
        Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_59, Var_60);
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
parse_tree__parse_pragma__parse_pragma_external_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ErrorTerm_12,
  MR_String PragmaName_13,
  MR_Word PragmaTerms_14,
  MR_Word Context_15,
  MR_Integer SeqNum_16,
  MR_Word PorF_17,
  MR_Word * MaybeIOM_18)
{
  {
    MR_bool succeeded = (PragmaTerms_14 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word PredTerm_19;
    MR_Word MaybeOptionsTerm_20;
    MR_Word Var_110;
    MR_Word Var_111;

    if (succeeded)
    {
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_14, (MR_Integer) 0))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_14, (MR_Integer) 1))));
      if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        PredTerm_19 = Var_111;
        MaybeOptionsTerm_20 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word OptionsTerm_21;
        MR_Word Var_39;

        PredTerm_19 = Var_111;
        OptionsTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0))));
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 1))));
        succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          {
            MaybeOptionsTerm_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionsTerm_20, 0) = ((MR_Box) (OptionsTerm_21));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word ContextPieces1_22;
      MR_Word MaybeSymNameArity_23;
      MR_Word ContextPieces2_24;
      MR_Word MaybeMaybeBackend_25;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word SymName_26;
      MR_Integer Arity_27;
      MR_Word MaybeBackend_28;

      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (PragmaName_13));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[98])));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[96])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      ContextPieces1_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41);
      parse_tree__parse_pragma__parse_symname_arity_4_p_0(VarSet_11, PredTerm_19, ContextPieces1_22, &MaybeSymNameArity_23);
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[99])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_44));
      }
      ContextPieces2_24 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_50);
      parse_tree__parse_pragma__parse_pragma_external_options_4_p_0(VarSet_11, MaybeOptionsTerm_20, ContextPieces2_24, &MaybeMaybeBackend_25);
      succeeded = ((MR_tag((MR_Word) MaybeSymNameArity_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameArity_23, (MR_Integer) 0))));
        Arity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSymNameArity_23, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeMaybeBackend_25)) == (MR_Integer) 1);
        if (succeeded)
          MaybeBackend_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeBackend_25, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_String BaseName_29;
        MR_Word FullSymName_30;

        BaseName_29 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_26);
        {
          FullSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FullSymName_30, 0) = ((MR_Box) (ModuleName_10));
          MR_hl_field(MR_mktag(1), FullSymName_30, 1) = ((MR_Box) (BaseName_29));
        }
        succeeded = mdbcomp__sym_name__partial_sym_name_is_part_of_full_2_p_0(SymName_26, FullSymName_30);
        if (succeeded)
        {
          MR_Word ExternalInfo_31;
          MR_Word Pragma_32;
          MR_Word PragmaInfo_33;
          MR_Word Item_34;
          MR_Word Var_59;

          {
            ExternalInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ExternalInfo_31, 0) = ((MR_Box) (FullSymName_30));
            MR_hl_field(MR_mktag(0), ExternalInfo_31, 1) = ((MR_Box) (Arity_27));
            MR_hl_field(MR_mktag(0), ExternalInfo_31, 2) = (MR_Box) ((MR_Unsigned) (PorF_17));
            MR_hl_field(MR_mktag(0), ExternalInfo_31, 3) = ((MR_Box) (MaybeBackend_28));
          }
          {
            Pragma_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Pragma_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Pragma_32, 1) = ((MR_Box) (ExternalInfo_31));
          }
          {
            PragmaInfo_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PragmaInfo_33, 0) = ((MR_Box) (Pragma_32));
            MR_hl_field(MR_mktag(0), PragmaInfo_33, 1) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), PragmaInfo_33, 2) = ((MR_Box) (SeqNum_16));
          }
          {
            Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_34, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_34, 1) = ((MR_Box) (PragmaInfo_33));
          }
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Item_34));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
          }
        }
        else
        {
          MR_Word Pieces_35;
          MR_Word Spec_36;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_80;
          MR_Word Var_81;

          Var_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces1_22);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (ModuleName_10));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[102])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, Var_66);
          Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[101])), Var_64);
          Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
          {
            Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_external\'/9"));
            MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (Pieces_35));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
          }
        }
      }
      else
      {
        MR_Word Specs_37;
        MR_Word Var_83;
        MR_Word Var_84;

        Var_83 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeSymNameArity_23);
        Var_84 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_scalar_common_1[0]), MaybeMaybeBackend_25);
        Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_83, Var_84);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_37));
        }
      }
    }
    else
    {
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Pieces_101;
      MR_Word Spec_102;

      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (PragmaName_13));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[32])));
      }
      {
        Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Pieces_101, 1) = ((MR_Box) (Var_87));
      }
      Var_98 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
      {
        Spec_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_external\'/9"));
        MR_hl_field(MR_mktag(1), Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_102, 3) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(1), Spec_102, 4) = ((MR_Box) (Pieces_101));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Spec_102));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_99));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_external_options_4_p_0(
  MR_Word VarSet_5,
  MR_Word MaybeOptionsTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeMaybeBackend_8)
{
  {
    MR_bool succeeded;

    if ((MaybeOptionsTerm_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMaybeBackend_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[0]));
    else
    {
      MR_Word OptionsTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOptionsTerm_6, (MR_Integer) 0))));
      MR_Word Var_21;
      MR_String Var_22;
      MR_Word Var_23;

      succeeded = ((MR_tag((MR_Word) OptionsTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTerm_9, (MR_Integer) 0))));
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTerm_9, (MR_Integer) 1))));
        succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
            succeeded = (strcmp(Var_22, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *MaybeMaybeBackend_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_3[0]));
      else
      {
        MR_Word Backend_15;
        MR_Word OptionsTermHead_11;
        MR_Word OptionsTermTail_12;
        MR_Word Var_25;
        MR_String Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_36;
        MR_String Var_37;
        MR_Word Var_38;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_String Var_87;

        succeeded = ((MR_tag((MR_Word) OptionsTerm_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTerm_9, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTerm_9, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
            succeeded = (strcmp(Var_26, (MR_String) "[|]") == 0);
            if (succeeded)
            {
              succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                OptionsTermHead_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
                Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
                succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  OptionsTermTail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
                  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
                  succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) OptionsTermHead_11)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTermHead_11, (MR_Integer) 0))));
                      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTermHead_11, (MR_Integer) 1))));
                      succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_87 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0))));
                          if ((strcmp(Var_87, (MR_String) "low_level_backend") == 0))
                          {
                            Backend_15 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          if ((strcmp(Var_87, (MR_String) "high_level_backend") == 0))
                          {
                            Backend_15 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                          else
                            succeeded = MR_FALSE;
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) OptionsTermTail_12)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTermTail_12, (MR_Integer) 0))));
                              Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsTermTail_12, (MR_Integer) 1))));
                              succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
                                  succeeded = (strcmp(Var_37, (MR_String) "[]") == 0);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Backend_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMaybeBackend_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
          }
        }
        else
        {
          MR_String OptionsTermStr_18;
          MR_Word Pieces_19;
          MR_Word Spec_20;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_78;
          MR_Word Var_79;

          OptionsTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, OptionsTerm_9);
          Var_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (OptionsTermStr_18));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[95])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[94])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[93])));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[92])));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[91])));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[90])));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[89])));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[88])));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
          }
          Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, Var_41);
          Var_78 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OptionsTerm_9);
          {
            Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_external_options\'/4"));
            MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMaybeBackend_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_symname_arity_4_p_0(
  MR_Word VarSet_5,
  MR_Word PredTerm_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeSymNameArity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PredTerm_6)) == (MR_Integer) 0);
    MR_Word NameTerm_9;
    MR_Word ArityTerm_10;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredTerm_6, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredTerm_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        succeeded = (strcmp(Var_23, (MR_String) "/") == 0);
        if (succeeded)
        {
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArityTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSymName_12;
      MR_Word MaybeArity_14;
      MR_Integer ArityPrime_13;
      MR_Word SymName_17;
      MR_Integer Arity_18;

      parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, NameTerm_9, &MaybeSymName_12);
      succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_10, &ArityPrime_13);
      if (succeeded)
        {
          MaybeArity_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArity_14, 0) = ((MR_Box) (ArityPrime_13));
        }
      else
      {
        MR_Word ArityPieces_15;
        MR_Word AritySpec_16;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_45;
        MR_Word Var_46;

        Var_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
        Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[36])));
        ArityPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[87])), Var_31);
        Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_10);
        {
          AritySpec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AritySpec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_symname_arity\'/4"));
          MR_hl_field(MR_mktag(1), AritySpec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), AritySpec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), AritySpec_16, 3) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), AritySpec_16, 4) = ((MR_Box) (ArityPieces_15));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (AritySpec_16));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeArity_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeArity_14, 0) = ((MR_Box) (Var_46));
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeSymName_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymName_12, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeArity_14)) == (MR_Integer) 1);
        if (succeeded)
          Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_14, (MR_Integer) 0))));
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymNameArity_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Arity_18));
        }
      else
      {
        MR_Word Specs_19;
        MR_Word Var_48;
        MR_Word Var_49;

        Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeSymName_12);
        Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArity_14);
        Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_48, Var_49);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameArity_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
        }
      }
    }
    else
    {
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_63;
      MR_Word Var_64;

      Var_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_50, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[38])));
      Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTerm_6);
      {
        Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_symname_arity\'/4"));
        MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Spec_21, 4) = ((MR_Box) (Pieces_20));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameArity_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_pragma_source_file_3_p_0(
  MR_Word PragmaTerms_4,
  MR_Word Context_5,
  MR_Word * MaybeIOM_6)
{
  {
    MR_bool succeeded = (PragmaTerms_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SourceFileTerm_7;
    MR_Word Var_13;

    if (succeeded)
    {
      SourceFileTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_4, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_4, (MR_Integer) 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_String SourceFile_8;
      MR_Word Var_14;
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) SourceFileTerm_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SourceFileTerm_7, (MR_Integer) 0))));
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SourceFileTerm_7, (MR_Integer) 1))));
        succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
          if (succeeded)
            SourceFile_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_14, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word Marker_10;

        {
          Marker_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Marker_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Marker_10, 1) = ((MR_Box) (SourceFile_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Marker_10));
        }
      }
      else
      {
        MR_Word Spec_12;
        MR_Word Var_30;

        {
          Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_source_file\'/3"));
          MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Context_5));
          MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[26])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
        }
      }
    }
    else
    {
      MR_Word Var_46;
      MR_Word Spec_49;

      {
        Spec_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_pragma_source_file\'/3"));
        MR_hl_field(MR_mktag(1), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_49, 3) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), Spec_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[28])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Spec_49));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_impl_pragma_10_p_0(
  MR_Word ModuleName_11,
  MR_String PragmaName_12,
  MR_String NameKind_13,
  MR_Word MakePragma_14,
  MR_Word PragmaTerms_15,
  MR_Word ErrorTerm_16,
  MR_Word VarSet_17,
  MR_Word Context_18,
  MR_Integer SeqNum_19,
  MR_Word * MaybeIOM_20)
{
  if ((PragmaTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_32;
    MR_Word Spec_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_48;
    MR_Word Var_49;

    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (PragmaName_12));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[20])));
    }
    {
      Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
      MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_37));
    }
    Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_16);
    {
      Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_impl_pragma\'/10"));
      MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (Pieces_32));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
    }
  }
  else
  {
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_15, (MR_Integer) 1))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_15, (MR_Integer) 0))));

    if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeNameAndArity_22;

      parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(ModuleName_11, PragmaName_12, NameKind_13, Var_84, Var_84, VarSet_17, &MaybeNameAndArity_22);
      if (((MR_tag((MR_Word) MaybeNameAndArity_22)) == (MR_Integer) 0))
      {
        MR_Word Specs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeNameAndArity_22, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_28));
        }
      }
      else
      {
        MR_Word Name_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_22, (MR_Integer) 0))));
        MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_22, (MR_Integer) 1))));
        MR_Word Pragma_25;
        MR_Word ItemPragma_26;
        MR_Word Item_27;
        MR_Word Var_53;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakePragma_14, (MR_Integer) 1))));
        MR_Box conv1_Pragma_25;

        func_0(((MR_Box) (MakePragma_14)), ((MR_Box) (Name_23)), ((MR_Box) (Arity_24)), &conv1_Pragma_25);
        Pragma_25 = ((MR_Word) (conv1_Pragma_25));
        {
          ItemPragma_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemPragma_26, 0) = ((MR_Box) (Pragma_25));
          MR_hl_field(MR_mktag(0), ItemPragma_26, 1) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), ItemPragma_26, 2) = ((MR_Box) (SeqNum_19));
        }
        {
          Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Item_27, 1) = ((MR_Box) (ItemPragma_26));
        }
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Item_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
        }
      }
    }
    else
    {
      MR_Word Pieces_55;
      MR_Word Spec_56;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[20])));
      }
      {
        Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_59));
      }
      Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_16);
      {
        Spec_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_impl_pragma\'/10"));
        MR_hl_field(MR_mktag(1), Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_56, 3) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Spec_56, 4) = ((MR_Box) (Pieces_55));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_name_arity_decl_pragma_10_p_0(
  MR_Word ModuleName_11,
  MR_String PragmaName_12,
  MR_String NameKind_13,
  MR_Word MakePragma_14,
  MR_Word PragmaTerms_15,
  MR_Word ErrorTerm_16,
  MR_Word VarSet_17,
  MR_Word Context_18,
  MR_Integer SeqNum_19,
  MR_Word * MaybeIOM_20)
{
  if ((PragmaTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_32;
    MR_Word Spec_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_48;
    MR_Word Var_49;

    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (PragmaName_12));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[20])));
    }
    {
      Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
      MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_37));
    }
    Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_16);
    {
      Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_decl_pragma\'/10"));
      MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (Pieces_32));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
    }
  }
  else
  {
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_15, (MR_Integer) 1))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_15, (MR_Integer) 0))));

    if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeNameAndArity_22;

      parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(ModuleName_11, PragmaName_12, NameKind_13, Var_84, Var_84, VarSet_17, &MaybeNameAndArity_22);
      if (((MR_tag((MR_Word) MaybeNameAndArity_22)) == (MR_Integer) 0))
      {
        MR_Word Specs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeNameAndArity_22, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_28));
        }
      }
      else
      {
        MR_Word Name_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_22, (MR_Integer) 0))));
        MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNameAndArity_22, (MR_Integer) 1))));
        MR_Word Pragma_25;
        MR_Word ItemPragma_26;
        MR_Word Item_27;
        MR_Word Var_53;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakePragma_14, (MR_Integer) 1))));
        MR_Box conv1_Pragma_25;

        func_0(((MR_Box) (MakePragma_14)), ((MR_Box) (Name_23)), ((MR_Box) (Arity_24)), &conv1_Pragma_25);
        Pragma_25 = ((MR_Word) (conv1_Pragma_25));
        {
          ItemPragma_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemPragma_26, 0) = ((MR_Box) (Pragma_25));
          MR_hl_field(MR_mktag(0), ItemPragma_26, 1) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), ItemPragma_26, 2) = ((MR_Box) (SeqNum_19));
        }
        {
          Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Item_27, 1) = ((MR_Box) (ItemPragma_26));
        }
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Item_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
        }
      }
    }
    else
    {
      MR_Word Pieces_55;
      MR_Word Spec_56;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[20])));
      }
      {
        Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_59));
      }
      Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_16);
      {
        Spec_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_name_arity_decl_pragma\'/10"));
        MR_hl_field(MR_mktag(1), Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_56, 3) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Spec_56, 4) = ((MR_Box) (Pieces_55));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma__parse_simple_name_and_arity_7_p_0(
  MR_Word ModuleName_8,
  MR_String PragmaName_9,
  MR_String NameKind_10,
  MR_Word NameAndArityTerm_11,
  MR_Word ErrorTerm_12,
  MR_Word VarSet_13,
  MR_Word * MaybeNameAndArity_14)
{
  {
    MR_bool succeeded;
    MR_Word Name_15;
    MR_Integer Arity_16;

    succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, NameAndArityTerm_11, &Name_15, &Arity_16);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeNameAndArity_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Arity_16));
      }
    else
    {
      MR_String NameAndArityTermStr_17;
      MR_Word Pieces_18;
      MR_Word Spec_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_43;
      MR_Word Var_44;

      NameAndArityTermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_13, NameAndArityTerm_11);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (NameKind_10));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (PragmaName_9));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (NameAndArityTermStr_17));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[30])));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[84])));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[83])));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
      }
      {
        Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_scalar_common_1[82])));
        MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_22));
      }
      Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_12);
      {
        Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma.parse_simple_name_and_arity\'/7"));
        MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNameAndArity_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_pragma__report_unrecognized_pragma_1_f_0(
  MR_Word Context_3)
{
  {
    MR_Word Spec_4;

    {
      Spec_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_pragma.report_unrecognized_pragma\'/1"));
      MR_hl_field(MR_mktag(1), Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_4, 3) = ((MR_Box) (Context_3));
      MR_hl_field(MR_mktag(1), Spec_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_scalar_common_1[18])));
    }
    return Spec_4;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma____Unify____seen_none_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_pragma____Unify____seen_none_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_pragma____Compare____seen_none_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_pragma____Compare____seen_none_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_pragma__init(void)
{
}

void mercury__parse_tree__parse_pragma__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_pragma__parse_tree__parse_pragma__type_ctor_info_seen_none_0);
}

void mercury__parse_tree__parse_pragma__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_pragma__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_pragma.
