/*
** Automatically generated from `parse_type_repn.m'
** by the Mercury compiler,
** version 2018-10-29
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
parse_tree__parse_type_repn__parse_type_repn_equivalent_to_5_p_0(
  MR_Word VarSet_6,
  MR_String RepnStr_7,
  MR_Word RepnArgs_8,
  MR_Word RepnContext_9,
  MR_Word * MaybeRepn_10);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_notag_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8);

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_direct_dummy_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8);


static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[59][2];

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[6][1];


/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_3_0_s parse_tree__parse_type_repn_vector_common_3[5];

/* sealed */ struct parse_tree__parse_type_repn__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0;
  const MR_Integer parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_4_0_s parse_tree__parse_type_repn_vector_common_4[5];



static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_1[59][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item:"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and a description of its representation."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments: the type,"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have any arguments."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument, a type."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[4])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument, an integer."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be an integer."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a list of function symbols with arities."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of function symbols with arities."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[7])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "functorname/arity"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list in the second argument of"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of a"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "type_representation"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "item"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should specify the type\'s representation."))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected one of"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_direct_dummy"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_notag"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is_equivalent_to"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fits_in_n_bits"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "has_direct_arg_functors"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__parse_type_repn_scalar_common_2[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_repn_scalar_common_2[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[19])))
  },
};


static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_3_0_s parse_tree__parse_type_repn_vector_common_3[5] = {
  /* row 0 */   {     (MR_String) "fits_in_n_bits" },
  /* row 1 */   {     (MR_String) "has_direct_arg_functors" },
  /* row 2 */   {     (MR_String) "is_direct_dummy" },
  /* row 3 */   {     (MR_String) "is_equivalent_to" },
  /* row 4 */   {     (MR_String) "is_notag" },
};

static /* final */ const struct parse_tree__parse_type_repn__vector_common_type_4_0_s parse_tree__parse_type_repn_vector_common_4[5] = {
  /* row 0 */
  {
    (MR_String) "fits_in_n_bits",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "has_direct_arg_functors",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "is_direct_dummy",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "is_equivalent_to",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "is_notag",
    (MR_Integer) 4
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
    MR_Word Var_32;
    MR_Word Var_33;

    if (succeeded)
    {
      TypeTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RepnTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
        succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word TypeContextPieces_15;
      MR_Word MaybeTypeSymNameAndArgs_16;
      MR_Word MaybeRepn_20;
      MR_Word Var_44;
      MR_String AtomStr_17;
      MR_Word RepnArgs_18;
      MR_Word RepnContext_19;
      MR_Word Var_45;
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;
      MR_Word TypeCtorSymName_24;
      MR_Word TypeArgVars_25;
      MR_Word Repn_26;

      TypeContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[6])));
      Var_44 = parse_tree__parse_sym_name__root_module_name_0_f_0();
      parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeContextPieces_15, Var_44, VarSet_8, TypeTerm_13, &MaybeTypeSymNameAndArgs_16);
      succeeded = ((MR_tag((MR_Word) RepnTerm_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnTerm_14, (MR_Integer) 0))));
        RepnArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnTerm_14, (MR_Integer) 1))));
        RepnContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnTerm_14, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
        if (succeeded)
        {
          AtomStr_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 4;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(AtomStr_17, ((&parse_tree__parse_type_repn_vector_common_3[0 + mid_2]))->parse_tree__parse_type_repn__vector_common_type_3_0__vct_3_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
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
          result_7 = MR_strcmp(AtomStr_17, ((&parse_tree__parse_type_repn_vector_common_4[0 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_0);
          if ((result_7 == (MR_Integer) 0))
          {
            switch (((&parse_tree__parse_type_repn_vector_common_4[0 + mid_6]))->parse_tree__parse_type_repn__vector_common_type_4_0__vct_4_f_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  // case "fits_in_n_bits"
                  ;
                  parse_tree__parse_type_repn__parse_type_repn_fits_in_n_bits_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
                }
                break;
              case (MR_Integer) 1:
                {
                  // case "has_direct_arg_functors"
                  ;
                  parse_tree__parse_type_repn__parse_type_repn_has_direct_arg_functors_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
                }
                break;
              case (MR_Integer) 2:
                {
                  // case "is_direct_dummy"
                  ;
                  parse_tree__parse_type_repn__parse_type_repn_direct_dummy_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "is_equivalent_to"
                  ;
                  parse_tree__parse_type_repn__parse_type_repn_equivalent_to_5_p_0(VarSet_8, AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
                }
                break;
              case (MR_Integer) 4:
                {
                  // case "is_notag"
                  ;
                  parse_tree__parse_type_repn__parse_type_repn_notag_4_p_0(AtomStr_17, RepnArgs_18, RepnContext_19, &MaybeRepn_20);
                }
                break;
            }
            // break out of search loop
            ;
            break;
          }
          else
          if ((result_7 < (MR_Integer) 0))
            hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) (MR_Integer) 1);
          else
            lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) (MR_Integer) 1);
        }
        while ((lo_4 <= hi_5));
      }
      else
      {
        MR_String RepnTermStr_21;
        MR_Word RepnPieces_22;
        MR_Word RepnSpec_23;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_90;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_110;

        RepnTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, RepnTerm_14);
        Var_64 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[51]));
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (RepnTermStr_21));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[9])));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[57])));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[56])));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[52])));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          RepnPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RepnPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), RepnPieces_22, 1) = ((MR_Box) (Var_48));
        }
        Var_105 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RepnTerm_14);
        {
          Var_107 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (RepnPieces_22));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Var_106));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RepnSpec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RepnSpec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), RepnSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), RepnSpec_23, 2) = ((MR_Box) (Var_103));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (RepnSpec_23));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeRepn_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeRepn_20, 0) = ((MR_Box) (Var_110));
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeTypeSymNameAndArgs_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorSymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeSymNameAndArgs_16, (MR_Integer) 0))));
        TypeArgVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeSymNameAndArgs_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeRepn_20)) == (MR_Integer) 1);
        if (succeeded)
          Repn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_20, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word TVarSet_27;
        MR_Word ItemRepnInfo_28;
        MR_Word Item_29;
        MR_Word Var_112;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_27);
        {
          ItemRepnInfo_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemRepnInfo_28, 0) = ((MR_Box) (TypeCtorSymName_24));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_28, 1) = ((MR_Box) (TypeArgVars_25));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_28, 2) = ((MR_Box) (Repn_26));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_28, 3) = ((MR_Box) (TVarSet_27));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_28, 4) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), ItemRepnInfo_28, 5) = ((MR_Box) (SeqNum_11));
        }
        {
          Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_29, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Item_29, 1) = ((MR_Box) (ItemRepnInfo_28));
        }
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Item_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_112));
        }
      }
      else
        *MaybeIOM_12 = (MR_Word) (&parse_tree__parse_type_repn_scalar_common_2[4]);
    }
    else
    {
      MR_Word Spec_31;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_139;

      {
        Var_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[58])));
      }
      {
        Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_133));
      }
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_139));
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
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[33])));
      }
      {
        Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
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
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (Functors_12));
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
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[35])));
          }
          {
            Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[41])));
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
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[33])));
        }
        {
          Pieces_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
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
      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[3]));
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
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[39])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[42])));
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
      Var_58 = (MR_Integer) ((MR_Unsigned) Nth_2 + (MR_Unsigned) (MR_Integer) 1);
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
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Pieces_60;
      MR_Word Spec_61;

      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (RepnStr_5));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[27])));
      }
      {
        Pieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
        MR_hl_field(MR_mktag(1), Pieces_60, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_60));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (RepnContext_7));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_61, 2) = ((MR_Box) (Var_29));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_61));
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
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnArgs_6, (MR_Integer) 0))));

      if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer N_10;

        succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_99, &N_10);
        if (succeeded)
        {
          MR_Word Var_38;

          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (N_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeRepn_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
          }
        }
        else
        {
          MR_Word Pieces_11;
          MR_Word Spec_12;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_58;

          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (RepnStr_5));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[29])));
          }
          {
            Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[41])));
            MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_41));
          }
          Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_99);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces_11));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_51));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Spec_12));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRepn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
          }
        }
      }
      else
      {
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Pieces_79;
        MR_Word Spec_80;

        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (RepnStr_5));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[27])));
        }
        {
          Pieces_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
          MR_hl_field(MR_mktag(1), Pieces_79, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Pieces_79));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (RepnContext_7));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_80, 2) = ((MR_Box) (Var_71));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_80));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRepn_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_equivalent_to_5_p_0(
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
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[23])));
    }
    {
      Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
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

      ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[25])));
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[2])), VarSet_6, ContextPieces_13, Var_92, &MaybeEqvType_14);
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
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[23])));
      }
      {
        Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
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
parse_tree__parse_type_repn__parse_type_repn_notag_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8)
{
  if ((RepnArgs_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeRepn_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[1]));
  else
  {
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (RepnStr_5));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (RepnContext_7));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_25));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_repn__parse_type_repn_direct_dummy_4_p_0(
  MR_String RepnStr_5,
  MR_Word RepnArgs_6,
  MR_Word RepnContext_7,
  MR_Word * MaybeRepn_8)
{
  if ((RepnArgs_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeRepn_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_2[0]));
  else
  {
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (RepnStr_5));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_repn_scalar_common_1[21])));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_repn_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (RepnContext_7));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_25));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
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
