/*
** Automatically generated from `parse_type_repn.m'
** by the Mercury compiler,
** version rotd-2019-08-03
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_value_ordered_du_where_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_name_ordered_du_where_0[2];

static const MR_Integer parse_tree__parse_type_repn__parse_tree__parse_type_repn__functor_number_map_du_where_0[2];

static void MR_CALL 
parse_tree__parse_type_repn____Compare____du_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_repn____Unify____du_where_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_maybe_foreign_type_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_du_repn_4_p_0(
  MR_Word VarSet_5,
  MR_String RepnStr_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeDuRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_114_101_112_110_95_100_117_95_95_91_52_93_95_48_5_p_0(
  MR_Word VarSet_6,
  MR_Word DuWhere_7,
  MR_Word Term_8,
  MR_Word * MaybeDuRepn_10);

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
parse_tree__parse_type_repn__parse_string_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_String Desc_8,
  MR_Word Term_9,
  MR_Word * MaybeFunctorName_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_enum_specs_6_p_0(
  MR_Word VarSet_1,
  MR_String AtomStr_2,
  MR_Integer Nth_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

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
parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(
  MR_Unsigned MaxNumBits_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeFillKindSize_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(
  MR_Unsigned Max_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeUint_8);

static void MR_CALL 
parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(
  MR_String AtomStr_6,
  MR_Word TermContext_7,
  MR_Word ArgTerms_8,
  MR_Word FillKindSize_9,
  MR_Word * MaybeFillKindSize_10);

static MR_Word MR_CALL 
parse_tree__parse_type_repn__du_where_prefix_1_f_0(
  MR_Word DuWhere_3);

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_types_6_p_0(
  MR_Word VarSet_1,
  MR_String RepnStr_2,
  MR_Integer Nth_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

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
parse_tree__parse_type_repn____Unify____du_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_repn____Compare____du_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[275][2];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[8][1];


/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_3_0_s parse_tree__parse_type_repn_vector_common_3[20];

/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_4_0_s parse_tree__parse_type_repn_vector_common_4[80];



static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[275][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_direct_arg_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_du_repn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item:"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exactly one argument."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and a description of its representation."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments: the type,"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have any arguments."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument, a type."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[6])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an integer and a fill kind."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be an integer."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a fill kind."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a list of function symbols with arities."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument,"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of function symbols with arities."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "functorname/arity"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_dummy"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In argument of"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have one or two arguments."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "enum"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a nonempty list of function symbols."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "enum specifications."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a nonempty list of foreign language"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function symbol representations."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a nonempty list of"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly three arguments."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "notag"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[55])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "du_repn"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inside the only argument of"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed du type representation"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "maybe_foreign_type_repn"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inside the second argument of"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed optional du type representation"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument representations."))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in that language."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrapped around a list of identifiers"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with each element being a foreign language name."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a nonempty list,"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "erlang(...)"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "java(...)"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "csharp(...)"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c(...)"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not of the required form, which is one of"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant_functor"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[63])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly five arguments."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nonconstant_functor"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[63])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have no argument."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments."))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[99])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_uint64"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_int64"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dw_float"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be one of"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly four arguments."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have exactly one argument."))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must not have any one arguments."))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the type\'s Mercury implementation, if any."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and the second being a description of the representation"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrapped around type names,"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the first being a list of foreign language names"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign language names wrapped around type names."))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[166])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not a valid type name."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[169])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "erlang(assertionslist)"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[172])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "java(java_type_name, assertionslist)"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[175])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "csharp(csharp_type_name, assertionslist)"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c(c_type_name, assertionslist)"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is not in one of the required forms, which are"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with one argument."))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[186])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with no arguments,"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "no_du_repn"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[190])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be either"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[192])))
  },
  /* row 195 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 196 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the first argument of"))
  },
  /* row 197 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 199 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list in the second argument of"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type name in the"))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element of the list"))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the first argument of"))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In third argument of the"))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element of the list in the first argument of"))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[208]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list in the first argument of"))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected integer between 0 and"))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a fill kind and size, got"))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 215 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local(...)"))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected nonnegative integer, got"))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the third argument of"))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected one of"))
  },
  /* row 220 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "full(...)"))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "double(...)"))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "partial_first(...)"))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "partial_shifted(...)"))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none_shifted(...)"))
  },
  /* row 225 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 226 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none_nowhere"))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 228 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "remote_args"))
  },
  /* row 229 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a nonempty list of"))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 231 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local_args"))
  },
  /* row 232 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in the"))
  },
  /* row 233 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element of the list in"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[233]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 235 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the argument of"))
  },
  /* row 237 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list"))
  },
  /* row 238 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the second argument of"))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 240 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sectag_rest_of_word"))
  },
  /* row 241 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sectag_bits(...)"))
  },
  /* row 242 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected nonnegative integer,"))
  },
  /* row 243 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_only(...)"))
  },
  /* row 244 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_local_sectag(...)"))
  },
  /* row 245 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_local_sectag_bits(...)"))
  },
  /* row 246 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_remote_sectag(...)"))
  },
  /* row 247 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ptag_remote_sectag_bits(...)"))
  },
  /* row 248 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg(...)"))
  },
  /* row 249 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nondirect_arg(...)"))
  },
  /* row 250 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "constant_functor(...)"))
  },
  /* row 251 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "nonconstant_functor(...)"))
  },
  /* row 252 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 253 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument"))
  },
  /* row 254 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 255 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "notag(...)"))
  },
  /* row 256 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_dummy(...)"))
  },
  /* row 257 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "enum(...)"))
  },
  /* row 258 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du"))
  },
  /* row 259 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gen_du_only_functor"))
  },
  /* row 260 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in second argument of a"))
  },
  /* row 261 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 262 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item:"))
  },
  /* row 263 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of a"))
  },
  /* row 264 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row 265 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should specify the type\'s representation."))
  },
  /* row 266 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_direct_dummy"))
  },
  /* row 267 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_notag"))
  },
  /* row 268 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_eqv_to"))
  },
  /* row 269 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fits_in_n_bits"))
  },
  /* row 270 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_word_aligned_ptr"))
  },
  /* row 271 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "has_direct_arg_functors"))
  },
  /* row 272 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "du_repn"))
  },
  /* row 273 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "maybe_foreign_type_repn"))
  },
  /* row 274 */
  {
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_2[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[8][1] = {
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
    ((MR_Box) ((MR_String) ""))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[25])))
  },
};


static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_3_0_s parse_tree__parse_type_repn_vector_common_3[20] = {
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
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "java",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "double",
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "full",
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "none_nowhere",
    (MR_Integer) 2
  },
  /* row 7 */
  {
    (MR_String) "none_shifted",
    (MR_Integer) 3
  },
  /* row 8 */
  {
    (MR_String) "partial_first",
    (MR_Integer) 4
  },
  /* row 9 */
  {
    (MR_String) "partial_shifted",
    (MR_Integer) 4
  },
  /* row 10 */
  {
    (MR_String) "ptag_local_sectag",
    (MR_Integer) 0
  },
  /* row 11 */
  {
    (MR_String) "ptag_local_sectag_bits",
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_String) "ptag_only",
    (MR_Integer) 2
  },
  /* row 13 */
  {
    (MR_String) "ptag_remote_sectag",
    (MR_Integer) 0
  },
  /* row 14 */
  {
    (MR_String) "ptag_remote_sectag_bits",
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "direct_dummy",
    (MR_Integer) 0
  },
  /* row 16 */
  {
    (MR_String) "enum",
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "gen_du",
    (MR_Integer) 2
  },
  /* row 18 */
  {
    (MR_String) "gen_du_only_functor",
    (MR_Integer) 3
  },
  /* row 19 */
  {
    (MR_String) "notag",
    (MR_Integer) 4
  },
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_4_0_s parse_tree__parse_type_repn_vector_common_4[80] = {
  /* row 0 */   {     (MR_String) "double" },
  /* row 1 */   {     (MR_String) "full" },
  /* row 2 */   {     (MR_String) "none_nowhere" },
  /* row 3 */   {     (MR_String) "none_shifted" },
  /* row 4 */   {     (MR_String) "partial_first" },
  /* row 5 */   {     (MR_String) "partial_shifted" },
  /* row 6 */   {     (MR_String) "ptag_local_sectag" },
  /* row 7 */   {     (MR_String) "ptag_local_sectag_bits" },
  /* row 8 */   {     (MR_String) "ptag_only" },
  /* row 9 */   {     (MR_String) "ptag_remote_sectag" },
  /* row 10 */   {     (MR_String) "ptag_remote_sectag_bits" },
  /* row 11 */   {     (MR_String) "direct_dummy" },
  /* row 12 */   {     (MR_String) "enum" },
  /* row 13 */   {     (MR_String) "gen_du" },
  /* row 14 */   {     (MR_String) "gen_du_only_functor" },
  /* row 15 */   {     (MR_String) "notag" },
  /* row 16 */   {     (MR_String) "du_repn" },
  /* row 17 */   {     NULL },
  /* row 18 */   {     (MR_String) "is_word_aligned_ptr" },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     (MR_String) "is_eqv_to" },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "has_direct_arg_functors" },
  /* row 32 */   {     (MR_String) "is_direct_dummy" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     NULL },
  /* row 37 */   {     (MR_String) "maybe_foreign_type_repn" },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     (MR_String) "fits_in_n_bits" },
  /* row 45 */   {     NULL },
  /* row 46 */   {     (MR_String) "is_notag" },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "du_repn" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     (MR_String) "is_word_aligned_ptr" },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     (MR_String) "is_eqv_to" },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     (MR_String) "has_direct_arg_functors" },
  /* row 64 */   {     (MR_String) "is_direct_dummy" },
  /* row 65 */   {     NULL },
  /* row 66 */   {     NULL },
  /* row 67 */   {     NULL },
  /* row 68 */   {     NULL },
  /* row 69 */   {     (MR_String) "maybe_foreign_type_repn" },
  /* row 70 */   {     NULL },
  /* row 71 */   {     NULL },
  /* row 72 */   {     NULL },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     (MR_String) "fits_in_n_bits" },
  /* row 77 */   {     NULL },
  /* row 78 */   {     (MR_String) "is_notag" },
  /* row 79 */   {     NULL },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_0 = {
  (MR_String) "direct_in_item",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_1 = {
  (MR_String) "indirect_in_maybe_foreign_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_value_ordered_du_where_0[2] = {
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_0,
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_name_ordered_du_where_0[2] = {
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_0,
  &parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_functor_desc_du_where_0_1
};

static const MR_Integer parse_tree__parse_type_repn__parse_tree__parse_type_repn__functor_number_map_du_where_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_repn__parse_tree__parse_type_repn__type_ctor_info_du_where_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_repn____Unify____du_where_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_repn____Compare____du_where_0_0_10001)),
  (MR_String) "parse_tree.parse_type_repn",
  (MR_String) "du_where",
  {     parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_name_ordered_du_where_0 },
  {     parse_tree__parse_type_repn__parse_tree__parse_type_repn__enum_value_ordered_du_where_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_type_repn__parse_tree__parse_type_repn__functor_number_map_du_where_0
};

static void MR_CALL 
parse_tree__parse_type_repn____Compare____du_where_0_0(
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
parse_tree__parse_type_repn____Unify____du_where_0_0(
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

      TypeContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[8])));
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
          slot_0 = ((MR_hash_string4(AtomStr_17)) & (MR_Integer) 31);
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          str_1 = ((&parse_tree__parse_type_repn_vector_common_4[16 + slot_0]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0;
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
        MR_Integer slot_2 = ((MR_hash_string4(AtomStr_17)) & (MR_Integer) 31);
        MR_String str_3 = ((&parse_tree__parse_type_repn_vector_common_4[48 + slot_2]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0;

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
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_83;

                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (AtomStr_17));
                  }
                  {
                    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
                    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[13])));
                  }
                  {
                    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[262])));
                    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
                  }
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[261])));
                    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
                  }
                  {
                    DuPieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), DuPieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[260])));
                    MR_hl_field(MR_mktag(1), DuPieces_28, 1) = ((MR_Box) (Var_58));
                  }
                  {
                    Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (DuPieces_28));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
                    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (RepnContext_19));
                    MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_79));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    DuSpec_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), DuSpec_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), DuSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), DuSpec_29, 2) = ((MR_Box) (Var_77));
                  }
                  {
                    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DuSpec_29));
                    MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_83));
                  }
                }
                else
                {
                  MR_Word Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_18, (MR_Integer) 1))));
                  MR_Word Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_18, (MR_Integer) 0))));

                  if ((Var_254 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeDuRepn_22;

                    parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_114_101_112_110_95_100_117_95_95_91_52_93_95_48_5_p_0(VarSet_8, (MR_Integer) 0, Var_255, &MaybeDuRepn_22);
                    if (((MR_tag((MR_Word) MaybeDuRepn_22)) == (MR_Integer) 0))
                      MaybeRepn_20 = (MR_Word) (MaybeDuRepn_22);
                    else
                    {
                      MR_Word DuRepn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuRepn_22, (MR_Integer) 0))));
                      MR_Word Var_87;

                      {
                        Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (DuRepn_23));
                      }
                      {
                        MaybeRepn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeRepn_20, 0) = ((MR_Box) (Var_87));
                      }
                    }
                  }
                  else
                  {
                    MR_Word DuPieces_208;
                    MR_Word DuSpec_209;
                    MR_Word Var_212;
                    MR_Word Var_215;
                    MR_Word Var_218;
                    MR_Word Var_219;
                    MR_Word Var_223;
                    MR_Word Var_224;
                    MR_Word Var_225;
                    MR_Word Var_226;
                    MR_Word Var_229;

                    {
                      Var_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_219, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_219, 1) = ((MR_Box) (AtomStr_17));
                    }
                    {
                      Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Var_219));
                      MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[13])));
                    }
                    {
                      Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[262])));
                      MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_218));
                    }
                    {
                      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[261])));
                      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_215));
                    }
                    {
                      DuPieces_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DuPieces_208, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[260])));
                      MR_hl_field(MR_mktag(1), DuPieces_208, 1) = ((MR_Box) (Var_212));
                    }
                    {
                      Var_226 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_226, 0) = ((MR_Box) (DuPieces_208));
                    }
                    {
                      Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (Var_226));
                      MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_224, 0) = ((MR_Box) (RepnContext_19));
                      MR_hl_field(MR_mktag(0), Var_224, 1) = ((MR_Box) (Var_225));
                    }
                    {
                      Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Var_224));
                      MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      DuSpec_209 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), DuSpec_209, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), DuSpec_209, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), DuSpec_209, 2) = ((MR_Box) (Var_223));
                    }
                    {
                      Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (DuSpec_209));
                      MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_229));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "is_word_aligned_ptr"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 8U), &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 10:
              {
                // case "is_eqv_to"
                ;
                parse_tree__parse_type_repn__parse_type_repn_eqv_to_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 15:
              {
                // case "has_direct_arg_functors"
                ;
                parse_tree__parse_type_repn__parse_type_repn_has_direct_arg_functors_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 16:
              {
                // case "is_direct_dummy"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 0U), &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 21:
              {
                // case "maybe_foreign_type_repn"
                ;
                parse_tree__parse_type_repn__parse_type_repn_maybe_foreign_type_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 28:
              {
                // case "fits_in_n_bits"
                ;
                parse_tree__parse_type_repn__parse_type_repn_fits_in_n_bits_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
              }
              break;
            case (MR_Integer) 30:
              {
                // case "is_notag"
                ;
                parse_tree__parse_type_repn__parse_no_arg_type_repn_5_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, (MR_Word) ((MR_Unsigned) 4U), &MaybeRepn_20);
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
        MR_Word Var_93;
        MR_Word Var_96;
        MR_Word Var_99;
        MR_Word Var_102;
        MR_Word Var_105;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_111;
        MR_Word Var_114;
        MR_Word Var_117;
        MR_Word Var_120;
        MR_Word Var_123;
        MR_Word Var_126;
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
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_173;

        RepnTermStr_30 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, RepnTerm_14);
        Var_109 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216]));
        {
          Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) (RepnTermStr_30));
        }
        {
          Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
        }
        {
          Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_156));
        }
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_153));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[273])));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
          MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[272])));
          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_144));
        }
        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[271])));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
        }
        {
          Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[270])));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
        }
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[269])));
          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[268])));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[267])));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[266])));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[219])));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[265])));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[264])));
          MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[261])));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
        }
        {
          RepnPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RepnPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[263])));
          MR_hl_field(MR_mktag(1), RepnPieces_31, 1) = ((MR_Box) (Var_93));
        }
        Var_168 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RepnTerm_14);
        {
          Var_170 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (RepnPieces_31));
        }
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (Var_169));
        }
        {
          Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RepnSpec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RepnSpec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), RepnSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), RepnSpec_32, 2) = ((MR_Box) (Var_166));
        }
        {
          Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (RepnSpec_32));
          MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_173));
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
        MR_Word Var_175;

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
          MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemRepnInfo_37));
        }
        {
          Var_175 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (Item_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_175));
        }
      }
      else
        *MaybeIOM_12 = (MR_Word) (&parse_tree__parse_type_repn_scalar_common_2[6]);
    }
    else
    {
      MR_Word Spec_40;
      MR_Word Var_196;
      MR_Word Var_197;
      MR_Word Var_202;

      {
        Var_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[274])));
      }
      {
        Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (Var_197));
        MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_196));
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Spec_40));
        MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_202));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_maybe_foreign_type_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10)
{
  {
    MR_bool succeeded;

    if ((RepnArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_31;
      MR_Word Spec_32;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_66;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[164])));
      }
      {
        Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_31, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Pieces_31));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (RepnContext_9));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) (Var_60));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
      }
    }
    else
    {
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 1))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 0))));

      if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_101;
        MR_Word Spec_102;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_116;

        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (RepnStr_7));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[164])));
        }
        {
          Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_101, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Pieces_101));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (RepnContext_9));
          MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_102, 2) = ((MR_Box) (Var_110));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Spec_102));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_116));
        }
      }
      else
      {
        MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 1))));
        MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 0))));

        if ((Var_154 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ForeignPairs_16;
          MR_Word ForeignSpecs_17;
          MR_Word MaybeMaybeDuRepn_20;
          MR_Word ForeignTerms_13;
          MR_Word MaybeDuRepn_21;

          succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_153, &ForeignTerms_13);
          if (succeeded)
          {
            succeeded = (ForeignTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            parse_tree__parse_type_repn__parse_foreign_language_types_6_p_0(VarSet_6, RepnStr_7, (MR_Integer) 1, ForeignTerms_13, &ForeignPairs_16, &ForeignSpecs_17);
          }
          else
          {
            MR_Word ForeignPieces_18;
            MR_Word ForeignSpec_19;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;

            ForeignPairs_16 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (RepnStr_7));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[167])));
            }
            {
              ForeignPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[196])));
              MR_hl_field(MR_mktag(1), ForeignPieces_18, 1) = ((MR_Box) (Var_73));
            }
            Var_88 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_153);
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (ForeignPieces_18));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ForeignSpec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignSpec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ForeignSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), ForeignSpec_19, 2) = ((MR_Box) (Var_86));
            }
            {
              ForeignSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignSpecs_17, 0) = ((MR_Box) (ForeignSpec_19));
              MR_hl_field(MR_mktag(1), ForeignSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          parse_tree__parse_type_repn__parse_maybe_du_repn_4_p_0(VarSet_6, RepnStr_7, Var_155, &MaybeMaybeDuRepn_20);
          succeeded = (ForeignSpecs_17 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeMaybeDuRepn_20)) == (MR_Integer) 1);
            if (succeeded)
              MaybeDuRepn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeDuRepn_20, (MR_Integer) 0))));
          }
          if (succeeded)
            if ((ForeignPairs_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_maybe_foreign_type\'/5", (MR_String) "ForeignPairs = []");
                return;
              }
            }
            else
            {
              MR_Word HeadForeignPair_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignPairs_16, (MR_Integer) 0))));
              MR_Word TailForeignPairs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignPairs_16, (MR_Integer) 1))));
              MR_Word Repn_24;
              MR_Word Var_94;

              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (HeadForeignPair_22));
                MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (TailForeignPairs_23));
              }
              {
                Repn_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Repn_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Repn_24, 1) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(3), Repn_24, 2) = ((MR_Box) (MaybeDuRepn_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeRepn_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Repn_24));
              }
            }
          else
          {
            MR_Word Specs_25;
            MR_Word Var_97;

            Var_97 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[2]), MaybeMaybeDuRepn_20);
            Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ForeignSpecs_17, Var_97);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRepn_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_25));
            }
          }
        }
        else
        {
          MR_Word Pieces_118;
          MR_Word Spec_119;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_133;

          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (RepnStr_7));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[164])));
          }
          {
            Pieces_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_118, 1) = ((MR_Box) (Var_122));
          }
          {
            Var_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (Pieces_118));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (RepnContext_9));
            MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (Var_129));
          }
          {
            Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_119 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_119, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_119, 2) = ((MR_Box) (Var_127));
          }
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Spec_119));
            MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRepn_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_133));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_maybe_du_repn_4_p_0(
  MR_Word VarSet_5,
  MR_String RepnStr_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeDuRepn_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_String TermStr_9;
    MR_Word Var_18;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          TermStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
          succeeded = (strcmp(TermStr_9, (MR_String) "no_du_repn") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeMaybeDuRepn_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[5]));
    else
    {
      MR_Word ArgTerm_11;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_String TermStr_62;

      succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          TermStr_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
          succeeded = (strcmp(TermStr_62, (MR_String) "du_repn") == 0);
          if (succeeded)
          {
            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeDuRepn_13;

        parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_114_101_112_110_95_100_117_95_95_91_52_93_95_48_5_p_0(VarSet_5, (MR_Integer) 1, ArgTerm_11, &MaybeDuRepn_13);
        if (((MR_tag((MR_Word) MaybeDuRepn_13)) == (MR_Integer) 0))
          *MaybeMaybeDuRepn_8 = (MR_Word) (MaybeDuRepn_13);
        else
        {
          MR_Word DuRepn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuRepn_13, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (DuRepn_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMaybeDuRepn_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        MR_Word Pieces_16;
        MR_Word Spec_17;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_60;

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (RepnStr_6));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[194])));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[197])));
          MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_28));
        }
        Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces_16));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_53));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeDuRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_114_101_112_110_95_100_117_95_95_91_52_93_95_48_5_p_0(
  MR_Word VarSet_6,
  MR_Word DuWhere_7,
  MR_Word Term_8,
  MR_Word * MaybeDuRepn_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    MR_String AtomStr_11;
    MR_Word ArgTerms_12;
    MR_Word TermContext_13;
    MR_Word Var_78;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      TermContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 0);
      if (succeeded)
      {
        AtomStr_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 4;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(AtomStr_11, ((&parse_tree__parse_type_repn_vector_common_4[11 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0);
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
        result_7 = MR_strcmp(AtomStr_11, ((&parse_tree__parse_type_repn_vector_common_3[15 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_3[15 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "direct_dummy"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_277;
                  MR_Word Var_278;
                  MR_Word Var_279;
                  MR_Word Var_280;
                  MR_Word Var_281;
                  MR_Word Var_284;
                  MR_Word Prefix_399;
                  MR_Word Spec_401;

                  Prefix_399 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
                  Var_281 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_399, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[53])));
                  {
                    Var_280 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_280, 0) = ((MR_Box) (Var_281));
                  }
                  {
                    Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (Var_280));
                    MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_278 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_278, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_278, 1) = ((MR_Box) (Var_279));
                  }
                  {
                    Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (Var_278));
                    MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_401 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_401, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_401, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_401, 2) = ((MR_Box) (Var_277));
                  }
                  {
                    Var_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_284, 0) = ((MR_Box) (Spec_401));
                    MR_hl_field(MR_mktag(1), Var_284, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuRepn_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_284));
                  }
                }
                else
                {
                  MR_Word Var_808 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_809 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_808 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeFunctorName_395;

                    parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[58])), (MR_String) "function symbol", Var_809, &MaybeFunctorName_395);
                    if (((MR_tag((MR_Word) MaybeFunctorName_395)) == (MR_Integer) 0))
                      *MaybeDuRepn_10 = (MR_Word) (MaybeFunctorName_395);
                    else
                    {
                      MR_Word DirectDummyRepn_27;
                      MR_String FunctorName_387 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_395, (MR_Integer) 0))));
                      MR_Word DuRepn_388;

                      DirectDummyRepn_27 = (MR_Word) (FunctorName_387);
                      {
                        DuRepn_388 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), DuRepn_388, 0) = ((MR_Box) (DirectDummyRepn_27));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeDuRepn_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuRepn_388));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_506;
                    MR_Word Var_507;
                    MR_Word Var_508;
                    MR_Word Var_509;
                    MR_Word Var_510;
                    MR_Word Var_513;
                    MR_Word Prefix_515;
                    MR_Word Spec_517;

                    Prefix_515 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
                    Var_510 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_515, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[53])));
                    {
                      Var_509 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_509, 0) = ((MR_Box) (Var_510));
                    }
                    {
                      Var_508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_508, 0) = ((MR_Box) (Var_509));
                      MR_hl_field(MR_mktag(1), Var_508, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_507 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_507, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_507, 1) = ((MR_Box) (Var_508));
                    }
                    {
                      Var_506 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_506, 0) = ((MR_Box) (Var_507));
                      MR_hl_field(MR_mktag(1), Var_506, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_517 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_517, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_517, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_517, 2) = ((MR_Box) (Var_506));
                    }
                    {
                      Var_513 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_513, 0) = ((MR_Box) (Spec_517));
                      MR_hl_field(MR_mktag(1), Var_513, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeDuRepn_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_513));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "enum"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_186;
                  MR_Word Var_187;
                  MR_Word Var_188;
                  MR_Word Var_189;
                  MR_Word Var_190;
                  MR_Word Var_193;
                  MR_Word Prefix_426;
                  MR_Word Spec_428;

                  Prefix_426 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
                  Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_426, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[62])));
                  {
                    Var_189 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (Var_190));
                  }
                  {
                    Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Var_189));
                    MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) (Var_188));
                  }
                  {
                    Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
                    MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_428 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_428, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_428, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_428, 2) = ((MR_Box) (Var_186));
                  }
                  {
                    Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Spec_428));
                    MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuRepn_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_193));
                  }
                }
                else
                {
                  MR_Word Var_810 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_811 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_810 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word EnumFunctorNames_43;
                    MR_Word EnumSpecs_44;
                    MR_Word EnumFunctorTerms_40;

                    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_811, &EnumFunctorTerms_40);
                    if (succeeded)
                    {
                      succeeded = (EnumFunctorTerms_40 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                      }
                    }
                    if (succeeded)
                    {
                      parse_tree__parse_type_repn__parse_strings_7_p_0(VarSet_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[66])), (MR_String) "function symbol", (MR_Integer) 1, EnumFunctorTerms_40, &EnumFunctorNames_43, &EnumSpecs_44);
                    }
                    else
                    {
                      MR_Word EnumPieces_45;
                      MR_Word EnumSpec_46;
                      MR_Word Var_241;
                      MR_Word Var_242;
                      MR_Word Var_254;
                      MR_Word Var_255;
                      MR_Word Var_256;
                      MR_Word Var_257;
                      MR_Word Var_258;

                      EnumFunctorNames_43 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        Var_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_242, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_242, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (Var_242));
                        MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[70])));
                      }
                      {
                        EnumPieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), EnumPieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[196])));
                        MR_hl_field(MR_mktag(1), EnumPieces_45, 1) = ((MR_Box) (Var_241));
                      }
                      Var_256 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_811);
                      {
                        Var_258 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_258, 0) = ((MR_Box) (EnumPieces_45));
                      }
                      {
                        Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (Var_258));
                        MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_255 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_255, 0) = ((MR_Box) (Var_256));
                        MR_hl_field(MR_mktag(0), Var_255, 1) = ((MR_Box) (Var_257));
                      }
                      {
                        Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Var_255));
                        MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        EnumSpec_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), EnumSpec_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), EnumSpec_46, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), EnumSpec_46, 2) = ((MR_Box) (Var_254));
                      }
                      {
                        EnumSpecs_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), EnumSpecs_44, 0) = ((MR_Box) (EnumSpec_46));
                        MR_hl_field(MR_mktag(1), EnumSpecs_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    succeeded = (EnumSpecs_44 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      if ((EnumFunctorNames_43 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du\'/5", (MR_String) "EnumFunctorNames = []");
                          return;
                        }
                      }
                      else
                      {
                        MR_String HeadEnumFunctorName_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), EnumFunctorNames_43, (MR_Integer) 0))));
                        MR_Word TailEnumFunctorNames_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EnumFunctorNames_43, (MR_Integer) 1))));
                        MR_Word EnumRepn_49;
                        MR_Word Var_262;
                        MR_Word Var_263;

                        {
                          Var_262 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_262, 0) = ((MR_Box) (HeadEnumFunctorName_47));
                          MR_hl_field(MR_mktag(0), Var_262, 1) = ((MR_Box) (TailEnumFunctorNames_48));
                        }
                        {
                          EnumRepn_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), EnumRepn_49, 0) = ((MR_Box) (Var_262));
                          MR_hl_field(MR_mktag(0), EnumRepn_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_263 = (MR_Word) ((MR_Word) (EnumRepn_49));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeDuRepn_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_263));
                        }
                      }
                    else
                    {
                      MR_Word Specs_422;

                      Specs_422 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EnumSpecs_44, (MR_Word) ((MR_Unsigned) 0U));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeDuRepn_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_422));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_818 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_810, (MR_Integer) 1))));
                    MR_Word Var_819 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_810, (MR_Integer) 0))));

                    if ((Var_818 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word ForeignEnums_624;
                      MR_Word ForeignEnumSpecs_625;
                      MR_Word EnumFunctorNames_629;
                      MR_Word EnumSpecs_630;
                      MR_Word ForeignEnumTerms_35;
                      MR_Word EnumFunctorTerms_574;

                      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_819, &ForeignEnumTerms_35);
                      if (succeeded)
                      {
                        succeeded = (ForeignEnumTerms_35 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                      {
                        parse_tree__parse_type_repn__parse_foreign_enum_specs_6_p_0(VarSet_6, AtomStr_11, (MR_Integer) 1, ForeignEnumTerms_35, &ForeignEnums_624, &ForeignEnumSpecs_625);
                      }
                      else
                      {
                        MR_Word ForeignPieces_38;
                        MR_Word ForeignSpec_39;
                        MR_Word Var_200;
                        MR_Word Var_203;
                        MR_Word Var_204;
                        MR_Word Var_219;
                        MR_Word Var_220;
                        MR_Word Var_221;
                        MR_Word Var_222;
                        MR_Word Var_223;

                        ForeignEnums_624 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          Var_204 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_204, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_204, 1) = ((MR_Box) (AtomStr_11));
                        }
                        {
                          Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Var_204));
                          MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[75])));
                        }
                        {
                          Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[254])));
                          MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_203));
                        }
                        {
                          ForeignPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ForeignPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[253])));
                          MR_hl_field(MR_mktag(1), ForeignPieces_38, 1) = ((MR_Box) (Var_200));
                        }
                        Var_221 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_819);
                        {
                          Var_223 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_223, 0) = ((MR_Box) (ForeignPieces_38));
                        }
                        {
                          Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (Var_223));
                          MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_220 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (Var_221));
                          MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) (Var_222));
                        }
                        {
                          Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
                          MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ForeignSpec_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ForeignSpec_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), ForeignSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(0), ForeignSpec_39, 2) = ((MR_Box) (Var_219));
                        }
                        {
                          ForeignEnumSpecs_625 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ForeignEnumSpecs_625, 0) = ((MR_Box) (ForeignSpec_39));
                          MR_hl_field(MR_mktag(1), ForeignEnumSpecs_625, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_811, &EnumFunctorTerms_574);
                      if (succeeded)
                      {
                        succeeded = (EnumFunctorTerms_574 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                      {
                        parse_tree__parse_type_repn__parse_strings_7_p_0(VarSet_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[66])), (MR_String) "function symbol", (MR_Integer) 1, EnumFunctorTerms_574, &EnumFunctorNames_629, &EnumSpecs_630);
                      }
                      else
                      {
                        MR_Word EnumPieces_556;
                        MR_Word EnumSpec_557;
                        MR_Word Var_560;
                        MR_Word Var_561;
                        MR_Word Var_565;
                        MR_Word Var_566;
                        MR_Word Var_567;
                        MR_Word Var_568;
                        MR_Word Var_569;

                        EnumFunctorNames_629 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          Var_561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_561, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_561, 1) = ((MR_Box) (AtomStr_11));
                        }
                        {
                          Var_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_560, 0) = ((MR_Box) (Var_561));
                          MR_hl_field(MR_mktag(1), Var_560, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[70])));
                        }
                        {
                          EnumPieces_556 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), EnumPieces_556, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[196])));
                          MR_hl_field(MR_mktag(1), EnumPieces_556, 1) = ((MR_Box) (Var_560));
                        }
                        Var_567 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_811);
                        {
                          Var_569 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_569, 0) = ((MR_Box) (EnumPieces_556));
                        }
                        {
                          Var_568 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_568, 0) = ((MR_Box) (Var_569));
                          MR_hl_field(MR_mktag(1), Var_568, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_566 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_566, 0) = ((MR_Box) (Var_567));
                          MR_hl_field(MR_mktag(0), Var_566, 1) = ((MR_Box) (Var_568));
                        }
                        {
                          Var_565 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_565, 0) = ((MR_Box) (Var_566));
                          MR_hl_field(MR_mktag(1), Var_565, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          EnumSpec_557 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), EnumSpec_557, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), EnumSpec_557, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(0), EnumSpec_557, 2) = ((MR_Box) (Var_565));
                        }
                        {
                          EnumSpecs_630 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), EnumSpecs_630, 0) = ((MR_Box) (EnumSpec_557));
                          MR_hl_field(MR_mktag(1), EnumSpecs_630, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      succeeded = (EnumSpecs_630 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        succeeded = (ForeignEnumSpecs_625 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        if ((EnumFunctorNames_629 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_repn.parse_type_repn_du\'/5", (MR_String) "EnumFunctorNames = []");
                            return;
                          }
                        }
                        else
                        {
                          MR_String HeadEnumFunctorName_600 = ((MR_String) ((MR_hl_field(MR_mktag(1), EnumFunctorNames_629, (MR_Integer) 0))));
                          MR_Word TailEnumFunctorNames_601 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EnumFunctorNames_629, (MR_Integer) 1))));
                          MR_Word EnumRepn_602;
                          MR_Word Var_603;
                          MR_Word Var_604;

                          {
                            Var_603 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_603, 0) = ((MR_Box) (HeadEnumFunctorName_600));
                            MR_hl_field(MR_mktag(0), Var_603, 1) = ((MR_Box) (TailEnumFunctorNames_601));
                          }
                          {
                            EnumRepn_602 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), EnumRepn_602, 0) = ((MR_Box) (Var_603));
                            MR_hl_field(MR_mktag(0), EnumRepn_602, 1) = ((MR_Box) (ForeignEnums_624));
                          }
                          Var_604 = (MR_Word) ((MR_Word) (EnumRepn_602));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeDuRepn_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_604));
                          }
                        }
                      else
                      {
                        MR_Word Specs_612;

                        Specs_612 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EnumSpecs_630, ForeignEnumSpecs_625);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeDuRepn_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_612));
                        }
                      }
                    }
                    else
                    {
                      MR_Word Var_536;
                      MR_Word Var_537;
                      MR_Word Var_538;
                      MR_Word Var_539;
                      MR_Word Var_540;
                      MR_Word Var_543;
                      MR_Word Prefix_545;
                      MR_Word Spec_547;

                      Prefix_545 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
                      Var_540 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_545, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[62])));
                      {
                        Var_539 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_539, 0) = ((MR_Box) (Var_540));
                      }
                      {
                        Var_538 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_538, 0) = ((MR_Box) (Var_539));
                        MR_hl_field(MR_mktag(1), Var_538, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_537 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_537, 0) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(0), Var_537, 1) = ((MR_Box) (Var_538));
                      }
                      {
                        Var_536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_536, 0) = ((MR_Box) (Var_537));
                        MR_hl_field(MR_mktag(1), Var_536, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_547 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_547, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_547, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_547, 2) = ((MR_Box) (Var_536));
                      }
                      {
                        Var_543 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_543, 0) = ((MR_Box) (Spec_547));
                        MR_hl_field(MR_mktag(1), Var_543, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeDuRepn_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_543));
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "gen_du"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_128;
                  MR_Word Var_129;
                  MR_Word Var_138;
                  MR_Word Var_139;
                  MR_Word Var_140;
                  MR_Word Var_141;
                  MR_Word Var_144;
                  MR_Word Pieces_451;
                  MR_Word Spec_452;

                  {
                    Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
                    MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
                  }
                  {
                    Pieces_451 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_451, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_451, 1) = ((MR_Box) (Var_128));
                  }
                  {
                    Var_141 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (Pieces_451));
                  }
                  {
                    Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
                    MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (Var_140));
                  }
                  {
                    Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                    MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_452 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_452, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_452, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_452, 2) = ((MR_Box) (Var_138));
                  }
                  {
                    Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Spec_452));
                    MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuRepn_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_144));
                  }
                }
                else
                {
                  MR_Word Var_812 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_813 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_812 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word HeadDuFunctorTerm_55;
                    MR_Word TailDuFunctorTerms_56;
                    MR_Word MaybeDuFunctorTerms_54;

                    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_813, &MaybeDuFunctorTerms_54);
                    if (succeeded)
                    {
                      succeeded = (MaybeDuFunctorTerms_54 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        HeadDuFunctorTerm_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuFunctorTerms_54, (MR_Integer) 0))));
                        TailDuFunctorTerms_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuFunctorTerms_54, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word MaybeHeadDuFunctor_57;
                      MR_Word TailDuFunctors_58;
                      MR_Word TailSpecs_59;
                      MR_Word HeadDuFunctor_60;

                      parse_tree__parse_type_repn__parse_du_functor_3_p_0(VarSet_6, HeadDuFunctorTerm_55, &MaybeHeadDuFunctor_57);
                      parse_tree__parse_type_repn__parse_du_functors_4_p_0(VarSet_6, TailDuFunctorTerms_56, &TailDuFunctors_58, &TailSpecs_59);
                      succeeded = (TailSpecs_59 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) MaybeHeadDuFunctor_57)) == (MR_Integer) 1);
                        if (succeeded)
                          HeadDuFunctor_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadDuFunctor_57, (MR_Integer) 0))));
                      }
                      if (succeeded)
                      {
                        MR_Word Var_147;
                        MR_Word Var_148;
                        MR_Word Var_149;

                        {
                          Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (HeadDuFunctor_60));
                          MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (TailDuFunctors_58));
                        }
                        {
                          Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                        }
                        {
                          Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) (Var_148));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeDuRepn_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_147));
                        }
                      }
                      else
                      {
                        MR_Word Var_150;
                        MR_Word Specs_439;

                        Var_150 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_0), MaybeHeadDuFunctor_57);
                        Specs_439 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_150, TailSpecs_59);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeDuRepn_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_439));
                        }
                      }
                    }
                    else
                    {
                      MR_Word Var_153;
                      MR_Word Var_154;
                      MR_Word Var_166;
                      MR_Word Var_167;
                      MR_Word Var_168;
                      MR_Word Var_169;
                      MR_Word Var_172;
                      MR_Word Pieces_442;
                      MR_Word Spec_443;

                      {
                        Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_154));
                        MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[79])));
                      }
                      {
                        Pieces_442 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_442, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[201])));
                        MR_hl_field(MR_mktag(1), Pieces_442, 1) = ((MR_Box) (Var_153));
                      }
                      {
                        Var_169 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Pieces_442));
                      }
                      {
                        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
                        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (Var_168));
                      }
                      {
                        Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
                        MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_443 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_443, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_443, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_443, 2) = ((MR_Box) (Var_166));
                      }
                      {
                        Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Spec_443));
                        MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeDuRepn_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_172));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_678;
                    MR_Word Var_679;
                    MR_Word Var_683;
                    MR_Word Var_684;
                    MR_Word Var_685;
                    MR_Word Var_686;
                    MR_Word Var_689;
                    MR_Word Pieces_691;
                    MR_Word Spec_692;

                    {
                      Var_679 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_679, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_679, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_678 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_678, 0) = ((MR_Box) (Var_679));
                      MR_hl_field(MR_mktag(1), Var_678, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
                    }
                    {
                      Pieces_691 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_691, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                      MR_hl_field(MR_mktag(1), Pieces_691, 1) = ((MR_Box) (Var_678));
                    }
                    {
                      Var_686 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_686, 0) = ((MR_Box) (Pieces_691));
                    }
                    {
                      Var_685 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_685, 0) = ((MR_Box) (Var_686));
                      MR_hl_field(MR_mktag(1), Var_685, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_684 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_684, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_684, 1) = ((MR_Box) (Var_685));
                    }
                    {
                      Var_683 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_683, 0) = ((MR_Box) (Var_684));
                      MR_hl_field(MR_mktag(1), Var_683, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_692 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_692, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_692, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_692, 2) = ((MR_Box) (Var_683));
                    }
                    {
                      Var_689 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_689, 0) = ((MR_Box) (Spec_692));
                      MR_hl_field(MR_mktag(1), Var_689, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeDuRepn_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_689));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                // case "gen_du_only_functor"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_87;
                  MR_Word Var_88;
                  MR_Word Var_97;
                  MR_Word Var_98;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_103;
                  MR_Word Pieces_470;
                  MR_Word Spec_471;

                  {
                    Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                  }
                  {
                    Pieces_470 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_470, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_470, 1) = ((MR_Box) (Var_87));
                  }
                  {
                    Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Pieces_470));
                  }
                  {
                    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Var_99));
                  }
                  {
                    Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
                    MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_471 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_471, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_471, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_471, 2) = ((MR_Box) (Var_97));
                  }
                  {
                    Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_471));
                    MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuRepn_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
                  }
                }
                else
                {
                  MR_Word Var_814 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_815 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_814 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_712;
                    MR_Word Var_713;
                    MR_Word Var_717;
                    MR_Word Var_718;
                    MR_Word Var_719;
                    MR_Word Var_720;
                    MR_Word Var_723;
                    MR_Word Pieces_725;
                    MR_Word Spec_726;

                    {
                      Var_713 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_713, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_713, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_712, 0) = ((MR_Box) (Var_713));
                      MR_hl_field(MR_mktag(1), Var_712, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                    }
                    {
                      Pieces_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_725, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                      MR_hl_field(MR_mktag(1), Pieces_725, 1) = ((MR_Box) (Var_712));
                    }
                    {
                      Var_720 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_720, 0) = ((MR_Box) (Pieces_725));
                    }
                    {
                      Var_719 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_719, 0) = ((MR_Box) (Var_720));
                      MR_hl_field(MR_mktag(1), Var_719, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_718 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_718, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_718, 1) = ((MR_Box) (Var_719));
                    }
                    {
                      Var_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_717, 0) = ((MR_Box) (Var_718));
                      MR_hl_field(MR_mktag(1), Var_717, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_726 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_726, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_726, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_726, 2) = ((MR_Box) (Var_717));
                    }
                    {
                      Var_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_723, 0) = ((MR_Box) (Spec_726));
                      MR_hl_field(MR_mktag(1), Var_723, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeDuRepn_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_723));
                    }
                  }
                  else
                  {
                    MR_Word Var_820 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_814, (MR_Integer) 1))));
                    MR_Word Var_821 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_814, (MR_Integer) 0))));

                    if ((Var_820 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_729;
                      MR_Word Var_730;
                      MR_Word Var_734;
                      MR_Word Var_735;
                      MR_Word Var_736;
                      MR_Word Var_737;
                      MR_Word Var_740;
                      MR_Word Pieces_742;
                      MR_Word Spec_743;

                      {
                        Var_730 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_730, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_730, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_729 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_729, 0) = ((MR_Box) (Var_730));
                        MR_hl_field(MR_mktag(1), Var_729, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                      }
                      {
                        Pieces_742 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_742, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                        MR_hl_field(MR_mktag(1), Pieces_742, 1) = ((MR_Box) (Var_729));
                      }
                      {
                        Var_737 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_737, 0) = ((MR_Box) (Pieces_742));
                      }
                      {
                        Var_736 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_736, 0) = ((MR_Box) (Var_737));
                        MR_hl_field(MR_mktag(1), Var_736, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_735 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_735, 0) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(0), Var_735, 1) = ((MR_Box) (Var_736));
                      }
                      {
                        Var_734 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_734, 0) = ((MR_Box) (Var_735));
                        MR_hl_field(MR_mktag(1), Var_734, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_743 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_743, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_743, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_743, 2) = ((MR_Box) (Var_734));
                      }
                      {
                        Var_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_740, 0) = ((MR_Box) (Spec_743));
                        MR_hl_field(MR_mktag(1), Var_740, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeDuRepn_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_740));
                      }
                    }
                    else
                    {
                      MR_Word Var_822 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_820, (MR_Integer) 1))));
                      MR_Word Var_823 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_820, (MR_Integer) 0))));

                      if ((Var_822 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word MaybeOnlyFunctorArgs64_65;
                        MR_Word MaybeOnlyFunctorArgs32_66;
                        MR_Word Var_110;
                        MR_Word Var_111;
                        MR_Word ContextPieces_464;
                        MR_Word MaybeFunctorName_465;
                        MR_Word OnlyFunctorArgs64_67;
                        MR_Word OnlyFunctorArgs32_68;
                        MR_String FunctorName_462;

                        {
                          Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (AtomStr_11));
                        }
                        {
                          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
                          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[209])));
                        }
                        {
                          ContextPieces_464 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ContextPieces_464, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[252])));
                          MR_hl_field(MR_mktag(1), ContextPieces_464, 1) = ((MR_Box) (Var_110));
                        }
                        parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_6, ContextPieces_464, (MR_String) "function symbol", Var_815, &MaybeFunctorName_465);
                        parse_tree__parse_type_repn__parse_only_functor_args_4_p_0((MR_Unsigned) 63U, VarSet_6, Var_821, &MaybeOnlyFunctorArgs64_65);
                        parse_tree__parse_type_repn__parse_only_functor_args_4_p_0((MR_Unsigned) 31U, VarSet_6, Var_823, &MaybeOnlyFunctorArgs32_66);
                        succeeded = ((MR_tag((MR_Word) MaybeFunctorName_465)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          FunctorName_462 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_465, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) MaybeOnlyFunctorArgs64_65)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            OnlyFunctorArgs64_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyFunctorArgs64_65, (MR_Integer) 0))));
                            succeeded = ((MR_tag((MR_Word) MaybeOnlyFunctorArgs32_66)) == (MR_Integer) 1);
                            if (succeeded)
                              OnlyFunctorArgs32_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyFunctorArgs32_66, (MR_Integer) 0))));
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word Var_119;
                          MR_Word Var_120;

                          {
                            Var_120 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (FunctorName_462));
                            MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (OnlyFunctorArgs64_67));
                            MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (OnlyFunctorArgs32_68));
                          }
                          {
                            Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (Var_120));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeDuRepn_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_119));
                          }
                        }
                        else
                        {
                          MR_Word Var_121;
                          MR_Word Var_122;
                          MR_Word Var_123;
                          MR_Word Var_124;
                          MR_Word Specs_461;

                          Var_121 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_465);
                          Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_only_functor_args_0), MaybeOnlyFunctorArgs64_65);
                          Var_124 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_only_functor_args_0), MaybeOnlyFunctorArgs32_66);
                          Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_123, Var_124);
                          Specs_461 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_121, Var_122);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            *MaybeDuRepn_10 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_461));
                          }
                        }
                      }
                      else
                      {
                        MR_Word Var_746;
                        MR_Word Var_747;
                        MR_Word Var_751;
                        MR_Word Var_752;
                        MR_Word Var_753;
                        MR_Word Var_754;
                        MR_Word Var_757;
                        MR_Word Pieces_759;
                        MR_Word Spec_760;

                        {
                          Var_747 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_747, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_747, 1) = ((MR_Box) (AtomStr_11));
                        }
                        {
                          Var_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_746, 0) = ((MR_Box) (Var_747));
                          MR_hl_field(MR_mktag(1), Var_746, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                        }
                        {
                          Pieces_759 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_759, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                          MR_hl_field(MR_mktag(1), Pieces_759, 1) = ((MR_Box) (Var_746));
                        }
                        {
                          Var_754 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_754, 0) = ((MR_Box) (Pieces_759));
                        }
                        {
                          Var_753 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_753, 0) = ((MR_Box) (Var_754));
                          MR_hl_field(MR_mktag(1), Var_753, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_752 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_752, 0) = ((MR_Box) (TermContext_13));
                          MR_hl_field(MR_mktag(0), Var_752, 1) = ((MR_Box) (Var_753));
                        }
                        {
                          Var_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_751, 0) = ((MR_Box) (Var_752));
                          MR_hl_field(MR_mktag(1), Var_751, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Spec_760 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Spec_760, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), Spec_760, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(0), Spec_760, 2) = ((MR_Box) (Var_751));
                        }
                        {
                          Var_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_757, 0) = ((MR_Box) (Spec_760));
                          MR_hl_field(MR_mktag(1), Var_757, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeDuRepn_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_757));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                // case "notag"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Prefix_24;
                  MR_Word Spec_26;
                  MR_Word Var_310;
                  MR_Word Var_311;
                  MR_Word Var_312;
                  MR_Word Var_313;
                  MR_Word Var_314;
                  MR_Word Var_317;

                  Prefix_24 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
                  Var_314 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_24, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[83])));
                  {
                    Var_313 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_313, 0) = ((MR_Box) (Var_314));
                  }
                  {
                    Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_312, 0) = ((MR_Box) (Var_313));
                    MR_hl_field(MR_mktag(1), Var_312, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_311 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_311, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_311, 1) = ((MR_Box) (Var_312));
                  }
                  {
                    Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) (Var_311));
                    MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_310));
                  }
                  {
                    Var_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_317, 0) = ((MR_Box) (Spec_26));
                    MR_hl_field(MR_mktag(1), Var_317, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuRepn_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_317));
                  }
                }
                else
                {
                  MR_Word Var_816 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_817 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_816 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeFunctorName_16;

                    parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[85])), (MR_String) "function symbol", Var_817, &MaybeFunctorName_16);
                    if (((MR_tag((MR_Word) MaybeFunctorName_16)) == (MR_Integer) 0))
                      *MaybeDuRepn_10 = (MR_Word) (MaybeFunctorName_16);
                    else
                    {
                      MR_String FunctorName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_16, (MR_Integer) 0))));
                      MR_Word NotagRepn_18 = (MR_Word) (FunctorName_17);
                      MR_Word DuRepn_19;

                      {
                        DuRepn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), DuRepn_19, 0) = ((MR_Box) (NotagRepn_18));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeDuRepn_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuRepn_19));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Prefix_778;
                    MR_Word Spec_780;
                    MR_Word Var_783;
                    MR_Word Var_784;
                    MR_Word Var_785;
                    MR_Word Var_786;
                    MR_Word Var_787;
                    MR_Word Var_790;

                    Prefix_778 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
                    Var_787 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_778, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[83])));
                    {
                      Var_786 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_786, 0) = ((MR_Box) (Var_787));
                    }
                    {
                      Var_785 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_785, 0) = ((MR_Box) (Var_786));
                      MR_hl_field(MR_mktag(1), Var_785, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_784 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_784, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_784, 1) = ((MR_Box) (Var_785));
                    }
                    {
                      Var_783 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_783, 0) = ((MR_Box) (Var_784));
                      MR_hl_field(MR_mktag(1), Var_783, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_780 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_780, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_780, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_780, 2) = ((MR_Box) (Var_783));
                    }
                    {
                      Var_790 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_790, 0) = ((MR_Box) (Spec_780));
                      MR_hl_field(MR_mktag(1), Var_790, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeDuRepn_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_790));
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
      MR_String TermStr_77;
      MR_Word Var_334;
      MR_Word Var_337;
      MR_Word Var_338;
      MR_Word Var_340;
      MR_Word Var_343;
      MR_Word Var_346;
      MR_Word Var_349;
      MR_Word Var_352;
      MR_Word Var_355;
      MR_Word Var_358;
      MR_Word Var_361;
      MR_Word Var_364;
      MR_Word Var_367;
      MR_Word Var_368;
      MR_Word Var_377;
      MR_Word Var_378;
      MR_Word Var_379;
      MR_Word Var_380;
      MR_Word Var_381;
      MR_Word Var_382;
      MR_Word Var_385;
      MR_Word Prefix_488;
      MR_Word Pieces_489;
      MR_Word Spec_490;

      Prefix_488 = parse_tree__parse_type_repn__du_where_prefix_1_f_0(DuWhere_7);
      TermStr_77 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_8);
      Var_338 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216]));
      {
        Var_368 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_368, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_368, 1) = ((MR_Box) (TermStr_77));
      }
      {
        Var_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_367, 0) = ((MR_Box) (Var_368));
        MR_hl_field(MR_mktag(1), Var_367, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_364, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_364, 1) = ((MR_Box) (Var_367));
      }
      {
        Var_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_361, 0) = ((MR_Box) (Var_338));
        MR_hl_field(MR_mktag(1), Var_361, 1) = ((MR_Box) (Var_364));
      }
      {
        Var_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_358, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[259])));
        MR_hl_field(MR_mktag(1), Var_358, 1) = ((MR_Box) (Var_361));
      }
      {
        Var_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_355, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_355, 1) = ((MR_Box) (Var_358));
      }
      {
        Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_352, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[258])));
        MR_hl_field(MR_mktag(1), Var_352, 1) = ((MR_Box) (Var_355));
      }
      {
        Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (Var_338));
        MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) (Var_352));
      }
      {
        Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[257])));
        MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) (Var_349));
      }
      {
        Var_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_343, 0) = ((MR_Box) (Var_338));
        MR_hl_field(MR_mktag(1), Var_343, 1) = ((MR_Box) (Var_346));
      }
      {
        Var_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_340, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[256])));
        MR_hl_field(MR_mktag(1), Var_340, 1) = ((MR_Box) (Var_343));
      }
      {
        Var_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_337, 0) = ((MR_Box) (Var_338));
        MR_hl_field(MR_mktag(1), Var_337, 1) = ((MR_Box) (Var_340));
      }
      {
        Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_334, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[255])));
        MR_hl_field(MR_mktag(1), Var_334, 1) = ((MR_Box) (Var_337));
      }
      {
        Pieces_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_489, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[219])));
        MR_hl_field(MR_mktag(1), Pieces_489, 1) = ((MR_Box) (Var_334));
      }
      Var_379 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      Var_382 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_488, Pieces_489);
      {
        Var_381 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_381, 0) = ((MR_Box) (Var_382));
      }
      {
        Var_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_380, 0) = ((MR_Box) (Var_381));
        MR_hl_field(MR_mktag(1), Var_380, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_378 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_378, 0) = ((MR_Box) (Var_379));
        MR_hl_field(MR_mktag(0), Var_378, 1) = ((MR_Box) (Var_380));
      }
      {
        Var_377 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_377, 0) = ((MR_Box) (Var_378));
        MR_hl_field(MR_mktag(1), Var_377, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_490 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_490, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_490, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_490, 2) = ((MR_Box) (Var_377));
      }
      {
        Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (Spec_490));
        MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuRepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_385));
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
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_151;

          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
          }
          {
            Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_135));
          }
          {
            Var_148 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_148, 0) = ((MR_Box) (Pieces_30));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (Var_147));
          }
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_145));
          }
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Spec_31));
            MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuFunctor_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_151));
          }
        }
        else
        {
          MR_Word Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
          MR_Word Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

          if ((Var_423 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_253;
            MR_Word Spec_254;
            MR_Word Var_257;
            MR_Word Var_258;
            MR_Word Var_262;
            MR_Word Var_263;
            MR_Word Var_264;
            MR_Word Var_265;
            MR_Word Var_268;

            {
              Var_258 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_258, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_258, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (Var_258));
              MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
            }
            {
              Pieces_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_253, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_253, 1) = ((MR_Box) (Var_257));
            }
            {
              Var_265 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_265, 0) = ((MR_Box) (Pieces_253));
            }
            {
              Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_264, 0) = ((MR_Box) (Var_265));
              MR_hl_field(MR_mktag(1), Var_264, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_263 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_263, 0) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(0), Var_263, 1) = ((MR_Box) (Var_264));
            }
            {
              Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_262, 0) = ((MR_Box) (Var_263));
              MR_hl_field(MR_mktag(1), Var_262, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_254 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_254, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_254, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_254, 2) = ((MR_Box) (Var_262));
            }
            {
              Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (Spec_254));
              MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuFunctor_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_268));
            }
          }
          else
          {
            MR_Word Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_423, (MR_Integer) 1))));
            MR_Word Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_423, (MR_Integer) 0))));

            if ((Var_427 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Pieces_270;
              MR_Word Spec_271;
              MR_Word Var_274;
              MR_Word Var_275;
              MR_Word Var_279;
              MR_Word Var_280;
              MR_Word Var_281;
              MR_Word Var_282;
              MR_Word Var_285;

              {
                Var_275 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_275, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_275, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (Var_275));
                MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
              }
              {
                Pieces_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_270, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                MR_hl_field(MR_mktag(1), Pieces_270, 1) = ((MR_Box) (Var_274));
              }
              {
                Var_282 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_282, 0) = ((MR_Box) (Pieces_270));
              }
              {
                Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_281, 0) = ((MR_Box) (Var_282));
                MR_hl_field(MR_mktag(1), Var_281, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_280 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_280, 0) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(0), Var_280, 1) = ((MR_Box) (Var_281));
              }
              {
                Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (Var_280));
                MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_271 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_271, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_271, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_271, 2) = ((MR_Box) (Var_279));
              }
              {
                Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (Spec_271));
                MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuFunctor_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_285));
              }
            }
            else
            {
              MR_Word Var_431 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_427, (MR_Integer) 1))));
              MR_Word Var_432 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_427, (MR_Integer) 0))));

              if ((Var_431 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word MaybeFunctorName_14;
                MR_Word MaybeSectagSize64_15;
                MR_Word MaybeSectagSize32_16;
                MR_String FunctorName_17;
                MR_Word SectagSize64_18;
                MR_Word SectagSize32_19;

                parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_4, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[126])), (MR_String) "function symbol", Var_424, &MaybeFunctorName_14);
                parse_tree__parse_type_repn__parse_sectag_size_4_p_0((MR_Unsigned) 63U, VarSet_4, Var_428, &MaybeSectagSize64_15);
                parse_tree__parse_type_repn__parse_sectag_size_4_p_0((MR_Unsigned) 31U, VarSet_4, Var_432, &MaybeSectagSize32_16);
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
                  MR_Word Var_168;
                  MR_Word Var_169;
                  MR_Word Var_170;
                  MR_Word Var_171;

                  Var_168 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_14);
                  Var_170 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_sectag_size_0), MaybeSectagSize64_15);
                  Var_171 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_sectag_size_0), MaybeSectagSize32_16);
                  Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_170, Var_171);
                  Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_168, Var_169);
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
                MR_Word Pieces_287;
                MR_Word Spec_288;
                MR_Word Var_291;
                MR_Word Var_292;
                MR_Word Var_296;
                MR_Word Var_297;
                MR_Word Var_298;
                MR_Word Var_299;
                MR_Word Var_302;

                {
                  Var_292 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_292, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_292, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (Var_292));
                  MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                }
                {
                  Pieces_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_287, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                  MR_hl_field(MR_mktag(1), Pieces_287, 1) = ((MR_Box) (Var_291));
                }
                {
                  Var_299 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_299, 0) = ((MR_Box) (Pieces_287));
                }
                {
                  Var_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_298, 0) = ((MR_Box) (Var_299));
                  MR_hl_field(MR_mktag(1), Var_298, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_297 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_297, 0) = ((MR_Box) (TermContext_9));
                  MR_hl_field(MR_mktag(0), Var_297, 1) = ((MR_Box) (Var_298));
                }
                {
                  Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_296, 0) = ((MR_Box) (Var_297));
                  MR_hl_field(MR_mktag(1), Var_296, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_288 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_288, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_288, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_288, 2) = ((MR_Box) (Var_296));
                }
                {
                  Var_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_302, 0) = ((MR_Box) (Spec_288));
                  MR_hl_field(MR_mktag(1), Var_302, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuFunctor_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_302));
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
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_94;
        MR_Word Pieces_221;
        MR_Word Spec_222;

        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])));
        }
        {
          Pieces_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_221, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Pieces_221));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_222 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_222, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_222, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_222, 2) = ((MR_Box) (Var_88));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Spec_222));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDuFunctor_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
        }
      }
      else
      {
        MR_Word Var_425 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
        MR_Word Var_426 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

        if ((Var_425 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_323;
          MR_Word Var_324;
          MR_Word Var_328;
          MR_Word Var_329;
          MR_Word Var_330;
          MR_Word Var_331;
          MR_Word Var_334;
          MR_Word Pieces_336;
          MR_Word Spec_337;

          {
            Var_324 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_324, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_324, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_323, 0) = ((MR_Box) (Var_324));
            MR_hl_field(MR_mktag(1), Var_323, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])));
          }
          {
            Pieces_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_336, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_336, 1) = ((MR_Box) (Var_323));
          }
          {
            Var_331 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_331, 0) = ((MR_Box) (Pieces_336));
          }
          {
            Var_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_330, 0) = ((MR_Box) (Var_331));
            MR_hl_field(MR_mktag(1), Var_330, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_329 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_329, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_329, 1) = ((MR_Box) (Var_330));
          }
          {
            Var_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_328, 0) = ((MR_Box) (Var_329));
            MR_hl_field(MR_mktag(1), Var_328, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_337 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_337, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_337, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_337, 2) = ((MR_Box) (Var_328));
          }
          {
            Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_334, 0) = ((MR_Box) (Spec_337));
            MR_hl_field(MR_mktag(1), Var_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeDuFunctor_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_334));
          }
        }
        else
        {
          MR_Word Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_425, (MR_Integer) 1))));
          MR_Word Var_430 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_425, (MR_Integer) 0))));

          if ((Var_429 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_340;
            MR_Word Var_341;
            MR_Word Var_345;
            MR_Word Var_346;
            MR_Word Var_347;
            MR_Word Var_348;
            MR_Word Var_351;
            MR_Word Pieces_353;
            MR_Word Spec_354;

            {
              Var_341 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_341, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_341, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_340, 0) = ((MR_Box) (Var_341));
              MR_hl_field(MR_mktag(1), Var_340, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])));
            }
            {
              Pieces_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_353, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_353, 1) = ((MR_Box) (Var_340));
            }
            {
              Var_348 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_348, 0) = ((MR_Box) (Pieces_353));
            }
            {
              Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_347, 0) = ((MR_Box) (Var_348));
              MR_hl_field(MR_mktag(1), Var_347, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_346 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_346, 0) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(0), Var_346, 1) = ((MR_Box) (Var_347));
            }
            {
              Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_345, 0) = ((MR_Box) (Var_346));
              MR_hl_field(MR_mktag(1), Var_345, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_354 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_354, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_354, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_354, 2) = ((MR_Box) (Var_345));
            }
            {
              Var_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_351, 0) = ((MR_Box) (Spec_354));
              MR_hl_field(MR_mktag(1), Var_351, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeDuFunctor_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_351));
            }
          }
          else
          {
            MR_Word Var_433 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_429, (MR_Integer) 1))));
            MR_Word Var_434 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_429, (MR_Integer) 0))));

            if ((Var_433 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_357;
              MR_Word Var_358;
              MR_Word Var_362;
              MR_Word Var_363;
              MR_Word Var_364;
              MR_Word Var_365;
              MR_Word Var_368;
              MR_Word Pieces_370;
              MR_Word Spec_371;

              {
                Var_358 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_358, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_358, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_357, 0) = ((MR_Box) (Var_358));
                MR_hl_field(MR_mktag(1), Var_357, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])));
              }
              {
                Pieces_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_370, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                MR_hl_field(MR_mktag(1), Pieces_370, 1) = ((MR_Box) (Var_357));
              }
              {
                Var_365 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_365, 0) = ((MR_Box) (Pieces_370));
              }
              {
                Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_364, 0) = ((MR_Box) (Var_365));
                MR_hl_field(MR_mktag(1), Var_364, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_363 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_363, 0) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(0), Var_363, 1) = ((MR_Box) (Var_364));
              }
              {
                Var_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_362, 0) = ((MR_Box) (Var_363));
                MR_hl_field(MR_mktag(1), Var_362, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_371 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_371, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_371, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_371, 2) = ((MR_Box) (Var_362));
              }
              {
                Var_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_368, 0) = ((MR_Box) (Spec_371));
                MR_hl_field(MR_mktag(1), Var_368, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeDuFunctor_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_368));
              }
            }
            else
            {
              MR_Word Var_435 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_433, (MR_Integer) 1))));
              MR_Word Var_436 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_433, (MR_Integer) 0))));

              if ((Var_435 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_374;
                MR_Word Var_375;
                MR_Word Var_379;
                MR_Word Var_380;
                MR_Word Var_381;
                MR_Word Var_382;
                MR_Word Var_385;
                MR_Word Pieces_387;
                MR_Word Spec_388;

                {
                  Var_375 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_375, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_375, 1) = ((MR_Box) (AtomStr_7));
                }
                {
                  Var_374 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_374, 0) = ((MR_Box) (Var_375));
                  MR_hl_field(MR_mktag(1), Var_374, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])));
                }
                {
                  Pieces_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_387, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                  MR_hl_field(MR_mktag(1), Pieces_387, 1) = ((MR_Box) (Var_374));
                }
                {
                  Var_382 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_382, 0) = ((MR_Box) (Pieces_387));
                }
                {
                  Var_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_381, 0) = ((MR_Box) (Var_382));
                  MR_hl_field(MR_mktag(1), Var_381, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_380 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_380, 0) = ((MR_Box) (TermContext_9));
                  MR_hl_field(MR_mktag(0), Var_380, 1) = ((MR_Box) (Var_381));
                }
                {
                  Var_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_379, 0) = ((MR_Box) (Var_380));
                  MR_hl_field(MR_mktag(1), Var_379, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_388 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_388, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_388, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_388, 2) = ((MR_Box) (Var_379));
                }
                {
                  Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (Spec_388));
                  MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeDuFunctor_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_385));
                }
              }
              else
              {
                MR_Word Var_437 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_435, (MR_Integer) 1))));
                MR_Word Var_438 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_435, (MR_Integer) 0))));

                if ((Var_437 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word MaybePtagSectag64_34;
                  MR_Word MaybePtagSectag32_35;
                  MR_Word MaybeMaybeDirectArgs64_36;
                  MR_Word MaybeMaybeDirectArgs32_37;
                  MR_Word MaybeFunctorName_217;
                  MR_Word PtagSectag64_38;
                  MR_Word PtagSectag32_39;
                  MR_Word MaybeDirectArgs64_40;
                  MR_Word MaybeDirectArgs32_41;
                  MR_String FunctorName_210;

                  parse_tree__parse_type_repn__parse_string_5_p_0(VarSet_4, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[131])), (MR_String) "function symbol", Var_426, &MaybeFunctorName_217);
                  parse_tree__parse_type_repn__parse_ptag_sectag_5_p_0((MR_Unsigned) 7U, (MR_Unsigned) 63U, VarSet_4, Var_430, &MaybePtagSectag64_34);
                  parse_tree__parse_type_repn__parse_ptag_sectag_5_p_0((MR_Unsigned) 3U, (MR_Unsigned) 31U, VarSet_4, Var_434, &MaybePtagSectag32_35);
                  parse_tree__parse_type_repn__parse_maybe_direct_args_6_p_0((MR_Unsigned) 7U, (MR_Unsigned) 63U, VarSet_4, AtomStr_7, Var_436, &MaybeMaybeDirectArgs64_36);
                  parse_tree__parse_type_repn__parse_maybe_direct_args_6_p_0((MR_Unsigned) 3U, (MR_Unsigned) 31U, VarSet_4, AtomStr_7, Var_438, &MaybeMaybeDirectArgs32_37);
                  succeeded = ((MR_tag((MR_Word) MaybeFunctorName_217)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    FunctorName_210 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorName_217, (MR_Integer) 0))));
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
                    MR_Word DuFunctor_208;

                    {
                      DuFunctor_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DuFunctor_208, 0) = ((MR_Box) (FunctorName_210));
                      MR_hl_field(MR_mktag(1), DuFunctor_208, 1) = ((MR_Box) (PtagSectag64_38));
                      MR_hl_field(MR_mktag(1), DuFunctor_208, 2) = ((MR_Box) (PtagSectag32_39));
                      MR_hl_field(MR_mktag(1), DuFunctor_208, 3) = ((MR_Box) (MaybeDirectArgs64_40));
                      MR_hl_field(MR_mktag(1), DuFunctor_208, 4) = ((MR_Box) (MaybeDirectArgs32_41));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeDuFunctor_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuFunctor_208));
                    }
                  }
                  else
                  {
                    MR_Word Var_119;
                    MR_Word Var_120;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Specs_209;

                    Var_119 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunctorName_217);
                    Var_121 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ptag_sectag_0), MaybePtagSectag64_34);
                    Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ptag_sectag_0), MaybePtagSectag32_35);
                    Var_125 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[1]), MaybeMaybeDirectArgs64_36);
                    Var_126 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[1]), MaybeMaybeDirectArgs32_37);
                    Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_125, Var_126);
                    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_123, Var_124);
                    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_121, Var_122);
                    Specs_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_119, Var_120);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeDuFunctor_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_209));
                    }
                  }
                }
                else
                {
                  MR_Word Var_391;
                  MR_Word Var_392;
                  MR_Word Var_396;
                  MR_Word Var_397;
                  MR_Word Var_398;
                  MR_Word Var_399;
                  MR_Word Var_402;
                  MR_Word Pieces_404;
                  MR_Word Spec_405;

                  {
                    Var_392 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_392, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_392, 1) = ((MR_Box) (AtomStr_7));
                  }
                  {
                    Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (Var_392));
                    MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[128])));
                  }
                  {
                    Pieces_404 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_404, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_404, 1) = ((MR_Box) (Var_391));
                  }
                  {
                    Var_399 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_399, 0) = ((MR_Box) (Pieces_404));
                  }
                  {
                    Var_398 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_398, 0) = ((MR_Box) (Var_399));
                    MR_hl_field(MR_mktag(1), Var_398, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_397 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_397, 0) = ((MR_Box) (TermContext_9));
                    MR_hl_field(MR_mktag(0), Var_397, 1) = ((MR_Box) (Var_398));
                  }
                  {
                    Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_396, 0) = ((MR_Box) (Var_397));
                    MR_hl_field(MR_mktag(1), Var_396, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_405 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_405, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_405, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_405, 2) = ((MR_Box) (Var_396));
                  }
                  {
                    Var_402 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_402, 0) = ((MR_Box) (Spec_405));
                    MR_hl_field(MR_mktag(1), Var_402, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeDuFunctor_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_402));
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
      MR_Word Var_174;
      MR_Word Var_177;
      MR_Word Var_180;
      MR_Word Var_183;
      MR_Word Var_186;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_199;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_Word Var_206;
      MR_Word Pieces_243;
      MR_Word Spec_244;

      TermStr_59 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_190, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_190, 1) = ((MR_Box) (TermStr_59));
      }
      {
        Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (Var_190));
        MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (Var_189));
      }
      {
        Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_186));
      }
      {
        Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[251])));
        MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (Var_183));
      }
      {
        Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (Var_180));
      }
      {
        Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[250])));
        MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_177));
      }
      {
        Pieces_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_243, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[230])));
        MR_hl_field(MR_mktag(1), Pieces_243, 1) = ((MR_Box) (Var_174));
      }
      Var_201 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_203 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_203, 0) = ((MR_Box) (Pieces_243));
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_200 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (Var_201));
        MR_hl_field(MR_mktag(0), Var_200, 1) = ((MR_Box) (Var_202));
      }
      {
        Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Var_200));
        MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_244 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_244, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_244, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_244, 2) = ((MR_Box) (Var_199));
      }
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Spec_244));
        MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDuFunctor_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_206));
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
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_47;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (AtomStr_10));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[136])));
      }
      {
        Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_27));
      }
      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Pieces_21));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeDirectArgs_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
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
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_46;

        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (AtomStr_11));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Pieces_23));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (TermContext_13));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_40));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeDirectArg_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
        }
      }
      else
      {
        MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
        MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

        if ((Var_127 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((strcmp(AtomStr_11, (MR_String) "direct_arg") == 0))
          {
            MR_Word MaybePtag_15;

            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_128, &MaybePtag_15);
            if (((MR_tag((MR_Word) MaybePtag_15)) == (MR_Integer) 0))
              *MaybeMaybeDirectArg_10 = (MR_Word) (MaybePtag_15);
            else
            {
              MR_Unsigned Ptag_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_15, (MR_Integer) 0))));
              MR_Word Var_50;

              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Ptag_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMaybeDirectArg_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_50));
              }
            }
          }
          else
          {
            MR_Word MaybeArgPosSize_18;

            parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(MaxNumBits_7, VarSet_8, Var_128, &MaybeArgPosSize_18);
            if (((MR_tag((MR_Word) MaybeArgPosSize_18)) == (MR_Integer) 0))
              *MaybeMaybeDirectArg_10 = (MR_Word) (MaybeArgPosSize_18);
            else
            {
              MR_Word ArgPosSize_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgPosSize_18, (MR_Integer) 0))));
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (ArgPosSize_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMaybeDirectArg_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
              }
            }
          }
        else
        {
          MR_Word Pieces_93;
          MR_Word Spec_94;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_108;

          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (AtomStr_11));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
          }
          {
            Pieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_93, 1) = ((MR_Box) (Var_97));
          }
          {
            Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Pieces_93));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (TermContext_13));
            MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_94, 2) = ((MR_Box) (Var_102));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Spec_94));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMaybeDirectArg_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
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
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_85;
      MR_Word Pieces_90;
      MR_Word Spec_91;

      TermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (TermStr_25));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[249])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[248])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Pieces_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[230])));
        MR_hl_field(MR_mktag(1), Pieces_90, 1) = ((MR_Box) (Var_53));
      }
      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Pieces_90));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_91, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_91, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_91, 2) = ((MR_Box) (Var_78));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_91));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeDirectArg_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
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
          result_3 = MR_strcmp(AtomStr_11, ((&parse_tree__parse_type_repn_vector_common_4[6 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0);
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
        result_7 = MR_strcmp(AtomStr_11, ((&parse_tree__parse_type_repn_vector_common_3[10 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_3[10 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "ptag_local_sectag", "ptag_remote_sectag"
                ;
                if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_87;
                  MR_Word Var_88;
                  MR_Word Var_97;
                  MR_Word Var_98;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_103;
                  MR_Word Pieces_200;
                  MR_Word Spec_201;

                  {
                    Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
                  }
                  {
                    Pieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_200, 1) = ((MR_Box) (Var_87));
                  }
                  {
                    Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Pieces_200));
                  }
                  {
                    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Var_99));
                  }
                  {
                    Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
                    MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_201 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_201, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_201, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_201, 2) = ((MR_Box) (Var_97));
                  }
                  {
                    Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_201));
                    MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybePtagSectag_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
                  }
                }
                else
                {
                  MR_Word Var_405 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_405 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_254;
                    MR_Word Var_255;
                    MR_Word Var_259;
                    MR_Word Var_260;
                    MR_Word Var_261;
                    MR_Word Var_262;
                    MR_Word Var_265;
                    MR_Word Pieces_267;
                    MR_Word Spec_268;

                    {
                      Var_255 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_255, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_255, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Var_255));
                      MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
                    }
                    {
                      Pieces_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_267, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                      MR_hl_field(MR_mktag(1), Pieces_267, 1) = ((MR_Box) (Var_254));
                    }
                    {
                      Var_262 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_262, 0) = ((MR_Box) (Pieces_267));
                    }
                    {
                      Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_261, 0) = ((MR_Box) (Var_262));
                      MR_hl_field(MR_mktag(1), Var_261, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_260 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_260, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_260, 1) = ((MR_Box) (Var_261));
                    }
                    {
                      Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (Var_260));
                      MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_268 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_268, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_268, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_268, 2) = ((MR_Box) (Var_259));
                    }
                    {
                      Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Spec_268));
                      MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybePtagSectag_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_265));
                    }
                  }
                  else
                  {
                    MR_Word Var_411 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_405, (MR_Integer) 1))));
                    MR_Word Var_412 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_405, (MR_Integer) 0))));

                    if ((Var_411 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word MaybeSectag_24;
                      MR_Word MaybePtag_197;
                      MR_Unsigned Sectag_25;
                      MR_Unsigned Ptag_194;

                      parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_406, &MaybePtag_197);
                      parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_8, Var_412, &MaybeSectag_24);
                      succeeded = ((MR_tag((MR_Word) MaybePtag_197)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Ptag_194 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_197, (MR_Integer) 0))));
                        succeeded = ((MR_tag((MR_Word) MaybeSectag_24)) == (MR_Integer) 1);
                        if (succeeded)
                          Sectag_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectag_24, (MR_Integer) 0))));
                      }
                      if (succeeded)
                        if ((strcmp(AtomStr_11, (MR_String) "ptag_local_sectag") == 0))
                        {
                          MR_Word Var_110;
                          MR_Word Var_111;

                          {
                            Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Sectag_25));
                            MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (Ptag_194));
                            MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (Var_111));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybePtagSectag_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_110));
                          }
                        }
                        else
                        {
                          MR_Word Var_107;
                          MR_Word Var_108;

                          {
                            Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (Sectag_25));
                            MR_hl_field(MR_mktag(2), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (Ptag_194));
                            MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (Var_108));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybePtagSectag_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_107));
                          }
                        }
                      else
                      {
                        MR_Word Var_113;
                        MR_Word Var_114;
                        MR_Word Specs_193;

                        Var_113 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybePtag_197);
                        Var_114 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_24);
                        Specs_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_113, Var_114);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybePtagSectag_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_193));
                        }
                      }
                    }
                    else
                    {
                      MR_Word Var_271;
                      MR_Word Var_272;
                      MR_Word Var_276;
                      MR_Word Var_277;
                      MR_Word Var_278;
                      MR_Word Var_279;
                      MR_Word Var_282;
                      MR_Word Pieces_284;
                      MR_Word Spec_285;

                      {
                        Var_272 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_272, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_272, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (Var_272));
                        MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
                      }
                      {
                        Pieces_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_284, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                        MR_hl_field(MR_mktag(1), Pieces_284, 1) = ((MR_Box) (Var_271));
                      }
                      {
                        Var_279 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_279, 0) = ((MR_Box) (Pieces_284));
                      }
                      {
                        Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (Var_279));
                        MR_hl_field(MR_mktag(1), Var_278, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_277 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_277, 0) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(0), Var_277, 1) = ((MR_Box) (Var_278));
                      }
                      {
                        Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (Var_277));
                        MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_285 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_285, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_285, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_285, 2) = ((MR_Box) (Var_276));
                      }
                      {
                        Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_282, 0) = ((MR_Box) (Spec_285));
                        MR_hl_field(MR_mktag(1), Var_282, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybePtagSectag_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_282));
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
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_69;
                  MR_Word Pieces_225;
                  MR_Word Spec_226;

                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                  }
                  {
                    Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_225, 1) = ((MR_Box) (Var_53));
                  }
                  {
                    Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Pieces_225));
                  }
                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Var_65));
                  }
                  {
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
                    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_226 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_226, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_226, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_226, 2) = ((MR_Box) (Var_63));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Spec_226));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybePtagSectag_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
                  }
                }
                else
                {
                  MR_Word Var_407 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_407 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_305;
                    MR_Word Var_306;
                    MR_Word Var_310;
                    MR_Word Var_311;
                    MR_Word Var_312;
                    MR_Word Var_313;
                    MR_Word Var_316;
                    MR_Word Pieces_318;
                    MR_Word Spec_319;

                    {
                      Var_306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_306, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_306, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_305, 0) = ((MR_Box) (Var_306));
                      MR_hl_field(MR_mktag(1), Var_305, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                    }
                    {
                      Pieces_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_318, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                      MR_hl_field(MR_mktag(1), Pieces_318, 1) = ((MR_Box) (Var_305));
                    }
                    {
                      Var_313 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_313, 0) = ((MR_Box) (Pieces_318));
                    }
                    {
                      Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_312, 0) = ((MR_Box) (Var_313));
                      MR_hl_field(MR_mktag(1), Var_312, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_311 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_311, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_311, 1) = ((MR_Box) (Var_312));
                    }
                    {
                      Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) (Var_311));
                      MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_319 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_319, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_319, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_319, 2) = ((MR_Box) (Var_310));
                    }
                    {
                      Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_316, 0) = ((MR_Box) (Spec_319));
                      MR_hl_field(MR_mktag(1), Var_316, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybePtagSectag_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_316));
                    }
                  }
                  else
                  {
                    MR_Word Var_413 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_407, (MR_Integer) 1))));
                    MR_Word Var_414 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_407, (MR_Integer) 0))));

                    if ((Var_413 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_322;
                      MR_Word Var_323;
                      MR_Word Var_327;
                      MR_Word Var_328;
                      MR_Word Var_329;
                      MR_Word Var_330;
                      MR_Word Var_333;
                      MR_Word Pieces_335;
                      MR_Word Spec_336;

                      {
                        Var_323 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_323, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_323, 1) = ((MR_Box) (AtomStr_11));
                      }
                      {
                        Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_322, 0) = ((MR_Box) (Var_323));
                        MR_hl_field(MR_mktag(1), Var_322, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                      }
                      {
                        Pieces_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_335, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                        MR_hl_field(MR_mktag(1), Pieces_335, 1) = ((MR_Box) (Var_322));
                      }
                      {
                        Var_330 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_330, 0) = ((MR_Box) (Pieces_335));
                      }
                      {
                        Var_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_329, 0) = ((MR_Box) (Var_330));
                        MR_hl_field(MR_mktag(1), Var_329, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_328 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_328, 0) = ((MR_Box) (TermContext_13));
                        MR_hl_field(MR_mktag(0), Var_328, 1) = ((MR_Box) (Var_329));
                      }
                      {
                        Var_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_327, 0) = ((MR_Box) (Var_328));
                        MR_hl_field(MR_mktag(1), Var_327, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_336 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_336, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_336, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_336, 2) = ((MR_Box) (Var_327));
                      }
                      {
                        Var_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_333, 0) = ((MR_Box) (Spec_336));
                        MR_hl_field(MR_mktag(1), Var_333, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybePtagSectag_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_333));
                      }
                    }
                    else
                    {
                      MR_Word Var_415 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_413, (MR_Integer) 1))));
                      MR_Word Var_416 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_413, (MR_Integer) 0))));

                      if ((Var_415 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word MaybeSectagNumBits_32;
                        MR_Word MaybePtag_219;
                        MR_Word MaybeSectag_223;
                        MR_Unsigned SectagNumBits_33;
                        MR_Unsigned Ptag_215;
                        MR_Unsigned Sectag_217;

                        parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_408, &MaybePtag_219);
                        parse_tree__parse_type_repn__parse_unlimited_uint_3_p_0(VarSet_8, Var_414, &MaybeSectag_223);
                        parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_7, VarSet_8, Var_416, &MaybeSectagNumBits_32);
                        succeeded = ((MR_tag((MR_Word) MaybePtag_219)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Ptag_215 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_219, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) MaybeSectag_223)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Sectag_217 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectag_223, (MR_Integer) 0))));
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
                            MR_Word Var_76;
                            MR_Word Var_77;

                            {
                              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Sectag_217));
                              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (SectagSize_34));
                            }
                            {
                              Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Ptag_215));
                              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_77));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *MaybePtagSectag_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_76));
                            }
                          }
                          else
                          {
                            MR_Word Var_74;
                            MR_Word Var_75;

                            {
                              Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (Sectag_217));
                              MR_hl_field(MR_mktag(2), Var_75, 1) = ((MR_Box) (SectagSize_34));
                            }
                            {
                              Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Ptag_215));
                              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Var_75));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *MaybePtagSectag_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_74));
                            }
                          }
                        }
                        else
                        {
                          MR_Word Var_78;
                          MR_Word Var_79;
                          MR_Word Var_80;
                          MR_Word Var_81;
                          MR_Word Specs_214;

                          Var_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybePtag_219);
                          Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectag_223);
                          Var_81 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeSectagNumBits_32);
                          Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_80, Var_81);
                          Specs_214 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_78, Var_79);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            *MaybePtagSectag_10 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_214));
                          }
                        }
                      }
                      else
                      {
                        MR_Word Var_339;
                        MR_Word Var_340;
                        MR_Word Var_344;
                        MR_Word Var_345;
                        MR_Word Var_346;
                        MR_Word Var_347;
                        MR_Word Var_350;
                        MR_Word Pieces_352;
                        MR_Word Spec_353;

                        {
                          Var_340 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_340, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_340, 1) = ((MR_Box) (AtomStr_11));
                        }
                        {
                          Var_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_339, 0) = ((MR_Box) (Var_340));
                          MR_hl_field(MR_mktag(1), Var_339, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
                        }
                        {
                          Pieces_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_352, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                          MR_hl_field(MR_mktag(1), Pieces_352, 1) = ((MR_Box) (Var_339));
                        }
                        {
                          Var_347 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_347, 0) = ((MR_Box) (Pieces_352));
                        }
                        {
                          Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (Var_347));
                          MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_345 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_345, 0) = ((MR_Box) (TermContext_13));
                          MR_hl_field(MR_mktag(0), Var_345, 1) = ((MR_Box) (Var_346));
                        }
                        {
                          Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_344, 0) = ((MR_Box) (Var_345));
                          MR_hl_field(MR_mktag(1), Var_344, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Spec_353 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Spec_353, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), Spec_353, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(0), Spec_353, 2) = ((MR_Box) (Var_344));
                        }
                        {
                          Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_350, 0) = ((MR_Box) (Spec_353));
                          MR_hl_field(MR_mktag(1), Var_350, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybePtagSectag_10 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_350));
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
                  MR_Word Var_118;
                  MR_Word Var_119;
                  MR_Word Var_128;
                  MR_Word Var_129;
                  MR_Word Var_130;
                  MR_Word Var_131;
                  MR_Word Var_134;

                  {
                    Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (AtomStr_11));
                  }
                  {
                    Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
                    MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
                  }
                  {
                    Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_118));
                  }
                  {
                    Var_131 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (Pieces_21));
                  }
                  {
                    Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
                    MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (TermContext_13));
                    MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (Var_130));
                  }
                  {
                    Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
                    MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_128));
                  }
                  {
                    Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Spec_22));
                    MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybePtagSectag_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_134));
                  }
                }
                else
                {
                  MR_Word Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
                  MR_Word Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));

                  if ((Var_409 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybePtag_15;

                    parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxPtag_6, VarSet_8, Var_410, &MaybePtag_15);
                    if (((MR_tag((MR_Word) MaybePtag_15)) == (MR_Integer) 0))
                      *MaybePtagSectag_10 = (MR_Word) (MaybePtag_15);
                    else
                    {
                      MR_Unsigned Ptag_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybePtag_15, (MR_Integer) 0))));
                      MR_Word Var_137;

                      {
                        Var_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Ptag_16));
                        MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybePtagSectag_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_137));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Pieces_371;
                    MR_Word Spec_372;
                    MR_Word Var_375;
                    MR_Word Var_376;
                    MR_Word Var_380;
                    MR_Word Var_381;
                    MR_Word Var_382;
                    MR_Word Var_383;
                    MR_Word Var_386;

                    {
                      Var_376 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_376, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_376, 1) = ((MR_Box) (AtomStr_11));
                    }
                    {
                      Var_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_375, 0) = ((MR_Box) (Var_376));
                      MR_hl_field(MR_mktag(1), Var_375, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
                    }
                    {
                      Pieces_371 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_371, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                      MR_hl_field(MR_mktag(1), Pieces_371, 1) = ((MR_Box) (Var_375));
                    }
                    {
                      Var_383 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_383, 0) = ((MR_Box) (Pieces_371));
                    }
                    {
                      Var_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_382, 0) = ((MR_Box) (Var_383));
                      MR_hl_field(MR_mktag(1), Var_382, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_381 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_381, 0) = ((MR_Box) (TermContext_13));
                      MR_hl_field(MR_mktag(0), Var_381, 1) = ((MR_Box) (Var_382));
                    }
                    {
                      Var_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_380, 0) = ((MR_Box) (Var_381));
                      MR_hl_field(MR_mktag(1), Var_380, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_372 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_372, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_372, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_372, 2) = ((MR_Box) (Var_380));
                    }
                    {
                      Var_386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_386, 0) = ((MR_Box) (Spec_372));
                      MR_hl_field(MR_mktag(1), Var_386, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybePtagSectag_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_386));
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
      MR_Word Var_141;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_147;
      MR_Word Var_150;
      MR_Word Var_153;
      MR_Word Var_156;
      MR_Word Var_159;
      MR_Word Var_162;
      MR_Word Var_165;
      MR_Word Var_168;
      MR_Word Var_171;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Word Var_186;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_191;
      MR_Word Pieces_245;
      MR_Word Spec_246;

      TermStr_43 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      Var_145 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216]));
      {
        Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_175, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_175, 1) = ((MR_Box) (TermStr_43));
      }
      {
        Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (Var_175));
        MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_174));
      }
      {
        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_171));
      }
      {
        Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[247])));
        MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_168));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_165));
      }
      {
        Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[246])));
        MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_162));
      }
      {
        Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_159));
      }
      {
        Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[245])));
        MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_156));
      }
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_153));
      }
      {
        Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[244])));
        MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
      }
      {
        Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[243])));
        MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_144));
      }
      {
        Pieces_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_245, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[230])));
        MR_hl_field(MR_mktag(1), Pieces_245, 1) = ((MR_Box) (Var_141));
      }
      Var_186 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Var_188 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (Pieces_245));
      }
      {
        Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (Var_188));
        MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_185 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (Var_187));
      }
      {
        Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
        MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_246 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_246, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_246, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_246, 2) = ((MR_Box) (Var_184));
      }
      {
        Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Spec_246));
        MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePtagSectag_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_191));
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
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_41;

      TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (TermStr_14));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[242])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_21));
      }
      Var_36 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Pieces_15));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_34));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeUint_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
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
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Pieces_105;
          MR_Word Spec_106;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
          }
          {
            Pieces_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_105, 1) = ((MR_Box) (Var_28));
          }
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Pieces_105));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_106 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_106, 2) = ((MR_Box) (Var_38));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_106));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSectagSize_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
          }
        }
        else
        {
          MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

          if ((Var_148 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeSectagNumBits_17;

            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_5, VarSet_6, Var_149, &MaybeSectagNumBits_17);
            if (((MR_tag((MR_Word) MaybeSectagNumBits_17)) == (MR_Integer) 0))
              *MaybeSectagSize_8 = (MR_Word) (MaybeSectagNumBits_17);
            else
            {
              MR_Unsigned SectagNumBits_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectagNumBits_17, (MR_Integer) 0))));
              MR_Word Var_47;

              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SectagNumBits_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeSectagSize_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
              }
            }
          }
          else
          {
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_127;
            MR_Word Pieces_129;
            MR_Word Spec_130;

            {
              Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
            }
            {
              Pieces_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_129, 1) = ((MR_Box) (Var_116));
            }
            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_129));
            }
            {
              Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (Var_123));
            }
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_130 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_130, 2) = ((MR_Box) (Var_121));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Spec_130));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSectagSize_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
            }
          }
        }
      else
      if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeSectagSize_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[4]));
      else
      {
        MR_Word Pieces_14;
        MR_Word Spec_15;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_66;

        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[133])));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Pieces_14));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_60));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_15));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSectagSize_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
        }
      }
    else
    {
      MR_String TermStr_23;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_83;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_103;
      MR_Word Pieces_111;
      MR_Word Spec_112;

      TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (TermStr_23));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[241])));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[240])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Pieces_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[230])));
        MR_hl_field(MR_mktag(1), Pieces_111, 1) = ((MR_Box) (Var_71));
      }
      Var_98 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Pieces_111));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_112 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_112, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_112, 2) = ((MR_Box) (Var_96));
      }
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_112));
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
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_48;

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
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[239])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
      }
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_18);
      Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Pieces_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_41));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFunctorName_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_enum_specs_6_p_0(
  MR_Word VarSet_1,
  MR_String AtomStr_2,
  MR_Integer Nth_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Nth_3 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_ForeignEnums_40_40;
      MR_Word STATE_VARIABLE_Specs_41_41;
      MR_String TermStr_17;
      MR_Word ArgTerms_18;
      MR_Word TermContext_19;
      MR_Word Lang_20;
      MR_Word Var_43;

      parse_tree__parse_type_repn__parse_foreign_enum_specs_6_p_0(VarSet_1, AtomStr_2, Var_39, Terms_14, &STATE_VARIABLE_ForeignEnums_40_40, &STATE_VARIABLE_Specs_41_41);
      succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 0))));
        ArgTerms_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 1))));
        TermContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 2);
        if (succeeded)
        {
          TermStr_17 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_43, (MR_Integer) 0))));
          succeeded = libs__globals__simple_foreign_language_string_2_p_1(&Lang_20, TermStr_17);
        }
      }
      if (succeeded)
        if ((ArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Pieces_172;
          MR_Word Spec_173;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (TermStr_17));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
          }
          {
            Pieces_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_172, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Pieces_172));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (TermContext_19));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_173 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_173, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_173, 2) = ((MR_Box) (Var_57));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_173));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_41_41));
          }
          *HeadVar__5_5 = STATE_VARIABLE_ForeignEnums_40_40;
        }
        else
        {
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_18, (MR_Integer) 1))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_18, (MR_Integer) 0))));

          if ((Var_209 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word IdentTerms_22;

            succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_210, &IdentTerms_22);
            if (succeeded)
            {
              succeeded = (IdentTerms_22 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word Specs_16;
              MR_Word ContextPieces_25;
              MR_Word Idents_26;
              MR_Word Var_67;
              MR_Word Var_68;

              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (AtomStr_2));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[209])));
              }
              {
                ContextPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ContextPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[236])));
                MR_hl_field(MR_mktag(1), ContextPieces_25, 1) = ((MR_Box) (Var_67));
              }
              parse_tree__parse_type_repn__parse_strings_7_p_0(VarSet_1, ContextPieces_25, (MR_String) "enum value", (MR_Integer) 1, IdentTerms_22, &Idents_26, &Specs_16);
              if ((Specs_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                if ((Idents_26 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_repn.parse_foreign_enum_specs\'/6", (MR_String) "Idents = []");
                    return;
                  }
                }
                else
                {
                  MR_String HeadIdent_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), Idents_26, (MR_Integer) 0))));
                  MR_Word TailIdents_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Idents_26, (MR_Integer) 1))));
                  MR_Word ForeignEnum_29;
                  MR_Word Var_76;

                  {
                    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (HeadIdent_27));
                    MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (TailIdents_28));
                  }
                  {
                    ForeignEnum_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ForeignEnum_29, 0) = ((MR_Box) (Lang_20));
                    MR_hl_field(MR_mktag(0), ForeignEnum_29, 1) = ((MR_Box) (Var_76));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignEnum_29));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_40_40));
                  }
                }
                *HeadVar__6_6 = STATE_VARIABLE_Specs_41_41;
              }
              else
              {
                *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_16, STATE_VARIABLE_Specs_41_41);
                *HeadVar__5_5 = STATE_VARIABLE_ForeignEnums_40_40;
              }
            }
            else
            {
              MR_Word Pieces_32;
              MR_Word Spec_33;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_87;
              MR_Word Var_90;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_116;

              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Nth_3));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (AtomStr_2));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[107])));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[238])));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[237])));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[199])));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
              }
              {
                Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[198])));
                MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_82));
              }
              Var_114 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_210);
              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Pieces_32));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (Var_115));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_112));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_33));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_41_41));
              }
              *HeadVar__5_5 = STATE_VARIABLE_ForeignEnums_40_40;
            }
          }
          else
          {
            MR_Word Var_181;
            MR_Word Var_182;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Word Pieces_192;
            MR_Word Spec_193;

            {
              Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_182, 1) = ((MR_Box) (TermStr_17));
            }
            {
              Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Var_182));
              MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[51])));
            }
            {
              Pieces_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_192, 1) = ((MR_Box) (Var_181));
            }
            {
              Var_189 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (Pieces_192));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Var_189));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (TermContext_19));
              MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) (Var_188));
            }
            {
              Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
              MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_193 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_193, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_193, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_193, 2) = ((MR_Box) (Var_186));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_193));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_41_41));
            }
            *HeadVar__5_5 = STATE_VARIABLE_ForeignEnums_40_40;
          }
        }
      else
      {
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_127;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Pieces_174;
        MR_Word Spec_175;

        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Nth_3));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (AtomStr_2));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[122])));
        }
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_124));
        }
        {
          Pieces_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), Pieces_174, 1) = ((MR_Box) (Var_122));
        }
        Var_166 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
        {
          Var_168 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_168, 0) = ((MR_Box) (Pieces_174));
        }
        {
          Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_165 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (Var_167));
        }
        {
          Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_175 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_175, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_175, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_175, 2) = ((MR_Box) (Var_164));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_175));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_41_41));
        }
        *HeadVar__5_5 = STATE_VARIABLE_ForeignEnums_40_40;
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
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;

        TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, Term_16);
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Nth_4));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[234])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[232])));
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
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[235])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_2, Var_44);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_43);
        Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_16);
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Pieces_23));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_65));
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
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Pieces_142;
        MR_Word Spec_143;

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
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[228])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[227])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Pieces_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_142, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Pieces_142));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_143 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_143, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_143, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_143, 2) = ((MR_Box) (Var_57));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_143));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOnlyFunctorArgs_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
        }
      }
      else
      {
        MR_Word Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
        MR_Word Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

        if ((Var_219 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word HeadElementTerm_14;
          MR_Word TailElementTerms_15;
          MR_Word ElementTerms_13;

          succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_220, &ElementTerms_13);
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
                MR_Word Var_68;

                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (HeadArg_19));
                  MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (TailArgs_17));
                }
                {
                  OnlyFunctorArgs_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OnlyFunctorArgs_20, 0) = ((MR_Box) (Var_68));
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
                MR_Word Var_69;

                Var_69 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_pos_size_0), MaybeHeadArg_16);
                Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_69, TailSpecs_18);
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
              MR_Word MaybeHeadArg_136;
              MR_Word TailArgs_137;
              MR_Word TailSpecs_138;
              MR_Word HeadArg_133;

              parse_tree__parse_type_repn__parse_arg_pos_size_4_p_0(MaxNumBits_5, VarSet_6, HeadElementTerm_14, &MaybeHeadArg_136);
              parse_tree__parse_type_repn__parse_arg_pos_sizes_5_p_0(MaxNumBits_5, VarSet_6, TailElementTerms_15, &TailArgs_137, &TailSpecs_138);
              succeeded = (TailSpecs_138 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeHeadArg_136)) == (MR_Integer) 1);
                if (succeeded)
                  HeadArg_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadArg_136, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_66;
                MR_Word OnlyFunctorArgs_131;

                {
                  Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (HeadArg_133));
                  MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (TailArgs_137));
                }
                {
                  OnlyFunctorArgs_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OnlyFunctorArgs_131, 0) = ((MR_Box) (Var_66));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeOnlyFunctorArgs_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OnlyFunctorArgs_131));
                }
              }
              else
              {
                MR_Word Var_67;
                MR_Word Specs_132;

                Var_67 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_arg_pos_size_0), MaybeHeadArg_136);
                Specs_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_67, TailSpecs_138);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeOnlyFunctorArgs_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_132));
                }
              }
            }
          else
          {
            MR_String LR_22;
            MR_Word Pieces_23;
            MR_Word Spec_24;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_93;

            if ((strcmp(AtomStr_9, (MR_String) "local_args") == 0))
              LR_22 = (MR_String) "local";
            else
              LR_22 = (MR_String) "remote";
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (LR_22));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[99])));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[229])));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[201])));
              MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Pieces_23));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_87));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeOnlyFunctorArgs_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
            }
          }
        }
        else
        {
          MR_String TermStr_153;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_161;
          MR_Word Var_164;
          MR_Word Var_167;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_181;
          MR_Word Pieces_183;
          MR_Word Spec_184;

          TermStr_153 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (TermStr_153));
          }
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
          }
          {
            Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
            MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_170));
          }
          {
            Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
            MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_167));
          }
          {
            Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[228])));
            MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_164));
          }
          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[227])));
            MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_161));
          }
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
            MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_158));
          }
          {
            Pieces_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_183, 1) = ((MR_Box) (Var_156));
          }
          {
            Var_178 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_178, 0) = ((MR_Box) (Pieces_183));
          }
          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_176 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) (Var_177));
          }
          {
            Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_184, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_184, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_184, 2) = ((MR_Box) (Var_175));
          }
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Spec_184));
            MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeOnlyFunctorArgs_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_181));
          }
        }
      }
    else
    {
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_103;
      MR_Word Var_106;
      MR_Word Var_109;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_129;
      MR_Word Pieces_144;
      MR_Word Spec_145;
      MR_String TermStr_146;

      TermStr_146 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (TermStr_146));
      }
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
      }
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[228])));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_106));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_103));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[231])));
        MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Pieces_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[230])));
        MR_hl_field(MR_mktag(1), Pieces_144, 1) = ((MR_Box) (Var_97));
      }
      Var_124 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Pieces_144));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (Var_125));
      }
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_145, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_145, 2) = ((MR_Box) (Var_122));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_145));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeOnlyFunctorArgs_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
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
          result_3 = MR_strcmp(AtomStr_9, ((&parse_tree__parse_type_repn_vector_common_4[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0);
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
        result_7 = MR_strcmp(AtomStr_9, ((&parse_tree__parse_type_repn_vector_common_3[4 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
        if ((result_7 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_type_repn_vector_common_3[4 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1) {
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
                  MR_Word Var_31;
                  MR_Word Var_32;
                  MR_Word Var_33;
                  MR_Word Var_36;

                  {
                    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (AtomStr_9));
                  }
                  {
                    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
                    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[138])));
                  }
                  {
                    Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                    MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_20));
                  }
                  {
                    Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Pieces_14));
                  }
                  {
                    Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
                    MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (TermContext_11));
                    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_32));
                  }
                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
                    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_30));
                  }
                  {
                    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Spec_15));
                    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeArgPosSize_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
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
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_45;
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
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_97;
      MR_Word Pieces_99;
      MR_Word Spec_100;

      TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      Var_45 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216]));
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (TermStr_16));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[226])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[225])));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[224])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[223])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[221])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[220])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[219])));
        MR_hl_field(MR_mktag(1), Pieces_99, 1) = ((MR_Box) (Var_41));
      }
      Var_92 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_99));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Var_93));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_100 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_100, 2) = ((MR_Box) (Var_90));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_100));
        MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
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
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_69;

      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (AtomStr_9));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[151])));
      }
      {
        Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_39, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Pieces_39));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (TermContext_11));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_63));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Spec_40));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
      }
    }
    else
    {
      MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
      MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_86;
        MR_Word Spec_87;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_101;

        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[151])));
        }
        {
          Pieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_86, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Pieces_86));
        }
        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_87, 2) = ((MR_Box) (Var_95));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Spec_87));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgPosSize_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_101));
        }
      }
      else
      {
        MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_171, (MR_Integer) 1))));
        MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_171, (MR_Integer) 0))));

        if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_103;
          MR_Word Spec_104;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_118;

          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[151])));
          }
          {
            Pieces_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_103, 1) = ((MR_Box) (Var_107));
          }
          {
            Var_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (Pieces_103));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (Var_114));
          }
          {
            Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
            MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_104 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_104, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_104, 2) = ((MR_Box) (Var_112));
          }
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Spec_104));
            MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeArgPosSize_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_118));
          }
        }
        else
        {
          MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_173, (MR_Integer) 1))));
          MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_173, (MR_Integer) 0))));

          if ((Var_175 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_120;
            MR_Word Spec_121;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word Var_135;

            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[151])));
            }
            {
              Pieces_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_120, 1) = ((MR_Box) (Var_124));
            }
            {
              Var_132 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (Pieces_120));
            }
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
              MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (Var_131));
            }
            {
              Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_121 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_121, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_121, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_121, 2) = ((MR_Box) (Var_129));
            }
            {
              Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Spec_121));
              MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeArgPosSize_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_135));
            }
          }
          else
          {
            MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_175, (MR_Integer) 1))));
            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_175, (MR_Integer) 0))));

            if ((Var_177 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeArgOnlyOffset_17;
              MR_Word MaybeCellOffset_18;
              MR_Word MaybeShift_19;
              MR_Word MaybeFillKindSize_20;
              MR_Word ArgOnlyOffset_21;
              MR_Word CellOffset_22;
              MR_Unsigned Shift_23;
              MR_Word FillKindSize_24;

              parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_8, Var_172, &MaybeArgOnlyOffset_17);
              parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_8, Var_174, &MaybeCellOffset_18);
              parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_7, VarSet_8, Var_176, &MaybeShift_19);
              parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(MaxNumBits_7, VarSet_8, Var_178, &MaybeFillKindSize_20);
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
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_80;

                Var_75 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_17);
                Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_18);
                Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeShift_19);
                Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fill_kind_size_0), MaybeFillKindSize_20);
                Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_79, Var_80);
                Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_77, Var_78);
                Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_75, Var_76);
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
              MR_Word Pieces_137;
              MR_Word Spec_138;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_149;
              MR_Word Var_152;

              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_142, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_142, 1) = ((MR_Box) (AtomStr_9));
              }
              {
                Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[151])));
              }
              {
                Pieces_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                MR_hl_field(MR_mktag(1), Pieces_137, 1) = ((MR_Box) (Var_141));
              }
              {
                Var_149 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (Pieces_137));
              }
              {
                Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (TermContext_11));
                MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (Var_148));
              }
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
                MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_138 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_138, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_138, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_138, 2) = ((MR_Box) (Var_146));
              }
              {
                Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Spec_138));
                MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeArgPosSize_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_152));
              }
            }
          }
        }
      }
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
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
      }
      {
        Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Pieces_35));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (TermContext_9));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_55));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      }
    }
    else
    {
      MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
      MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

      if ((Var_181 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_113;
        MR_Word Spec_114;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_128;

        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
        }
        {
          Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_125 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (Pieces_113));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_114, 2) = ((MR_Box) (Var_122));
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Spec_114));
          MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgPosSize_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_128));
        }
      }
      else
      {
        MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_181, (MR_Integer) 1))));
        MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_181, (MR_Integer) 0))));

        if ((Var_183 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_130;
          MR_Word Spec_131;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Word Var_145;

          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
          }
          {
            Pieces_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_130, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Pieces_130));
          }
          {
            Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
            MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (Var_141));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_131 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_131, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_131, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_131, 2) = ((MR_Box) (Var_139));
          }
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Spec_131));
            MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeArgPosSize_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_145));
          }
        }
        else
        {
          MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_183, (MR_Integer) 1))));
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_183, (MR_Integer) 0))));

          if ((Var_185 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeArgOnlyOffset_14;
            MR_Word MaybeCellOffset_15;
            MR_Word MaybeDW_19;
            MR_Word DoubleWordKind0_18;
            MR_String Arg3Str_16;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word ArgOnlyOffset_22;
            MR_Word CellOffset_23;
            MR_Word DoubleWordKind_24;

            parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_182, &MaybeArgOnlyOffset_14);
            parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_184, &MaybeCellOffset_15);
            succeeded = ((MR_tag((MR_Word) Var_186)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_186, (MR_Integer) 0))));
              Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_186, (MR_Integer) 1))));
              succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Arg3Str_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
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
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_105;

              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (AtomStr_7));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[149])));
              }
              {
                DwPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DwPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[218])));
                MR_hl_field(MR_mktag(1), DwPieces_20, 1) = ((MR_Box) (Var_70));
              }
              Var_100 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_186);
              {
                Var_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (DwPieces_20));
              }
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (Var_101));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                DwSpec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DwSpec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), DwSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), DwSpec_21, 2) = ((MR_Box) (Var_98));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (DwSpec_21));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeDW_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeDW_19, 0) = ((MR_Box) (Var_105));
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
              MR_Word Var_107;
              MR_Word Var_108;

              Var_107 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_14);
              Var_108 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_15);
              Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_107, Var_108);
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
            MR_Word Pieces_147;
            MR_Word Spec_148;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_162;

            {
              Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (AtomStr_7));
            }
            {
              Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Var_152));
              MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[81])));
            }
            {
              Pieces_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_147, 1) = ((MR_Box) (Var_151));
            }
            {
              Var_159 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (Pieces_147));
            }
            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (Var_158));
            }
            {
              Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
              MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_148 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_148, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_148, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_148, 2) = ((MR_Box) (Var_156));
            }
            {
              Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Spec_148));
              MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeArgPosSize_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_162));
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
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_47;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (AtomStr_7));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
      }
      {
        Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_24, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Pieces_24));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (TermContext_9));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_41));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgPosSize_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
      }
    }
    else
    {
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 1))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_8, (MR_Integer) 0))));

      if ((Var_107 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_56;
        MR_Word Spec_57;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_71;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (AtomStr_7));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
        }
        {
          Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_56, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_56));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_57, 2) = ((MR_Box) (Var_65));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_57));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgPosSize_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        }
      }
      else
      {
        MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_107, (MR_Integer) 1))));
        MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_107, (MR_Integer) 0))));

        if ((Var_109 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeArgOnlyOffset_13;
          MR_Word MaybeCellOffset_14;
          MR_Word ArgOnlyOffset_15;
          MR_Word CellOffset_16;

          parse_tree__parse_type_repn__parse_arg_only_offset_3_p_0(VarSet_6, Var_108, &MaybeArgOnlyOffset_13);
          parse_tree__parse_type_repn__parse_cell_offset_3_p_0(VarSet_6, Var_110, &MaybeCellOffset_14);
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
            MR_Word Var_51;
            MR_Word Var_52;

            Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_only_offset_0), MaybeArgOnlyOffset_13);
            Var_52 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0), MaybeCellOffset_14);
            Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_51, Var_52);
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
          MR_Word Pieces_73;
          MR_Word Spec_74;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_88;

          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (AtomStr_7));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
          }
          {
            Pieces_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_73, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_73));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_74, 2) = ((MR_Box) (Var_82));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_74));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeArgPosSize_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
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
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_22));
      }
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Pieces_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_32));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCellOffset_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
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
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_22));
      }
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Pieces_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_32));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgOnlyOffset_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
      }
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
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_50;

        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (AtomStr_9));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
        }
        {
          Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_25));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_44));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLocalPosSize_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
        }
      }
      else
      {
        MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
        MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

        if ((Var_143 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_92;
          MR_Word Spec_93;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_107;

          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (AtomStr_9));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
          }
          {
            Pieces_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_92, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Pieces_92));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (Var_103));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_93, 2) = ((MR_Box) (Var_101));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Spec_93));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLocalPosSize_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_107));
          }
        }
        else
        {
          MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 1))));
          MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 0))));

          if ((Var_145 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeShift_14;
            MR_Word MaybeFillKindSize_15;
            MR_Unsigned Shift_16;
            MR_Word FillKindSize_17;

            parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_5, VarSet_6, Var_144, &MaybeShift_14);
            parse_tree__parse_type_repn__parse_fill_kind_size_4_p_0(MaxNumBits_5, VarSet_6, Var_146, &MaybeFillKindSize_15);
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
              MR_Word Var_54;
              MR_Word Var_55;

              Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), MaybeShift_14);
              Var_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fill_kind_size_0), MaybeFillKindSize_15);
              Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_54, Var_55);
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
            MR_Word Pieces_109;
            MR_Word Spec_110;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_124;

            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[135])));
            }
            {
              Pieces_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_109, 1) = ((MR_Box) (Var_113));
            }
            {
              Var_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Pieces_109));
            }
            {
              Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (Var_120));
            }
            {
              Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_110 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_110, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_110, 2) = ((MR_Box) (Var_118));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Spec_110));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeLocalPosSize_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_124));
            }
          }
        }
      }
    else
    {
      MR_String TermStr_27;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Pieces_86;
      MR_Word Spec_87;

      TermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (TermStr_27));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[215])));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Pieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), Pieces_86, 1) = ((MR_Box) (Var_58));
      }
      Var_79 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Pieces_86));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_87, 2) = ((MR_Box) (Var_77));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Spec_87));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLocalPosSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
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
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 24U), MaybeFillKindSize_8);
          }
          break;
        case (MR_Integer) 0:
          if ((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_20;
            MR_Word Spec_21;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_50;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (AtomStr_9));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[153])));
            }
            {
              Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
              MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_34));
            }
            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_20));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (TermContext_11));
              MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_44));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_21));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeFillKindSize_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
            }
          }
          else
          {
            MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
            MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));

            if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybeUint_14;

              parse_tree__parse_type_repn__parse_uint_in_range_4_p_0(MaxNumBits_5, VarSet_6, Var_113, &MaybeUint_14);
              if (((MR_tag((MR_Word) MaybeUint_14)) == (MR_Integer) 0))
                *MaybeFillKindSize_8 = (MR_Word) (MaybeUint_14);
              else
              {
                MR_Unsigned Uint_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeUint_14, (MR_Integer) 0))));
                MR_Word Var_53;

                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Uint_15));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeFillKindSize_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
                }
              }
            }
            else
            {
              MR_Word Pieces_78;
              MR_Word Spec_79;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_93;

              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (AtomStr_9));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[153])));
              }
              {
                Pieces_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
                MR_hl_field(MR_mktag(1), Pieces_78, 1) = ((MR_Box) (Var_82));
              }
              {
                Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Pieces_78));
              }
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (TermContext_11));
                MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (Var_89));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_79, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_79, 2) = ((MR_Box) (Var_87));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Spec_79));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeFillKindSize_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 4U), MaybeFillKindSize_8);
          }
          break;
        case (MR_Integer) 3:
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 8U), MaybeFillKindSize_8);
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 0U), MaybeFillKindSize_8);
          }
          break;
        case (MR_Integer) 5:
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 16U), MaybeFillKindSize_8);
          }
          break;
        case (MR_Integer) 6:
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 20U), MaybeFillKindSize_8);
          }
          break;
        case (MR_Integer) 4:
          {
            parse_tree__parse_type_repn__ok_if_arity_zero_5_p_0(AtomStr_9, TermContext_11, ArgTerms_10, (MR_Word) ((MR_Unsigned) 12U), MaybeFillKindSize_8);
          }
          break;
      }
    else
    {
      MR_String TermStr_22;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_73;
      MR_Word Pieces_75;
      MR_Word Spec_76;

      TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (TermStr_22));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[213])));
        MR_hl_field(MR_mktag(1), Pieces_75, 1) = ((MR_Box) (Var_56));
      }
      Var_68 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_75));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_76, 2) = ((MR_Box) (Var_66));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_76));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFillKindSize_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
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
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;

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
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[211])));
        MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_23));
      }
      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Pieces_17));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_39));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeUint_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
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
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_33;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (AtomStr_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[155])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (TermContext_7));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_27));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFillKindSize_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_repn__du_where_prefix_1_f_0(
  MR_Word DuWhere_3)
{
  {
    MR_Word Prefix_4;

    switch (DuWhere_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Prefix_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[91]));
        break;
      case (MR_Integer) 1:
        Prefix_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[97]));
        break;
    }
    return Prefix_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_foreign_language_types_6_p_0(
  MR_Word VarSet_1,
  MR_String RepnStr_2,
  MR_Integer Nth_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) Nth_3 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_ForeignPairs_41_41;
      MR_Word STATE_VARIABLE_Specs_42_42;
      MR_Word Lang_20;
      MR_Word TypeNameTerm_21;
      MR_Word AssertionTerm_22;
      MR_String FunctorStr_17;
      MR_Word ArgTerms_18;
      MR_Word Var_44;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;

      parse_tree__parse_type_repn__parse_foreign_language_types_6_p_0(VarSet_1, RepnStr_2, Var_40, Terms_14, &STATE_VARIABLE_ForeignPairs_41_41, &STATE_VARIABLE_Specs_42_42);
      succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 0))));
        ArgTerms_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
        if (succeeded)
        {
          FunctorStr_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
          succeeded = (ArgTerms_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_18, (MR_Integer) 0))));
            Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_18, (MR_Integer) 1))));
            // binary string jump switch
            ;
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 3;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(FunctorStr_17, ((&parse_tree__parse_type_repn_vector_common_3[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&parse_tree__parse_type_repn_vector_common_3[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "c"
                      ;
                      {
                        MR_Word Var_51;

                        Lang_20 = (MR_Integer) 0;
                        TypeNameTerm_21 = Var_183;
                        succeeded = (Var_182 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          AssertionTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 0))));
                          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 1))));
                          succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "csharp"
                      ;
                      {
                        MR_Word Var_179;

                        Lang_20 = (MR_Integer) 1;
                        TypeNameTerm_21 = Var_183;
                        succeeded = (Var_182 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          AssertionTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 0))));
                          Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 1))));
                          succeeded = (Var_179 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "erlang"
                      ;
                      {
                        MR_Word Var_46;
                        MR_Word Var_48;
                        MR_Word Var_49;

                        succeeded = (Var_182 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Lang_20 = (MR_Integer) 3;
                          AssertionTerm_22 = Var_183;
                          Var_48 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_46 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_repn_scalar_common_2[2]));
                          Var_49 = mercury__term__context_init_0_f_0();
                          {
                            TypeNameTerm_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeNameTerm_21, 0) = ((MR_Box) (Var_46));
                            MR_hl_field(MR_mktag(0), TypeNameTerm_21, 1) = ((MR_Box) (Var_48));
                            MR_hl_field(MR_mktag(0), TypeNameTerm_21, 2) = ((MR_Box) (Var_49));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "java"
                      ;
                      {
                        MR_Word Var_181;

                        Lang_20 = (MR_Integer) 2;
                        TypeNameTerm_21 = Var_183;
                        succeeded = (Var_182 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          AssertionTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 0))));
                          Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 1))));
                          succeeded = (Var_181 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                    break;
                }
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
        MR_Word MaybeTypeName_25;
        MR_Word AssertionContextPieces_29;
        MR_Word AssertionSet_30;
        MR_Word AssertionSpecs_31;
        MR_Word Var_91;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_105;
        MR_String TypeName0_23;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_String TypeName_32;

        succeeded = ((MR_tag((MR_Word) TypeNameTerm_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeNameTerm_21, (MR_Integer) 0))));
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeNameTerm_21, (MR_Integer) 1))));
          succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 2);
            if (succeeded)
              TypeName0_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_52, (MR_Integer) 0))));
          }
        }
        if (succeeded)
          {
            MaybeTypeName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTypeName_25, 0) = ((MR_Box) (TypeName0_23));
          }
        else
        {
          MR_String TypeNameTermStr_26;
          MR_Word TypeNamePieces_27;
          MR_Word TypeNameSpec_28;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_89;

          TypeNameTermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, TypeNameTerm_21);
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Nth_3));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (RepnStr_2));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (TypeNameTermStr_26));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[170])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[205])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[204])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[203])));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
          }
          {
            TypeNamePieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeNamePieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[202])));
            MR_hl_field(MR_mktag(1), TypeNamePieces_27, 1) = ((MR_Box) (Var_56));
          }
          Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeNameTerm_21);
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (TypeNamePieces_27));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            TypeNameSpec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeNameSpec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), TypeNameSpec_28, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), TypeNameSpec_28, 2) = ((MR_Box) (Var_82));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (TypeNameSpec_28));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeName_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeTypeName_25, 0) = ((MR_Box) (Var_89));
          }
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Nth_3));
        }
        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (RepnStr_2));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[209])));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[207])));
          MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[206])));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
        }
        AssertionContextPieces_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_91);
        Var_105 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
        parse_tree__parse_pragma__parse_foreign_type_assertions_7_p_0(AssertionContextPieces_29, VarSet_1, AssertionTerm_22, Var_105, &AssertionSet_30, (MR_Word) ((MR_Unsigned) 0U), &AssertionSpecs_31);
        succeeded = (AssertionSpecs_31 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeTypeName_25)) == (MR_Integer) 1);
          if (succeeded)
            TypeName_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeTypeName_25, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Assertions_33 = (MR_Word) (AssertionSet_30);
          MR_Word Repn_34;
          MR_Word Var_108;

          {
            Repn_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Repn_34, 0) = ((MR_Box) (TypeName_32));
            MR_hl_field(MR_mktag(0), Repn_34, 1) = ((MR_Box) (Assertions_33));
          }
          {
            Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Lang_20));
            MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Repn_34));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ForeignPairs_41_41));
          }
          *HeadVar__6_6 = STATE_VARIABLE_Specs_42_42;
        }
        else
        {
          MR_Word Var_110;
          MR_Word Var_111;

          Var_110 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTypeName_25);
          Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), AssertionSpecs_31, STATE_VARIABLE_Specs_42_42);
          *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_110, Var_111);
          *HeadVar__5_5 = STATE_VARIABLE_ForeignPairs_41_41;
        }
      }
      else
      {
        MR_String TermStr_35;
        MR_Word Pieces_36;
        MR_Word Spec_37;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;

        TermStr_35 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, Term_13);
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Nth_3));
        }
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (RepnStr_2));
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (TermStr_35));
        }
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[184])));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[205])));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[210])));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_116));
        }
        {
          Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), Pieces_36, 1) = ((MR_Box) (Var_114));
        }
        Var_166 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
        {
          Var_168 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_168, 0) = ((MR_Box) (Pieces_36));
        }
        {
          Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_165 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (Var_167));
        }
        {
          Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_164));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_42_42));
        }
        *HeadVar__5_5 = STATE_VARIABLE_ForeignPairs_41_41;
      }
    }
  }
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
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Pieces_67;
      MR_Word Spec_68;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (RepnStr_5));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[43])));
      }
      {
        Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_67, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Pieces_67));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (RepnContext_7));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_68, 2) = ((MR_Box) (Var_35));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_68));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      }
    }
    else
    {
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 1))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 0))));

      if ((Var_104 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word FunctorTerms_10;

        succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Var_105, &FunctorTerms_10);
        if (succeeded)
        {
          MR_Word MaybeFunctors_11;

          parse_tree__parse_type_repn__parse_functor_with_arities_4_p_0(RepnStr_5, (MR_Integer) 1, FunctorTerms_10, &MaybeFunctors_11);
          if (((MR_tag((MR_Word) MaybeFunctors_11)) == (MR_Integer) 0))
            *MaybeRepn_8 = (MR_Word) (MaybeFunctors_11);
          else
          {
            MR_Word Functors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctors_11, (MR_Integer) 0))));
            MR_Word Var_45;

            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Functors_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRepn_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
            }
          }
        }
        else
        {
          MR_Word Pieces_14;
          MR_Word Spec_15;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_65;

          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (RepnStr_5));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[45])));
          }
          {
            Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[201])));
            MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_48));
          }
          Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_105);
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Pieces_14));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_58));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_15));
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
      else
      {
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Pieces_85;
        MR_Word Spec_86;

        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (RepnStr_5));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[43])));
        }
        {
          Pieces_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_85, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_85));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (RepnContext_7));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_86, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_86, 2) = ((MR_Box) (Var_77));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Spec_86));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_83));
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
      MR_Integer Var_58;
      MR_Word SymName_13;
      MR_Integer Arity_14;
      MR_Word HeadFunctor_19;
      MR_Word TailFunctors_20;

      succeeded = parse_tree__parse_util__parse_name_and_arity_unqualified_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10, &SymName_13, &Arity_14);
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
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_56;

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
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[49])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_25));
        }
        Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Pieces_16));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_49));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeHeadFunctor_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeHeadFunctor_15, 0) = ((MR_Box) (Var_56));
        }
      }
      Var_58 = (MR_Integer) ((MR_Unsigned) Nth_2 + (MR_Unsigned) 1);
      parse_tree__parse_type_repn__parse_functor_with_arities_4_p_0(RepnStr_1, Var_58, Terms_11, &MaybeTailFunctors_18);
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
        MR_Word Var_60;

        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (HeadFunctor_19));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (TailFunctors_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_60));
        }
      }
      else
      {
        MR_Word Specs_21;
        MR_Word Var_61;
        MR_Word Var_62;

        Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), MaybeHeadFunctor_15);
        Var_62 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_repn_scalar_common_1[0]), MaybeTailFunctors_18);
        Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, Var_62);
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
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (RepnStr_5));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[35])));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Pieces_29));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (RepnContext_7));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_49));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
      }
    }
    else
    {
      MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 1))));
      MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 0))));

      if ((Var_163 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_112;
        MR_Word Spec_113;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_127;

        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (RepnStr_5));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[35])));
        }
        {
          Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_112, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_112));
        }
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (RepnContext_7));
          MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_113 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_113, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_113, 2) = ((MR_Box) (Var_121));
        }
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Spec_113));
          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
        }
      }
      else
      {
        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_163, (MR_Integer) 1))));
        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_163, (MR_Integer) 0))));

        if ((Var_165 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeNumBits_12;
          MR_Word MaybeFillKind_18;
          MR_Integer N0_11;
          MR_Word FillKind2_17;
          MR_String AtomStr2_15;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Integer N_21;
          MR_Word FillKind_22;

          succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_164, &N0_11);
          if (succeeded)
            {
              MaybeNumBits_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeNumBits_12, 0) = ((MR_Box) (N0_11));
            }
          else
          {
            MR_Word NumBitsPieces_13;
            MR_Word NumBitsSpec_14;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_78;

            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (RepnStr_5));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[37])));
            }
            {
              NumBitsPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NumBitsPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[196])));
              MR_hl_field(MR_mktag(1), NumBitsPieces_13, 1) = ((MR_Box) (Var_61));
            }
            Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_164);
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (NumBitsPieces_13));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              NumBitsSpec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NumBitsSpec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), NumBitsSpec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), NumBitsSpec_14, 2) = ((MR_Box) (Var_71));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (NumBitsSpec_14));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeNumBits_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeNumBits_12, 0) = ((MR_Box) (Var_78));
            }
          }
          succeeded = ((MR_tag((MR_Word) Var_166)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_166, (MR_Integer) 0))));
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_166, (MR_Integer) 1))));
            succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_Integer) 0);
              if (succeeded)
              {
                AtomStr2_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 0))));
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
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_101;

            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (RepnStr_5));
            }
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[39])));
            }
            {
              FillKindPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FillKindPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[197])));
              MR_hl_field(MR_mktag(1), FillKindPieces_19, 1) = ((MR_Box) (Var_84));
            }
            Var_96 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_166);
            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (FillKindPieces_19));
            }
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              FillKindSpec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FillKindSpec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FillKindSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), FillKindSpec_20, 2) = ((MR_Box) (Var_94));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (FillKindSpec_20));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeFillKind_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeFillKind_18, 0) = ((MR_Box) (Var_101));
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
            MR_Word Var_103;

            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_103, 0) = ((MR_Box) (N_21));
              MR_hl_field(MR_mktag(2), Var_103, 1) = (MR_Box) ((MR_Unsigned) (FillKind_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRepn_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_103));
            }
          }
          else
          {
            MR_Word Specs_23;
            MR_Word Var_104;
            MR_Word Var_105;

            Var_104 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeNumBits_12);
            Var_105 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_fill_kind_0), MaybeFillKind_18);
            Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_104, Var_105);
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
          MR_Word Pieces_129;
          MR_Word Spec_130;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_144;

          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (RepnStr_5));
          }
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[35])));
          }
          {
            Pieces_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), Pieces_129, 1) = ((MR_Box) (Var_133));
          }
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (Pieces_129));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (RepnContext_7));
            MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (Var_140));
          }
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_130 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_130, 2) = ((MR_Box) (Var_138));
          }
          {
            Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Spec_130));
            MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_144));
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
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;

    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (RepnStr_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[29])));
    }
    {
      Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
      MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Pieces_20));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (RepnContext_9));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_35));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
    }
  }
  else
  {
    MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 1))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_8, (MR_Integer) 0))));

    if ((Var_91 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_13;
      MR_Word MaybeEqvType_14;

      ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[31])));
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[0])), VarSet_6, ContextPieces_13, Var_92, &MaybeEqvType_14);
      if (((MR_tag((MR_Word) MaybeEqvType_14)) == (MR_Integer) 0))
        *MaybeRepn_10 = (MR_Word) (MaybeEqvType_14);
      else
      {
        MR_Word EqvType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEqvType_14, (MR_Integer) 0))));
        MR_Word Var_55;

        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (EqvType_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeRepn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
        }
      }
    }
    else
    {
      MR_Word Pieces_57;
      MR_Word Spec_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_72;

      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (RepnStr_7));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[29])));
      }
      {
        Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
        MR_hl_field(MR_mktag(1), Pieces_57, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Pieces_57));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (RepnContext_9));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_58, 2) = ((MR_Box) (Var_66));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_58));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
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
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_33;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (RepnStr_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[27])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[195])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (RepnContext_8));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_27));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_repn____Unify____du_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_repn____Unify____du_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_repn____Compare____du_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_repn____Compare____du_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__parse_type_repn__parse_tree__parse_type_repn__type_ctor_info_du_where_0);
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
