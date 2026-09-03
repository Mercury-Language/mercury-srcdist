/*
** Automatically generated from `parse_type_repn.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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
#include "uint.mih"
#include "uint8.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_pragma_foreign.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_defn.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_repn__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_only_nonconstant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_constant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_more_nonconstant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2158__1_2_p_0(
  MR_Word StringSpecs_11,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2145__1_2_p_0(
  MR_Word StringSpecs_11,
  MR_Word HeadVar__2_26);

static void MR_CALL 
parse_tree__parse_type_repn__parse_more_nonconstant_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeNonConstantRepn_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_sectag_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRemoteSectag_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_sectag_word_or_size_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSectagSize_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_sectag_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeLocalSectag_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_ptag_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybePtag_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_only_nonconstant_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeNonConstantRepn_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRemoteArgRepn_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_partial_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeRemoteArgRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_double_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeRemoteArgRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_full_or_none_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeRemoteArgRepn_10);

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
parse_tree__parse_type_repn__parse_local_arg_repns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_arg_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeLocalArgRepn_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_arg_repn_partial_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeLocalArgRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_fill_kind_size_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeFillKindSize_6);

static void MR_CALL 
parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(
  MR_String AtomStr_6,
  MR_Word TermContext_7,
  MR_Word ArgTerms_8,
  MR_Word FillKindSize_9,
  MR_Word * MaybeFillKindSize_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_constant_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeConstantRepn_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeUint_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_sectag_word_or_size_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSectagSize_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(
  MR_Unsigned Max_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeUint_8);

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
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_more_functors_5_p_0(
  MR_Word VarSet_6,
  MR_Word TermContext_7,
  MR_String AtomStr_8,
  MR_Word ArgTerms_9,
  MR_Word * MaybeDuRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functors_4_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDuFunctor_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_5_p_0(
  MR_Word VarSet_6,
  MR_Word TermContext_7,
  MR_String AtomStr_8,
  MR_Word ArgTerms_9,
  MR_Word * MaybeDuRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_repns_5_p_0(
  MR_Word TypeInfo_for_T_281,
  MR_Word DescPieces_6,
  MR_Word ParseRepn_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeCRepns_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_notag_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0(
  MR_Word DescPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeCJCsRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_foreign_repn_5_p_0(
  MR_Word DescPieces_6,
  MR_Integer Nth_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeMaybeRepnOrEnum_10);

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
parse_tree__parse_type_repn__parse_string_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_String Desc_8,
  MR_Word Term_9,
  MR_Word * MaybeFunctorName_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_repn_or_enum_4_p_0(
  MR_Word DescPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeCJCsRepnOrEnum_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_enum_foreign_repn_5_p_0(
  MR_Word DescPieces_6,
  MR_Integer Nth_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeMaybeRepnOrEnum_10);

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0(
  MR_Word DescPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeOoMStrings_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_strings_6_p_0(
  MR_Word DescPieces_1,
  MR_Integer Nth_2,
  MR_Word VarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_type_repn_7_p_0(
  MR_Word DescPieces_8,
  MR_Integer Nth_9,
  MR_Word VarSet_10,
  MR_String AtomStr_11,
  MR_Word ArgTerms_12,
  MR_Word TermContext_13,
  MR_Word * MaybeForeignTypeRepn_14);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_subtype_of_4_p_0(
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


static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[231][2];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[10][1];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_3[5][3];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_5[3][6];


struct parse_tree__parse_type_repn__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_6_0_s parse_tree__parse_type_repn_vector_common_6[16];

struct parse_tree__parse_type_repn__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_7_0_s parse_tree__parse_type_repn_vector_common_7[48];



static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[231][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_enum_foreign_repn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_foreign_type_repn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_c_repns_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_only_nonconstant_repn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_gen_du_functor_repn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_c_repns_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_constant_repn_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_c_repns_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_more_nonconstant_repn_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "item:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in second argument of a"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one argument."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the second argument of a"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should specify the type\'s representation."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Expected one of"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_direct_dummy"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_notag"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_eqv_to"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_subtype_of"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fits_in_n_bits"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_word_aligned_ptr"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "has_direct_arg_functors"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "du_repn"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "maybe_foreign_type_repn"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and a description of its representation."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have two arguments: the type,"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have zero arguments."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have one argument, a type."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have one argument, a symbol name and arity."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_dummy(...)"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "enum(...)"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "notag(...)"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du_only_functor(...)"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du_more_functors(...)"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have two arguments."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_dummy"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the second argument of"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have four arguments."))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "enum"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In second argument of"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[85])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "third argument of"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[85])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a list of function symbols."))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the third argument of"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the fourth argument of"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have three arguments."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "notag"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[72])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the third argument of"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du_only_functor"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "second argument of"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be a list of types."))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "fourth argument of"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be a list of function symbol representations."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant_functor"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[84])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant_functor(...)"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nonconstant_functor(...)"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant(...)"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have one argument."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of local cell argument representations."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be a nonempty list"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of remote cell argument representations."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "only_local_cell(...)"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "only_remote_cell(...)"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local_cell(...)"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "remote_cell(...)"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a ptag value"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the range [0 .. 7],"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local_sectag(Sectag, NumBits)"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "remote_no_sectag"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "remote_sectag(...)"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "lst_rest(...)"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "lst_part(...)"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have no argument."))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "rst_full"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "rst_part(...)"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local_partial(...)"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local_none"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "full(...)"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "double(...)"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "partial_first(...)"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "partial_shifted(...)"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none_shifted(...)"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none_nowhere"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_uint64"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[172])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_int64"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[175])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_float"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be one of"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected an integer that is"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at least -2, got"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a fill kind and size, got"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must not have any one arguments."))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected either"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "no_c_j_cs"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_j_cs(...)"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_j_cs"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[195])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected one of"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "no_foreign"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_enum(...)"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "foreign_type(...)"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the argument of"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the first argument of"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be a string, got"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the second argument of"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got an empty list."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected a nonempty list of strings,"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[207])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[209])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected a list of strings, got"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_repns_64_32"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[213])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have six arguments."))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[20])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_repns_all"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[216])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[218])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_repns_same"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[221])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_repns_same(...),"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_repns_64_32(...)"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c_repns_all(...)"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "element of the list:"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected a string, got"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected an integer,"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a nonnegative integer,"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected integer between 0 and"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[10][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "void")) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   5 */
  { ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_3[0])) },
  /* row   6 */
  { ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_3[1])) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_type_repn__parse_du_functor_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_type_repn__parse_du_functor_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_repn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_only_nonconstant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_repn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_constant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_repn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_more_nonconstant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};


static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_6_0_s parse_tree__parse_type_repn_vector_common_6[16] = {
  /* row   0 */   { (MR_String) "direct_dummy" },
  /* row   1 */   { (MR_String) "enum" },
  /* row   2 */   { (MR_String) "gen_du_more_functors" },
  /* row   3 */   { (MR_String) "gen_du_only_functor" },
  /* row   4 */   { (MR_String) "notag" },
  /* row   5 */   { (MR_String) "du_repn" },
  /* row   6 */   { (MR_String) "foreign_type_repn" },
  /* row   7 */   { (MR_String) "is_eqv_to" },
  /* row   8 */   { (MR_String) "is_subtype_of" },
  /* row   9 */   { (MR_String) "is_word_aligned_ptr" },
  /* row  10 */   { (MR_String) "double" },
  /* row  11 */   { (MR_String) "full" },
  /* row  12 */   { (MR_String) "none_nowhere" },
  /* row  13 */   { (MR_String) "none_shifted" },
  /* row  14 */   { (MR_String) "partial_first" },
  /* row  15 */   { (MR_String) "partial_shifted" },
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_7_0_s parse_tree__parse_type_repn_vector_common_7[48] = {
  /* row   0 */
  {
    (MR_String) "direct_dummy",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "enum",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "gen_du_more_functors",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "gen_du_only_functor",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "notag",
    (MR_Integer) 4
  },
  /* row   5 */
  {
    (MR_String) "du_repn",
    (MR_Integer) 0
  },
  /* row   6 */
  {
    (MR_String) "foreign_type_repn",
    (MR_Integer) 1
  },
  /* row   7 */
  {
    (MR_String) "is_eqv_to",
    (MR_Integer) 2
  },
  /* row   8 */
  {
    (MR_String) "is_subtype_of",
    (MR_Integer) 3
  },
  /* row   9 */
  {
    (MR_String) "is_word_aligned_ptr",
    (MR_Integer) 4
  },
  /* row  10 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  11 */
  {
    (MR_String) "int16",
    (MR_Integer) 2
  },
  /* row  12 */
  {
    (MR_String) "uint32",
    (MR_Integer) -1
  },
  /* row  13 */
  {
    (MR_String) "int32",
    (MR_Integer) 4
  },
  /* row  14 */
  {
    (MR_String) "uint16",
    (MR_Integer) -1
  },
  /* row  15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  17 */
  {
    (MR_String) "enum",
    (MR_Integer) 3
  },
  /* row  18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  21 */
  {
    (MR_String) "uint8",
    (MR_Integer) -1
  },
  /* row  22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  23 */
  {
    (MR_String) "char21",
    (MR_Integer) -1
  },
  /* row  24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  25 */
  {
    (MR_String) "int8",
    (MR_Integer) -1
  },
  /* row  26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  27 */
  {
    (MR_String) "int16",
    (MR_Integer) 2
  },
  /* row  28 */
  {
    (MR_String) "uint32",
    (MR_Integer) -1
  },
  /* row  29 */
  {
    (MR_String) "int32",
    (MR_Integer) 4
  },
  /* row  30 */
  {
    (MR_String) "uint16",
    (MR_Integer) -1
  },
  /* row  31 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  32 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  33 */
  {
    (MR_String) "enum",
    (MR_Integer) 3
  },
  /* row  34 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  35 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  36 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  37 */
  {
    (MR_String) "uint8",
    (MR_Integer) -1
  },
  /* row  38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  39 */
  {
    (MR_String) "char21",
    (MR_Integer) -1
  },
  /* row  40 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  41 */
  {
    (MR_String) "int8",
    (MR_Integer) -1
  },
  /* row  42 */
  {
    (MR_String) "double",
    (MR_Integer) 0
  },
  /* row  43 */
  {
    (MR_String) "full",
    (MR_Integer) 1
  },
  /* row  44 */
  {
    (MR_String) "none_nowhere",
    (MR_Integer) 2
  },
  /* row  45 */
  {
    (MR_String) "none_shifted",
    (MR_Integer) 3
  },
  /* row  46 */
  {
    (MR_String) "partial_first",
    (MR_Integer) 4
  },
  /* row  47 */
  {
    (MR_String) "partial_shifted",
    (MR_Integer) 4
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_repn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_repn__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_only_nonconstant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_only_nonconstant_repn_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_type_repn__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_constant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_constant_repn_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_type_repn__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_repn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item_type__type_ctor_info_more_nonconstant_repn_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_more_nonconstant_repn_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_type_repn__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2158__1_2_p_0(
  MR_Word StringSpecs_11,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[11]), ((MR_Box) (StringSpecs_11)), ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2145__1_2_p_0(
  MR_Word StringSpecs_11,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[11]), ((MR_Box) (StringSpecs_11)), ((MR_Box) (HeadVar__2_26)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_more_nonconstant_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeNonConstantRepn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_56;

  if (succeeded)
  {
    Var_56 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_56, 0))));
      if ((strcmp(AtomStr_7, (MR_String) "direct_arg") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "local_cell") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "remote_cell") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_7, (MR_String) "direct_arg") == 0))
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_160;
        MR_Word Pieces_266;
        MR_Word Spec_267;

        {
          Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_150, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Pieces_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_266, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_266, 1) = ((MR_Box) (Var_149));
        }
        {
          Spec_267 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_267, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
          MR_hl_field(0, Spec_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_267, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_267, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_267, 4) = ((MR_Box) (Pieces_266));
        }
        {
          Var_160 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_160, 0) = ((MR_Box) (Spec_267));
          MR_hl_field(0, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNonConstantRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_160));
        }
      }
      else
      {
        MR_Word Var_404 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
        MR_Word Var_405 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

        if ((Var_404 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybePtag_264;

          parse_tree__parse_type_repn__parse_ptag_3_p_0(VarSet_4, Var_405, &MaybePtag_264);
          if (((MR_tag((MR_Word) MaybePtag_264)) == (MR_Integer) 0))
            *MaybeNonConstantRepn_6 = (MR_Word) (MaybePtag_264);
          else
          {
            MR_Word NonConstantRepn_255;
            MR_Word Ptag_256 = ((MR_Word) ((MR_hl_field(1, MaybePtag_264, 0))));

            {
              NonConstantRepn_255 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, NonConstantRepn_255, 0) = ((MR_Box) (Ptag_256));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeNonConstantRepn_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NonConstantRepn_255));
            }
          }
        }
        else
        {
          MR_Word Var_298;
          MR_Word Var_299;
          MR_Word Var_304;
          MR_Word Pieces_306;
          MR_Word Spec_307;

          {
            Var_299 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_299, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_299, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_298 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_298, 0) = ((MR_Box) (Var_299));
            MR_hl_field(1, Var_298, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
          }
          {
            Pieces_306 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_306, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_306, 1) = ((MR_Box) (Var_298));
          }
          {
            Spec_307 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_307, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
            MR_hl_field(0, Spec_307, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_307, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_307, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_307, 4) = ((MR_Box) (Pieces_306));
          }
          {
            Var_304 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_304, 0) = ((MR_Box) (Spec_307));
            MR_hl_field(0, Var_304, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNonConstantRepn_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_304));
          }
        }
      }
    else
    if ((strcmp(AtomStr_7, (MR_String) "local_cell") == 0))
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_95;
        MR_Word Pieces_200;
        MR_Word Spec_201;

        {
          Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_85, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
        }
        {
          Pieces_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_200, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_200, 1) = ((MR_Box) (Var_84));
        }
        {
          Spec_201 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_201, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
          MR_hl_field(0, Spec_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_201, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_201, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_201, 4) = ((MR_Box) (Pieces_200));
        }
        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_95, 0) = ((MR_Box) (Spec_201));
          MR_hl_field(0, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNonConstantRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
        }
      }
      else
      {
        MR_Word Var_406 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
        MR_Word Var_407 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

        if ((Var_406 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_322;
          MR_Word Var_323;
          MR_Word Var_328;
          MR_Word Pieces_330;
          MR_Word Spec_331;

          {
            Var_323 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_323, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_323, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_322 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_322, 0) = ((MR_Box) (Var_323));
            MR_hl_field(1, Var_322, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
          }
          {
            Pieces_330 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_330, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_330, 1) = ((MR_Box) (Var_322));
          }
          {
            Spec_331 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_331, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
            MR_hl_field(0, Spec_331, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_331, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_331, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_331, 4) = ((MR_Box) (Pieces_330));
          }
          {
            Var_328 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_328, 0) = ((MR_Box) (Spec_331));
            MR_hl_field(0, Var_328, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNonConstantRepn_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_328));
          }
        }
        else
        {
          MR_Word Var_410 = ((MR_Word) ((MR_hl_field(1, Var_406, 1))));
          MR_Word Var_411 = ((MR_Word) ((MR_hl_field(1, Var_406, 0))));

          if ((Var_410 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeLocalSectag_12;
            MR_Word HeadElementTerm_14;
            MR_Word TailElementTerms_15;
            MR_Word ElementTerms_13;

            parse_tree__parse_type_repn__parse_local_sectag_3_p_0(VarSet_4, Var_407, &MaybeLocalSectag_12);
            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_411, &ElementTerms_13);
            if (succeeded)
            {
              succeeded = (ElementTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadElementTerm_14 = ((MR_Word) ((MR_hl_field(1, ElementTerms_13, 0))));
                TailElementTerms_15 = ((MR_Word) ((MR_hl_field(1, ElementTerms_13, 1))));
              }
            }
            if (succeeded)
            {
              MR_Word MaybeHeadLocalArg_16;
              MR_Word TailLocalArgs_17;
              MR_Word TailLocalArgSpecs_18;
              MR_Word LocalSectag_19;
              MR_Word HeadLocalArg_20;

              parse_tree__parse_type_repn__parse_local_arg_repn_3_p_0(VarSet_4, HeadElementTerm_14, &MaybeHeadLocalArg_16);
              parse_tree__parse_type_repn__parse_local_arg_repns_4_p_0(VarSet_4, TailElementTerms_15, &TailLocalArgs_17, &TailLocalArgSpecs_18);
              succeeded = (TailLocalArgSpecs_18 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeLocalSectag_12)) == (MR_Integer) 1);
                if (succeeded)
                {
                  LocalSectag_19 = ((MR_Word) ((MR_hl_field(1, MaybeLocalSectag_12, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeHeadLocalArg_16)) == (MR_Integer) 1);
                  if (succeeded)
                    HeadLocalArg_20 = ((MR_Word) ((MR_hl_field(1, MaybeHeadLocalArg_16, 0))));
                }
              }
              if (succeeded)
              {
                MR_Word OoMLocalArgs_21;
                MR_Word LocalRepn_22;
                MR_Word NonConstantRepn_23;

                {
                  OoMLocalArgs_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OoMLocalArgs_21, 0) = ((MR_Box) (HeadLocalArg_20));
                  MR_hl_field(0, OoMLocalArgs_21, 1) = ((MR_Box) (TailLocalArgs_17));
                }
                {
                  LocalRepn_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, LocalRepn_22, 0) = ((MR_Box) (LocalSectag_19));
                  MR_hl_field(0, LocalRepn_22, 1) = ((MR_Box) (OoMLocalArgs_21));
                }
                NonConstantRepn_23 = (MR_Word) ((MR_Word) (LocalRepn_22));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeNonConstantRepn_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NonConstantRepn_23));
                }
              }
              else
              {
                MR_Word Specs_24;
                MR_Word OoMSpecs_25;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;

                Var_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_cell_local_sectag_0), MaybeLocalSectag_12);
                Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_local_arg_repn_0), MaybeHeadLocalArg_16);
                Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_61, TailLocalArgSpecs_18);
                Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_59, Var_60);
                mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_24, &OoMSpecs_25);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeNonConstantRepn_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_25));
                }
              }
            }
            else
            {
              MR_Word Pieces_26;
              MR_Word Spec_27;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_78;
              MR_Word OoMSpecs_199;

              {
                Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_65, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[141])));
              }
              {
                Pieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[117])));
                MR_hl_field(1, Pieces_26, 1) = ((MR_Box) (Var_64));
              }
              {
                Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
                MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_27, 3) = ((MR_Box) (TermContext_9));
                MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_26));
              }
              Var_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_cell_local_sectag_0), MaybeLocalSectag_12);
              {
                OoMSpecs_199 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OoMSpecs_199, 0) = ((MR_Box) (Spec_27));
                MR_hl_field(0, OoMSpecs_199, 1) = ((MR_Box) (Var_78));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeNonConstantRepn_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_199));
              }
            }
          }
          else
          {
            MR_Word Var_334;
            MR_Word Var_335;
            MR_Word Var_340;
            MR_Word Pieces_342;
            MR_Word Spec_343;

            {
              Var_335 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_335, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_335, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_334, 0) = ((MR_Box) (Var_335));
              MR_hl_field(1, Var_334, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
            }
            {
              Pieces_342 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_342, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_342, 1) = ((MR_Box) (Var_334));
            }
            {
              Spec_343 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_343, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
              MR_hl_field(0, Spec_343, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_343, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_343, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_343, 4) = ((MR_Box) (Pieces_342));
            }
            {
              Var_340 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_340, 0) = ((MR_Box) (Spec_343));
              MR_hl_field(0, Var_340, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNonConstantRepn_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_340));
            }
          }
        }
      }
    else
    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_143;
      MR_Word Pieces_233;
      MR_Word Spec_234;

      {
        Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_133, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_132, 0) = ((MR_Box) (Var_133));
        MR_hl_field(1, Var_132, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
      }
      {
        Pieces_233 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_233, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_233, 1) = ((MR_Box) (Var_132));
      }
      {
        Spec_234 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_234, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
        MR_hl_field(0, Spec_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_234, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_234, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_234, 4) = ((MR_Box) (Pieces_233));
      }
      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_143, 0) = ((MR_Box) (Spec_234));
        MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNonConstantRepn_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
      }
    }
    else
    {
      MR_Word Var_408 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
      MR_Word Var_409 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

      if ((Var_408 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_358;
        MR_Word Var_359;
        MR_Word Var_364;
        MR_Word Pieces_366;
        MR_Word Spec_367;

        {
          Var_359 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_359, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_359, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_358 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_358, 0) = ((MR_Box) (Var_359));
          MR_hl_field(1, Var_358, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
        }
        {
          Pieces_366 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_366, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_366, 1) = ((MR_Box) (Var_358));
        }
        {
          Spec_367 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_367, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
          MR_hl_field(0, Spec_367, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_367, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_367, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_367, 4) = ((MR_Box) (Pieces_366));
        }
        {
          Var_364 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_364, 0) = ((MR_Box) (Spec_367));
          MR_hl_field(0, Var_364, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNonConstantRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_364));
        }
      }
      else
      {
        MR_Word Var_412 = ((MR_Word) ((MR_hl_field(1, Var_408, 1))));
        MR_Word Var_413 = ((MR_Word) ((MR_hl_field(1, Var_408, 0))));

        if ((Var_412 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_370;
          MR_Word Var_371;
          MR_Word Var_376;
          MR_Word Pieces_378;
          MR_Word Spec_379;

          {
            Var_371 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_371, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_371, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_370 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_370, 0) = ((MR_Box) (Var_371));
            MR_hl_field(1, Var_370, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
          }
          {
            Pieces_378 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_378, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_378, 1) = ((MR_Box) (Var_370));
          }
          {
            Spec_379 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_379, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
            MR_hl_field(0, Spec_379, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_379, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_379, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_379, 4) = ((MR_Box) (Pieces_378));
          }
          {
            Var_376 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_376, 0) = ((MR_Box) (Spec_379));
            MR_hl_field(0, Var_376, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNonConstantRepn_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_376));
          }
        }
        else
        {
          MR_Word Var_414 = ((MR_Word) ((MR_hl_field(1, Var_412, 1))));
          MR_Word Var_415 = ((MR_Word) ((MR_hl_field(1, Var_412, 0))));

          if ((Var_414 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybePtag_34;
            MR_Word MaybeRemoteSectag_35;
            MR_Word HeadElementTerm_216;
            MR_Word TailElementTerms_217;
            MR_Word ElementTerms_202;

            parse_tree__parse_type_repn__parse_ptag_3_p_0(VarSet_4, Var_409, &MaybePtag_34);
            parse_tree__parse_type_repn__parse_remote_sectag_3_p_0(VarSet_4, Var_413, &MaybeRemoteSectag_35);
            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_415, &ElementTerms_202);
            if (succeeded)
            {
              succeeded = (ElementTerms_202 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadElementTerm_216 = ((MR_Word) ((MR_hl_field(1, ElementTerms_202, 0))));
                TailElementTerms_217 = ((MR_Word) ((MR_hl_field(1, ElementTerms_202, 1))));
              }
            }
            if (succeeded)
            {
              MR_Word MaybeHeadRemoteArg_36;
              MR_Word TailRemoteArgs_37;
              MR_Word TailRemoteArgSpecs_38;
              MR_Word Ptag_39;
              MR_Word RemoteSectag_40;
              MR_Word HeadRemoteArg_41;

              parse_tree__parse_type_repn__parse_remote_arg_repn_3_p_0(VarSet_4, HeadElementTerm_216, &MaybeHeadRemoteArg_36);
              parse_tree__parse_type_repn__parse_remote_arg_repns_4_p_0(VarSet_4, TailElementTerms_217, &TailRemoteArgs_37, &TailRemoteArgSpecs_38);
              succeeded = (TailRemoteArgSpecs_38 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybePtag_34)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Ptag_39 = ((MR_Word) ((MR_hl_field(1, MaybePtag_34, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeRemoteSectag_35)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RemoteSectag_40 = ((MR_Word) ((MR_hl_field(1, MaybeRemoteSectag_35, 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeHeadRemoteArg_36)) == (MR_Integer) 1);
                    if (succeeded)
                      HeadRemoteArg_41 = ((MR_Word) ((MR_hl_field(1, MaybeHeadRemoteArg_36, 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word OoMRemoteArgs_42;
                MR_Word RemoteRepn_43;
                MR_Word NonConstantRepn_203;

                {
                  OoMRemoteArgs_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OoMRemoteArgs_42, 0) = ((MR_Box) (HeadRemoteArg_41));
                  MR_hl_field(0, OoMRemoteArgs_42, 1) = ((MR_Box) (TailRemoteArgs_37));
                }
                {
                  RemoteRepn_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, RemoteRepn_43, 0) = ((MR_Box) (Ptag_39));
                  MR_hl_field(0, RemoteRepn_43, 1) = ((MR_Box) (RemoteSectag_40));
                  MR_hl_field(0, RemoteRepn_43, 2) = ((MR_Box) (OoMRemoteArgs_42));
                }
                NonConstantRepn_203 = (MR_Word) (MR_mkword(1, (MR_Word) (RemoteRepn_43)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeNonConstantRepn_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NonConstantRepn_203));
                }
              }
              else
              {
                MR_Word Var_100;
                MR_Word Var_101;
                MR_Word Var_102;
                MR_Word Var_103;
                MR_Word Var_104;
                MR_Word Specs_204;
                MR_Word OoMSpecs_205;

                Var_100 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), MaybePtag_34);
                Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_cell_remote_sectag_0), MaybeRemoteSectag_35);
                Var_104 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_remote_arg_repn_0), MaybeHeadRemoteArg_36);
                Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_104, TailRemoteArgSpecs_38);
                Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_102, Var_103);
                Specs_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_100, Var_101);
                mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_204, &OoMSpecs_205);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeNonConstantRepn_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_205));
                }
              }
            }
            else
            {
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word OoMSpecs_212;
              MR_Word Pieces_213;
              MR_Word Spec_214;

              {
                Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_108, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
                MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[144])));
              }
              {
                Pieces_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_213, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[117])));
                MR_hl_field(1, Pieces_213, 1) = ((MR_Box) (Var_107));
              }
              {
                Spec_214 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_214, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
                MR_hl_field(0, Spec_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_214, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_214, 3) = ((MR_Box) (TermContext_9));
                MR_hl_field(0, Spec_214, 4) = ((MR_Box) (Pieces_213));
              }
              Var_122 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), MaybePtag_34);
              Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_cell_remote_sectag_0), MaybeRemoteSectag_35);
              Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_122, Var_123);
              {
                OoMSpecs_212 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OoMSpecs_212, 0) = ((MR_Box) (Spec_214));
                MR_hl_field(0, OoMSpecs_212, 1) = ((MR_Box) (Var_121));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeNonConstantRepn_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_212));
              }
            }
          }
          else
          {
            MR_Word Var_382;
            MR_Word Var_383;
            MR_Word Var_388;
            MR_Word Pieces_390;
            MR_Word Spec_391;

            {
              Var_383 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_383, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_383, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_382 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_382, 0) = ((MR_Box) (Var_383));
              MR_hl_field(1, Var_382, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
            }
            {
              Pieces_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_390, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_390, 1) = ((MR_Box) (Var_382));
            }
            {
              Spec_391 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_391, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
              MR_hl_field(0, Spec_391, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_391, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_391, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_391, 4) = ((MR_Box) (Pieces_390));
            }
            {
              Var_388 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_388, 0) = ((MR_Box) (Spec_391));
              MR_hl_field(0, Var_388, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNonConstantRepn_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_388));
            }
          }
        }
      }
    }
  else
  {
    MR_String TermStr_55;
    MR_Word Var_164;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_170;
    MR_Word Var_173;
    MR_Word Var_176;
    MR_Word Var_179;
    MR_Word Var_182;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Pieces_282;
    MR_Word Spec_283;

    TermStr_55 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    Var_168 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30]));
    {
      Var_186 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_186, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_186, 1) = ((MR_Box) (TermStr_55));
    }
    {
      Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_185, 0) = ((MR_Box) (Var_186));
      MR_hl_field(1, Var_185, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_182, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_185));
    }
    {
      Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_168));
      MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_182));
    }
    {
      Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_176, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[149])));
      MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_179));
    }
    {
      Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_173, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_176));
    }
    {
      Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_170, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[148])));
      MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_173));
    }
    {
      Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_167, 0) = ((MR_Box) (Var_168));
      MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
    }
    {
      Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_164, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[147])));
      MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_167));
    }
    {
      Pieces_282 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_282, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_282, 1) = ((MR_Box) (Var_164));
    }
    Var_196 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_283 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_283, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_more_nonconstant_repn\'/3"));
      MR_hl_field(0, Spec_283, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_283, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_283, 3) = ((MR_Box) (Var_196));
      MR_hl_field(0, Spec_283, 4) = ((MR_Box) (Pieces_282));
    }
    {
      Var_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_197, 0) = ((MR_Box) (Spec_283));
      MR_hl_field(0, Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeNonConstantRepn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_197));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_sectag_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRemoteSectag_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_29;

  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_29, 0))));
      if ((strcmp(AtomStr_7, (MR_String) "remote_sectag") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "remote_no_sectag") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_7, (MR_String) "remote_sectag") == 0))
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_66;
        MR_Word Pieces_99;
        MR_Word Spec_100;

        {
          Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_56, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
        }
        {
          Pieces_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_99, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_99, 1) = ((MR_Box) (Var_55));
        }
        {
          Spec_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag\'/3"));
          MR_hl_field(0, Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_100, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_100, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_100, 4) = ((MR_Box) (Pieces_99));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (Spec_100));
          MR_hl_field(0, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRemoteSectag_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
        }
      }
      else
      {
        MR_Word Var_147 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
        MR_Word Var_148 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

        if ((Var_147 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_119;
          MR_Word Pieces_121;
          MR_Word Spec_122;

          {
            Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_114, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
            MR_hl_field(1, Var_113, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
          }
          {
            Pieces_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_121, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_121, 1) = ((MR_Box) (Var_113));
          }
          {
            Spec_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag\'/3"));
            MR_hl_field(0, Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_122, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_122, 4) = ((MR_Box) (Pieces_121));
          }
          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_119, 0) = ((MR_Box) (Spec_122));
            MR_hl_field(0, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRemoteSectag_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_119));
          }
        }
        else
        {
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(1, Var_147, 1))));
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(1, Var_147, 0))));

          if ((Var_149 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeSectag_16;
            MR_Word MaybeSectagWordOrSize_17;
            MR_Unsigned Sectag_18;
            MR_Word SectagWordOrSize_19;

            parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_4, Var_148, &MaybeSectag_16);
            parse_tree__parse_type_repn__parse_remote_sectag_word_or_size_3_p_0(VarSet_4, Var_150, &MaybeSectagWordOrSize_17);
            succeeded = ((MR_tag((MR_Word) MaybeSectag_16)) == (MR_Integer) 1);
            if (succeeded)
            {
              Sectag_18 = ((MR_Unsigned) ((MR_hl_field(1, MaybeSectag_16, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeSectagWordOrSize_17)) == (MR_Integer) 1);
              if (succeeded)
                SectagWordOrSize_19 = ((MR_Word) ((MR_hl_field(1, MaybeSectagWordOrSize_17, 0))));
            }
            if (succeeded)
            {
              MR_Word RemoteSectag_20;

              {
                RemoteSectag_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RemoteSectag_20, 0) = ((MR_Box) (Sectag_18));
                MR_hl_field(1, RemoteSectag_20, 1) = ((MR_Box) (SectagWordOrSize_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeRemoteSectag_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (RemoteSectag_20));
              }
            }
            else
            {
              MR_Word Specs_21;
              MR_Word OoMSpecs_22;
              MR_Word Var_48;
              MR_Word Var_49;

              Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_16);
              Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_rsectag_word_or_size_0), MaybeSectagWordOrSize_17);
              Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_48, Var_49);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_21, &OoMSpecs_22);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeRemoteSectag_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_22));
              }
            }
          }
          else
          {
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_131;
            MR_Word Pieces_133;
            MR_Word Spec_134;

            {
              Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_126, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
              MR_hl_field(1, Var_125, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
            }
            {
              Pieces_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_133, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_133, 1) = ((MR_Box) (Var_125));
            }
            {
              Spec_134 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_134, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag\'/3"));
              MR_hl_field(0, Spec_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_134, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_134, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_134, 4) = ((MR_Box) (Pieces_133));
            }
            {
              Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_131, 0) = ((MR_Box) (Spec_134));
              MR_hl_field(0, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRemoteSectag_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
            }
          }
        }
      }
    else
    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeRemoteSectag_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[1]));
    else
    {
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_44;

      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[154])));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_33));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag\'/3"));
        MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_13, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
      }
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRemoteSectag_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
      }
    }
  else
  {
    MR_String TermStr_28;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Pieces_105;
    MR_Word Spec_106;

    TermStr_28 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_86, 1) = ((MR_Box) (TermStr_28));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[156])));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[155])));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Pieces_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_105, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_105, 1) = ((MR_Box) (Var_70));
    }
    Var_96 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag\'/3"));
      MR_hl_field(0, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_106, 3) = ((MR_Box) (Var_96));
      MR_hl_field(0, Spec_106, 4) = ((MR_Box) (Pieces_105));
    }
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_97, 0) = ((MR_Box) (Spec_106));
      MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRemoteSectag_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_sectag_word_or_size_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSectagSize_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_23, 0))));
      if ((strcmp(AtomStr_7, (MR_String) "rst_full") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "rst_part") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_7, (MR_String) "rst_full") == 0))
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeSectagSize_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[2]));
      else
      {
        MR_Word Pieces_12;
        MR_Word Spec_13;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_38;

        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[160])));
        }
        {
          Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_27));
        }
        {
          Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag_word_or_size\'/3"));
          MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_13, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (Spec_13));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSectagSize_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
        }
      }
    else
    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_57;
      MR_Word Pieces_90;
      MR_Word Spec_91;

      {
        Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_47, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
      }
      {
        Pieces_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_90, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_90, 1) = ((MR_Box) (Var_46));
      }
      {
        Spec_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_91, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag_word_or_size\'/3"));
        MR_hl_field(0, Spec_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_91, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_91, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_91, 4) = ((MR_Box) (Pieces_90));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (Spec_91));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSectagSize_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
      }
    }
    else
    {
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

      if ((Var_123 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeSectagNumBitsUint_15;

        parse_tree__parse_type_repn__parse_uint_in_range_4_p_0((MR_Unsigned) 63U, VarSet_4, Var_124, &MaybeSectagNumBitsUint_15);
        if (((MR_tag((MR_Word) MaybeSectagNumBitsUint_15)) == (MR_Integer) 0))
          *MaybeSectagSize_6 = (MR_Word) (MaybeSectagNumBitsUint_15);
        else
        {
          MR_Unsigned SectagNumBitsUint_16 = ((MR_Unsigned) ((MR_hl_field(1, MaybeSectagNumBitsUint_15, 0))));
          uint8_t SectagNumBits_17;
          MR_Word Var_42;

          SectagNumBits_17 = mercury__uint8__det_from_uint_1_f_0(SectagNumBitsUint_16);
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_Word) (SectagNumBits_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSectagSize_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
          }
        }
      }
      else
      {
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_107;
        MR_Word Pieces_109;
        MR_Word Spec_110;

        {
          Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_102, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Pieces_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_109, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_109, 1) = ((MR_Box) (Var_101));
        }
        {
          Spec_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_110, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag_word_or_size\'/3"));
          MR_hl_field(0, Spec_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_110, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_110, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_110, 4) = ((MR_Box) (Pieces_109));
        }
        {
          Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_107, 0) = ((MR_Box) (Spec_110));
          MR_hl_field(0, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSectagSize_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
        }
      }
    }
  else
  {
    MR_String TermStr_22;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Pieces_96;
    MR_Word Spec_97;

    TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (TermStr_22));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[162])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[161])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Pieces_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_96, 1) = ((MR_Box) (Var_61));
    }
    Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_97, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_sectag_word_or_size\'/3"));
      MR_hl_field(0, Spec_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_97, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_97, 3) = ((MR_Box) (Var_87));
      MR_hl_field(0, Spec_97, 4) = ((MR_Box) (Pieces_96));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Spec_97));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSectagSize_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_sectag_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeLocalSectag_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word ArgTerm1_10;
  MR_Word ArgTerm2_11;
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_23, 0))));
      succeeded = (strcmp(AtomStr_7, (MR_String) "local_sectag") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgTerm1_10 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgTerm2_11 = ((MR_Word) ((MR_hl_field(1, Var_24, 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
            succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeSectag_12;
    MR_Word MaybeSectagNumBitsUint_13;
    MR_Unsigned Sectag_14;
    MR_Unsigned SectagNumBitsUint_15;

    parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_4, ArgTerm1_10, &MaybeSectag_12);
    parse_tree__parse_type_repn__parse_uint_in_range_4_p_0((MR_Unsigned) 63U, VarSet_4, ArgTerm2_11, &MaybeSectagNumBitsUint_13);
    succeeded = ((MR_tag((MR_Word) MaybeSectag_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      Sectag_14 = ((MR_Unsigned) ((MR_hl_field(1, MaybeSectag_12, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSectagNumBitsUint_13)) == (MR_Integer) 1);
      if (succeeded)
        SectagNumBitsUint_15 = ((MR_Unsigned) ((MR_hl_field(1, MaybeSectagNumBitsUint_13, 0))));
    }
    if (succeeded)
    {
      uint8_t SectagNumBits_16;
      MR_Word LocalSectag_17;

      SectagNumBits_16 = mercury__uint8__det_from_uint_1_f_0(SectagNumBitsUint_15);
      {
        LocalSectag_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LocalSectag_17, 0) = ((MR_Box) (Sectag_14));
        MR_hl_field(0, LocalSectag_17, 1) = ((MR_Box) (MR_Word) (SectagNumBits_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeLocalSectag_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (LocalSectag_17));
      }
    }
    else
    {
      MR_Word Specs_18;
      MR_Word OoMSpecs_19;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_27 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_12);
      Var_28 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectagNumBitsUint_13);
      Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_27, Var_28);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_18, &OoMSpecs_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLocalSectag_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_19));
      }
    }
  }
  else
  {
    MR_String TermStr_20;
    MR_Word Pieces_21;
    MR_Word Spec_22;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_51;
    MR_Word Var_52;

    TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (TermStr_20));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[152])));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Pieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[133])));
      MR_hl_field(1, Pieces_21, 1) = ((MR_Box) (Var_31));
    }
    Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_sectag\'/3"));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Var_51));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
    }
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeLocalSectag_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_ptag_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybePtag_6)
{
  MR_bool succeeded;
  MR_Word MaybeUint_7;

  parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_4, Term_5, &MaybeUint_7);
  if (((MR_tag((MR_Word) MaybeUint_7)) == (MR_Integer) 0))
    *MaybePtag_6 = (MR_Word) (MaybeUint_7);
  else
  {
    MR_Unsigned Uint_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeUint_7, 0))));

    succeeded = (Uint_8 <= (MR_Unsigned) 7U);
    if (succeeded)
    {
      uint8_t Uint8_9;
      MR_Word Ptag_10;
      MR_Integer Var_16;

      Var_16 = mercury__uint__cast_to_int_1_f_0(Uint_8);
      Uint8_9 = mercury__uint8__det_from_int_1_f_0(Var_16);
      Ptag_10 = (MR_Word) (Uint8_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePtag_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Ptag_10));
      }
    }
    else
    {
      MR_String TermStr_11;
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_19;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_36;
      MR_Word Var_37;

      TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_26, 1) = ((MR_Box) (TermStr_11));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[151])));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[150])));
        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_19));
      }
      Var_36 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_ptag\'/3"));
        MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_36));
        MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePtag_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_only_nonconstant_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeNonConstantRepn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_39;

  if (succeeded)
  {
    Var_39 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_39, 0))));
      if ((strcmp(AtomStr_7, (MR_String) "only_local_cell") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "only_remote_cell") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_7, (MR_String) "only_local_cell") == 0))
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_74;
        MR_Word Pieces_143;
        MR_Word Spec_144;

        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Pieces_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_143, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_143, 1) = ((MR_Box) (Var_63));
        }
        {
          Spec_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_144, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
          MR_hl_field(0, Spec_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_144, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_144, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_144, 4) = ((MR_Box) (Pieces_143));
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (Spec_144));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNonConstantRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
        }
      }
      else
      {
        MR_Word Var_246 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
        MR_Word Var_247 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

        if ((Var_246 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word HeadElementTerm_12;
          MR_Word TailElementTerms_13;
          MR_Word ElementTerms_11;

          succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_247, &ElementTerms_11);
          if (succeeded)
          {
            succeeded = (ElementTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadElementTerm_12 = ((MR_Word) ((MR_hl_field(1, ElementTerms_11, 0))));
              TailElementTerms_13 = ((MR_Word) ((MR_hl_field(1, ElementTerms_11, 1))));
            }
          }
          if (succeeded)
          {
            MR_Word MaybeHeadLocalArg_14;
            MR_Word TailLocalArgs_15;
            MR_Word TailLocalArgSpecs_16;
            MR_Word HeadLocalArg_17;

            parse_tree__parse_type_repn__parse_local_arg_repn_3_p_0(VarSet_4, HeadElementTerm_12, &MaybeHeadLocalArg_14);
            parse_tree__parse_type_repn__parse_local_arg_repns_4_p_0(VarSet_4, TailElementTerms_13, &TailLocalArgs_15, &TailLocalArgSpecs_16);
            succeeded = (TailLocalArgSpecs_16 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeHeadLocalArg_14)) == (MR_Integer) 1);
              if (succeeded)
                HeadLocalArg_17 = ((MR_Word) ((MR_hl_field(1, MaybeHeadLocalArg_14, 0))));
            }
            if (succeeded)
            {
              MR_Word OoMLocalArgs_18;
              MR_Word LocalRepn_19;
              MR_Word NonConstantRepn_20;

              {
                OoMLocalArgs_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OoMLocalArgs_18, 0) = ((MR_Box) (HeadLocalArg_17));
                MR_hl_field(0, OoMLocalArgs_18, 1) = ((MR_Box) (TailLocalArgs_15));
              }
              LocalRepn_19 = (MR_Word) (OoMLocalArgs_18);
              {
                NonConstantRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NonConstantRepn_20, 0) = ((MR_Box) (LocalRepn_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeNonConstantRepn_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NonConstantRepn_20));
              }
            }
            else
            {
              MR_Word Specs_21;
              MR_Word OoMSpecs_22;
              MR_Word Var_41;

              Var_41 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_local_arg_repn_0), MaybeHeadLocalArg_14);
              Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_41, TailLocalArgSpecs_16);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_21, &OoMSpecs_22);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeNonConstantRepn_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_22));
              }
            }
          }
          else
          {
            MR_Word Pieces_23;
            MR_Word Spec_24;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_58;

            {
              Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_45, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[141])));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[137])));
              MR_hl_field(1, Pieces_23, 1) = ((MR_Box) (Var_44));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
              MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_24, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
            }
            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_58, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(0, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNonConstantRepn_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
            }
          }
        }
        else
        {
          MR_Word Var_200;
          MR_Word Var_201;
          MR_Word Var_206;
          MR_Word Pieces_208;
          MR_Word Spec_209;

          {
            Var_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_201, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_201, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_200, 0) = ((MR_Box) (Var_201));
            MR_hl_field(1, Var_200, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
          }
          {
            Pieces_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_208, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_208, 1) = ((MR_Box) (Var_200));
          }
          {
            Spec_209 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_209, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
            MR_hl_field(0, Spec_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_209, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_209, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_209, 4) = ((MR_Box) (Pieces_208));
          }
          {
            Var_206 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_206, 0) = ((MR_Box) (Spec_209));
            MR_hl_field(0, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNonConstantRepn_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_206));
          }
        }
      }
    else
    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_110;
      MR_Word Pieces_173;
      MR_Word Spec_174;

      {
        Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_100, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
      }
      {
        Pieces_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_173, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_173, 1) = ((MR_Box) (Var_99));
      }
      {
        Spec_174 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_174, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
        MR_hl_field(0, Spec_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_174, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_174, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_174, 4) = ((MR_Box) (Pieces_173));
      }
      {
        Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_110, 0) = ((MR_Box) (Spec_174));
        MR_hl_field(0, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNonConstantRepn_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_110));
      }
    }
    else
    {
      MR_Word Var_248 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
      MR_Word Var_249 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

      if ((Var_248 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HeadElementTerm_158;
        MR_Word TailElementTerms_159;
        MR_Word ElementTerms_145;

        succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_249, &ElementTerms_145);
        if (succeeded)
        {
          succeeded = (ElementTerms_145 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadElementTerm_158 = ((MR_Word) ((MR_hl_field(1, ElementTerms_145, 0))));
            TailElementTerms_159 = ((MR_Word) ((MR_hl_field(1, ElementTerms_145, 1))));
          }
        }
        if (succeeded)
        {
          MR_Word MaybeHeadRemoteArg_29;
          MR_Word TailRemoteArgs_30;
          MR_Word TailRemoteArgSpecs_31;
          MR_Word HeadRemoteArg_32;

          parse_tree__parse_type_repn__parse_remote_arg_repn_3_p_0(VarSet_4, HeadElementTerm_158, &MaybeHeadRemoteArg_29);
          parse_tree__parse_type_repn__parse_remote_arg_repns_4_p_0(VarSet_4, TailElementTerms_159, &TailRemoteArgs_30, &TailRemoteArgSpecs_31);
          succeeded = (TailRemoteArgSpecs_31 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeHeadRemoteArg_29)) == (MR_Integer) 1);
            if (succeeded)
              HeadRemoteArg_32 = ((MR_Word) ((MR_hl_field(1, MaybeHeadRemoteArg_29, 0))));
          }
          if (succeeded)
          {
            MR_Word OoMRemoteArgs_33;
            MR_Word RemoteRepn_34;
            MR_Word NonConstantRepn_146;

            {
              OoMRemoteArgs_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMRemoteArgs_33, 0) = ((MR_Box) (HeadRemoteArg_32));
              MR_hl_field(0, OoMRemoteArgs_33, 1) = ((MR_Box) (TailRemoteArgs_30));
            }
            RemoteRepn_34 = (MR_Word) (OoMRemoteArgs_33);
            {
              NonConstantRepn_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NonConstantRepn_146, 0) = ((MR_Box) (RemoteRepn_34));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeNonConstantRepn_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NonConstantRepn_146));
            }
          }
          else
          {
            MR_Word Var_77;
            MR_Word Specs_147;
            MR_Word OoMSpecs_148;

            Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_remote_arg_repn_0), MaybeHeadRemoteArg_29);
            Specs_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_77, TailRemoteArgSpecs_31);
            mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_147, &OoMSpecs_148);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNonConstantRepn_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_148));
            }
          }
        }
        else
        {
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_94;
          MR_Word Pieces_155;
          MR_Word Spec_156;

          {
            Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_81, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[144])));
          }
          {
            Pieces_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_155, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[137])));
            MR_hl_field(1, Pieces_155, 1) = ((MR_Box) (Var_80));
          }
          {
            Spec_156 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_156, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
            MR_hl_field(0, Spec_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_156, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_156, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_156, 4) = ((MR_Box) (Pieces_155));
          }
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_94, 0) = ((MR_Box) (Spec_156));
            MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNonConstantRepn_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
          }
        }
      }
      else
      {
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_230;
        MR_Word Pieces_232;
        MR_Word Spec_233;

        {
          Var_225 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_225, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_225, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_224, 0) = ((MR_Box) (Var_225));
          MR_hl_field(1, Var_224, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Pieces_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_232, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_232, 1) = ((MR_Box) (Var_224));
        }
        {
          Spec_233 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_233, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
          MR_hl_field(0, Spec_233, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_233, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_233, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_233, 4) = ((MR_Box) (Pieces_232));
        }
        {
          Var_230 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_230, 0) = ((MR_Box) (Spec_233));
          MR_hl_field(0, Var_230, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNonConstantRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_230));
        }
      }
    }
  else
  {
    MR_String TermStr_38;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_120;
    MR_Word Var_123;
    MR_Word Var_126;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Pieces_191;
    MR_Word Spec_192;

    TermStr_38 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_130, 1) = ((MR_Box) (TermStr_38));
    }
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[146])));
      MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[145])));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
    }
    {
      Pieces_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_191, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_191, 1) = ((MR_Box) (Var_114));
    }
    Var_140 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_192 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_192, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_only_nonconstant_repn\'/3"));
      MR_hl_field(0, Spec_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_192, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_192, 3) = ((MR_Box) (Var_140));
      MR_hl_field(0, Spec_192, 4) = ((MR_Box) (Pieces_191));
    }
    {
      Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_141, 0) = ((MR_Box) (Spec_192));
      MR_hl_field(0, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeNonConstantRepn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_141));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repns_4_p_0(
  MR_Word HeadVar__1_1,
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
    MR_Word HeadTerm_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailTerms_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailRemoteArgRepns_11;
    MR_Word TailSpecs_12;
    MR_Word MaybeHeadRemoteArgRepn_13;

    parse_tree__parse_type_repn__parse_remote_arg_repns_4_p_0(HeadVar__1_1, TailTerms_8, &TailRemoteArgRepns_11, &TailSpecs_12);
    parse_tree__parse_type_repn__parse_remote_arg_repn_3_p_0(HeadVar__1_1, HeadTerm_7, &MaybeHeadRemoteArgRepn_13);
    if (((MR_tag((MR_Word) MaybeHeadRemoteArgRepn_13)) == (MR_Integer) 0))
    {
      MR_Word OoMHeadSpecs_15 = ((MR_Word) ((MR_hl_field(0, MaybeHeadRemoteArgRepn_13, 0))));
      MR_Word Var_16;

      *HeadVar__3_3 = TailRemoteArgRepns_11;
      Var_16 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMHeadSpecs_15);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_16, TailSpecs_12);
    }
    else
    {
      MR_Word HeadRemoteArgRepn_14 = ((MR_Word) ((MR_hl_field(1, MaybeHeadRemoteArgRepn_13, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadRemoteArgRepn_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailRemoteArgRepns_11));
      }
      *HeadVar__4_4 = TailSpecs_12;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRemoteArgRepn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_15;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_15, 0))));
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 5;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(AtomStr_7, ((&parse_tree__parse_type_repn_vector_common_6[10 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0);
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
      result_7 = MR_strcmp(AtomStr_7, ((&parse_tree__parse_type_repn_vector_common_7[42 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0);
      if ((result_7 == (MR_Integer) 0))
      {
        switch (((&parse_tree__parse_type_repn_vector_common_7[42 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // case "double"
              ;
              parse_tree__parse_type_repn__parse_remote_arg_repn_double_5_p_0(VarSet_4, AtomStr_7, ArgTerms_8, TermContext_9, MaybeRemoteArgRepn_6);
            }
            break;
          case (MR_Integer) 1:
            {
              // case "full"
              ;
              parse_tree__parse_type_repn__parse_remote_arg_repn_full_or_none_5_p_0(VarSet_4, AtomStr_7, ArgTerms_8, TermContext_9, MaybeRemoteArgRepn_6);
            }
            break;
          case (MR_Integer) 2:
            {
              // case "none_nowhere"
              ;
              if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
                *MaybeRemoteArgRepn_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[4]));
              else
              {
                MR_Word Pieces_12;
                MR_Word Spec_13;
                MR_Word Var_19;
                MR_Word Var_20;
                MR_Word Var_30;

                {
                  Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_20, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[154])));
                }
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_19));
                }
                {
                  Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn\'/3"));
                  MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_13, 3) = ((MR_Box) (TermContext_9));
                  MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
                }
                {
                  Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_30, 0) = ((MR_Box) (Spec_13));
                  MR_hl_field(0, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeRemoteArgRepn_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              // case "none_shifted"
              ;
              parse_tree__parse_type_repn__parse_remote_arg_repn_full_or_none_5_p_0(VarSet_4, AtomStr_7, ArgTerms_8, TermContext_9, MaybeRemoteArgRepn_6);
            }
            break;
          case (MR_Integer) 4:
            {
              // case "partial_first", "partial_shifted"
              ;
              parse_tree__parse_type_repn__parse_remote_arg_repn_partial_5_p_0(VarSet_4, AtomStr_7, ArgTerms_8, TermContext_9, MaybeRemoteArgRepn_6);
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
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Pieces_87;
    MR_Word Spec_88;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    Var_38 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30]));
    {
      Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_74, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[170])));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[169])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[168])));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[167])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[166])));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[165])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Pieces_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_87, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_87, 1) = ((MR_Box) (Var_34));
    }
    Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_88, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn\'/3"));
      MR_hl_field(0, Spec_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_88, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_88, 3) = ((MR_Box) (Var_84));
      MR_hl_field(0, Spec_88, 4) = ((MR_Box) (Pieces_87));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Spec_88));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRemoteArgRepn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_partial_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeRemoteArgRepn_10)
{
  MR_bool succeeded;

  if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_39;
    MR_Word Spec_40;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_75;

    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (AtomStr_7));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
    }
    {
      Pieces_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_39, 1) = ((MR_Box) (Var_64));
    }
    {
      Spec_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_partial\'/5"));
      MR_hl_field(0, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_40, 3) = ((MR_Box) (TermContext_9));
      MR_hl_field(0, Spec_40, 4) = ((MR_Box) (Pieces_39));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_75, 0) = ((MR_Box) (Spec_40));
      MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRemoteArgRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_75));
    }
  }
  else
  {
    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

    if ((Var_142 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_82;
      MR_Word Spec_83;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_92;

      {
        Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_87, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
      }
      {
        Pieces_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_82, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_82, 1) = ((MR_Box) (Var_86));
      }
      {
        Spec_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_partial\'/5"));
        MR_hl_field(0, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_83, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_83, 4) = ((MR_Box) (Pieces_82));
      }
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_92, 0) = ((MR_Box) (Spec_83));
        MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRemoteArgRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
      }
    }
    else
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(1, Var_142, 1))));
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(1, Var_142, 0))));

      if ((Var_144 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_94;
        MR_Word Spec_95;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_104;

        {
          Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_99, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
        }
        {
          Pieces_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_94, 1) = ((MR_Box) (Var_98));
        }
        {
          Spec_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_partial\'/5"));
          MR_hl_field(0, Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_95, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_95, 4) = ((MR_Box) (Pieces_94));
        }
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_104, 0) = ((MR_Box) (Spec_95));
          MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRemoteArgRepn_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
        }
      }
      else
      {
        MR_Word Var_146 = ((MR_Word) ((MR_hl_field(1, Var_144, 1))));
        MR_Word Var_147 = ((MR_Word) ((MR_hl_field(1, Var_144, 0))));

        if ((Var_146 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_106;
          MR_Word Spec_107;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_116;

          {
            Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_111, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
            MR_hl_field(1, Var_110, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
          }
          {
            Pieces_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_106, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_106, 1) = ((MR_Box) (Var_110));
          }
          {
            Spec_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_partial\'/5"));
            MR_hl_field(0, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_107, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_107, 4) = ((MR_Box) (Pieces_106));
          }
          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_116, 0) = ((MR_Box) (Spec_107));
            MR_hl_field(0, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRemoteArgRepn_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_116));
          }
        }
        else
        {
          MR_Word Var_148 = ((MR_Word) ((MR_hl_field(1, Var_146, 1))));
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(1, Var_146, 0))));

          if ((Var_148 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeArgOnlyOffset_15;
            MR_Word MaybeCellOffset_16;
            MR_Word MaybeShiftUint_17;
            MR_Word MaybeFillKindSize_18;
            MR_Word ArgOnlyOffset_19;
            MR_Word CellOffset_20;
            MR_Unsigned ShiftUint_21;
            MR_Word FillKindSize_22;

            parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_143, &MaybeArgOnlyOffset_15);
            parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_145, &MaybeCellOffset_16);
            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0((MR_Unsigned) 63U, VarSet_6, Var_147, &MaybeShiftUint_17);
            parse_tree__parse_type_repn__parse_fill_kind_size_3_p_0(VarSet_6, Var_149, &MaybeFillKindSize_18);
            succeeded = ((MR_tag((MR_Word) MaybeArgOnlyOffset_15)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgOnlyOffset_19 = ((MR_Word) ((MR_hl_field(1, MaybeArgOnlyOffset_15, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCellOffset_16)) == (MR_Integer) 1);
              if (succeeded)
              {
                CellOffset_20 = ((MR_Word) ((MR_hl_field(1, MaybeCellOffset_16, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeShiftUint_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ShiftUint_21 = ((MR_Unsigned) ((MR_hl_field(1, MaybeShiftUint_17, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeFillKindSize_18)) == (MR_Integer) 1);
                  if (succeeded)
                    FillKindSize_22 = ((MR_Word) ((MR_hl_field(1, MaybeFillKindSize_18, 0))));
                }
              }
            }
            if (succeeded)
            {
              uint8_t Shift_23;
              MR_Word RemoteArgRepn_24;

              Shift_23 = mercury__uint8__det_from_uint_1_f_0(ShiftUint_21);
              if ((strcmp(AtomStr_7, (MR_String) "partial_first") == 0))
                {
                  RemoteArgRepn_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, RemoteArgRepn_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, RemoteArgRepn_24, 1) = ((MR_Box) (ArgOnlyOffset_19));
                  MR_hl_field(3, RemoteArgRepn_24, 2) = ((MR_Box) (CellOffset_20));
                  MR_hl_field(3, RemoteArgRepn_24, 3) = ((MR_Box) (MR_Word) (Shift_23));
                  MR_hl_field(3, RemoteArgRepn_24, 4) = ((MR_Box) (FillKindSize_22));
                }
              else
                {
                  RemoteArgRepn_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, RemoteArgRepn_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, RemoteArgRepn_24, 1) = ((MR_Box) (ArgOnlyOffset_19));
                  MR_hl_field(3, RemoteArgRepn_24, 2) = ((MR_Box) (CellOffset_20));
                  MR_hl_field(3, RemoteArgRepn_24, 3) = ((MR_Box) (MR_Word) (Shift_23));
                  MR_hl_field(3, RemoteArgRepn_24, 4) = ((MR_Box) (FillKindSize_22));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeRemoteArgRepn_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (RemoteArgRepn_24));
              }
            }
            else
            {
              MR_Word Specs_25;
              MR_Word OoMSpecs_26;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word Var_51;

              Var_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_15);
              Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_16);
              Var_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeShiftUint_17);
              Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_fill_kind_size_0), MaybeFillKindSize_18);
              Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_50, Var_51);
              Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_48, Var_49);
              Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_46, Var_47);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_25, &OoMSpecs_26);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeRemoteArgRepn_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_26));
              }
            }
          }
          else
          {
            MR_Word Pieces_118;
            MR_Word Spec_119;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_128;

            {
              Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_123, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
              MR_hl_field(1, Var_122, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
            }
            {
              Pieces_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_118, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_118, 1) = ((MR_Box) (Var_122));
            }
            {
              Spec_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_119, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_partial\'/5"));
              MR_hl_field(0, Spec_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_119, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_119, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_119, 4) = ((MR_Box) (Pieces_118));
            }
            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_128, 0) = ((MR_Box) (Spec_119));
              MR_hl_field(0, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRemoteArgRepn_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_128));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_double_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeRemoteArgRepn_10)
{
  MR_bool succeeded;

  if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_36;
    MR_Word Spec_37;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_100;

    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) (AtomStr_7));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
    }
    {
      Pieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_36, 1) = ((MR_Box) (Var_89));
    }
    {
      Spec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_double\'/5"));
      MR_hl_field(0, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_37, 3) = ((MR_Box) (TermContext_9));
      MR_hl_field(0, Spec_37, 4) = ((MR_Box) (Pieces_36));
    }
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (Spec_37));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRemoteArgRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
    }
  }
  else
  {
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
    MR_Word Var_156 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

    if ((Var_155 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_107;
      MR_Word Spec_108;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_117;

      {
        Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_112, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
      }
      {
        Pieces_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_107, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_107, 1) = ((MR_Box) (Var_111));
      }
      {
        Spec_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_108, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_double\'/5"));
        MR_hl_field(0, Spec_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_108, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_108, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_108, 4) = ((MR_Box) (Pieces_107));
      }
      {
        Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_117, 0) = ((MR_Box) (Spec_108));
        MR_hl_field(0, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRemoteArgRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_117));
      }
    }
    else
    {
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(1, Var_155, 1))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(1, Var_155, 0))));

      if ((Var_157 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_119;
        MR_Word Spec_120;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_129;

        {
          Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_124, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
        }
        {
          Pieces_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_119, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_119, 1) = ((MR_Box) (Var_123));
        }
        {
          Spec_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_120, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_double\'/5"));
          MR_hl_field(0, Spec_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_120, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_120, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_120, 4) = ((MR_Box) (Pieces_119));
        }
        {
          Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_129, 0) = ((MR_Box) (Spec_120));
          MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRemoteArgRepn_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_129));
        }
      }
      else
      {
        MR_Word Var_159 = ((MR_Word) ((MR_hl_field(1, Var_157, 1))));
        MR_Word Var_160 = ((MR_Word) ((MR_hl_field(1, Var_157, 0))));

        if ((Var_159 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeArgOnlyOffset_14;
          MR_Word MaybeCellOffset_15;
          MR_Word MaybeDW_19;
          MR_Word DoubleWordKind0_18;
          MR_String Arg3Str_16;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word ArgOnlyOffset_22;
          MR_Word CellOffset_23;
          MR_Word DoubleWordKind_24;

          parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_156, &MaybeArgOnlyOffset_14);
          parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_158, &MaybeCellOffset_15);
          succeeded = ((MR_tag((MR_Word) Var_160)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_41 = ((MR_Word) ((MR_hl_field(0, Var_160, 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(0, Var_160, 1))));
            succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
              if (succeeded)
              {
                Arg3Str_16 = ((MR_String) ((MR_hl_field(0, Var_41, 0))));
                succeeded = parse_tree__prog_data__double_word_kind_string_2_p_1(&DoubleWordKind0_18, Arg3Str_16);
              }
            }
          }
          if (succeeded)
            {
              MaybeDW_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeDW_19, 0) = ((MR_Box) (DoubleWordKind0_18));
            }
          else
          {
            MR_Word DwPieces_20;
            MR_Word DwSpec_21;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_74;
            MR_Word Var_75;

            {
              Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_46, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[180])));
            }
            {
              DwPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DwPieces_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[96])));
              MR_hl_field(1, DwPieces_20, 1) = ((MR_Box) (Var_45));
            }
            Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_160);
            {
              DwSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DwSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_double\'/5"));
              MR_hl_field(0, DwSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, DwSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, DwSpec_21, 3) = ((MR_Box) (Var_74));
              MR_hl_field(0, DwSpec_21, 4) = ((MR_Box) (DwPieces_20));
            }
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_75, 0) = ((MR_Box) (DwSpec_21));
              MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeDW_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeDW_19, 0) = ((MR_Box) (Var_75));
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeArgOnlyOffset_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgOnlyOffset_22 = ((MR_Word) ((MR_hl_field(1, MaybeArgOnlyOffset_14, 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCellOffset_15)) == (MR_Integer) 1);
            if (succeeded)
            {
              CellOffset_23 = ((MR_Word) ((MR_hl_field(1, MaybeCellOffset_15, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeDW_19)) == (MR_Integer) 1);
              if (succeeded)
                DoubleWordKind_24 = ((MR_Word) ((MR_hl_field(1, MaybeDW_19, 0))));
            }
          }
          if (succeeded)
          {
            MR_Word RemoteArgRepn_25;

            {
              RemoteArgRepn_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, RemoteArgRepn_25, 0) = ((MR_Box) (ArgOnlyOffset_22));
              MR_hl_field(2, RemoteArgRepn_25, 1) = ((MR_Box) (CellOffset_23));
              MR_hl_field(2, RemoteArgRepn_25, 2) = (MR_Box) ((MR_Unsigned) (DoubleWordKind_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRemoteArgRepn_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (RemoteArgRepn_25));
            }
          }
          else
          {
            MR_Word Specs_26;
            MR_Word OoMSpecs_27;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;

            Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_14);
            Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_15);
            Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_double_word_kind_0), MaybeDW_19);
            Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_79, Var_80);
            Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_77, Var_78);
            mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_26, &OoMSpecs_27);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRemoteArgRepn_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_27));
            }
          }
        }
        else
        {
          MR_Word Pieces_131;
          MR_Word Spec_132;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_141;

          {
            Var_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_136, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_136, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
            MR_hl_field(1, Var_135, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
          }
          {
            Pieces_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_131, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_131, 1) = ((MR_Box) (Var_135));
          }
          {
            Spec_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_132, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_double\'/5"));
            MR_hl_field(0, Spec_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_132, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_132, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_132, 4) = ((MR_Box) (Pieces_131));
          }
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_141, 0) = ((MR_Box) (Spec_132));
            MR_hl_field(0, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRemoteArgRepn_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_141));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_remote_arg_repn_full_or_none_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeRemoteArgRepn_10)
{
  MR_bool succeeded;

  if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_47;

    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (AtomStr_7));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
    }
    {
      Pieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_25, 1) = ((MR_Box) (Var_36));
    }
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_full_or_none\'/5"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (TermContext_9));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRemoteArgRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

    if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_52;
      MR_Word Spec_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;

      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
      }
      {
        Pieces_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_52, 1) = ((MR_Box) (Var_56));
      }
      {
        Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_full_or_none\'/5"));
        MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_53, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_52));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (Spec_53));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRemoteArgRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      }
    }
    else
    {
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, Var_88, 1))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, Var_88, 0))));

      if ((Var_90 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeArgOnlyOffset_13;
        MR_Word MaybeCellOffset_14;
        MR_Word ArgOnlyOffset_15;
        MR_Word CellOffset_16;

        parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_89, &MaybeArgOnlyOffset_13);
        parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_91, &MaybeCellOffset_14);
        succeeded = ((MR_tag((MR_Word) MaybeArgOnlyOffset_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgOnlyOffset_15 = ((MR_Word) ((MR_hl_field(1, MaybeArgOnlyOffset_13, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeCellOffset_14)) == (MR_Integer) 1);
          if (succeeded)
            CellOffset_16 = ((MR_Word) ((MR_hl_field(1, MaybeCellOffset_14, 0))));
        }
        if (succeeded)
        {
          MR_Word RemoteArgRepn_17;

          if ((strcmp(AtomStr_7, (MR_String) "full") == 0))
            {
              RemoteArgRepn_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RemoteArgRepn_17, 0) = ((MR_Box) (ArgOnlyOffset_15));
              MR_hl_field(1, RemoteArgRepn_17, 1) = ((MR_Box) (CellOffset_16));
            }
          else
            {
              RemoteArgRepn_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, RemoteArgRepn_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, RemoteArgRepn_17, 1) = ((MR_Box) (ArgOnlyOffset_15));
              MR_hl_field(3, RemoteArgRepn_17, 2) = ((MR_Box) (CellOffset_16));
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeRemoteArgRepn_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (RemoteArgRepn_17));
          }
        }
        else
        {
          MR_Word Specs_18;
          MR_Word OoMSpecs_19;
          MR_Word Var_29;
          MR_Word Var_30;

          Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_13);
          Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_14);
          Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_29, Var_30);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_18, &OoMSpecs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRemoteArgRepn_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_19));
          }
        }
      }
      else
      {
        MR_Word Pieces_64;
        MR_Word Spec_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_74;

        {
          Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_69, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
        }
        {
          Pieces_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_64, 1) = ((MR_Box) (Var_68));
        }
        {
          Spec_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_remote_arg_repn_full_or_none\'/5"));
          MR_hl_field(0, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_65, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_65, 4) = ((MR_Box) (Pieces_64));
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (Spec_65));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRemoteArgRepn_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Integer IntN_40;
  MR_Word Base_35;
  MR_Word N_36;
  MR_Word Signedness_37;
  MR_Word Size_38;
  MR_Word Var_44;
  MR_Word Var_45;

  if (succeeded)
  {
    Var_44 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
      if (succeeded)
      {
        Base_35 = ((MR_Unsigned) ((MR_hl_field(1, Var_44, 0))) & (MR_Integer) 3);
        N_36 = ((MR_Word) ((MR_hl_field(1, Var_44, 1))));
        Signedness_37 = ((((MR_Unsigned) ((MR_hl_field(1, Var_44, 2))) >> 3)) & (MR_Integer) 1);
        Size_38 = ((MR_Unsigned) ((MR_hl_field(1, Var_44, 2))) & (MR_Integer) 7);
        succeeded = (Base_35 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (Signedness_37 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Size_38 == (MR_Integer) 0);
            if (succeeded)
              succeeded = mercury__integer__to_int_2_p_0(N_36, &IntN_40);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    succeeded = (IntN_40 >= (MR_Integer) -2);
    if (succeeded)
    {
      MR_Word Var_14 = (MR_Word) (IntN_40);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCellOffset_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      MR_String TermStr_9;
      MR_Word Pieces_10;
      MR_Word Spec_11;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_31;
      MR_Word Var_32;

      TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_21, 1) = ((MR_Box) (TermStr_9));
      }
      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
      }
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[182])));
        MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Pieces_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_10, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[181])));
        MR_hl_field(1, Pieces_10, 1) = ((MR_Box) (Var_17));
      }
      Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_cell_offset\'/3"));
        MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Var_31));
        MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (Spec_11));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCellOffset_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
  }
  else
  {
    MR_String TermStr_41;
    MR_Word Pieces_42;
    MR_Word Spec_43;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word MaybeInt_61;

    TermStr_41 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (TermStr_41));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Pieces_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[228])));
      MR_hl_field(1, Pieces_42, 1) = ((MR_Box) (Var_48));
    }
    Var_57 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_unlimited_int\'/3"));
      MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Var_57));
      MR_hl_field(0, Spec_43, 4) = ((MR_Box) (Pieces_42));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (Spec_43));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeInt_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeInt_61, 0) = ((MR_Box) (Var_58));
    }
    *MaybeCellOffset_6 = (MR_Word) (MaybeInt_61);
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeArgOnlyOffset_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Integer IntN_40;
  MR_Word Base_35;
  MR_Word N_36;
  MR_Word Signedness_37;
  MR_Word Size_38;
  MR_Word Var_44;
  MR_Word Var_45;

  if (succeeded)
  {
    Var_44 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
      if (succeeded)
      {
        Base_35 = ((MR_Unsigned) ((MR_hl_field(1, Var_44, 0))) & (MR_Integer) 3);
        N_36 = ((MR_Word) ((MR_hl_field(1, Var_44, 1))));
        Signedness_37 = ((((MR_Unsigned) ((MR_hl_field(1, Var_44, 2))) >> 3)) & (MR_Integer) 1);
        Size_38 = ((MR_Unsigned) ((MR_hl_field(1, Var_44, 2))) & (MR_Integer) 7);
        succeeded = (Base_35 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (Signedness_37 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Size_38 == (MR_Integer) 0);
            if (succeeded)
              succeeded = mercury__integer__to_int_2_p_0(N_36, &IntN_40);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    succeeded = (IntN_40 >= (MR_Integer) -2);
    if (succeeded)
    {
      MR_Word Var_14 = (MR_Word) (IntN_40);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeArgOnlyOffset_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      MR_String TermStr_9;
      MR_Word Pieces_10;
      MR_Word Spec_11;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_31;
      MR_Word Var_32;

      TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_21, 1) = ((MR_Box) (TermStr_9));
      }
      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
      }
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[182])));
        MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Pieces_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_10, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[181])));
        MR_hl_field(1, Pieces_10, 1) = ((MR_Box) (Var_17));
      }
      Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_arg_only_offset\'/3"));
        MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Var_31));
        MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (Spec_11));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgOnlyOffset_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
  }
  else
  {
    MR_String TermStr_41;
    MR_Word Pieces_42;
    MR_Word Spec_43;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word MaybeInt_61;

    TermStr_41 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (TermStr_41));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Pieces_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[228])));
      MR_hl_field(1, Pieces_42, 1) = ((MR_Box) (Var_48));
    }
    Var_57 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_unlimited_int\'/3"));
      MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Var_57));
      MR_hl_field(0, Spec_43, 4) = ((MR_Box) (Pieces_42));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (Spec_43));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeInt_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeInt_61, 0) = ((MR_Box) (Var_58));
    }
    *MaybeArgOnlyOffset_6 = (MR_Word) (MaybeInt_61);
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_arg_repns_4_p_0(
  MR_Word HeadVar__1_1,
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
    MR_Word HeadTerm_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailTerms_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailLocalArgRepns_11;
    MR_Word TailSpecs_12;
    MR_Word MaybeHeadLocalArgRepn_13;

    parse_tree__parse_type_repn__parse_local_arg_repns_4_p_0(HeadVar__1_1, TailTerms_8, &TailLocalArgRepns_11, &TailSpecs_12);
    parse_tree__parse_type_repn__parse_local_arg_repn_3_p_0(HeadVar__1_1, HeadTerm_7, &MaybeHeadLocalArgRepn_13);
    if (((MR_tag((MR_Word) MaybeHeadLocalArgRepn_13)) == (MR_Integer) 0))
    {
      MR_Word OoMHeadSpecs_15 = ((MR_Word) ((MR_hl_field(0, MaybeHeadLocalArgRepn_13, 0))));
      MR_Word Var_16;

      *HeadVar__3_3 = TailLocalArgRepns_11;
      Var_16 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMHeadSpecs_15);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_16, TailSpecs_12);
    }
    else
    {
      MR_Word HeadLocalArgRepn_14 = ((MR_Word) ((MR_hl_field(1, MaybeHeadLocalArgRepn_13, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadLocalArgRepn_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailLocalArgRepns_11));
      }
      *HeadVar__4_4 = TailSpecs_12;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_arg_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeLocalArgRepn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_15;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_15, 0))));
      if ((strcmp(AtomStr_7, (MR_String) "local_none") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "local_partial") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_7, (MR_String) "local_none") == 0))
      if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeLocalArgRepn_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[3]));
      else
      {
        MR_Word Pieces_12;
        MR_Word Spec_13;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_30;

        {
          Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_20, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[154])));
        }
        {
          Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_19));
        }
        {
          Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_arg_repn\'/3"));
          MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_13, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (Spec_13));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLocalArgRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
        }
      }
    else
      parse_tree__parse_type_repn__parse_local_arg_repn_partial_5_p_0(VarSet_4, AtomStr_7, ArgTerms_8, TermContext_9, MaybeLocalArgRepn_6);
  else
  {
    MR_String TermStr_14;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Pieces_63;
    MR_Word Spec_64;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[164])));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[163])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Pieces_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_63, 1) = ((MR_Box) (Var_34));
    }
    Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_arg_repn\'/3"));
      MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (Spec_64));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeLocalArgRepn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_arg_repn_partial_5_p_0(
  MR_Word VarSet_6,
  MR_String AtomStr_7,
  MR_Word ArgTerms_8,
  MR_Word TermContext_9,
  MR_Word * MaybeLocalArgRepn_10)
{
  MR_bool succeeded;

  if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_47;

    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (AtomStr_7));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
    }
    {
      Pieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_25, 1) = ((MR_Box) (Var_36));
    }
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_arg_repn_partial\'/5"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (TermContext_9));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeLocalArgRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

    if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_52;
      MR_Word Spec_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;

      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
      }
      {
        Pieces_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_52, 1) = ((MR_Box) (Var_56));
      }
      {
        Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_arg_repn_partial\'/5"));
        MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_53, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_52));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (Spec_53));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLocalArgRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      }
    }
    else
    {
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, Var_88, 1))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, Var_88, 0))));

      if ((Var_90 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeShift_13;
        MR_Word MaybeFillKindSize_14;
        MR_Unsigned Shift_15;
        MR_Word FillKindSize_16;

        parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_6, Var_89, &MaybeShift_13);
        parse_tree__parse_type_repn__parse_fill_kind_size_3_p_0(VarSet_6, Var_91, &MaybeFillKindSize_14);
        succeeded = ((MR_tag((MR_Word) MaybeShift_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Shift_15 = ((MR_Unsigned) ((MR_hl_field(1, MaybeShift_13, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeFillKindSize_14)) == (MR_Integer) 1);
          if (succeeded)
            FillKindSize_16 = ((MR_Word) ((MR_hl_field(1, MaybeFillKindSize_14, 0))));
        }
        if (succeeded)
        {
          MR_Word LocalArgRepn_17;

          {
            LocalArgRepn_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LocalArgRepn_17, 0) = ((MR_Box) (Shift_15));
            MR_hl_field(1, LocalArgRepn_17, 1) = ((MR_Box) (FillKindSize_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeLocalArgRepn_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (LocalArgRepn_17));
          }
        }
        else
        {
          MR_Word Specs_18;
          MR_Word OoMSpecs_19;
          MR_Word Var_29;
          MR_Word Var_30;

          Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeShift_13);
          Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_fill_kind_size_0), MaybeFillKindSize_14);
          Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_29, Var_30);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_18, &OoMSpecs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLocalArgRepn_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_19));
          }
        }
      }
      else
      {
        MR_Word Pieces_64;
        MR_Word Spec_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_74;

        {
          Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_69, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
        }
        {
          Pieces_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_64, 1) = ((MR_Box) (Var_68));
        }
        {
          Spec_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_arg_repn_partial\'/5"));
          MR_hl_field(0, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_65, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_65, 4) = ((MR_Box) (Pieces_64));
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (Spec_65));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLocalArgRepn_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_fill_kind_size_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeFillKindSize_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_20;
  MR_Integer slot_0;
  MR_String str_1;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
      // hashed string simple lookup switch
      ;
      // compute the hash value of the input string
      ;
      slot_0 = ((MR_hash_string4(AtomStr_7)) & (MR_Integer) 15);
      // hash chain loop
      ;
      do
      {
        // lookup the string for this hash slot
        ;
        str_1 = ((&parse_tree__parse_type_repn_vector_common_7[10 + slot_0]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, AtomStr_7) == 0))))
        {
          // we found a match; look up the results
          ;
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        {
          // no match yet, so get next slot in hash chain
          ;
          slot_0 = ((&parse_tree__parse_type_repn_vector_common_7[10 + slot_0]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1;
        }
      }
      while ((slot_0 >= (MR_Integer) 0));
      succeeded = MR_FALSE;
    label_0:;
    }
  }
  if (succeeded)
  {
    MR_Integer slot_2 = ((MR_hash_string4(AtomStr_7)) & (MR_Integer) 15);
    MR_String str_3;

    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    // hash chain loop
    ;
    do
    {
      // lookup the string for this hash slot
      ;
      str_3 = ((&parse_tree__parse_type_repn_vector_common_7[26 + slot_2]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0;
      // did we find a match?
      ;
      if ((((str_3 != NULL)) && ((strcmp(str_3, AtomStr_7) == 0))))
      {
        // we found a match; dispatch to the corresponding code
        ;
        switch (slot_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              // case "int16"
              ;
              parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_7, TermContext_9, ArgTerms_8, (MR_Word) ((MR_Unsigned) 4U), MaybeFillKindSize_6);
            }
            break;
          case (MR_Integer) 2:
            {
              // case "uint32"
              ;
              parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_7, TermContext_9, ArgTerms_8, (MR_Word) ((MR_Unsigned) 20U), MaybeFillKindSize_6);
            }
            break;
          case (MR_Integer) 3:
            {
              // case "int32"
              ;
              parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_7, TermContext_9, ArgTerms_8, (MR_Word) ((MR_Unsigned) 8U), MaybeFillKindSize_6);
            }
            break;
          case (MR_Integer) 4:
            {
              // case "uint16"
              ;
              parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_7, TermContext_9, ArgTerms_8, (MR_Word) ((MR_Unsigned) 16U), MaybeFillKindSize_6);
            }
            break;
          case (MR_Integer) 7:
            {
              // case "enum"
              ;
              if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Pieces_17;
                MR_Word Spec_18;
                MR_Word Var_27;
                MR_Word Var_28;
                MR_Word Var_38;

                {
                  Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_28, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
                  MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
                }
                {
                  Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
                  MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_27));
                }
                {
                  Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_fill_kind_size\'/3"));
                  MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_18, 3) = ((MR_Box) (TermContext_9));
                  MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
                }
                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_38, 0) = ((MR_Box) (Spec_18));
                  MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeFillKindSize_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
                }
              }
              else
              {
                MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
                MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

                if ((Var_90 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word MaybeUint_11;

                  parse_tree__parse_type_repn__parse_uint_in_range_4_p_0((MR_Unsigned) 63U, VarSet_4, Var_91, &MaybeUint_11);
                  if (((MR_tag((MR_Word) MaybeUint_11)) == (MR_Integer) 0))
                    *MaybeFillKindSize_6 = (MR_Word) (MaybeUint_11);
                  else
                  {
                    MR_Unsigned Uint_12 = ((MR_Unsigned) ((MR_hl_field(1, MaybeUint_11, 0))));
                    MR_Word Var_23;

                    {
                      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Uint_12));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeFillKindSize_6 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
                    }
                  }
                }
                else
                {
                  MR_Word Pieces_66;
                  MR_Word Spec_67;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_76;

                  {
                    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_71, 1) = ((MR_Box) (AtomStr_7));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
                  }
                  {
                    Pieces_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
                    MR_hl_field(1, Pieces_66, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Spec_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_fill_kind_size\'/3"));
                    MR_hl_field(0, Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_67, 3) = ((MR_Box) (TermContext_9));
                    MR_hl_field(0, Spec_67, 4) = ((MR_Box) (Pieces_66));
                  }
                  {
                    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_76, 0) = ((MR_Box) (Spec_67));
                    MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeFillKindSize_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              // case "uint8"
              ;
              parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_7, TermContext_9, ArgTerms_8, (MR_Word) ((MR_Unsigned) 12U), MaybeFillKindSize_6);
            }
            break;
          case (MR_Integer) 13:
            {
              // case "char21"
              ;
              if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
                *MaybeFillKindSize_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[9]));
              else
              {
                MR_Word Pieces_94;
                MR_Word Spec_95;
                MR_Word Var_98;
                MR_Word Var_99;
                MR_Word Var_104;

                {
                  Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_99, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[185])));
                }
                {
                  Pieces_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
                  MR_hl_field(1, Pieces_94, 1) = ((MR_Box) (Var_98));
                }
                {
                  Spec_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.ok_if_arity_zero\'/5"));
                  MR_hl_field(0, Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_95, 3) = ((MR_Box) (TermContext_9));
                  MR_hl_field(0, Spec_95, 4) = ((MR_Box) (Pieces_94));
                }
                {
                  Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_104, 0) = ((MR_Box) (Spec_95));
                  MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeFillKindSize_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
                }
              }
            }
            break;
          case (MR_Integer) 15:
            {
              // case "int8"
              ;
              parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_7, TermContext_9, ArgTerms_8, (MR_Word) ((MR_Unsigned) 0U), MaybeFillKindSize_6);
            }
            break;
        }
        // break out of search loop
        ;
        break;
      }
      else
      {
        // no match yet, so get next slot in hash chain
        ;
        slot_2 = ((&parse_tree__parse_type_repn_vector_common_7[26 + slot_2]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1;
      }
    }
    while ((slot_2 >= (MR_Integer) 0));
  }
  else
  {
    MR_String TermStr_19;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Pieces_63;
    MR_Word Spec_64;

    TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (TermStr_19));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Pieces_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[183])));
      MR_hl_field(1, Pieces_63, 1) = ((MR_Box) (Var_49));
    }
    Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_fill_kind_size\'/3"));
      MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (Spec_64));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFillKindSize_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFillKindSize_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FillKindSize_9));
    }
  else
  {
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_28;

    {
      Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_18, 1) = ((MR_Box) (AtomStr_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[185])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.ok_if_arity_zero\'/5"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (TermContext_7));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFillKindSize_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_constant_repn_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeConstantRepn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word ArgTerms_7;
  MR_Word TermContext_8;
  MR_Word Var_26;
  MR_String Var_27;

  if (succeeded)
  {
    Var_26 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, 0))));
      succeeded = (strcmp(Var_27, (MR_String) "constant") == 0);
    }
  }
  if (succeeded)
    if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_24;
      MR_Word Var_49;

      {
        Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_constant_repn\'/3"));
        MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_24, 3) = ((MR_Box) (TermContext_8));
        MR_hl_field(0, Spec_24, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[132])));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConstantRepn_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
      }
    }
    else
    {
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));

      if ((Var_103 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_83;
        MR_Word Var_87;

        {
          Spec_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_constant_repn\'/3"));
          MR_hl_field(0, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_83, 3) = ((MR_Box) (TermContext_8));
          MR_hl_field(0, Spec_83, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[132])));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = ((MR_Box) (Spec_83));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeConstantRepn_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
        }
      }
      else
      {
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(1, Var_103, 1))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, Var_103, 0))));

        if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeSectag_11;
          MR_Word MaybeSectagSize_12;
          MR_Unsigned Sectag_13;
          MR_Word SectagSize_14;

          parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_4, Var_104, &MaybeSectag_11);
          parse_tree__parse_type_repn__parse_local_sectag_word_or_size_3_p_0(VarSet_4, Var_106, &MaybeSectagSize_12);
          succeeded = ((MR_tag((MR_Word) MaybeSectag_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            Sectag_13 = ((MR_Unsigned) ((MR_hl_field(1, MaybeSectag_11, 0))));
            succeeded = ((MR_tag((MR_Word) MaybeSectagSize_12)) == (MR_Integer) 1);
            if (succeeded)
              SectagSize_14 = ((MR_Word) ((MR_hl_field(1, MaybeSectagSize_12, 0))));
          }
          if (succeeded)
          {
            MR_Word ConstantRepn_15;

            {
              ConstantRepn_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstantRepn_15, 0) = ((MR_Box) (Sectag_13));
              MR_hl_field(0, ConstantRepn_15, 1) = ((MR_Box) (SectagSize_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeConstantRepn_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ConstantRepn_15));
            }
          }
          else
          {
            MR_Word Specs_16;
            MR_Word OoMSpecs_17;
            MR_Word Var_30;
            MR_Word Var_31;

            Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_11);
            Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_lsectag_word_or_size_0), MaybeSectagSize_12);
            Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_30, Var_31);
            mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_16, &OoMSpecs_17);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeConstantRepn_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_17));
            }
          }
        }
        else
        {
          MR_Word Spec_90;
          MR_Word Var_94;

          {
            Spec_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_90, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_constant_repn\'/3"));
            MR_hl_field(0, Spec_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_90, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_90, 3) = ((MR_Box) (TermContext_8));
            MR_hl_field(0, Spec_90, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[132])));
          }
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_94, 0) = ((MR_Box) (Spec_90));
            MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeConstantRepn_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
          }
        }
      }
    }
  else
  {
    MR_String TermStr_25;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Pieces_76;
    MR_Word Spec_77;

    TermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (TermStr_25));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[134])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Pieces_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[133])));
      MR_hl_field(1, Pieces_76, 1) = ((MR_Box) (Var_53));
    }
    Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_constant_repn\'/3"));
      MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Var_73));
      MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_76));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) (Spec_77));
      MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConstantRepn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeUint_6)
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
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        Base_7 = ((MR_Unsigned) ((MR_hl_field(1, Var_17, 0))) & (MR_Integer) 3);
        N_8 = ((MR_Word) ((MR_hl_field(1, Var_17, 1))));
        Signedness_9 = ((((MR_Unsigned) ((MR_hl_field(1, Var_17, 2))) >> 3)) & (MR_Integer) 1);
        Size_10 = ((MR_Unsigned) ((MR_hl_field(1, Var_17, 2))) & (MR_Integer) 7);
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeUint_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UintN_13));
    }
  else
  {
    MR_String TermStr_14;
    MR_Word Pieces_15;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_35;
    MR_Word Var_36;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[229])));
      MR_hl_field(1, Pieces_15, 1) = ((MR_Box) (Var_21));
    }
    Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_unlimited_uint\'/3"));
      MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_35));
      MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeUint_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_local_sectag_word_or_size_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSectagSize_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_21;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_21, 0))));
      if ((strcmp(AtomStr_7, (MR_String) "lst_part") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_7, (MR_String) "lst_rest") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_18;
      MR_Word Spec_19;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_40;

      {
        Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_30, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
      }
      {
        Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_sectag_word_or_size\'/3"));
        MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_19, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
      }
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSectagSize_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
      }
    }
    else
    {
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

      if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeSectagNumBitsUint_11;

        parse_tree__parse_type_repn__parse_uint_in_range_4_p_0((MR_Unsigned) 63U, VarSet_4, Var_101, &MaybeSectagNumBitsUint_11);
        if (((MR_tag((MR_Word) MaybeSectagNumBitsUint_11)) == (MR_Integer) 0))
          *MaybeSectagSize_6 = (MR_Word) (MaybeSectagNumBitsUint_11);
        else
        {
          MR_Unsigned SectagNumBitsUint_12 = ((MR_Unsigned) ((MR_hl_field(1, MaybeSectagNumBitsUint_11, 0))));
          uint8_t SectagNumBits_13;

          SectagNumBits_13 = mercury__uint8__det_from_uint_1_f_0(SectagNumBitsUint_12);
          if ((strcmp(AtomStr_7, (MR_String) "lst_part") == 0))
          {
            MR_Word Var_25;

            {
              Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_Word) (SectagNumBits_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSectagSize_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
            }
          }
          else
          {
            MR_Word Var_24;

            {
              Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_24, 0) = ((MR_Box) (MR_Word) (SectagNumBits_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSectagSize_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
            }
          }
        }
      }
      else
      {
        MR_Word Pieces_76;
        MR_Word Spec_77;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_86;

        {
          Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_81, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Pieces_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_76, 1) = ((MR_Box) (Var_80));
        }
        {
          Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_sectag_word_or_size\'/3"));
          MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_77, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_76));
        }
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_86, 0) = ((MR_Box) (Spec_77));
          MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSectagSize_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
        }
      }
    }
  else
  {
    MR_String TermStr_20;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Pieces_73;
    MR_Word Spec_74;

    TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (TermStr_20));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[158])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[157])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Pieces_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_73, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_73, 1) = ((MR_Box) (Var_44));
    }
    Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_local_sectag_word_or_size\'/3"));
      MR_hl_field(0, Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_74, 3) = ((MR_Box) (Var_70));
      MR_hl_field(0, Spec_74, 4) = ((MR_Box) (Pieces_73));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (Spec_74));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSectagSize_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
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
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        Base_9 = ((MR_Unsigned) ((MR_hl_field(1, Var_19, 0))) & (MR_Integer) 3);
        N_10 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
        Signedness_11 = ((((MR_Unsigned) ((MR_hl_field(1, Var_19, 2))) >> 3)) & (MR_Integer) 1);
        Size_12 = ((MR_Unsigned) ((MR_hl_field(1, Var_19, 2))) & (MR_Integer) 7);
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeUint_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UintN_15));
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
    MR_Word Var_40;
    MR_Word Var_41;

    TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_25 = mercury__uint__cast_to_int_1_f_0(Max_5);
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_30, 1) = ((MR_Box) (TermStr_16));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[230])));
      MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_23));
    }
    Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_uint_in_range\'/4"));
      MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeUint_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeTerm_13;
  MR_Word RepnTerm_14;
  MR_Word Var_45;
  MR_Word Var_46;

  if (succeeded)
  {
    TypeTerm_13 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RepnTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_45, 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, 1))));
      succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word TypeContextPieces_15;
    MR_Word MaybeTypeSymNameAndArgs_16;
    MR_Word MaybeRepn_20;
    MR_String AtomStr_17;
    MR_Word RepnArgs_18;
    MR_Word RepnContext_19;
    MR_Word Var_57;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;
    MR_Word TypeCtorSymName0_33;
    MR_Word TypeArgVars_34;
    MR_Word Repn_35;

    TypeContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[17])));
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeContextPieces_15, ModuleName_7, VarSet_8, TypeTerm_13, &MaybeTypeSymNameAndArgs_16);
    succeeded = ((MR_tag((MR_Word) RepnTerm_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(0, RepnTerm_14, 0))));
      RepnArgs_18 = ((MR_Word) ((MR_hl_field(0, RepnTerm_14, 1))));
      RepnContext_19 = ((MR_Word) ((MR_hl_field(0, RepnTerm_14, 2))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_17 = ((MR_String) ((MR_hl_field(0, Var_57, 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 4;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(AtomStr_17, ((&parse_tree__parse_type_repn_vector_common_6[5 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0);
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
        result_7 = MR_strcmp(AtomStr_17, ((&parse_tree__parse_type_repn_vector_common_7[5 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_7[5 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "du_repn"
                ;
                if ((RepnArgs_18 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word DuPieces_28;
                  MR_Word DuSpec_29;
                  MR_Word Var_64;
                  MR_Word Var_67;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_84;

                  {
                    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_71, 1) = ((MR_Box) (AtomStr_17));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[24])));
                  }
                  {
                    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[12])));
                    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[19])));
                    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
                  }
                  {
                    DuPieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, DuPieces_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[18])));
                    MR_hl_field(1, DuPieces_28, 1) = ((MR_Box) (Var_64));
                  }
                  {
                    DuSpec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, DuSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_item\'/6"));
                    MR_hl_field(0, DuSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, DuSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, DuSpec_29, 3) = ((MR_Box) (RepnContext_19));
                    MR_hl_field(0, DuSpec_29, 4) = ((MR_Box) (DuPieces_28));
                  }
                  {
                    Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_84, 0) = ((MR_Box) (DuSpec_29));
                    MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MaybeRepn_20, 0) = ((MR_Box) (Var_84));
                  }
                }
                else
                {
                  MR_Word Var_240 = ((MR_Word) ((MR_hl_field(1, RepnArgs_18, 1))));
                  MR_Word Var_241 = ((MR_Word) ((MR_hl_field(1, RepnArgs_18, 0))));

                  if ((Var_240 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeDuRepn_22;

                    parse_tree__parse_type_repn__parse_type_repn_du_3_p_0(VarSet_8, Var_241, &MaybeDuRepn_22);
                    if (((MR_tag((MR_Word) MaybeDuRepn_22)) == (MR_Integer) 0))
                      MaybeRepn_20 = (MR_Word) (MaybeDuRepn_22);
                    else
                    {
                      MR_Word DuRepn_23 = ((MR_Word) ((MR_hl_field(1, MaybeDuRepn_22, 0))));
                      MR_Word Var_60;

                      {
                        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Var_60, 1) = ((MR_Box) (DuRepn_23));
                      }
                      {
                        MaybeRepn_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeRepn_20, 0) = ((MR_Box) (Var_60));
                      }
                    }
                  }
                  else
                  {
                    MR_Word DuPieces_204;
                    MR_Word DuSpec_205;
                    MR_Word Var_208;
                    MR_Word Var_211;
                    MR_Word Var_214;
                    MR_Word Var_215;
                    MR_Word Var_220;

                    {
                      Var_215 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_215, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_215, 1) = ((MR_Box) (AtomStr_17));
                    }
                    {
                      Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_214, 0) = ((MR_Box) (Var_215));
                      MR_hl_field(1, Var_214, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[24])));
                    }
                    {
                      Var_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_211, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[12])));
                      MR_hl_field(1, Var_211, 1) = ((MR_Box) (Var_214));
                    }
                    {
                      Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_208, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[19])));
                      MR_hl_field(1, Var_208, 1) = ((MR_Box) (Var_211));
                    }
                    {
                      DuPieces_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, DuPieces_204, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[18])));
                      MR_hl_field(1, DuPieces_204, 1) = ((MR_Box) (Var_208));
                    }
                    {
                      DuSpec_205 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, DuSpec_205, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_item\'/6"));
                      MR_hl_field(0, DuSpec_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, DuSpec_205, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                      MR_hl_field(0, DuSpec_205, 3) = ((MR_Box) (RepnContext_19));
                      MR_hl_field(0, DuSpec_205, 4) = ((MR_Box) (DuPieces_204));
                    }
                    {
                      Var_220 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_220, 0) = ((MR_Box) (DuSpec_205));
                      MR_hl_field(0, Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, MaybeRepn_20, 0) = ((MR_Box) (Var_220));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "foreign_type_repn"
                ;
                parse_tree__parse_type_repn__parse_type_repn_foreign_type_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 2:
              {
                // case "is_eqv_to"
                ;
                parse_tree__parse_type_repn__parse_type_repn_eqv_to_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 3:
              {
                // case "is_subtype_of"
                ;
                parse_tree__parse_type_repn__parse_type_repn_subtype_of_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 4:
              {
                // case "is_word_aligned_ptr"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 0U), &MaybeRepn_20);
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
      MR_String RepnTermStr_30;
      MR_Word RepnPieces_31;
      MR_Word RepnSpec_32;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_106;
      MR_Word Var_109;
      MR_Word Var_112;
      MR_Word Var_115;
      MR_Word Var_118;
      MR_Word Var_121;
      MR_Word Var_124;
      MR_Word Var_127;
      MR_Word Var_130;
      MR_Word Var_133;
      MR_Word Var_136;
      MR_Word Var_139;
      MR_Word Var_142;
      MR_Word Var_145;
      MR_Word Var_148;
      MR_Word Var_151;
      MR_Word Var_154;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_168;
      MR_Word Var_169;

      RepnTermStr_30 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, RepnTerm_14);
      Var_104 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30]));
      {
        Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_158, 1) = ((MR_Box) (RepnTermStr_30));
      }
      {
        Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
        MR_hl_field(1, Var_157, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
      }
      {
        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_154, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
        MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
      }
      {
        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[39])));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_151));
      }
      {
        Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_145, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
        MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_148));
      }
      {
        Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_142, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[37])));
        MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_145));
      }
      {
        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[36])));
        MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
      }
      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
      }
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[35])));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
      }
      {
        Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[34])));
        MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
      }
      {
        Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
      }
      {
        Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_118, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[33])));
        MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_118));
      }
      {
        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[32])));
        MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_115));
      }
      {
        Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
      }
      {
        Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[31])));
        MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
      }
      {
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[29])));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[28])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[27])));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[26])));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[19])));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
      }
      {
        RepnPieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RepnPieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[25])));
        MR_hl_field(1, RepnPieces_31, 1) = ((MR_Box) (Var_88));
      }
      Var_168 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RepnTerm_14);
      {
        RepnSpec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RepnSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_item\'/6"));
        MR_hl_field(0, RepnSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, RepnSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, RepnSpec_32, 3) = ((MR_Box) (Var_168));
        MR_hl_field(0, RepnSpec_32, 4) = ((MR_Box) (RepnPieces_31));
      }
      {
        Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_169, 0) = ((MR_Box) (RepnSpec_32));
        MR_hl_field(0, Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeRepn_20, 0) = ((MR_Box) (Var_169));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeTypeSymNameAndArgs_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtorSymName0_33 = ((MR_Word) ((MR_hl_field(1, MaybeTypeSymNameAndArgs_16, 0))));
      TypeArgVars_34 = ((MR_Word) ((MR_hl_field(1, MaybeTypeSymNameAndArgs_16, 1))));
      succeeded = ((MR_tag((MR_Word) MaybeRepn_20)) == (MR_Integer) 1);
      if (succeeded)
        Repn_35 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_20, 0))));
    }
    if (succeeded)
    {
      MR_Word TVarSet_36;
      MR_String TypeCtorName_37;
      MR_Word TypeCtorSymName_38;
      MR_Word ItemRepnInfo_39;
      MR_Word Item_40;
      MR_Word Var_171;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_36);
      TypeCtorName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName0_33);
      {
        TypeCtorSymName_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TypeCtorSymName_38, 0) = ((MR_Box) (ModuleName_7));
        MR_hl_field(1, TypeCtorSymName_38, 1) = ((MR_Box) (TypeCtorName_37));
      }
      {
        ItemRepnInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemRepnInfo_39, 0) = ((MR_Box) (TypeCtorSymName_38));
        MR_hl_field(0, ItemRepnInfo_39, 1) = ((MR_Box) (TypeArgVars_34));
        MR_hl_field(0, ItemRepnInfo_39, 2) = ((MR_Box) (Repn_35));
        MR_hl_field(0, ItemRepnInfo_39, 3) = ((MR_Box) (TVarSet_36));
        MR_hl_field(0, ItemRepnInfo_39, 4) = ((MR_Box) (Context_10));
        MR_hl_field(0, ItemRepnInfo_39, 5) = ((MR_Box) (SeqNum_11));
      }
      {
        Item_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_40, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, Item_40, 1) = ((MR_Box) (ItemRepnInfo_39));
      }
      {
        Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_171, 0) = ((MR_Box) (Item_40));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_171));
      }
    }
    else
    {
      MR_Word Specs_41;
      MR_Word OoMSpecs_42;
      MR_Word Var_172;
      MR_Word Var_173;

      Var_172 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[1]), MaybeTypeSymNameAndArgs_16);
      Var_173 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0), MaybeRepn_20);
      Specs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_172, Var_173);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_41, &OoMSpecs_42);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_42));
      }
    }
  }
  else
  {
    MR_Word Spec_44;
    MR_Word Var_194;

    {
      Spec_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_item\'/6"));
      MR_hl_field(0, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_44, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_44, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[50])));
    }
    {
      Var_194 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_194, 0) = ((MR_Box) (Spec_44));
      MR_hl_field(0, Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_194));
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
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_42;

    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (RepnStr_7));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
    }
    {
      Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_31));
    }
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_foreign_type\'/5"));
      MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_20, 3) = ((MR_Box) (RepnContext_9));
      MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
    }
  }
  else
  {
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, RepnArgs_8, 1))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, RepnArgs_8, 0))));

    if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DescPieces_12;
      MR_Word MaybeCJCsRepn_13;
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DescPieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DescPieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[202])));
        MR_hl_field(1, DescPieces_12, 1) = ((MR_Box) (Var_24));
      }
      parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0(DescPieces_12, VarSet_6, Var_69, &MaybeCJCsRepn_13);
      if (((MR_tag((MR_Word) MaybeCJCsRepn_13)) == (MR_Integer) 0))
        *MaybeRepn_10 = (MR_Word) (MaybeCJCsRepn_13);
      else
      {
        MR_Word CJCsRepn_14 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepn_13, 0))));
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_27, 1) = ((MR_Box) (CJCsRepn_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeRepn_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
        }
      }
    }
    else
    {
      MR_Word Pieces_44;
      MR_Word Spec_45;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_54;

      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
      }
      {
        Pieces_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_44, 1) = ((MR_Box) (Var_48));
      }
      {
        Spec_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_foreign_type\'/5"));
        MR_hl_field(0, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_45, 3) = ((MR_Box) (RepnContext_9));
        MR_hl_field(0, Spec_45, 4) = ((MR_Box) (Pieces_44));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_54, 0) = ((MR_Box) (Spec_45));
        MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
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
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_13, 0))));
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 4;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(AtomStr_7, ((&parse_tree__parse_type_repn_vector_common_6[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_6_0__vct_6_f_0);
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
      result_7 = MR_strcmp(AtomStr_7, ((&parse_tree__parse_type_repn_vector_common_7[0 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_0);
      if ((result_7 == (MR_Integer) 0))
      {
        switch (((&parse_tree__parse_type_repn_vector_common_7[0 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_7_0__vct_7_f_1) {
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
              // case "gen_du_more_functors"
              ;
              parse_tree__parse_type_repn__parse_type_repn_du_gen_du_more_functors_5_p_0(VarSet_4, TermContext_9, AtomStr_7, ArgTerms_8, MaybeDuRepn_6);
            }
            break;
          case (MR_Integer) 3:
            {
              // case "gen_du_only_functor"
              ;
              parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_5_p_0(VarSet_4, TermContext_9, AtomStr_7, ArgTerms_8, MaybeDuRepn_6);
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
    MR_Word Var_60;
    MR_Word Var_61;

    TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    Var_20 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30]));
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (TermStr_10));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[65])));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[64])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[63])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[62])));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[61])));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Var_16));
    }
    Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du\'/3"));
      MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuRepn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_more_functors_5_p_0(
  MR_Word VarSet_6,
  MR_Word TermContext_7,
  MR_String AtomStr_8,
  MR_Word ArgTerms_9,
  MR_Word * MaybeDuRepn_10)
{
  MR_bool succeeded;

  if ((ArgTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_102;
    MR_Word Pieces_104;
    MR_Word Spec_105;

    {
      Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_92, 1) = ((MR_Box) (AtomStr_8));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
    }
    {
      Pieces_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_104, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_104, 1) = ((MR_Box) (Var_91));
    }
    {
      Spec_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_105, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_more_functors\'/5"));
      MR_hl_field(0, Spec_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_105, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_105, 3) = ((MR_Box) (TermContext_7));
      MR_hl_field(0, Spec_105, 4) = ((MR_Box) (Pieces_104));
    }
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_102, 0) = ((MR_Box) (Spec_105));
      MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
    }
  }
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));

    if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_119;
      MR_Word Pieces_121;
      MR_Word Spec_122;

      {
        Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_114, 1) = ((MR_Box) (AtomStr_8));
      }
      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
        MR_hl_field(1, Var_113, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
      }
      {
        Pieces_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_121, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_121, 1) = ((MR_Box) (Var_113));
      }
      {
        Spec_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_more_functors\'/5"));
        MR_hl_field(0, Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_122, 3) = ((MR_Box) (TermContext_7));
        MR_hl_field(0, Spec_122, 4) = ((MR_Box) (Pieces_121));
      }
      {
        Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_119, 0) = ((MR_Box) (Spec_122));
        MR_hl_field(0, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_119));
      }
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_171, 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_171, 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_131;
        MR_Word Pieces_133;
        MR_Word Spec_134;

        {
          Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_126, 1) = ((MR_Box) (AtomStr_8));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
        }
        {
          Pieces_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_133, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_133, 1) = ((MR_Box) (Var_125));
        }
        {
          Spec_134 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_134, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_more_functors\'/5"));
          MR_hl_field(0, Spec_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_134, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_134, 3) = ((MR_Box) (TermContext_7));
          MR_hl_field(0, Spec_134, 4) = ((MR_Box) (Pieces_133));
        }
        {
          Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_131, 0) = ((MR_Box) (Spec_134));
          MR_hl_field(0, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
        }
      }
      else
      {
        MR_Word Var_175 = ((MR_Word) ((MR_hl_field(1, Var_173, 1))));
        MR_Word Var_176 = ((MR_Word) ((MR_hl_field(1, Var_173, 0))));

        if ((Var_175 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_137;
          MR_Word Var_138;
          MR_Word Var_143;
          MR_Word Pieces_145;
          MR_Word Spec_146;

          {
            Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_138, 1) = ((MR_Box) (AtomStr_8));
          }
          {
            Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
            MR_hl_field(1, Var_137, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
          }
          {
            Pieces_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_145, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_145, 1) = ((MR_Box) (Var_137));
          }
          {
            Spec_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_146, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_more_functors\'/5"));
            MR_hl_field(0, Spec_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_146, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_146, 3) = ((MR_Box) (TermContext_7));
            MR_hl_field(0, Spec_146, 4) = ((MR_Box) (Pieces_145));
          }
          {
            Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_143, 0) = ((MR_Box) (Spec_146));
            MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
          }
        }
        else
        {
          MR_Word Var_177 = ((MR_Word) ((MR_hl_field(1, Var_175, 1))));
          MR_Word Var_178 = ((MR_Word) ((MR_hl_field(1, Var_175, 0))));

          if ((Var_177 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeFunctor1_15;
            MR_Word MaybeFunctor2_16;
            MR_Word MaybeOtherFunctors_20;
            MR_Word DescPieces4_25;
            MR_Word MaybeCJCsRepn_26;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word OtherFunctorTerms_17;
            MR_Word Functor1_27;
            MR_Word Functor2_28;
            MR_Word OtherFunctors_29;
            MR_Word CJCsRepn_30;

            parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_6, Var_172, &MaybeFunctor1_15);
            parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_6, Var_174, &MaybeFunctor2_16);
            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_176, &OtherFunctorTerms_17);
            if (succeeded)
            {
              MR_Word OtherFunctors0_18;
              MR_Word OtherFunctorSpecs_19;

              parse_tree__parse_type_repn__parse_du_functors_4_p_0(VarSet_6, OtherFunctorTerms_17, &OtherFunctors0_18, &OtherFunctorSpecs_19);
              if ((OtherFunctorSpecs_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MaybeOtherFunctors_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeOtherFunctors_20, 0) = ((MR_Box) (OtherFunctors0_18));
                }
              else
              {
                MR_Word HeadSpec_21 = ((MR_Word) ((MR_hl_field(1, OtherFunctorSpecs_19, 0))));
                MR_Word TailSpecs_22 = ((MR_Word) ((MR_hl_field(1, OtherFunctorSpecs_19, 1))));
                MR_Word Var_50;

                {
                  Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_50, 0) = ((MR_Box) (HeadSpec_21));
                  MR_hl_field(0, Var_50, 1) = ((MR_Box) (TailSpecs_22));
                }
                {
                  MaybeOtherFunctors_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeOtherFunctors_20, 0) = ((MR_Box) (Var_50));
                }
              }
            }
            else
            {
              MR_Word Pieces_23;
              MR_Word Spec_24;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_64;
              MR_Word Var_65;

              {
                Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_54, 1) = ((MR_Box) (AtomStr_8));
              }
              {
                Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[122])));
              }
              {
                Pieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[96])));
                MR_hl_field(1, Pieces_23, 1) = ((MR_Box) (Var_53));
              }
              Var_64 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_176);
              {
                Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_more_functors\'/5"));
                MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Var_64));
                MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
              }
              {
                Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_65, 0) = ((MR_Box) (Spec_24));
                MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeOtherFunctors_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeOtherFunctors_20, 0) = ((MR_Box) (Var_65));
              }
            }
            {
              Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_70, 1) = ((MR_Box) (AtomStr_8));
            }
            {
              Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              DescPieces4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DescPieces4_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[120])));
              MR_hl_field(1, DescPieces4_25, 1) = ((MR_Box) (Var_69));
            }
            parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0(DescPieces4_25, VarSet_6, Var_178, &MaybeCJCsRepn_26);
            succeeded = ((MR_tag((MR_Word) MaybeFunctor1_15)) == (MR_Integer) 1);
            if (succeeded)
            {
              Functor1_27 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor1_15, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeFunctor2_16)) == (MR_Integer) 1);
              if (succeeded)
              {
                Functor2_28 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor2_16, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeOtherFunctors_20)) == (MR_Integer) 1);
                if (succeeded)
                {
                  OtherFunctors_29 = ((MR_Word) ((MR_hl_field(1, MaybeOtherFunctors_20, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeCJCsRepn_26)) == (MR_Integer) 1);
                  if (succeeded)
                    CJCsRepn_30 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepn_26, 0))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word MoreFunctors_31;
              MR_Word Var_72;

              {
                MoreFunctors_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MoreFunctors_31, 0) = ((MR_Box) (Functor1_27));
                MR_hl_field(0, MoreFunctors_31, 1) = ((MR_Box) (Functor2_28));
                MR_hl_field(0, MoreFunctors_31, 2) = ((MR_Box) (OtherFunctors_29));
                MR_hl_field(0, MoreFunctors_31, 3) = ((MR_Box) (CJCsRepn_30));
              }
              {
                Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_72, 1) = ((MR_Box) (MoreFunctors_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeDuRepn_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
              }
            }
            else
            {
              MR_Word Specs_32;
              MR_Word OoMSpecs_33;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;

              Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_gen_du_functor_repn_0), MaybeFunctor1_15);
              Var_75 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_gen_du_functor_repn_0), MaybeFunctor2_16);
              Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[8]), MaybeOtherFunctors_20);
              Var_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[5]), MaybeCJCsRepn_26);
              Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_77, Var_78);
              Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_75, Var_76);
              Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_73, Var_74);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_32, &OoMSpecs_33);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuRepn_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_33));
              }
            }
          }
          else
          {
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_155;
            MR_Word Pieces_157;
            MR_Word Spec_158;

            {
              Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_150, 1) = ((MR_Box) (AtomStr_8));
            }
            {
              Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
              MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[80])));
            }
            {
              Pieces_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_157, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_157, 1) = ((MR_Box) (Var_149));
            }
            {
              Spec_158 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_158, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_more_functors\'/5"));
              MR_hl_field(0, Spec_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_158, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_158, 3) = ((MR_Box) (TermContext_7));
              MR_hl_field(0, Spec_158, 4) = ((MR_Box) (Pieces_157));
            }
            {
              Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_155, 0) = ((MR_Box) (Spec_158));
              MR_hl_field(0, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_155));
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
    MR_Word Term_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word MaybeDuFunctor_11;
    MR_Word STATE_VARIABLE_DuFunctors_1_16;
    MR_Word STATE_VARIABLE_Specs_1_17;

    parse_tree__parse_type_repn__parse_du_functors_4_p_0(VarSet_1, Terms_8, &STATE_VARIABLE_DuFunctors_1_16, &STATE_VARIABLE_Specs_1_17);
    parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_1, Term_7, &MaybeDuFunctor_11);
    if (((MR_tag((MR_Word) MaybeDuFunctor_11)) == (MR_Integer) 0))
    {
      MR_Word OoMSpecs_13 = ((MR_Word) ((MR_hl_field(0, MaybeDuFunctor_11, 0))));
      MR_Word Var_20;

      Var_20 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMSpecs_13);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_20, STATE_VARIABLE_Specs_1_17);
      *HeadVar__3_3 = STATE_VARIABLE_DuFunctors_1_16;
    }
    else
    {
      MR_Word DuFunctor_12 = ((MR_Word) ((MR_hl_field(1, MaybeDuFunctor_11, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DuFunctor_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_DuFunctors_1_16));
      }
      *HeadVar__4_4 = STATE_VARIABLE_Specs_1_17;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeNonConstantRepn_6;

  parse_tree__parse_type_repn__parse_more_nonconstant_repn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_MaybeNonConstantRepn_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_MaybeNonConstantRepn_6));
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeConstantRepn_6;

  parse_tree__parse_type_repn__parse_constant_repn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeConstantRepn_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeConstantRepn_6));
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_du_functor_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDuFunctor_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomStr_7;
  MR_Word ArgTerms_8;
  MR_Word TermContext_9;
  MR_Word Var_48;

  if (succeeded)
  {
    Var_48 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    ArgTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_7 = ((MR_String) ((MR_hl_field(0, Var_48, 0))));
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
        MR_Word Pieces_26;
        MR_Word Spec_27;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_86;

        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
        }
        {
          Pieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_26, 1) = ((MR_Box) (Var_75));
        }
        {
          Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
          MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_27, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_26));
        }
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_86, 0) = ((MR_Box) (Spec_27));
          MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuFunctor_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
        }
      }
      else
      {
        MR_Word Var_329 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
        MR_Word Var_330 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

        if ((Var_329 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_245;
          MR_Word Spec_246;
          MR_Word Var_249;
          MR_Word Var_250;
          MR_Word Var_255;

          {
            Var_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_250, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_250, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_249, 0) = ((MR_Box) (Var_250));
            MR_hl_field(1, Var_249, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
          }
          {
            Pieces_245 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_245, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_245, 1) = ((MR_Box) (Var_249));
          }
          {
            Spec_246 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_246, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
            MR_hl_field(0, Spec_246, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_246, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_246, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_246, 4) = ((MR_Box) (Pieces_245));
          }
          {
            Var_255 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_255, 0) = ((MR_Box) (Spec_246));
            MR_hl_field(0, Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuFunctor_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_255));
          }
        }
        else
        {
          MR_Word Var_333 = ((MR_Word) ((MR_hl_field(1, Var_329, 1))));
          MR_Word Var_334 = ((MR_Word) ((MR_hl_field(1, Var_329, 0))));

          if ((Var_333 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeFunctorName_13;
            MR_Word MaybeConstantCRepns_15;
            MR_String FunctorName_16;
            MR_Word ConstantCRepns_17;

            parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_4, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[125])), (MR_String) "function symbol", Var_330, &MaybeFunctorName_13);
            parse_tree__parse_type_repn__parse_c_repns_5_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_constant_repn_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[127])), (MR_Word) (&parse_tree__parse_type_repn_scalar_common_3[3]), VarSet_4, Var_334, &MaybeConstantCRepns_15);
            succeeded = ((MR_tag((MR_Word) MaybeFunctorName_13)) == (MR_Integer) 1);
            if (succeeded)
            {
              FunctorName_16 = ((MR_String) ((MR_hl_field(1, MaybeFunctorName_13, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeConstantCRepns_15)) == (MR_Integer) 1);
              if (succeeded)
                ConstantCRepns_17 = ((MR_Word) ((MR_hl_field(1, MaybeConstantCRepns_15, 0))));
            }
            if (succeeded)
            {
              MR_Word DuFunctor_18;

              {
                DuFunctor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DuFunctor_18, 0) = ((MR_Box) (FunctorName_16));
                MR_hl_field(0, DuFunctor_18, 1) = ((MR_Box) (ConstantCRepns_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeDuFunctor_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (DuFunctor_18));
              }
            }
            else
            {
              MR_Word Specs_19;
              MR_Word OoMSpecs_20;
              MR_Word Var_68;
              MR_Word Var_69;

              Var_68 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_13);
              Var_69 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[9]), MaybeConstantCRepns_15);
              Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_68, Var_69);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_19, &OoMSpecs_20);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuFunctor_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_20));
              }
            }
          }
          else
          {
            MR_Word Pieces_257;
            MR_Word Spec_258;
            MR_Word Var_261;
            MR_Word Var_262;
            MR_Word Var_267;

            {
              Var_262 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_262, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_262, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_261, 0) = ((MR_Box) (Var_262));
              MR_hl_field(1, Var_261, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[67])));
            }
            {
              Pieces_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_257, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_257, 1) = ((MR_Box) (Var_261));
            }
            {
              Spec_258 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_258, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
              MR_hl_field(0, Spec_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_258, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_258, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_258, 4) = ((MR_Box) (Pieces_257));
            }
            {
              Var_267 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_267, 0) = ((MR_Box) (Spec_258));
              MR_hl_field(0, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuFunctor_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_267));
            }
          }
        }
      }
    else
    if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_158;
      MR_Word Pieces_205;
      MR_Word Spec_206;

      {
        Var_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_148, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_148, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
        MR_hl_field(1, Var_147, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
      }
      {
        Pieces_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_205, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_205, 1) = ((MR_Box) (Var_147));
      }
      {
        Spec_206 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
        MR_hl_field(0, Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_206, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(0, Spec_206, 4) = ((MR_Box) (Pieces_205));
      }
      {
        Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_158, 0) = ((MR_Box) (Spec_206));
        MR_hl_field(0, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuFunctor_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_158));
      }
    }
    else
    {
      MR_Word Var_331 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 1))));
      MR_Word Var_332 = ((MR_Word) ((MR_hl_field(1, ArgTerms_8, 0))));

      if ((Var_331 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_283;
        MR_Word Var_284;
        MR_Word Var_289;
        MR_Word Pieces_291;
        MR_Word Spec_292;

        {
          Var_284 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_284, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_284, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_283, 0) = ((MR_Box) (Var_284));
          MR_hl_field(1, Var_283, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
        }
        {
          Pieces_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_291, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_291, 1) = ((MR_Box) (Var_283));
        }
        {
          Spec_292 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_292, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
          MR_hl_field(0, Spec_292, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_292, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_292, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_292, 4) = ((MR_Box) (Pieces_291));
        }
        {
          Var_289 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_289, 0) = ((MR_Box) (Spec_292));
          MR_hl_field(0, Var_289, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuFunctor_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_289));
        }
      }
      else
      {
        MR_Word Var_335 = ((MR_Word) ((MR_hl_field(1, Var_331, 1))));
        MR_Word Var_336 = ((MR_Word) ((MR_hl_field(1, Var_331, 0))));

        if ((Var_335 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_295;
          MR_Word Var_296;
          MR_Word Var_301;
          MR_Word Pieces_303;
          MR_Word Spec_304;

          {
            Var_296 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_296, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_296, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_295 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_295, 0) = ((MR_Box) (Var_296));
            MR_hl_field(1, Var_295, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
          }
          {
            Pieces_303 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_303, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
            MR_hl_field(1, Pieces_303, 1) = ((MR_Box) (Var_295));
          }
          {
            Spec_304 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_304, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
            MR_hl_field(0, Spec_304, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_304, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_304, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(0, Spec_304, 4) = ((MR_Box) (Pieces_303));
          }
          {
            Var_301 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_301, 0) = ((MR_Box) (Spec_304));
            MR_hl_field(0, Var_301, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuFunctor_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_301));
          }
        }
        else
        {
          MR_Word Var_337 = ((MR_Word) ((MR_hl_field(1, Var_335, 1))));
          MR_Word Var_338 = ((MR_Word) ((MR_hl_field(1, Var_335, 0))));

          if ((Var_337 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ContextPieces_29;
            MR_Word MaybeArgTypes_32;
            MR_Word DescPieces3_35;
            MR_Word MaybeNonConstantCRepns_36;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_131;
            MR_Word MaybeFunctorName_200;
            MR_Word TypeTerms_30;
            MR_Word ArgTypes_37;
            MR_Word NonConstantCRepns_38;
            MR_String FunctorName_194;

            {
              Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_94, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[84])));
            }
            {
              ContextPieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ContextPieces_29, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[74])));
              MR_hl_field(1, ContextPieces_29, 1) = ((MR_Box) (Var_93));
            }
            parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_4, ContextPieces_29, (MR_String) "function symbol", Var_332, &MaybeFunctorName_200);
            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_336, &TypeTerms_30);
            if (succeeded)
            {
              MR_Word ContextPieces2_31;
              MR_Word Var_100;
              MR_Word Var_103;

              {
                Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[116])));
                MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[115])));
                MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
              }
              ContextPieces2_31 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100);
              parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_4, ContextPieces2_31, TypeTerms_30, &MaybeArgTypes_32);
            }
            else
            {
              MR_Word ArgTypePieces_33;
              MR_Word ArgTypeSpec_34;
              MR_Word Var_115;
              MR_Word Var_126;
              MR_Word Var_127;

              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_94));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[119])));
              }
              {
                ArgTypePieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgTypePieces_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[117])));
                MR_hl_field(1, ArgTypePieces_33, 1) = ((MR_Box) (Var_115));
              }
              Var_126 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_336);
              {
                ArgTypeSpec_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgTypeSpec_34, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
                MR_hl_field(0, ArgTypeSpec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ArgTypeSpec_34, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, ArgTypeSpec_34, 3) = ((MR_Box) (Var_126));
                MR_hl_field(0, ArgTypeSpec_34, 4) = ((MR_Box) (ArgTypePieces_33));
              }
              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_127, 0) = ((MR_Box) (ArgTypeSpec_34));
                MR_hl_field(0, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeArgTypes_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeArgTypes_32, 0) = ((MR_Box) (Var_127));
              }
            }
            {
              Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_94));
              MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              DescPieces3_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DescPieces3_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[89])));
              MR_hl_field(1, DescPieces3_35, 1) = ((MR_Box) (Var_131));
            }
            parse_tree__parse_type_repn__parse_c_repns_5_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_more_nonconstant_repn_0), DescPieces3_35, (MR_Word) (&parse_tree__parse_type_repn_scalar_common_3[4]), VarSet_4, Var_338, &MaybeNonConstantCRepns_36);
            succeeded = ((MR_tag((MR_Word) MaybeFunctorName_200)) == (MR_Integer) 1);
            if (succeeded)
            {
              FunctorName_194 = ((MR_String) ((MR_hl_field(1, MaybeFunctorName_200, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeArgTypes_32)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgTypes_37 = ((MR_Word) ((MR_hl_field(1, MaybeArgTypes_32, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeNonConstantCRepns_36)) == (MR_Integer) 1);
                if (succeeded)
                  NonConstantCRepns_38 = ((MR_Word) ((MR_hl_field(1, MaybeNonConstantCRepns_36, 0))));
              }
            }
            if (succeeded)
            {
              MR_Word DuFunctor_191;

              {
                DuFunctor_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, DuFunctor_191, 0) = ((MR_Box) (FunctorName_194));
                MR_hl_field(1, DuFunctor_191, 1) = ((MR_Box) (ArgTypes_37));
                MR_hl_field(1, DuFunctor_191, 2) = ((MR_Box) (NonConstantCRepns_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeDuFunctor_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (DuFunctor_191));
              }
            }
            else
            {
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Specs_192;
              MR_Word OoMSpecs_193;

              Var_135 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_200);
              Var_137 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[6]), MaybeArgTypes_32);
              Var_138 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[10]), MaybeNonConstantCRepns_36);
              Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_137, Var_138);
              Specs_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_135, Var_136);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_192, &OoMSpecs_193);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuFunctor_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_193));
              }
            }
          }
          else
          {
            MR_Word Var_307;
            MR_Word Var_308;
            MR_Word Var_313;
            MR_Word Pieces_315;
            MR_Word Spec_316;

            {
              Var_308 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_308, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_308, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_307 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_307, 0) = ((MR_Box) (Var_308));
              MR_hl_field(1, Var_307, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
            }
            {
              Pieces_315 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_315, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
              MR_hl_field(1, Pieces_315, 1) = ((MR_Box) (Var_307));
            }
            {
              Spec_316 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_316, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
              MR_hl_field(0, Spec_316, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_316, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_316, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(0, Spec_316, 4) = ((MR_Box) (Pieces_315));
            }
            {
              Var_313 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_313, 0) = ((MR_Box) (Spec_316));
              MR_hl_field(0, Var_313, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuFunctor_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_313));
            }
          }
        }
      }
    }
  else
  {
    MR_String TermStr_47;
    MR_Word Var_162;
    MR_Word Var_165;
    MR_Word Var_168;
    MR_Word Var_171;
    MR_Word Var_174;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Pieces_225;
    MR_Word Spec_226;

    TermStr_47 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_178, 1) = ((MR_Box) (TermStr_47));
    }
    {
      Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
      MR_hl_field(1, Var_177, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_174, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_177));
    }
    {
      Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_171, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_174));
    }
    {
      Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_168, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[129])));
      MR_hl_field(1, Var_168, 1) = ((MR_Box) (Var_171));
    }
    {
      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_165, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_168));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[128])));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_165));
    }
    {
      Pieces_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_225, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[60])));
      MR_hl_field(1, Pieces_225, 1) = ((MR_Box) (Var_162));
    }
    Var_188 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_226 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_226, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_du_functor\'/3"));
      MR_hl_field(0, Spec_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_226, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_226, 3) = ((MR_Box) (Var_188));
      MR_hl_field(0, Spec_226, 4) = ((MR_Box) (Pieces_225));
    }
    {
      Var_189 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_189, 0) = ((MR_Box) (Spec_226));
      MR_hl_field(0, Var_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuFunctor_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_189));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeNonConstantRepn_6;

  parse_tree__parse_type_repn__parse_only_nonconstant_repn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeNonConstantRepn_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeNonConstantRepn_6));
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_gen_du_only_functor_5_p_0(
  MR_Word VarSet_6,
  MR_Word TermContext_7,
  MR_String AtomStr_8,
  MR_Word ArgTerms_9,
  MR_Word * MaybeDuRepn_10)
{
  MR_bool succeeded;

  if ((ArgTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_46;
    MR_Word Var_131;

    {
      Spec_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_only_functor\'/5"));
      MR_hl_field(0, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_46, 3) = ((MR_Box) (TermContext_7));
      MR_hl_field(0, Spec_46, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[114])));
    }
    {
      Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_131, 0) = ((MR_Box) (Spec_46));
      MR_hl_field(0, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
    }
  }
  else
  {
    MR_Word Var_179 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    MR_Word Var_180 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));

    if ((Var_179 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_145;
      MR_Word Var_149;

      {
        Spec_145 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_145, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_only_functor\'/5"));
        MR_hl_field(0, Spec_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_145, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_145, 3) = ((MR_Box) (TermContext_7));
        MR_hl_field(0, Spec_145, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[114])));
      }
      {
        Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_149, 0) = ((MR_Box) (Spec_145));
        MR_hl_field(0, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_149));
      }
    }
    else
    {
      MR_Word Var_181 = ((MR_Word) ((MR_hl_field(1, Var_179, 1))));
      MR_Word Var_182 = ((MR_Word) ((MR_hl_field(1, Var_179, 0))));

      if ((Var_181 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_152;
        MR_Word Var_156;

        {
          Spec_152 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_152, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_only_functor\'/5"));
          MR_hl_field(0, Spec_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_152, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_152, 3) = ((MR_Box) (TermContext_7));
          MR_hl_field(0, Spec_152, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[114])));
        }
        {
          Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_156, 0) = ((MR_Box) (Spec_152));
          MR_hl_field(0, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_156));
        }
      }
      else
      {
        MR_Word Var_183 = ((MR_Word) ((MR_hl_field(1, Var_181, 1))));
        MR_Word Var_184 = ((MR_Word) ((MR_hl_field(1, Var_181, 0))));

        if ((Var_183 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_159;
          MR_Word Var_163;

          {
            Spec_159 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_159, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_only_functor\'/5"));
            MR_hl_field(0, Spec_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_159, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_159, 3) = ((MR_Box) (TermContext_7));
            MR_hl_field(0, Spec_159, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[114])));
          }
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_163, 0) = ((MR_Box) (Spec_159));
            MR_hl_field(0, Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_163));
          }
        }
        else
        {
          MR_Word Var_185 = ((MR_Word) ((MR_hl_field(1, Var_183, 1))));
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(1, Var_183, 0))));

          if ((Var_185 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ContextPieces1_15;
            MR_Word MaybeFunctorName_16;
            MR_Word MaybeArgTypes_19;
            MR_Word DescPieces3_22;
            MR_Word MaybeCRepns_23;
            MR_Word DescPieces4_24;
            MR_Word MaybeCJCsRepn_25;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_91;
            MR_Word TypeTerms_17;
            MR_String FunctorName_26;
            MR_Word CRepns_27;
            MR_Word ArgTypes_28;
            MR_Word CJCsRepn_29;

            {
              Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_54, 1) = ((MR_Box) (AtomStr_8));
            }
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[84])));
            }
            {
              ContextPieces1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ContextPieces1_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[74])));
              MR_hl_field(1, ContextPieces1_15, 1) = ((MR_Box) (Var_53));
            }
            parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_6, ContextPieces1_15, (MR_String) "function symbol", Var_180, &MaybeFunctorName_16);
            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_182, &TypeTerms_17);
            if (succeeded)
            {
              MR_Word ContextPieces2_18;
              MR_Word Var_60;
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[116])));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[115])));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
              }
              ContextPieces2_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60);
              parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_6, ContextPieces2_18, TypeTerms_17, &MaybeArgTypes_19);
            }
            else
            {
              MR_Word ArgTypePieces_20;
              MR_Word ArgTypeSpec_21;
              MR_Word Var_75;
              MR_Word Var_86;
              MR_Word Var_87;

              {
                Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_54));
                MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[119])));
              }
              {
                ArgTypePieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgTypePieces_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[117])));
                MR_hl_field(1, ArgTypePieces_20, 1) = ((MR_Box) (Var_75));
              }
              Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_182);
              {
                ArgTypeSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgTypeSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_only_functor\'/5"));
                MR_hl_field(0, ArgTypeSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ArgTypeSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, ArgTypeSpec_21, 3) = ((MR_Box) (Var_86));
                MR_hl_field(0, ArgTypeSpec_21, 4) = ((MR_Box) (ArgTypePieces_20));
              }
              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_87, 0) = ((MR_Box) (ArgTypeSpec_21));
                MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeArgTypes_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeArgTypes_19, 0) = ((MR_Box) (Var_87));
              }
            }
            {
              Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_54));
              MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              DescPieces3_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DescPieces3_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[89])));
              MR_hl_field(1, DescPieces3_22, 1) = ((MR_Box) (Var_91));
            }
            parse_tree__parse_type_repn__parse_c_repns_5_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_only_nonconstant_repn_0), DescPieces3_22, (MR_Word) (&parse_tree__parse_type_repn_scalar_common_3[2]), VarSet_6, Var_184, &MaybeCRepns_23);
            {
              DescPieces4_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DescPieces4_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[120])));
              MR_hl_field(1, DescPieces4_24, 1) = ((MR_Box) (Var_91));
            }
            parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0(DescPieces4_24, VarSet_6, Var_186, &MaybeCJCsRepn_25);
            succeeded = ((MR_tag((MR_Word) MaybeFunctorName_16)) == (MR_Integer) 1);
            if (succeeded)
            {
              FunctorName_26 = ((MR_String) ((MR_hl_field(1, MaybeFunctorName_16, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCRepns_23)) == (MR_Integer) 1);
              if (succeeded)
              {
                CRepns_27 = ((MR_Word) ((MR_hl_field(1, MaybeCRepns_23, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeArgTypes_19)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgTypes_28 = ((MR_Word) ((MR_hl_field(1, MaybeArgTypes_19, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeCJCsRepn_25)) == (MR_Integer) 1);
                  if (succeeded)
                    CJCsRepn_29 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepn_25, 0))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word OnlyFunctor_30;
              MR_Word Var_100;

              {
                OnlyFunctor_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OnlyFunctor_30, 0) = ((MR_Box) (FunctorName_26));
                MR_hl_field(0, OnlyFunctor_30, 1) = ((MR_Box) (ArgTypes_28));
                MR_hl_field(0, OnlyFunctor_30, 2) = ((MR_Box) (CRepns_27));
                MR_hl_field(0, OnlyFunctor_30, 3) = ((MR_Box) (CJCsRepn_29));
              }
              {
                Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_100, 1) = ((MR_Box) (OnlyFunctor_30));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeDuRepn_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_100));
              }
            }
            else
            {
              MR_Word Specs_31;
              MR_Word OoMSpecs_32;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;

              Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_16);
              Var_103 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[6]), MaybeArgTypes_19);
              Var_105 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[7]), MaybeCRepns_23);
              Var_106 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[5]), MaybeCJCsRepn_25);
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_105, Var_106);
              Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_103, Var_104);
              Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_101, Var_102);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_31, &OoMSpecs_32);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuRepn_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_32));
              }
            }
          }
          else
          {
            MR_Word Spec_166;
            MR_Word Var_170;

            {
              Spec_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_166, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_gen_du_only_functor\'/5"));
              MR_hl_field(0, Spec_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_166, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_166, 3) = ((MR_Box) (TermContext_7));
              MR_hl_field(0, Spec_166, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[114])));
            }
            {
              Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_170, 0) = ((MR_Box) (Spec_166));
              MR_hl_field(0, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_170));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_repns_5_p_0(
  MR_Word TypeInfo_for_T_281,
  MR_Word DescPieces_6,
  MR_Word ParseRepn_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeCRepns_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_String AtomStr_11;
  MR_Word ArgTerms_12;
  MR_Word Var_68;

  if (succeeded)
  {
    Var_68 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_11 = ((MR_String) ((MR_hl_field(0, Var_68, 0))));
      if ((strcmp(AtomStr_11, (MR_String) "c_repns_all") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_11, (MR_String) "c_repns_same") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_11, (MR_String) "c_repns_64_32") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_11, (MR_String) "c_repns_all") == 0))
      if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_160;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Pieces_257;
        MR_Word Spec_258;

        {
          Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
          MR_hl_field(1, Var_160, 1) = ((MR_Box) (DescPieces_6));
        }
        Pieces_257 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
        Var_178 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_258 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_258, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
          MR_hl_field(0, Spec_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_258, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_258, 3) = ((MR_Box) (Var_178));
          MR_hl_field(0, Spec_258, 4) = ((MR_Box) (Pieces_257));
        }
        {
          Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_179, 0) = ((MR_Box) (Spec_258));
          MR_hl_field(0, Var_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCRepns_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_179));
        }
      }
      else
      {
        MR_Word Var_462 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
        MR_Word Var_463 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

        if ((Var_462 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_334;
          MR_Word Var_341;
          MR_Word Var_342;
          MR_Word Pieces_344;
          MR_Word Spec_345;

          {
            Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_334, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
            MR_hl_field(1, Var_334, 1) = ((MR_Box) (DescPieces_6));
          }
          Pieces_344 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_334, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
          Var_341 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_345 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_345, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
            MR_hl_field(0, Spec_345, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_345, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_345, 3) = ((MR_Box) (Var_341));
            MR_hl_field(0, Spec_345, 4) = ((MR_Box) (Pieces_344));
          }
          {
            Var_342 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_342, 0) = ((MR_Box) (Spec_345));
            MR_hl_field(0, Var_342, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCRepns_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_342));
          }
        }
        else
        {
          MR_Word Var_468 = ((MR_Word) ((MR_hl_field(1, Var_462, 1))));
          MR_Word Var_469 = ((MR_Word) ((MR_hl_field(1, Var_462, 0))));

          if ((Var_468 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_348;
            MR_Word Var_355;
            MR_Word Var_356;
            MR_Word Pieces_358;
            MR_Word Spec_359;

            {
              Var_348 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_348, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
              MR_hl_field(1, Var_348, 1) = ((MR_Box) (DescPieces_6));
            }
            Pieces_358 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_348, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
            Var_355 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
            {
              Spec_359 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_359, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
              MR_hl_field(0, Spec_359, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_359, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_359, 3) = ((MR_Box) (Var_355));
              MR_hl_field(0, Spec_359, 4) = ((MR_Box) (Pieces_358));
            }
            {
              Var_356 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_356, 0) = ((MR_Box) (Spec_359));
              MR_hl_field(0, Var_356, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCRepns_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_356));
            }
          }
          else
          {
            MR_Word Var_470 = ((MR_Word) ((MR_hl_field(1, Var_468, 1))));
            MR_Word Var_471 = ((MR_Word) ((MR_hl_field(1, Var_468, 0))));

            if ((Var_470 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_362;
              MR_Word Var_369;
              MR_Word Var_370;
              MR_Word Pieces_372;
              MR_Word Spec_373;

              {
                Var_362 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_362, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
                MR_hl_field(1, Var_362, 1) = ((MR_Box) (DescPieces_6));
              }
              Pieces_372 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_362, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
              Var_369 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
              {
                Spec_373 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_373, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
                MR_hl_field(0, Spec_373, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_373, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_373, 3) = ((MR_Box) (Var_369));
                MR_hl_field(0, Spec_373, 4) = ((MR_Box) (Pieces_372));
              }
              {
                Var_370 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_370, 0) = ((MR_Box) (Spec_373));
                MR_hl_field(0, Var_370, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCRepns_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_370));
              }
            }
            else
            {
              MR_Word Var_472 = ((MR_Word) ((MR_hl_field(1, Var_470, 1))));
              MR_Word Var_473 = ((MR_Word) ((MR_hl_field(1, Var_470, 0))));

              if ((Var_472 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_376;
                MR_Word Var_383;
                MR_Word Var_384;
                MR_Word Pieces_386;
                MR_Word Spec_387;

                {
                  Var_376 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_376, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
                  MR_hl_field(1, Var_376, 1) = ((MR_Box) (DescPieces_6));
                }
                Pieces_386 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_376, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
                Var_383 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
                {
                  Spec_387 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_387, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
                  MR_hl_field(0, Spec_387, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_387, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_387, 3) = ((MR_Box) (Var_383));
                  MR_hl_field(0, Spec_387, 4) = ((MR_Box) (Pieces_386));
                }
                {
                  Var_384 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_384, 0) = ((MR_Box) (Spec_387));
                  MR_hl_field(0, Var_384, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeCRepns_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_384));
                }
              }
              else
              {
                MR_Word Var_474 = ((MR_Word) ((MR_hl_field(1, Var_472, 1))));
                MR_Word Var_475 = ((MR_Word) ((MR_hl_field(1, Var_472, 0))));

                if ((Var_474 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_390;
                  MR_Word Var_397;
                  MR_Word Var_398;
                  MR_Word Pieces_400;
                  MR_Word Spec_401;

                  {
                    Var_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_390, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
                    MR_hl_field(1, Var_390, 1) = ((MR_Box) (DescPieces_6));
                  }
                  Pieces_400 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_390, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
                  Var_397 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
                  {
                    Spec_401 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_401, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
                    MR_hl_field(0, Spec_401, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_401, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_401, 3) = ((MR_Box) (Var_397));
                    MR_hl_field(0, Spec_401, 4) = ((MR_Box) (Pieces_400));
                  }
                  {
                    Var_398 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_398, 0) = ((MR_Box) (Spec_401));
                    MR_hl_field(0, Var_398, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeCRepns_10 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_398));
                  }
                }
                else
                {
                  MR_Word Var_476 = ((MR_Word) ((MR_hl_field(1, Var_474, 1))));
                  MR_Word Var_477 = ((MR_Word) ((MR_hl_field(1, Var_474, 0))));

                  if ((Var_476 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeRepn3_36;
                    MR_Word MaybeRepn4_37;
                    MR_Word MaybeRepn5_38;
                    MR_Word MaybeRepn6_39;
                    MR_Word MaybeRepn1_250;
                    MR_Word MaybeRepn2_254;
                    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
                    MR_Box conv1_MaybeRepn1_250;
                    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Box conv3_MaybeRepn2_254;
                    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Box conv5_MaybeRepn3_36;
                    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Box conv7_MaybeRepn4_37;
                    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Box conv9_MaybeRepn5_38;
                    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Box conv11_MaybeRepn6_39;
                    MR_Box Repn3_40;
                    MR_Box Repn4_41;
                    MR_Box Repn5_42;
                    MR_Box Repn6_43;
                    MR_Box Repn1_245;
                    MR_Box Repn2_247;

                    func_0(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_463)), &conv1_MaybeRepn1_250);
                    MaybeRepn1_250 = ((MR_Word) (conv1_MaybeRepn1_250));
                    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
                    func_2(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_469)), &conv3_MaybeRepn2_254);
                    MaybeRepn2_254 = ((MR_Word) (conv3_MaybeRepn2_254));
                    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
                    func_4(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_471)), &conv5_MaybeRepn3_36);
                    MaybeRepn3_36 = ((MR_Word) (conv5_MaybeRepn3_36));
                    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
                    func_6(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_473)), &conv7_MaybeRepn4_37);
                    MaybeRepn4_37 = ((MR_Word) (conv7_MaybeRepn4_37));
                    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
                    func_8(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_475)), &conv9_MaybeRepn5_38);
                    MaybeRepn5_38 = ((MR_Word) (conv9_MaybeRepn5_38));
                    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
                    func_10(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_477)), &conv11_MaybeRepn6_39);
                    MaybeRepn6_39 = ((MR_Word) (conv11_MaybeRepn6_39));
                    succeeded = ((MR_tag((MR_Word) MaybeRepn1_250)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Repn1_245 = (MR_hl_field(1, MaybeRepn1_250, 0));
                      succeeded = ((MR_tag((MR_Word) MaybeRepn2_254)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Repn2_247 = (MR_hl_field(1, MaybeRepn2_254, 0));
                        succeeded = ((MR_tag((MR_Word) MaybeRepn3_36)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Repn3_40 = (MR_hl_field(1, MaybeRepn3_36, 0));
                          succeeded = ((MR_tag((MR_Word) MaybeRepn4_37)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Repn4_41 = (MR_hl_field(1, MaybeRepn4_37, 0));
                            succeeded = ((MR_tag((MR_Word) MaybeRepn5_38)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              Repn5_42 = (MR_hl_field(1, MaybeRepn5_38, 0));
                              succeeded = ((MR_tag((MR_Word) MaybeRepn6_39)) == (MR_Integer) 1);
                              if (succeeded)
                                Repn6_43 = (MR_hl_field(1, MaybeRepn6_39, 0));
                            }
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_128;

                      {
                        Var_128 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_128, 0) = Repn1_245;
                        MR_hl_field(2, Var_128, 1) = Repn2_247;
                        MR_hl_field(2, Var_128, 2) = Repn3_40;
                        MR_hl_field(2, Var_128, 3) = Repn4_41;
                        MR_hl_field(2, Var_128, 4) = Repn5_42;
                        MR_hl_field(2, Var_128, 5) = Repn6_43;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeCRepns_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_128));
                      }
                    }
                    else
                    {
                      MR_Word Var_129;
                      MR_Word Var_130;
                      MR_Word Var_131;
                      MR_Word Var_132;
                      MR_Word Var_133;
                      MR_Word Var_134;
                      MR_Word Var_135;
                      MR_Word Var_136;
                      MR_Word Var_137;
                      MR_Word Var_138;
                      MR_Word Specs_243;
                      MR_Word OoMSpecs_244;

                      Var_129 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn1_250);
                      Var_131 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn2_254);
                      Var_133 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn3_36);
                      Var_135 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn4_37);
                      Var_137 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn5_38);
                      Var_138 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn6_39);
                      Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_137, Var_138);
                      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_135, Var_136);
                      Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_133, Var_134);
                      Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_131, Var_132);
                      Specs_243 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_129, Var_130);
                      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_243, &OoMSpecs_244);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeCRepns_10 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_244));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_404;
                    MR_Word Var_411;
                    MR_Word Var_412;
                    MR_Word Pieces_414;
                    MR_Word Spec_415;

                    {
                      Var_404 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_404, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
                      MR_hl_field(1, Var_404, 1) = ((MR_Box) (DescPieces_6));
                    }
                    Pieces_414 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_404, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[219])));
                    Var_411 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
                    {
                      Spec_415 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Spec_415, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
                      MR_hl_field(0, Spec_415, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, Spec_415, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                      MR_hl_field(0, Spec_415, 3) = ((MR_Box) (Var_411));
                      MR_hl_field(0, Spec_415, 4) = ((MR_Box) (Pieces_414));
                    }
                    {
                      Var_412 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_412, 0) = ((MR_Box) (Spec_415));
                      MR_hl_field(0, Var_412, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeCRepns_10 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_412));
                    }
                  }
                }
              }
            }
          }
        }
      }
    else
    if ((strcmp(AtomStr_11, (MR_String) "c_repns_same") == 0))
      if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_21;
        MR_Word Spec_22;
        MR_Word Var_72;
        MR_Word Var_90;
        MR_Word Var_91;

        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (DescPieces_6));
        }
        Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[222])));
        Var_90 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Var_90));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
        }
        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_91, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCRepns_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_91));
        }
      }
      else
      {
        MR_Word Var_464 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
        MR_Word Var_465 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

        if ((Var_464 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeRepn1_15;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
          MR_Box conv13_MaybeRepn1_15;

          func_12(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_465)), &conv13_MaybeRepn1_15);
          MaybeRepn1_15 = ((MR_Word) (conv13_MaybeRepn1_15));
          if (((MR_tag((MR_Word) MaybeRepn1_15)) == (MR_Integer) 0))
            *MaybeCRepns_10 = (MR_Word) (MaybeRepn1_15);
          else
          {
            MR_Box Repn1_16 = (MR_hl_field(1, MaybeRepn1_15, 0));
            MR_Word Var_70;

            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_70, 0) = Repn1_16;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCRepns_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_70));
            }
          }
        }
        else
        {
          MR_Word Pieces_432;
          MR_Word Spec_433;
          MR_Word Var_434;
          MR_Word Var_441;
          MR_Word Var_442;

          {
            Var_434 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_434, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
            MR_hl_field(1, Var_434, 1) = ((MR_Box) (DescPieces_6));
          }
          Pieces_432 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_434, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[222])));
          Var_441 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_433 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_433, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
            MR_hl_field(0, Spec_433, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_433, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_433, 3) = ((MR_Box) (Var_441));
            MR_hl_field(0, Spec_433, 4) = ((MR_Box) (Pieces_432));
          }
          {
            Var_442 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_442, 0) = ((MR_Box) (Spec_433));
            MR_hl_field(0, Var_442, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCRepns_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_442));
          }
        }
      }
    else
    if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_101;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Pieces_229;
      MR_Word Spec_230;

      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) (DescPieces_6));
      }
      Pieces_229 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[214])));
      Var_119 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_230 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_230, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
        MR_hl_field(0, Spec_230, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_230, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_230, 3) = ((MR_Box) (Var_119));
        MR_hl_field(0, Spec_230, 4) = ((MR_Box) (Pieces_229));
      }
      {
        Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_120, 0) = ((MR_Box) (Spec_230));
        MR_hl_field(0, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCRepns_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_120));
      }
    }
    else
    {
      MR_Word Var_460 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
      MR_Word Var_461 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

      if ((Var_460 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_292;
        MR_Word Var_299;
        MR_Word Var_300;
        MR_Word Pieces_302;
        MR_Word Spec_303;

        {
          Var_292 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_292, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
          MR_hl_field(1, Var_292, 1) = ((MR_Box) (DescPieces_6));
        }
        Pieces_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_292, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[214])));
        Var_299 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_303 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_303, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
          MR_hl_field(0, Spec_303, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_303, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_303, 3) = ((MR_Box) (Var_299));
          MR_hl_field(0, Spec_303, 4) = ((MR_Box) (Pieces_302));
        }
        {
          Var_300 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_300, 0) = ((MR_Box) (Spec_303));
          MR_hl_field(0, Var_300, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCRepns_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_300));
        }
      }
      else
      {
        MR_Word Var_466 = ((MR_Word) ((MR_hl_field(1, Var_460, 1))));
        MR_Word Var_467 = ((MR_Word) ((MR_hl_field(1, Var_460, 0))));

        if ((Var_466 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeRepn2_24;
          MR_Word MaybeRepn1_226;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
          MR_Box conv15_MaybeRepn1_226;
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv17_MaybeRepn2_24;
          MR_Box Repn2_25;
          MR_Box Repn1_223;

          func_14(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_461)), &conv15_MaybeRepn1_226);
          MaybeRepn1_226 = ((MR_Word) (conv15_MaybeRepn1_226));
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseRepn_7, 1))));
          func_16(((MR_Box) (ParseRepn_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (Var_467)), &conv17_MaybeRepn2_24);
          MaybeRepn2_24 = ((MR_Word) (conv17_MaybeRepn2_24));
          succeeded = ((MR_tag((MR_Word) MaybeRepn1_226)) == (MR_Integer) 1);
          if (succeeded)
          {
            Repn1_223 = (MR_hl_field(1, MaybeRepn1_226, 0));
            succeeded = ((MR_tag((MR_Word) MaybeRepn2_24)) == (MR_Integer) 1);
            if (succeeded)
              Repn2_25 = (MR_hl_field(1, MaybeRepn2_24, 0));
          }
          if (succeeded)
          {
            MR_Word Var_95;

            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = Repn1_223;
              MR_hl_field(1, Var_95, 1) = Repn2_25;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCRepns_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_95));
            }
          }
          else
          {
            MR_Word OoMSpecs_26;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Specs_222;

            Var_96 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn1_226);
            Var_97 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_281, MaybeRepn2_24);
            Specs_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_96, Var_97);
            mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_222, &OoMSpecs_26);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCRepns_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_26));
            }
          }
        }
        else
        {
          MR_Word Var_306;
          MR_Word Var_313;
          MR_Word Var_314;
          MR_Word Pieces_316;
          MR_Word Spec_317;

          {
            Var_306 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_306, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
            MR_hl_field(1, Var_306, 1) = ((MR_Box) (DescPieces_6));
          }
          Pieces_316 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_306, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[214])));
          Var_313 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_317 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_317, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
            MR_hl_field(0, Spec_317, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_317, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_317, 3) = ((MR_Box) (Var_313));
            MR_hl_field(0, Spec_317, 4) = ((MR_Box) (Pieces_316));
          }
          {
            Var_314 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_314, 0) = ((MR_Box) (Spec_317));
            MR_hl_field(0, Var_314, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCRepns_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_314));
          }
        }
      }
    }
  else
  {
    MR_String TermStr_67;
    MR_Word Var_181;
    MR_Word Var_184;
    MR_Word Var_187;
    MR_Word Var_190;
    MR_Word Var_193;
    MR_Word Var_196;
    MR_Word Var_199;
    MR_Word Var_202;
    MR_Word Var_205;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Pieces_279;
    MR_Word Spec_280;

    TermStr_67 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    {
      Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_181, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
      MR_hl_field(1, Var_181, 1) = ((MR_Box) (DescPieces_6));
    }
    {
      Var_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_209, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_209, 1) = ((MR_Box) (TermStr_67));
    }
    {
      Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
      MR_hl_field(1, Var_208, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_205, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_208));
    }
    {
      Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_202, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_205));
    }
    {
      Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_199, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[225])));
      MR_hl_field(1, Var_199, 1) = ((MR_Box) (Var_202));
    }
    {
      Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_196, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[191])));
      MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_199));
    }
    {
      Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_193, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[224])));
      MR_hl_field(1, Var_193, 1) = ((MR_Box) (Var_196));
    }
    {
      Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_190, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[223])));
      MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_193));
    }
    {
      Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_187, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[198])));
      MR_hl_field(1, Var_187, 1) = ((MR_Box) (Var_190));
    }
    {
      Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_184, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
      MR_hl_field(1, Var_184, 1) = ((MR_Box) (Var_187));
    }
    Pieces_279 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_181, Var_184);
    Var_219 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_280 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_280, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_repns\'/5"));
      MR_hl_field(0, Spec_280, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_280, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_280, 3) = ((MR_Box) (Var_219));
      MR_hl_field(0, Spec_280, 4) = ((MR_Box) (Pieces_279));
    }
    {
      Var_220 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_220, 0) = ((MR_Box) (Spec_280));
      MR_hl_field(0, Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCRepns_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_220));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_du_notag_4_p_0(
  MR_Word VarSet_5,
  MR_Word TermContext_6,
  MR_Word ArgTerms_7,
  MR_Word * MaybeDuRepn_8)
{
  MR_bool succeeded;

  if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_32;
    MR_Word Var_95;

    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_notag\'/4"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (TermContext_6));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[105])));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(0, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuRepn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
    }
  }
  else
  {
    MR_Word Var_178 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    MR_Word Var_179 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));

    if ((Var_178 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_103;
      MR_Word Var_107;

      {
        Spec_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_103, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_notag\'/4"));
        MR_hl_field(0, Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_103, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_103, 3) = ((MR_Box) (TermContext_6));
        MR_hl_field(0, Spec_103, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[105])));
      }
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_107, 0) = ((MR_Box) (Spec_103));
        MR_hl_field(0, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
      }
    }
    else
    {
      MR_Word Var_180 = ((MR_Word) ((MR_hl_field(1, Var_178, 1))));
      MR_Word Var_181 = ((MR_Word) ((MR_hl_field(1, Var_178, 0))));

      if ((Var_180 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ArgTerm2_11;
        MR_Word MaybeFunctorName_13;
        MR_Word ContextPieces2_14;
        MR_Word MaybeArgType_15;
        MR_Word MaybeCJCsRepn_17;
        MR_Word Var_38;
        MR_String FunctorName_18;
        MR_Word ArgType_19;
        MR_Word CJCsRepn_20;

        Var_38 = mercury__term_context__dummy_context_0_f_0();
        {
          ArgTerm2_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgTerm2_11, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_2[0]));
          MR_hl_field(0, ArgTerm2_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ArgTerm2_11, 2) = ((MR_Box) (Var_38));
        }
        parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[107])), (MR_String) "function symbol", Var_179, &MaybeFunctorName_13);
        ContextPieces2_14 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[108])));
        parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_5, ContextPieces2_14, ArgTerm2_11, &MaybeArgType_15);
        parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[111])), VarSet_5, Var_181, &MaybeCJCsRepn_17);
        succeeded = ((MR_tag((MR_Word) MaybeFunctorName_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          FunctorName_18 = ((MR_String) ((MR_hl_field(1, MaybeFunctorName_13, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeArgType_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgType_19 = ((MR_Word) ((MR_hl_field(1, MaybeArgType_15, 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCJCsRepn_17)) == (MR_Integer) 1);
            if (succeeded)
              CJCsRepn_20 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepn_17, 0))));
          }
        }
        if (succeeded)
        {
          MR_Word NotagRepn_21;
          MR_Word DuRepn_22;

          {
            NotagRepn_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NotagRepn_21, 0) = ((MR_Box) (FunctorName_18));
            MR_hl_field(0, NotagRepn_21, 1) = ((MR_Box) (ArgType_19));
            MR_hl_field(0, NotagRepn_21, 2) = ((MR_Box) (CJCsRepn_20));
          }
          DuRepn_22 = (MR_Word) (MR_mkword(2, (MR_Word) (NotagRepn_21)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeDuRepn_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (DuRepn_22));
          }
        }
        else
        {
          MR_Word Specs_23;
          MR_Word OoMSpecs_24;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;

          Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_13);
          Var_75 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeArgType_15);
          Var_76 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[5]), MaybeCJCsRepn_17);
          Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_75, Var_76);
          Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_73, Var_74);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_23, &OoMSpecs_24);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_24));
          }
        }
      }
      else
      {
        MR_Word Var_182 = ((MR_Word) ((MR_hl_field(1, Var_180, 1))));
        MR_Word Var_183 = ((MR_Word) ((MR_hl_field(1, Var_180, 0))));

        if ((Var_182 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeFunctorName_147;
          MR_Word ContextPieces2_148;
          MR_Word MaybeArgType_149;
          MR_Word MaybeCJCsRepn_151;
          MR_String FunctorName_128;
          MR_Word ArgType_129;
          MR_Word CJCsRepn_130;

          parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[107])), (MR_String) "function symbol", Var_179, &MaybeFunctorName_147);
          ContextPieces2_148 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[108])));
          parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_5, ContextPieces2_148, Var_181, &MaybeArgType_149);
          parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[111])), VarSet_5, Var_183, &MaybeCJCsRepn_151);
          succeeded = ((MR_tag((MR_Word) MaybeFunctorName_147)) == (MR_Integer) 1);
          if (succeeded)
          {
            FunctorName_128 = ((MR_String) ((MR_hl_field(1, MaybeFunctorName_147, 0))));
            succeeded = ((MR_tag((MR_Word) MaybeArgType_149)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgType_129 = ((MR_Word) ((MR_hl_field(1, MaybeArgType_149, 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCJCsRepn_151)) == (MR_Integer) 1);
              if (succeeded)
                CJCsRepn_130 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepn_151, 0))));
            }
          }
          if (succeeded)
          {
            MR_Word NotagRepn_116;
            MR_Word DuRepn_117;

            {
              NotagRepn_116 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NotagRepn_116, 0) = ((MR_Box) (FunctorName_128));
              MR_hl_field(0, NotagRepn_116, 1) = ((MR_Box) (ArgType_129));
              MR_hl_field(0, NotagRepn_116, 2) = ((MR_Box) (CJCsRepn_130));
            }
            DuRepn_117 = (MR_Word) (MR_mkword(2, (MR_Word) (NotagRepn_116)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeDuRepn_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (DuRepn_117));
            }
          }
          else
          {
            MR_Word Specs_118;
            MR_Word OoMSpecs_119;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;

            Var_120 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_147);
            Var_122 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeArgType_149);
            Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[5]), MaybeCJCsRepn_151);
            Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_122, Var_123);
            Specs_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_120, Var_121);
            mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_118, &OoMSpecs_119);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_119));
            }
          }
        }
        else
        {
          MR_Word Spec_110;
          MR_Word Var_114;

          {
            Spec_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_110, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_notag\'/4"));
            MR_hl_field(0, Spec_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_110, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_110, 3) = ((MR_Box) (TermContext_6));
            MR_hl_field(0, Spec_110, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[105])));
          }
          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_114, 0) = ((MR_Box) (Spec_110));
            MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_repn_4_p_0(
  MR_Word DescPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeCJCsRepn_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_String AtomStr_9;
  MR_Word ArgTerms_10;
  MR_Word TermContext_11;
  MR_Word Var_37;

  if (succeeded)
  {
    Var_37 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    ArgTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    TermContext_11 = ((MR_Word) ((MR_hl_field(0, Term_7, 2))));
    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_9 = ((MR_String) ((MR_hl_field(0, Var_37, 0))));
      if ((strcmp(AtomStr_9, (MR_String) "c_j_cs") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_9, (MR_String) "no_c_j_cs") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_9, (MR_String) "c_j_cs") == 0))
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_103;
        MR_Word Pieces_148;
        MR_Word Spec_149;

        {
          Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_93, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
        }
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_86);
        Pieces_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_85);
        {
          Spec_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_149, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn\'/4"));
          MR_hl_field(0, Spec_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_149, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_149, 3) = ((MR_Box) (TermContext_11));
          MR_hl_field(0, Spec_149, 4) = ((MR_Box) (Pieces_148));
        }
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (Spec_149));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCJCsRepn_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
        }
      }
      else
      {
        MR_Word Var_252 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, 1))));
        MR_Word Var_253 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, 0))));

        if ((Var_252 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_172;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_181;
          MR_Word Pieces_183;
          MR_Word Spec_184;

          {
            Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_176, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
          }
          {
            Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
            MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
          }
          {
            Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
            MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
          }
          Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_169);
          Pieces_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_168);
          {
            Spec_184 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_184, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn\'/4"));
            MR_hl_field(0, Spec_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_184, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_184, 3) = ((MR_Box) (TermContext_11));
            MR_hl_field(0, Spec_184, 4) = ((MR_Box) (Pieces_183));
          }
          {
            Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_181, 0) = ((MR_Box) (Spec_184));
            MR_hl_field(0, Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCJCsRepn_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_181));
          }
        }
        else
        {
          MR_Word Var_254 = ((MR_Word) ((MR_hl_field(1, Var_252, 1))));
          MR_Word Var_255 = ((MR_Word) ((MR_hl_field(1, Var_252, 0))));

          if ((Var_254 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_190;
            MR_Word Var_191;
            MR_Word Var_194;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_203;
            MR_Word Pieces_205;
            MR_Word Spec_206;

            {
              Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_198, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_197, 0) = ((MR_Box) (Var_198));
              MR_hl_field(1, Var_197, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
            }
            {
              Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_194, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
              MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_197));
            }
            {
              Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_191, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
              MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_194));
            }
            Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_191);
            Pieces_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_190);
            {
              Spec_206 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn\'/4"));
              MR_hl_field(0, Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_206, 3) = ((MR_Box) (TermContext_11));
              MR_hl_field(0, Spec_206, 4) = ((MR_Box) (Pieces_205));
            }
            {
              Var_203 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_203, 0) = ((MR_Box) (Spec_206));
              MR_hl_field(0, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCJCsRepn_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_203));
            }
          }
          else
          {
            MR_Word Var_256 = ((MR_Word) ((MR_hl_field(1, Var_254, 1))));
            MR_Word Var_257 = ((MR_Word) ((MR_hl_field(1, Var_254, 0))));

            if ((Var_256 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeMaybeRepnC_20;
              MR_Word MaybeMaybeRepnJava_21;
              MR_Word MaybeMaybeRepnCsharp_22;
              MR_Word MaybeRepnC_23;
              MR_Word MaybeRepnJava_24;
              MR_Word MaybeRepnCsharp_25;

              parse_tree__parse_type_repn__parse_maybe_foreign_repn_5_p_0(DescPieces_5, (MR_Integer) 1, VarSet_6, Var_253, &MaybeMaybeRepnC_20);
              parse_tree__parse_type_repn__parse_maybe_foreign_repn_5_p_0(DescPieces_5, (MR_Integer) 2, VarSet_6, Var_255, &MaybeMaybeRepnJava_21);
              parse_tree__parse_type_repn__parse_maybe_foreign_repn_5_p_0(DescPieces_5, (MR_Integer) 3, VarSet_6, Var_257, &MaybeMaybeRepnCsharp_22);
              succeeded = ((MR_tag((MR_Word) MaybeMaybeRepnC_20)) == (MR_Integer) 1);
              if (succeeded)
              {
                MaybeRepnC_23 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRepnC_20, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeMaybeRepnJava_21)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MaybeRepnJava_24 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRepnJava_21, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeMaybeRepnCsharp_22)) == (MR_Integer) 1);
                  if (succeeded)
                    MaybeRepnCsharp_25 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRepnCsharp_22, 0))));
                }
              }
              if (succeeded)
              {
                MR_Word CJCsRepn_145;

                {
                  CJCsRepn_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, CJCsRepn_145, 0) = ((MR_Box) (MaybeRepnC_23));
                  MR_hl_field(0, CJCsRepn_145, 1) = ((MR_Box) (MaybeRepnJava_24));
                  MR_hl_field(0, CJCsRepn_145, 2) = ((MR_Box) (MaybeRepnCsharp_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeCJCsRepn_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (CJCsRepn_145));
                }
              }
              else
              {
                MR_Word Specs_26;
                MR_Word OoMSpecs_27;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;

                Var_71 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[4]), MaybeMaybeRepnC_20);
                Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[4]), MaybeMaybeRepnJava_21);
                Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[4]), MaybeMaybeRepnCsharp_22);
                Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_73, Var_74);
                Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_71, Var_72);
                mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_26, &OoMSpecs_27);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeCJCsRepn_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_27));
                }
              }
            }
            else
            {
              MR_Word Var_212;
              MR_Word Var_213;
              MR_Word Var_216;
              MR_Word Var_219;
              MR_Word Var_220;
              MR_Word Var_225;
              MR_Word Pieces_227;
              MR_Word Spec_228;

              {
                Var_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_220, 1) = ((MR_Box) (AtomStr_9));
              }
              {
                Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_219, 0) = ((MR_Box) (Var_220));
                MR_hl_field(1, Var_219, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
              }
              {
                Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_216, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
                MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_219));
              }
              {
                Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_213, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
                MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_216));
              }
              Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_213);
              Pieces_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_212);
              {
                Spec_228 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_228, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn\'/4"));
                MR_hl_field(0, Spec_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_228, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_228, 3) = ((MR_Box) (TermContext_11));
                MR_hl_field(0, Spec_228, 4) = ((MR_Box) (Pieces_227));
              }
              {
                Var_225 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_225, 0) = ((MR_Box) (Spec_228));
                MR_hl_field(0, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCJCsRepn_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_225));
              }
            }
          }
        }
      }
    else
    if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeCJCsRepn_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[6]));
    else
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_63;

      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (AtomStr_9));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
      }
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_46);
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_45);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (TermContext_11));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCJCsRepn_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
      }
    }
  else
  {
    MR_String TermStr_36;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_113;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_122;
    MR_Word Var_125;
    MR_Word Var_128;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Pieces_156;
    MR_Word Spec_157;

    TermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    {
      Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_132, 1) = ((MR_Box) (TermStr_36));
    }
    {
      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(1, Var_131, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[192])));
      MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[191])));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[190])));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[189])));
      MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_113));
    }
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_110);
    Pieces_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_109);
    Var_142 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_157, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn\'/4"));
      MR_hl_field(0, Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_157, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_157, 3) = ((MR_Box) (Var_142));
      MR_hl_field(0, Spec_157, 4) = ((MR_Box) (Pieces_156));
    }
    {
      Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_143, 0) = ((MR_Box) (Spec_157));
      MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCJCsRepn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_foreign_repn_5_p_0(
  MR_Word DescPieces_6,
  MR_Integer Nth_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeMaybeRepnOrEnum_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_String AtomStr_11;
  MR_Word ArgTerms_12;
  MR_Word TermContext_13;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    TermContext_13 = ((MR_Word) ((MR_hl_field(0, Term_9, 2))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_11 = ((MR_String) ((MR_hl_field(0, Var_23, 0))));
      if ((strcmp(AtomStr_11, (MR_String) "no_foreign") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_11, (MR_String) "foreign_type") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_11, (MR_String) "no_foreign") == 0))
      if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeMaybeRepnOrEnum_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[8]));
      else
      {
        MR_Word Pieces_17;
        MR_Word Spec_18;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_60;

        {
          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_36, 1) = ((MR_Box) (Nth_7));
        }
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_29);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_28);
        {
          Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_maybe_foreign_repn\'/5"));
          MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_18, 3) = ((MR_Box) (TermContext_13));
          MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeRepnOrEnum_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
        }
      }
    else
    {
      MR_Word MaybeForeignTypeRepn_19;

      parse_tree__parse_type_repn__parse_foreign_type_repn_7_p_0(DescPieces_6, Nth_7, VarSet_8, AtomStr_11, ArgTerms_12, TermContext_13, &MaybeForeignTypeRepn_19);
      if (((MR_tag((MR_Word) MaybeForeignTypeRepn_19)) == (MR_Integer) 0))
        *MaybeMaybeRepnOrEnum_10 = (MR_Word) (MaybeForeignTypeRepn_19);
      else
      {
        MR_Word ForeignTypeRepn_20 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeRepn_19, 0))));
        MR_Word MaybeRepnOrEnum_116;

        {
          MaybeRepnOrEnum_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeRepnOrEnum_116, 0) = ((MR_Box) (ForeignTypeRepn_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeRepnOrEnum_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MaybeRepnOrEnum_116));
        }
      }
    }
  else
  {
    MR_String TermStr_22;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_96;
    MR_Word Var_99;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Pieces_119;
    MR_Word Spec_120;

    TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_68 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
    {
      Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_74, 1) = ((MR_Box) (Nth_7));
    }
    {
      Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_103, 1) = ((MR_Box) (TermStr_22));
    }
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[201])));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[199])));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[198])));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_67);
    Pieces_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_66);
    Var_113 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_120, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_maybe_foreign_repn\'/5"));
      MR_hl_field(0, Spec_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_120, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_120, 3) = ((MR_Box) (Var_113));
      MR_hl_field(0, Spec_120, 4) = ((MR_Box) (Pieces_119));
    }
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_114, 0) = ((MR_Box) (Spec_120));
      MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMaybeRepnOrEnum_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
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
  MR_bool succeeded;

  if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_44;
    MR_Word Var_134;

    {
      Spec_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_enum\'/4"));
      MR_hl_field(0, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_44, 3) = ((MR_Box) (TermContext_6));
      MR_hl_field(0, Spec_44, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[83])));
    }
    {
      Var_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_134, 0) = ((MR_Box) (Spec_44));
      MR_hl_field(0, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuRepn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_134));
    }
  }
  else
  {
    MR_Word Var_175 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    MR_Word Var_176 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));

    if ((Var_175 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_141;
      MR_Word Var_145;

      {
        Spec_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_enum\'/4"));
        MR_hl_field(0, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_141, 3) = ((MR_Box) (TermContext_6));
        MR_hl_field(0, Spec_141, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[83])));
      }
      {
        Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_145, 0) = ((MR_Box) (Spec_141));
        MR_hl_field(0, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_145));
      }
    }
    else
    {
      MR_Word Var_177 = ((MR_Word) ((MR_hl_field(1, Var_175, 1))));
      MR_Word Var_178 = ((MR_Word) ((MR_hl_field(1, Var_175, 0))));

      if ((Var_177 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_148;
        MR_Word Var_152;

        {
          Spec_148 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_148, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_enum\'/4"));
          MR_hl_field(0, Spec_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_148, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_148, 3) = ((MR_Box) (TermContext_6));
          MR_hl_field(0, Spec_148, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[83])));
        }
        {
          Var_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_152, 0) = ((MR_Box) (Spec_148));
          MR_hl_field(0, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_152));
        }
      }
      else
      {
        MR_Word Var_179 = ((MR_Word) ((MR_hl_field(1, Var_177, 1))));
        MR_Word Var_180 = ((MR_Word) ((MR_hl_field(1, Var_177, 0))));

        if ((Var_179 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_155;
          MR_Word Var_159;

          {
            Spec_155 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_155, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_enum\'/4"));
            MR_hl_field(0, Spec_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_155, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_155, 3) = ((MR_Box) (TermContext_6));
            MR_hl_field(0, Spec_155, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[83])));
          }
          {
            Var_159 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_159, 0) = ((MR_Box) (Spec_155));
            MR_hl_field(0, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_159));
          }
        }
        else
        {
          MR_Word Var_181 = ((MR_Word) ((MR_hl_field(1, Var_179, 1))));
          MR_Word Var_182 = ((MR_Word) ((MR_hl_field(1, Var_179, 0))));

          if ((Var_181 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeEnumFunctorName1_14;
            MR_Word MaybeEnumFunctorName2_16;
            MR_Word LaterEnumFunctorNames_19;
            MR_Word LaterEnumSpecs_20;
            MR_Word MaybeCJCsRepnOrEnum_24;
            MR_Word LaterEnumFunctorTerms_17;
            MR_String EnumFunctorName1_25;
            MR_String EnumFunctorName2_26;
            MR_Word CJCsRepnOrEnum_27;

            parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[86])), (MR_String) "function symbol", Var_176, &MaybeEnumFunctorName1_14);
            parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[88])), (MR_String) "function symbol", Var_178, &MaybeEnumFunctorName2_16);
            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_180, &LaterEnumFunctorTerms_17);
            if (succeeded)
              parse_tree__parse_type_repn__parse_strings_6_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[90])), (MR_Integer) 1, VarSet_5, LaterEnumFunctorTerms_17, &LaterEnumFunctorNames_19, &LaterEnumSpecs_20);
            else
            {
              MR_Word LaterEnumSpec_22;
              MR_Word Var_96;

              LaterEnumFunctorNames_19 = (MR_Word) ((MR_Unsigned) 0U);
              Var_96 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_180);
              {
                LaterEnumSpec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, LaterEnumSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_enum\'/4"));
                MR_hl_field(0, LaterEnumSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, LaterEnumSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, LaterEnumSpec_22, 3) = ((MR_Box) (Var_96));
                MR_hl_field(0, LaterEnumSpec_22, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[97])));
              }
              {
                LaterEnumSpecs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, LaterEnumSpecs_20, 0) = ((MR_Box) (LaterEnumSpec_22));
                MR_hl_field(1, LaterEnumSpecs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            parse_tree__parse_type_repn__parse_c_j_cs_repn_or_enum_4_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[100])), VarSet_5, Var_182, &MaybeCJCsRepnOrEnum_24);
            succeeded = (LaterEnumSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeEnumFunctorName1_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                EnumFunctorName1_25 = ((MR_String) ((MR_hl_field(1, MaybeEnumFunctorName1_14, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeEnumFunctorName2_16)) == (MR_Integer) 1);
                if (succeeded)
                {
                  EnumFunctorName2_26 = ((MR_String) ((MR_hl_field(1, MaybeEnumFunctorName2_16, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeCJCsRepnOrEnum_24)) == (MR_Integer) 1);
                  if (succeeded)
                    CJCsRepnOrEnum_27 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepnOrEnum_24, 0))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word EnumRepn_28;
              MR_Word Var_104;

              {
                EnumRepn_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, EnumRepn_28, 0) = ((MR_Box) (EnumFunctorName1_25));
                MR_hl_field(0, EnumRepn_28, 1) = ((MR_Box) (EnumFunctorName2_26));
                MR_hl_field(0, EnumRepn_28, 2) = ((MR_Box) (LaterEnumFunctorNames_19));
                MR_hl_field(0, EnumRepn_28, 3) = ((MR_Box) (CJCsRepnOrEnum_27));
              }
              Var_104 = (MR_Word) (MR_mkword(1, (MR_Word) (EnumRepn_28)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeDuRepn_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_104));
              }
            }
            else
            {
              MR_Word Specs_29;
              MR_Word OoMSpecs_30;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_109;

              Var_105 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeEnumFunctorName1_14);
              Var_107 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeEnumFunctorName2_16);
              Var_109 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[3]), MaybeCJCsRepnOrEnum_24);
              Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), LaterEnumSpecs_20, Var_109);
              Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_107, Var_108);
              Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_105, Var_106);
              mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_29, &OoMSpecs_30);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuRepn_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_30));
              }
            }
          }
          else
          {
            MR_Word Spec_162;
            MR_Word Var_166;

            {
              Spec_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_162, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_enum\'/4"));
              MR_hl_field(0, Spec_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_162, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_162, 3) = ((MR_Box) (TermContext_6));
              MR_hl_field(0, Spec_162, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[83])));
            }
            {
              Var_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_166, 0) = ((MR_Box) (Spec_162));
              MR_hl_field(0, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuRepn_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_166));
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
  MR_bool succeeded;

  if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_27;
    MR_Word Var_67;

    {
      Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_direct_dummy\'/4"));
      MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_27, 3) = ((MR_Box) (TermContext_6));
      MR_hl_field(0, Spec_27, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[70])));
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDuRepn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
    }
  }
  else
  {
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));

    if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_73;
      MR_Word Var_77;

      {
        Spec_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_direct_dummy\'/4"));
        MR_hl_field(0, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_73, 3) = ((MR_Box) (TermContext_6));
        MR_hl_field(0, Spec_73, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[70])));
      }
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_77, 0) = ((MR_Box) (Spec_73));
        MR_hl_field(0, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
      }
    }
    else
    {
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, Var_93, 1))));
      MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, Var_93, 0))));

      if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeFunctorName_12;
        MR_Word MaybeCJCsRepnOrEnum_14;
        MR_String FunctorName_15;
        MR_Word CJCsRepnOrEnum_16;

        parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_5, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[75])), (MR_String) "function symbol", Var_94, &MaybeFunctorName_12);
        parse_tree__parse_type_repn__parse_c_j_cs_repn_or_enum_4_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[78])), VarSet_5, Var_96, &MaybeCJCsRepnOrEnum_14);
        succeeded = ((MR_tag((MR_Word) MaybeFunctorName_12)) == (MR_Integer) 1);
        if (succeeded)
        {
          FunctorName_15 = ((MR_String) ((MR_hl_field(1, MaybeFunctorName_12, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeCJCsRepnOrEnum_14)) == (MR_Integer) 1);
          if (succeeded)
            CJCsRepnOrEnum_16 = ((MR_Word) ((MR_hl_field(1, MaybeCJCsRepnOrEnum_14, 0))));
        }
        if (succeeded)
        {
          MR_Word DirectDummyRepn_17;
          MR_Word DuRepn_18;

          {
            DirectDummyRepn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectDummyRepn_17, 0) = ((MR_Box) (FunctorName_15));
            MR_hl_field(0, DirectDummyRepn_17, 1) = ((MR_Box) (CJCsRepnOrEnum_16));
          }
          DuRepn_18 = (MR_Word) ((MR_Word) (DirectDummyRepn_17));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeDuRepn_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (DuRepn_18));
          }
        }
        else
        {
          MR_Word Specs_19;
          MR_Word OoMSpecs_20;
          MR_Word Var_48;
          MR_Word Var_49;

          Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_12);
          Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[3]), MaybeCJCsRepnOrEnum_14);
          Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_48, Var_49);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_19, &OoMSpecs_20);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuRepn_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_20));
          }
        }
      }
      else
      {
        MR_Word Spec_80;
        MR_Word Var_84;

        {
          Spec_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du_direct_dummy\'/4"));
          MR_hl_field(0, Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_80, 3) = ((MR_Box) (TermContext_6));
          MR_hl_field(0, Spec_80, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[70])));
        }
        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (Spec_80));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuRepn_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
        }
      }
    }
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_String FunctorName_11;
  MR_Word Var_16;
  MR_Word Var_17;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
      if (succeeded)
        FunctorName_11 = ((MR_String) ((MR_hl_field(2, Var_16, 0))));
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFunctorName_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FunctorName_11));
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
    MR_Word Var_42;
    MR_Word Var_43;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_9);
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Desc_8));
    }
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[133])));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_18);
    Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_string\'/5"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Var_42));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFunctorName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_c_j_cs_repn_or_enum_4_p_0(
  MR_Word DescPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeCJCsRepnOrEnum_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_String AtomStr_9;
  MR_Word ArgTerms_10;
  MR_Word TermContext_11;
  MR_Word Var_37;

  if (succeeded)
  {
    Var_37 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    ArgTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    TermContext_11 = ((MR_Word) ((MR_hl_field(0, Term_7, 2))));
    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_9 = ((MR_String) ((MR_hl_field(0, Var_37, 0))));
      if ((strcmp(AtomStr_9, (MR_String) "c_j_cs") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_9, (MR_String) "no_c_j_cs") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_9, (MR_String) "c_j_cs") == 0))
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_103;
        MR_Word Pieces_148;
        MR_Word Spec_149;

        {
          Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_93, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
        }
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_86);
        Pieces_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_85);
        {
          Spec_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_149, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn_or_enum\'/4"));
          MR_hl_field(0, Spec_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_149, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_149, 3) = ((MR_Box) (TermContext_11));
          MR_hl_field(0, Spec_149, 4) = ((MR_Box) (Pieces_148));
        }
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (Spec_149));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCJCsRepnOrEnum_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
        }
      }
      else
      {
        MR_Word Var_252 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, 1))));
        MR_Word Var_253 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, 0))));

        if ((Var_252 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_172;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_181;
          MR_Word Pieces_183;
          MR_Word Spec_184;

          {
            Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_176, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
          }
          {
            Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
            MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
          }
          {
            Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
            MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
          }
          Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_169);
          Pieces_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_168);
          {
            Spec_184 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_184, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn_or_enum\'/4"));
            MR_hl_field(0, Spec_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_184, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_184, 3) = ((MR_Box) (TermContext_11));
            MR_hl_field(0, Spec_184, 4) = ((MR_Box) (Pieces_183));
          }
          {
            Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_181, 0) = ((MR_Box) (Spec_184));
            MR_hl_field(0, Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCJCsRepnOrEnum_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_181));
          }
        }
        else
        {
          MR_Word Var_254 = ((MR_Word) ((MR_hl_field(1, Var_252, 1))));
          MR_Word Var_255 = ((MR_Word) ((MR_hl_field(1, Var_252, 0))));

          if ((Var_254 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_190;
            MR_Word Var_191;
            MR_Word Var_194;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_203;
            MR_Word Pieces_205;
            MR_Word Spec_206;

            {
              Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_198, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_197, 0) = ((MR_Box) (Var_198));
              MR_hl_field(1, Var_197, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
            }
            {
              Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_194, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
              MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_197));
            }
            {
              Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_191, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
              MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_194));
            }
            Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_191);
            Pieces_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_190);
            {
              Spec_206 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn_or_enum\'/4"));
              MR_hl_field(0, Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_206, 3) = ((MR_Box) (TermContext_11));
              MR_hl_field(0, Spec_206, 4) = ((MR_Box) (Pieces_205));
            }
            {
              Var_203 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_203, 0) = ((MR_Box) (Spec_206));
              MR_hl_field(0, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCJCsRepnOrEnum_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_203));
            }
          }
          else
          {
            MR_Word Var_256 = ((MR_Word) ((MR_hl_field(1, Var_254, 1))));
            MR_Word Var_257 = ((MR_Word) ((MR_hl_field(1, Var_254, 0))));

            if ((Var_256 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeMaybeRepnOrEnumC_20;
              MR_Word MaybeMaybeRepnOrEnumJava_21;
              MR_Word MaybeMaybeRepnOrEnumCsharp_22;
              MR_Word MaybeRepnOrEnumC_23;
              MR_Word MaybeRepnOrEnumJava_24;
              MR_Word MaybeRepnOrEnumCsharp_25;

              parse_tree__parse_type_repn__parse_maybe_enum_foreign_repn_5_p_0(DescPieces_5, (MR_Integer) 1, VarSet_6, Var_253, &MaybeMaybeRepnOrEnumC_20);
              parse_tree__parse_type_repn__parse_maybe_enum_foreign_repn_5_p_0(DescPieces_5, (MR_Integer) 2, VarSet_6, Var_255, &MaybeMaybeRepnOrEnumJava_21);
              parse_tree__parse_type_repn__parse_maybe_enum_foreign_repn_5_p_0(DescPieces_5, (MR_Integer) 3, VarSet_6, Var_257, &MaybeMaybeRepnOrEnumCsharp_22);
              succeeded = ((MR_tag((MR_Word) MaybeMaybeRepnOrEnumC_20)) == (MR_Integer) 1);
              if (succeeded)
              {
                MaybeRepnOrEnumC_23 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRepnOrEnumC_20, 0))));
                succeeded = ((MR_tag((MR_Word) MaybeMaybeRepnOrEnumJava_21)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MaybeRepnOrEnumJava_24 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRepnOrEnumJava_21, 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeMaybeRepnOrEnumCsharp_22)) == (MR_Integer) 1);
                  if (succeeded)
                    MaybeRepnOrEnumCsharp_25 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRepnOrEnumCsharp_22, 0))));
                }
              }
              if (succeeded)
              {
                MR_Word CJCsRepnOrEnum_145;

                {
                  CJCsRepnOrEnum_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, CJCsRepnOrEnum_145, 0) = ((MR_Box) (MaybeRepnOrEnumC_23));
                  MR_hl_field(0, CJCsRepnOrEnum_145, 1) = ((MR_Box) (MaybeRepnOrEnumJava_24));
                  MR_hl_field(0, CJCsRepnOrEnum_145, 2) = ((MR_Box) (MaybeRepnOrEnumCsharp_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeCJCsRepnOrEnum_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (CJCsRepnOrEnum_145));
                }
              }
              else
              {
                MR_Word Specs_26;
                MR_Word OoMSpecs_27;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;

                Var_71 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeMaybeRepnOrEnumC_20);
                Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeMaybeRepnOrEnumJava_21);
                Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeMaybeRepnOrEnumCsharp_22);
                Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_73, Var_74);
                Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_71, Var_72);
                mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_26, &OoMSpecs_27);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeCJCsRepnOrEnum_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_27));
                }
              }
            }
            else
            {
              MR_Word Var_212;
              MR_Word Var_213;
              MR_Word Var_216;
              MR_Word Var_219;
              MR_Word Var_220;
              MR_Word Var_225;
              MR_Word Pieces_227;
              MR_Word Spec_228;

              {
                Var_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_220, 1) = ((MR_Box) (AtomStr_9));
              }
              {
                Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_219, 0) = ((MR_Box) (Var_220));
                MR_hl_field(1, Var_219, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[102])));
              }
              {
                Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_216, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
                MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_219));
              }
              {
                Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_213, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
                MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_216));
              }
              Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_213);
              Pieces_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_212);
              {
                Spec_228 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_228, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn_or_enum\'/4"));
                MR_hl_field(0, Spec_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_228, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_228, 3) = ((MR_Box) (TermContext_11));
                MR_hl_field(0, Spec_228, 4) = ((MR_Box) (Pieces_227));
              }
              {
                Var_225 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_225, 0) = ((MR_Box) (Spec_228));
                MR_hl_field(0, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCJCsRepnOrEnum_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_225));
              }
            }
          }
        }
      }
    else
    if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeCJCsRepnOrEnum_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[5]));
    else
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_63;

      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (AtomStr_9));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
      }
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_46);
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_45);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn_or_enum\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (TermContext_11));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCJCsRepnOrEnum_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
      }
    }
  else
  {
    MR_String TermStr_36;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_113;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_122;
    MR_Word Var_125;
    MR_Word Var_128;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Pieces_156;
    MR_Word Spec_157;

    TermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    {
      Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_132, 1) = ((MR_Box) (TermStr_36));
    }
    {
      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(1, Var_131, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30])));
      MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[192])));
      MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[191])));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[190])));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[189])));
      MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_113));
    }
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, Var_110);
    Pieces_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_109);
    Var_142 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_157, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_c_j_cs_repn_or_enum\'/4"));
      MR_hl_field(0, Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_157, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_157, 3) = ((MR_Box) (Var_142));
      MR_hl_field(0, Spec_157, 4) = ((MR_Box) (Pieces_156));
    }
    {
      Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_143, 0) = ((MR_Box) (Spec_157));
      MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCJCsRepnOrEnum_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_enum_foreign_repn_5_p_0(
  MR_Word DescPieces_6,
  MR_Integer Nth_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeMaybeRepnOrEnum_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_String AtomStr_11;
  MR_Word ArgTerms_12;
  MR_Word TermContext_13;
  MR_Word Var_30;

  if (succeeded)
  {
    Var_30 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    TermContext_13 = ((MR_Word) ((MR_hl_field(0, Term_9, 2))));
    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomStr_11 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
      if ((strcmp(AtomStr_11, (MR_String) "no_foreign") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_11, (MR_String) "foreign_enum") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomStr_11, (MR_String) "foreign_type") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    if ((strcmp(AtomStr_11, (MR_String) "no_foreign") == 0))
      if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeMaybeRepnOrEnum_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_2[7]));
      else
      {
        MR_Word Pieces_17;
        MR_Word Spec_18;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
        MR_Word Var_39;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_67;

        {
          Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_43, 1) = ((MR_Box) (Nth_7));
        }
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
        }
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_36);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_35);
        {
          Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_maybe_enum_foreign_repn\'/5"));
          MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_18, 3) = ((MR_Box) (TermContext_13));
          MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeRepnOrEnum_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
        }
      }
    else
    if ((strcmp(AtomStr_11, (MR_String) "foreign_enum") == 0))
    {
      MR_Word EnumDescPieces_19;
      MR_Word Var_69;
      MR_Word Var_72;
      MR_Word Var_75;
      MR_Word Var_76;

      {
        Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_76, 1) = ((MR_Box) (Nth_7));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[197])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
      }
      EnumDescPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_69);
      if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_100;
        MR_Word Var_103;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_123;
        MR_Word Pieces_189;
        MR_Word Spec_190;

        {
          Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_113, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
        }
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_100));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
        }
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_92);
        Pieces_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_91);
        {
          Spec_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_190, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_maybe_enum_foreign_repn\'/5"));
          MR_hl_field(0, Spec_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_190, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_190, 3) = ((MR_Box) (TermContext_13));
          MR_hl_field(0, Spec_190, 4) = ((MR_Box) (Pieces_189));
        }
        {
          Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_123, 0) = ((MR_Box) (Spec_190));
          MR_hl_field(0, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeRepnOrEnum_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_123));
        }
      }
      else
      {
        MR_Word Var_279 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
        MR_Word Var_280 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

        if ((Var_279 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeForeignEnumRepn_21;

          parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0(EnumDescPieces_19, VarSet_8, Var_280, &MaybeForeignEnumRepn_21);
          if (((MR_tag((MR_Word) MaybeForeignEnumRepn_21)) == (MR_Integer) 0))
            *MaybeMaybeRepnOrEnum_10 = (MR_Word) (MaybeForeignEnumRepn_21);
          else
          {
            MR_Word ForeignEnumRepn_22 = ((MR_Word) ((MR_hl_field(1, MaybeForeignEnumRepn_21, 0))));
            MR_Word Var_85;
            MR_Word MaybeRepnOrEnum_186;

            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (ForeignEnumRepn_22));
            }
            {
              MaybeRepnOrEnum_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeRepnOrEnum_186, 0) = ((MR_Box) (Var_85));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMaybeRepnOrEnum_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MaybeRepnOrEnum_186));
            }
          }
        }
        else
        {
          MR_Word Var_213;
          MR_Word Var_214;
          MR_Word Var_215 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
          MR_Word Var_217;
          MR_Word Var_220;
          MR_Word Var_222;
          MR_Word Var_225;
          MR_Word Var_228;
          MR_Word Var_231;
          MR_Word Var_234;
          MR_Word Var_235;
          MR_Word Var_240;
          MR_Word Pieces_242;
          MR_Word Spec_243;

          {
            Var_235 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_235, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_235, 1) = ((MR_Box) (AtomStr_11));
          }
          {
            Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_234, 0) = ((MR_Box) (Var_235));
            MR_hl_field(1, Var_234, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[136])));
          }
          {
            Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_231, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
            MR_hl_field(1, Var_231, 1) = ((MR_Box) (Var_234));
          }
          {
            Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_228, 0) = ((MR_Box) (Var_215));
            MR_hl_field(1, Var_228, 1) = ((MR_Box) (Var_231));
          }
          {
            Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_225, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
            MR_hl_field(1, Var_225, 1) = ((MR_Box) (Var_228));
          }
          {
            Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_222, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
            MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_225));
          }
          {
            Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_220, 0) = ((MR_Box) (Var_76));
            MR_hl_field(1, Var_220, 1) = ((MR_Box) (Var_222));
          }
          {
            Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_217, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
            MR_hl_field(1, Var_217, 1) = ((MR_Box) (Var_220));
          }
          {
            Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_214, 0) = ((MR_Box) (Var_215));
            MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_217));
          }
          Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_214);
          Pieces_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_213);
          {
            Spec_243 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_maybe_enum_foreign_repn\'/5"));
            MR_hl_field(0, Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_243, 3) = ((MR_Box) (TermContext_13));
            MR_hl_field(0, Spec_243, 4) = ((MR_Box) (Pieces_242));
          }
          {
            Var_240 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_240, 0) = ((MR_Box) (Spec_243));
            MR_hl_field(0, Var_240, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMaybeRepnOrEnum_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_240));
          }
        }
      }
    }
    else
    {
      MR_Word MaybeForeignTypeRepn_27;

      parse_tree__parse_type_repn__parse_foreign_type_repn_7_p_0(DescPieces_6, Nth_7, VarSet_8, AtomStr_11, ArgTerms_12, TermContext_13, &MaybeForeignTypeRepn_27);
      if (((MR_tag((MR_Word) MaybeForeignTypeRepn_27)) == (MR_Integer) 0))
        *MaybeMaybeRepnOrEnum_10 = (MR_Word) (MaybeForeignTypeRepn_27);
      else
      {
        MR_Word ForeignTypeRepn_28 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeRepn_27, 0))));
        MR_Word Var_125 = (MR_Word) ((MR_Word) (ForeignTypeRepn_28));
        MR_Word MaybeRepnOrEnum_197;

        {
          MaybeRepnOrEnum_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeRepnOrEnum_197, 0) = ((MR_Box) (Var_125));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeRepnOrEnum_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MaybeRepnOrEnum_197));
        }
      }
    }
  else
  {
    MR_String TermStr_29;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_142;
    MR_Word Var_145;
    MR_Word Var_148;
    MR_Word Var_151;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_157;
    MR_Word Var_160;
    MR_Word Var_163;
    MR_Word Var_166;
    MR_Word Var_169;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Pieces_203;
    MR_Word Spec_204;

    TermStr_29 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_132 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
    {
      Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_138, 1) = ((MR_Box) (Nth_7));
    }
    Var_155 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[30]));
    {
      Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_173, 1) = ((MR_Box) (TermStr_29));
    }
    {
      Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
      MR_hl_field(1, Var_172, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
    }
    {
      Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_166, 0) = ((MR_Box) (Var_155));
      MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
    }
    {
      Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_163, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[201])));
      MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_166));
    }
    {
      Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[38])));
      MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_163));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[200])));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_160));
    }
    {
      Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
    }
    {
      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_151, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[199])));
      MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[198])));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_151));
    }
    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_132));
      MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_142, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
      MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
      MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
      MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_139));
    }
    {
      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_134, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_137));
    }
    {
      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_134));
    }
    Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, Var_131);
    Pieces_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_130);
    Var_183 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_204 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_204, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_maybe_enum_foreign_repn\'/5"));
      MR_hl_field(0, Spec_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_204, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_204, 3) = ((MR_Box) (Var_183));
      MR_hl_field(0, Spec_204, 4) = ((MR_Box) (Pieces_203));
    }
    {
      Var_184 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_184, 0) = ((MR_Box) (Spec_204));
      MR_hl_field(0, Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMaybeRepnOrEnum_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_184));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2158__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_type_repn__IntroducedFrom__pred__parse_one_or_more_strings__2145__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0(
  MR_Word DescPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeOoMStrings_8)
{
  MR_bool succeeded;
  MR_Word StringTerms_9;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_7, &StringTerms_9);
  if (succeeded)
  {
    MR_Word Strings_10;
    MR_Word StringSpecs_11;

    parse_tree__parse_type_repn__parse_strings_6_p_0(DescPieces_5, (MR_Integer) 1, VarSet_6, StringTerms_9, &Strings_10, &StringSpecs_11);
    if ((Strings_10 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((StringTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_12;
        MR_Word Spec_13;
        MR_Word Var_23;
        MR_Word Var_31;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_4[0]));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0_1));
          MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_23, 3) = ((MR_Box) (StringSpecs_11));
          MR_hl_field(0, Var_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140parse_tree.parse_type_repn.parse_one_or_more_strings\'/4", (MR_String) "StringTerms = [] but StringSpecs != []");
        Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_5, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[210])));
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_31);
        Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_one_or_more_strings\'/4"));
          MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_47));
          MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (Spec_13));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOoMStrings_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
        }
      }
      else
      {
        MR_Word OoMStringSpecs_16;
        MR_Word Var_50;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_4[0]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__parse_type_repn__parse_one_or_more_strings_4_p_0_2));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (StringSpecs_11));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_not_3_p_0(Var_50, (MR_String) "predicate \140parse_tree.parse_type_repn.parse_one_or_more_strings\'/4", (MR_String) "StringTerms != [] and Strings = [] but StringSpecs = []");
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), StringSpecs_11, &OoMStringSpecs_16);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOoMStrings_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OoMStringSpecs_16));
        }
      }
    else
    {
      MR_String HeadString_17 = ((MR_String) ((MR_hl_field(1, Strings_10, 0))));
      MR_Word TailStrings_18 = ((MR_Word) ((MR_hl_field(1, Strings_10, 1))));

      if ((StringSpecs_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (HeadString_17));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (TailStrings_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeOoMStrings_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_54));
        }
      }
      else
      {
        MR_Word HeadSpec_19 = ((MR_Word) ((MR_hl_field(1, StringSpecs_11, 0))));
        MR_Word TailSpecs_20 = ((MR_Word) ((MR_hl_field(1, StringSpecs_11, 1))));
        MR_Word Var_55;

        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (HeadSpec_19));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (TailSpecs_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOoMStrings_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
        }
      }
    }
  }
  else
  {
    MR_String TermStr_21;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Pieces_79;
    MR_Word Spec_80;

    TermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[186])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (DescPieces_5));
    }
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (TermStr_21));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[211])));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    Pieces_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_59);
    Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_one_or_more_strings\'/4"));
      MR_hl_field(0, Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_80, 3) = ((MR_Box) (Var_76));
      MR_hl_field(0, Spec_80, 4) = ((MR_Box) (Pieces_79));
    }
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (Spec_80));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeOoMStrings_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_strings_6_p_0(
  MR_Word DescPieces_1,
  MR_Integer Nth_2,
  MR_Word VarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Nth_2 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Strs_1_25;
    MR_Word STATE_VARIABLE_Specs_1_26;
    MR_String Str_17;
    MR_Word Var_28;
    MR_Word Var_29;

    parse_tree__parse_type_repn__parse_strings_6_p_0(DescPieces_1, Var_24, VarSet_3, Terms_14, &STATE_VARIABLE_Strs_1_25, &STATE_VARIABLE_Specs_1_26);
    succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_13, 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(0, Term_13, 1))));
      succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 2);
        if (succeeded)
          Str_17 = ((MR_String) ((MR_hl_field(2, Var_28, 0))));
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Str_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Strs_1_25));
      }
      *HeadVar__6_6 = STATE_VARIABLE_Specs_1_26;
    }
    else
    {
      MR_String TermStr_19;
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_61;

      TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_3, Term_13);
      {
        Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_43, 1) = ((MR_Box) (Nth_2));
      }
      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (TermStr_19));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[227])));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[226])));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_1, Var_36);
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_35);
      Var_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_strings\'/6"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_61));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_26));
      }
      *HeadVar__5_5 = STATE_VARIABLE_Strs_1_25;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_type_repn_7_p_0(
  MR_Word DescPieces_8,
  MR_Integer Nth_9,
  MR_Word VarSet_10,
  MR_String AtomStr_11,
  MR_Word ArgTerms_12,
  MR_Word TermContext_13,
  MR_Word * MaybeForeignTypeRepn_14)
{
  MR_bool succeeded;

  if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_37;
    MR_Word Spec_38;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
    MR_Word Var_132;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_140;
    MR_Word Var_143;
    MR_Word Var_146;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_160;

    {
      Var_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_136, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_136, 1) = ((MR_Box) (Nth_9));
    }
    {
      Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_150, 1) = ((MR_Box) (AtomStr_11));
    }
    {
      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
      MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
    }
    {
      Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_146, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
      MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_149));
    }
    {
      Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_130));
      MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_137, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
      MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
      MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_137));
    }
    {
      Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_132, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
      MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_135));
    }
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_132));
    }
    Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_8, Var_129);
    Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_128);
    {
      Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_foreign_type_repn\'/7"));
      MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_38, 3) = ((MR_Box) (TermContext_13));
      MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
    }
    {
      Var_160 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_160, 0) = ((MR_Box) (Spec_38));
      MR_hl_field(0, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeForeignTypeRepn_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_160));
    }
  }
  else
  {
    MR_Word Var_277 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
    MR_Word Var_278 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

    if ((Var_277 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_169;
      MR_Word Spec_170;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_177 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
      MR_Word Var_179;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_184;
      MR_Word Var_187;
      MR_Word Var_190;
      MR_Word Var_193;
      MR_Word Var_196;
      MR_Word Var_197;
      MR_Word Var_202;

      {
        Var_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_183, 1) = ((MR_Box) (Nth_9));
      }
      {
        Var_197 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_197, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_197, 1) = ((MR_Box) (AtomStr_11));
      }
      {
        Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_196, 0) = ((MR_Box) (Var_197));
        MR_hl_field(1, Var_196, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
      }
      {
        Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_193, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
        MR_hl_field(1, Var_193, 1) = ((MR_Box) (Var_196));
      }
      {
        Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_190, 0) = ((MR_Box) (Var_177));
        MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_193));
      }
      {
        Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_187, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
        MR_hl_field(1, Var_187, 1) = ((MR_Box) (Var_190));
      }
      {
        Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_184, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
        MR_hl_field(1, Var_184, 1) = ((MR_Box) (Var_187));
      }
      {
        Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_182, 0) = ((MR_Box) (Var_183));
        MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_184));
      }
      {
        Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_179, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
        MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_182));
      }
      {
        Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_176, 0) = ((MR_Box) (Var_177));
        MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_179));
      }
      Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_8, Var_176);
      Pieces_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_175);
      {
        Spec_170 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_170, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_foreign_type_repn\'/7"));
        MR_hl_field(0, Spec_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_170, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_170, 3) = ((MR_Box) (TermContext_13));
        MR_hl_field(0, Spec_170, 4) = ((MR_Box) (Pieces_169));
      }
      {
        Var_202 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_202, 0) = ((MR_Box) (Spec_170));
        MR_hl_field(0, Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeForeignTypeRepn_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_202));
      }
    }
    else
    {
      MR_Word Var_279 = ((MR_Word) ((MR_hl_field(1, Var_277, 1))));
      MR_Word Var_280 = ((MR_Word) ((MR_hl_field(1, Var_277, 0))));

      if ((Var_279 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeTypeName_19;
        MR_Word ContextPieces2_23;
        MR_Word ContextPiecesCord2_24;
        MR_Word AssertionSet_25;
        MR_Word AssertionSpecs_26;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_103;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_118;
        MR_String TypeNameStr0_17;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_String TypeName_27;

        succeeded = ((MR_tag((MR_Word) Var_278)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_41 = ((MR_Word) ((MR_hl_field(0, Var_278, 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(0, Var_278, 1))));
          succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2);
            if (succeeded)
              TypeNameStr0_17 = ((MR_String) ((MR_hl_field(2, Var_41, 0))));
          }
        }
        if (succeeded)
          {
            MaybeTypeName_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeTypeName_19, 0) = ((MR_Box) (TypeNameStr0_17));
          }
        else
        {
          MR_String TermStr_20;
          MR_Word TypeNamePieces_21;
          MR_Word TypeNameSpec_22;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_84;
          MR_Word Var_85;

          TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_10, Var_278);
          Var_49 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
          {
            Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_55, 1) = ((MR_Box) (Nth_9));
          }
          {
            Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_69, 1) = ((MR_Box) (AtomStr_11));
          }
          {
            Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_74, 1) = ((MR_Box) (TermStr_20));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[42])));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[204])));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
          }
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[203])));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
            MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
          }
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_8, Var_48);
          TypeNamePieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_47);
          Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_278);
          {
            TypeNameSpec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeNameSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_foreign_type_repn\'/7"));
            MR_hl_field(0, TypeNameSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeNameSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, TypeNameSpec_22, 3) = ((MR_Box) (Var_84));
            MR_hl_field(0, TypeNameSpec_22, 4) = ((MR_Box) (TypeNamePieces_21));
          }
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_85, 0) = ((MR_Box) (TypeNameSpec_22));
            MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeName_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeTypeName_19, 0) = ((MR_Box) (Var_85));
          }
        }
        Var_93 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
        {
          Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_99, 1) = ((MR_Box) (Nth_9));
        }
        {
          Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_113, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[84])));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[205])));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
        }
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_100));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
        }
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_8, Var_92);
        ContextPieces2_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_91);
        ContextPiecesCord2_24 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces2_23);
        Var_118 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
        parse_tree__parse_pragma_foreign__parse_foreign_type_assertions_7_p_0(ContextPiecesCord2_24, VarSet_10, Var_280, Var_118, &AssertionSet_25, (MR_Word) ((MR_Unsigned) 0U), &AssertionSpecs_26);
        succeeded = (AssertionSpecs_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeTypeName_19)) == (MR_Integer) 1);
          if (succeeded)
            TypeName_27 = ((MR_String) ((MR_hl_field(1, MaybeTypeName_19, 0))));
        }
        if (succeeded)
        {
          MR_Word Assertions_28 = (MR_Word) (AssertionSet_25);
          MR_Word Repn_29;

          {
            Repn_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Repn_29, 0) = ((MR_Box) (TypeName_27));
            MR_hl_field(0, Repn_29, 1) = ((MR_Box) (Assertions_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeForeignTypeRepn_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Repn_29));
          }
        }
        else
        {
          MR_Word Specs_30;
          MR_Word OoMSpecs_31;
          MR_Word Var_120;

          Var_120 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTypeName_19);
          Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_120, AssertionSpecs_26);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_30, &OoMSpecs_31);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeForeignTypeRepn_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_31));
          }
        }
      }
      else
      {
        MR_Word Pieces_205;
        MR_Word Spec_206;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213 = (MR_Word) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[71]));
        MR_Word Var_215;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_223;
        MR_Word Var_226;
        MR_Word Var_229;
        MR_Word Var_232;
        MR_Word Var_233;
        MR_Word Var_238;

        {
          Var_219 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_219, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_219, 1) = ((MR_Box) (Nth_9));
        }
        {
          Var_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_233, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_233, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_232, 0) = ((MR_Box) (Var_233));
          MR_hl_field(1, Var_232, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
        }
        {
          Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_229, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[188])));
          MR_hl_field(1, Var_229, 1) = ((MR_Box) (Var_232));
        }
        {
          Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_226, 0) = ((MR_Box) (Var_213));
          MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
        }
        {
          Var_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_223, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[194])));
          MR_hl_field(1, Var_223, 1) = ((MR_Box) (Var_226));
        }
        {
          Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_220, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[196])));
          MR_hl_field(1, Var_220, 1) = ((MR_Box) (Var_223));
        }
        {
          Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_218, 0) = ((MR_Box) (Var_219));
          MR_hl_field(1, Var_218, 1) = ((MR_Box) (Var_220));
        }
        {
          Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_215, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[193])));
          MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_218));
        }
        {
          Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_212, 0) = ((MR_Box) (Var_213));
          MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_215));
        }
        Var_211 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_8, Var_212);
        Pieces_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[187])), Var_211);
        {
          Spec_206 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_foreign_type_repn\'/7"));
          MR_hl_field(0, Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_206, 3) = ((MR_Box) (TermContext_13));
          MR_hl_field(0, Spec_206, 4) = ((MR_Box) (Pieces_205));
        }
        {
          Var_238 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_238, 0) = ((MR_Box) (Spec_206));
          MR_hl_field(0, Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeForeignTypeRepn_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_238));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_subtype_of_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8)
{
  MR_bool succeeded;

  if ((RepnArgs_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_49;
    MR_Word Pieces_51;
    MR_Word Spec_52;

    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (RepnStr_5));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[55])));
    }
    {
      Pieces_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_51, 1) = ((MR_Box) (Var_38));
    }
    {
      Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_subtype_of\'/4"));
      MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_52, 3) = ((MR_Box) (RepnContext_7));
      MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (Spec_52));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
    }
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, RepnArgs_6, 1))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, RepnArgs_6, 0))));

    if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SymName_10;
      MR_Integer Arity_11;

      succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_79, &SymName_10, &Arity_11);
      if (succeeded)
      {
        MR_Word SuperTypeCtor_12;
        MR_Word Var_19;

        {
          SuperTypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SuperTypeCtor_12, 0) = ((MR_Box) (SymName_10));
          MR_hl_field(0, SuperTypeCtor_12, 1) = ((MR_Box) (Arity_11));
        }
        {
          Var_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_19, 0) = ((MR_Box) (SuperTypeCtor_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeRepn_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
        }
      }
      else
      {
        MR_Word Pieces_13;
        MR_Word Spec_14;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_33;

        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (RepnStr_5));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[59])));
        }
        {
          Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
          MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_22));
        }
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_subtype_of\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_14, 3) = ((MR_Box) (RepnContext_7));
          MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
        }
      }
    }
    else
    {
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word Pieces_64;
      MR_Word Spec_65;

      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (RepnStr_5));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[55])));
      }
      {
        Pieces_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_64, 1) = ((MR_Box) (Var_56));
      }
      {
        Spec_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_subtype_of\'/4"));
        MR_hl_field(0, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_65, 3) = ((MR_Box) (RepnContext_7));
        MR_hl_field(0, Spec_65, 4) = ((MR_Box) (Pieces_64));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (Spec_65));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
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
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_48;

    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (RepnStr_7));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[55])));
    }
    {
      Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_37));
    }
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_eqv_to\'/5"));
      MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_20, 3) = ((MR_Box) (RepnContext_9));
      MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
    }
  }
  else
  {
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, RepnArgs_8, 1))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, RepnArgs_8, 0))));

    if ((Var_75 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_12;
      MR_Word MaybeEqvType_13;

      ContextPieces_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[57])));
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_6, ContextPieces_12, Var_76, &MaybeEqvType_13);
      if (((MR_tag((MR_Word) MaybeEqvType_13)) == (MR_Integer) 0))
        *MaybeRepn_10 = (MR_Word) (MaybeEqvType_13);
      else
      {
        MR_Word EqvType_14 = ((MR_Word) ((MR_hl_field(1, MaybeEqvType_13, 0))));
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (EqvType_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeRepn_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
        }
      }
    }
    else
    {
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_61;

      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[55])));
      }
      {
        Pieces_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
        MR_hl_field(1, Pieces_51, 1) = ((MR_Box) (Var_55));
      }
      {
        Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_eqv_to\'/5"));
        MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_52, 3) = ((MR_Box) (RepnContext_9));
        MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
      }
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRepn_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NoArgRepn_9));
    }
  else
  {
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_28;

    {
      Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_18, 1) = ((MR_Box) (RepnStr_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_repn_scalar_common_1[53])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_repn_scalar_common_1[51])));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_repn.parse_no_arg_type_repn\'/5"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (RepnContext_8));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    }
  }
}

void mercury__parse_tree__parse_type_repn__init(void)
{
}

void mercury__parse_tree__parse_type_repn__init_type_tables(void)
{
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
