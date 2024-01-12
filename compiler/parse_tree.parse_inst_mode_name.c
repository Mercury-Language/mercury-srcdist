/*
** Automatically generated from `parse_inst_mode_name.m'
** by the Mercury compiler,
** version rotd-2024-01-12
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


// :- module parse_tree.parse_inst_mode_name.
// :- implementation.

/*
INIT mercury__parse_tree__parse_inst_mode_name__init
ENDINIT
*/

#include "parse_tree.parse_inst_mode_name.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1[1];

static const MR_DuArgLocn parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_locns_allow_constrained_inst_var_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_allow_constrained_inst_var_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_allow_constrained_inst_var_0[2];

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_allow_constrained_inst_var_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_0[2];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4;

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3[2];

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_compound_inst_kind_1[5];

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_compound_inst_kind_1[5];

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_inst_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_inst_kind_1[3];

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_inst_kind_1[3];

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_3;

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_4;

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_5;

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_6;

static const MR_EnumFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_ordinal_ordered_why_no_constrained_inst_var_0[7];

static const MR_EnumFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_name_ordered_why_no_constrained_inst_var_0[7];

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_why_no_constrained_inst_var_0[7];

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word TypeInfo_for_T_78,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(
  MR_Word AllowConstrainedInstVar_8,
  MR_Word VarSet_9,
  MR_Word ContextPieces_10,
  MR_String Name_11,
  MR_Word ArgTerms0_12,
  MR_Word Context_13,
  MR_Word * MaybeInst_14);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(
  MR_Word AllowConstrainedInstVar_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeBoundInst_10);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(
  MR_Word AllowConstrainedInstVar_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(
  MR_Word AllowConstrainedInstVar_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word DisjunctionTerm_10,
  MR_Word Uniqueness_11,
  MR_Word * MaybeInst_12);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(
  MR_Word AllowConstrainedInstVar_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word BeforeIsTerm_10,
  MR_Word DetTerm_11,
  MR_Word * MaybeInst_12);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(
  MR_Word AllowConstrainedInstVar_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word BeforeIsTerm_10,
  MR_Word DetTerm_11,
  MR_Word * MaybeMode_12);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String Name_4,
  MR_Word Args_5,
  MR_Word * KnownInst_6);

static void MR_CALL 
parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word Why_7,
  MR_Word VarSet_8,
  MR_Word Term_9);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_1[80][2];

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_2[21][1];

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_3[5][3];


struct parse_tree__parse_inst_mode_name__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_inst_mode_name__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_4_0_s parse_tree__parse_inst_mode_name_vector_common_4[7];

struct parse_tree__parse_inst_mode_name__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_inst_mode_name__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer parse_tree__parse_inst_mode_name__vector_common_type_5_0__vct_5_f_1;
  const MR_Word parse_tree__parse_inst_mode_name__vector_common_type_5_0__vct_5_f_2;
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_5_0_s parse_tree__parse_inst_mode_name_vector_common_5[32];



static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_1[80][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a floating point number"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be a valid mode."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an implementation defined literal"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an integer"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a string"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a variable such as"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a valid mode."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a valid inst."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a valid determinism."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: higher order inst is used as a mode."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<mode1>, ...) = <return_mode> is <detism>"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<mode1>, ...) = <return_mode> is <detism>"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(<mode1>, ...) is <detism>"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<mode1>, ...) is <detism>"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "one of the following forms:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a higher-order mode should have"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the builtin inst"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should only be used with arity"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: inst constraints can be applied"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "only to inst variables,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not to terms such as"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a constrained inst variable"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not appear"))
  },
  /* row  51 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    (MR_Box) ((MR_Unsigned) 4U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    (MR_Box) ((MR_Unsigned) 2U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<inst1>, ...) = <return_inst> is <detism>"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[26])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<inst1>, ...) = <return_inst> is <detism>"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(<inst1>, ...) is <detism>"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<inst1>, ...) is <detism>"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a higher-order insts should have"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this bound inst lists"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an implementation defined literal"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not be a used as a bound inst."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a bound inst."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_2[21][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "two")) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_3[0]))) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "zero")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "one")) },
  /* row   8 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[51]))) },
  /* row   9 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_3[1]))) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[52]))) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[53]))) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_3[2]))) },
  /* row  14 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[54]))) },
  /* row  15 */
  { ((MR_Box) ((MR_String) "zero or one")) },
  /* row  16 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_3[3]))) },
  /* row  17 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  18 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[55]))) },
  /* row  19 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_3[4]))) },
  /* row  20 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 4U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 2U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_4_0_s parse_tree__parse_inst_mode_name_vector_common_4[7] = {
  /* row   0 */   { (MR_String) "on the right hand side of an inst constraint" },
  /* row   1 */   { (MR_String) "on the left hand side of the definition of a named inst" },
  /* row   2 */   { (MR_String) "on the right hand side of the definition of a named inst equivalence" },
  /* row   3 */   { (MR_String) "on the right hand side of the definition of a named mode" },
  /* row   4 */   { (MR_String) "in a mode annotation on a type" },
  /* row   5 */   { (MR_String) "as the ground or any inst of a solver type definition" },
  /* row   6 */   { (MR_String) "as the inst of a mutable" },
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_5_0_s parse_tree__parse_inst_mode_name_vector_common_5[32] = {
  /* row   0 */
  {
    (MR_String) "semidet",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "erroneous",
    (MR_Integer) -1,
    (MR_Integer) 6
  },
  /* row   2 */
  {
    (MR_String) "multi",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row   3 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    (MR_String) "failure",
    (MR_Integer) -1,
    (MR_Integer) 7
  },
  /* row   8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    (MR_String) "cc_nondet",
    (MR_Integer) 2,
    (MR_Integer) 5
  },
  /* row  13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    (MR_String) "multidet",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row  21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  22 */
  {
    (MR_String) "det",
    (MR_Integer) -1,
    (MR_Integer) 0
  },
  /* row  23 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  24 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    (MR_String) "nondet",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row  29 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  30 */
  {
    (MR_String) "cc_multi",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
  /* row  31 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_why_no_constrained_inst_var_0) };

static const MR_DuArgLocn parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_locns_allow_constrained_inst_var_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1,
  NULL,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_locns_allow_constrained_inst_var_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_0[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_1[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1 };

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_allow_constrained_inst_var_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1
};

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_allow_constrained_inst_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "allow_constrained_inst_var",
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_allow_constrained_inst_var_0 },
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_allow_constrained_inst_var_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_allow_constrained_inst_var_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0 = {
  (MR_String) "kcik_is",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1 = {
  (MR_String) "kcik_constrained",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2 = {
  (MR_String) "kcik_bound",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3 = {
  (MR_String) "kcik_unique",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4 = {
  (MR_String) "kcik_mostly_unique",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2 };

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4
};

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3
};

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_compound_inst_kind_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "known_compound_inst_kind",
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_compound_inst_kind_1 },
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_compound_inst_kind_1,

};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) };

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0 = {
  (MR_String) "known_inst_simple",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_compound_inst_kind_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1 = {
  (MR_String) "known_inst_compound",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2 = {
  (MR_String) "known_inst_bad_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_0[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_1[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_2[1] = { &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2 };

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_inst_kind_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0
};

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_inst_kind_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "known_inst_kind",
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_inst_kind_1 },
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_inst_kind_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_inst_kind_1,

};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_0 = {
  (MR_String) "wnciv_constraint_rhs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_1 = {
  (MR_String) "wnciv_inst_defn_lhs",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_2 = {
  (MR_String) "wnciv_eqv_inst_defn_rhs",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_3 = {
  (MR_String) "wnciv_mode_defn_rhs",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_4 = {
  (MR_String) "wnciv_type_and_mode",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_5 = {
  (MR_String) "wnciv_solver_type_inst",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_6 = {
  (MR_String) "wnciv_mutable_inst",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_ordinal_ordered_why_no_constrained_inst_var_0[7] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_0,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_1,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_2,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_3,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_4,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_5,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_6
};

static const MR_EnumFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_name_ordered_why_no_constrained_inst_var_0[7] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_0,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_2,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_1,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_3,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_6,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_5,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_4
};

static const MR_Integer parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_why_no_constrained_inst_var_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_why_no_constrained_inst_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "why_no_constrained_inst_var",
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_name_ordered_why_no_constrained_inst_var_0 },
  { parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_ordinal_ordered_why_no_constrained_inst_var_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_why_no_constrained_inst_var_0,

};

void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0(
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
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, Var_31, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(TypeInfo_for_T_24, HeadVar__1_1, Var_30, ArgY1_13);
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
          MR_String Var_29 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_29, ArgY1_21);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word TypeInfo_for_T_11,
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word TypeInfo_for_T_78,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_76 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_77 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_76 == CastY_77);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Var_82 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_83 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));
                MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, &SubResult1_6, Var_83, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_82, ArgY2_8);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_80 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_81 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_27 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
                MR_Box ArgY2_30 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
                MR_Word SubResult1_28;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, &SubResult1_28, Var_81, ArgY1_27);
                succeeded = (SubResult1_28 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_28;
                else
                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_80, ArgY2_30);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_79 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Box ArgY1_47 = (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_79, ArgY1_47);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box Var_85 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Box ArgY1_61 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));

                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_85, ArgY1_61);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box Var_84 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Box ArgY1_75 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));

                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_84, ArgY1_75);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;
          MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
          MR_Box ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_8;
          MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
          MR_Box ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_11 = (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_11, ArgY1_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_13 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_15 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_15, ArgY1_16);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
      MR_Integer Var_12 = (MR_Integer) (Var_11);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__is_known_inst_name_1_p_0(
  MR_String Name_2)
{
  MR_bool succeeded;
  MR_Word Var_3;

  succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_2, (MR_Word) ((MR_Unsigned) 0U), &Var_3);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) ">>") == 0))
    succeeded = MR_TRUE;
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "is") == 0))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_inst_5_p_0(
  MR_Word AllowConstrainedInstVar_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeInst_10)
{
  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Functor_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Name_27 = ((MR_String) ((MR_hl_field(0, Functor_14, (MR_Integer) 0))));

          parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, Name_27, ArgTerms_15, Context_16, MaybeInst_10);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_String TermStr_24;
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_46;

          TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
          {
            Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_36, 1) = ((MR_Box) (TermStr_24));
          }
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[18])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
          }
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_30);
          {
            Spec_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_inst\'/5"));
            MR_hl_field(1, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_26, 3) = ((MR_Box) (Context_16));
            MR_hl_field(1, Spec_26, 4) = ((MR_Box) (Pieces_25));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInst_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String TermStr_24;
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_46;

          TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
          {
            Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_36, 1) = ((MR_Box) (TermStr_24));
          }
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[18])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
          }
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_30);
          {
            Spec_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_inst\'/5"));
            MR_hl_field(1, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_26, 3) = ((MR_Box) (Context_16));
            MR_hl_field(1, Spec_26, 4) = ((MR_Box) (Pieces_25));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInst_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Term_9, (MR_Integer) 0))));
    MR_Word InstVar_13;
    MR_Word Var_28;

    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), Var_11, &InstVar_13);
    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (InstVar_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInst_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(
  MR_Word AllowConstrainedInstVar_8,
  MR_Word VarSet_9,
  MR_Word ContextPieces_10,
  MR_String Name_11,
  MR_Word ArgTerms0_12,
  MR_Word Context_13,
  MR_Word * MaybeInst_14)
{
  MR_bool succeeded;
  MR_Word KnownInstKind_15;

  succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_11, ArgTerms0_12, &KnownInstKind_15);
  if (succeeded)
    switch (MR_tag((MR_Word) KnownInstKind_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Inst_19 = ((MR_Word) ((MR_hl_field(0, KnownInstKind_15, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInst_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Inst_19));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CompoundInstKind_20 = ((MR_Word) ((MR_hl_field(1, KnownInstKind_15, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) CompoundInstKind_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BeforeIsTerm_21 = ((MR_Word) ((MR_hl_field(0, CompoundInstKind_20, (MR_Integer) 0))));
                MR_Word DetTerm_22 = ((MR_Word) ((MR_hl_field(0, CompoundInstKind_20, (MR_Integer) 1))));

                parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, BeforeIsTerm_21, DetTerm_22, MaybeInst_14);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word VarTerm_24 = ((MR_Word) ((MR_hl_field(1, CompoundInstKind_20, (MR_Integer) 0))));
                MR_Word SubInstTerm_25 = ((MR_Word) ((MR_hl_field(1, CompoundInstKind_20, (MR_Integer) 1))));

                if (((MR_tag((MR_Word) VarTerm_24)) == (MR_Integer) 0))
                {
                  MR_String VarTermStr_36;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_82;
                  MR_Word Var_85;
                  MR_Word Var_88;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_102;
                  MR_Word Var_103;
                  MR_Word Pieces_117;
                  MR_Word Spec_118;

                  VarTermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, VarTerm_24);
                  Var_79 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
                  {
                    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_92, 1) = ((MR_Box) (VarTermStr_36));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[25])));
                  }
                  {
                    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[48])));
                    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
                  }
                  {
                    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[47])));
                    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
                  }
                  {
                    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[46])));
                    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
                  }
                  {
                    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_82));
                  }
                  Pieces_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_80);
                  Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarTerm_24);
                  {
                    Spec_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_118, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_inst_atom_functor\'/7"));
                    MR_hl_field(1, Spec_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_118, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_118, 3) = ((MR_Box) (Var_102));
                    MR_hl_field(1, Spec_118, 4) = ((MR_Box) (Pieces_117));
                  }
                  {
                    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Spec_118));
                    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeInst_14 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
                  }
                }
                else
                {
                  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, VarTerm_24, (MR_Integer) 0))));
                  MR_Word MaybeSubInst_28;

                  parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_2[2])), VarSet_9, ContextPieces_10, SubInstTerm_25, &MaybeSubInst_28);
                  if (((MR_tag((MR_Word) MaybeSubInst_28)) == (MR_Integer) 0))
                    *MaybeInst_14 = MaybeSubInst_28;
                  else
                  {
                    MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(1, MaybeSubInst_28, (MR_Integer) 0))));

                    if ((AllowConstrainedInstVar_8 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_76;
                      MR_Word Var_77;
                      MR_Word Inst_112;

                      Var_77 = mercury__term__coerce_var_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), Var_26);
                      Var_76 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[3]), ((MR_Box) (Var_77)));
                      {
                        Inst_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Inst_112, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Inst_112, 1) = ((MR_Box) (Var_76));
                        MR_hl_field(3, Inst_112, 2) = ((MR_Box) (SubInst_29));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeInst_14 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_112));
                      }
                    }
                    else
                    {
                      MR_Word Why_30 = ((MR_Unsigned) ((MR_hl_field(1, AllowConstrainedInstVar_8, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word BadTerm_31;
                      MR_Word Var_78;

                      {
                        Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_78, 0) = ((MR_Box) (Name_11));
                      }
                      {
                        BadTerm_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, BadTerm_31, 0) = ((MR_Box) (Var_78));
                        MR_hl_field(0, BadTerm_31, 1) = ((MR_Box) (ArgTerms0_12));
                        MR_hl_field(0, BadTerm_31, 2) = ((MR_Box) (Context_13));
                      }
                      *MaybeInst_14 = parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(ContextPieces_10, Why_30, VarSet_9, BadTerm_31);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word DisjTerm_23 = ((MR_Word) ((MR_hl_field(2, CompoundInstKind_20, (MR_Integer) 0))));

                parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, DisjTerm_23, (MR_Integer) 0, MaybeInst_14);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, CompoundInstKind_20, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word DisjTerm_110 = ((MR_Word) ((MR_hl_field(3, CompoundInstKind_20, (MR_Integer) 1))));

                    parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, DisjTerm_110, (MR_Integer) 1, MaybeInst_14);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word DisjTerm_111 = ((MR_Word) ((MR_hl_field(3, CompoundInstKind_20, (MR_Integer) 1))));

                    parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, DisjTerm_111, (MR_Integer) 2, MaybeInst_14);
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ExpectedArityStr_16 = ((MR_String) ((MR_hl_field(2, KnownInstKind_15, (MR_Integer) 0))));
          MR_Word Pieces_17;
          MR_Word Spec_18;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_50;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_69;

          Var_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
          {
            Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_54, 1) = ((MR_Box) (Name_11));
          }
          {
            Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_59, 1) = ((MR_Box) (ExpectedArityStr_16));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[25])));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[45])));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[44])));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
          }
          Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_48);
          {
            Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_inst_atom_functor\'/7"));
            MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Context_13));
            MR_hl_field(1, Spec_18, 4) = ((MR_Box) (Pieces_17));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Spec_18));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInst_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
          }
        }
        break;
    }
  else
  {
    MR_Word UserDefnInstTerm_37;
    MR_Word MaybeFunctor_38;
    MR_Word Var_105;

    {
      Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_105, 0) = ((MR_Box) (Name_11));
    }
    {
      UserDefnInstTerm_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UserDefnInstTerm_37, 0) = ((MR_Box) (Var_105));
      MR_hl_field(0, UserDefnInstTerm_37, 1) = ((MR_Box) (ArgTerms0_12));
      MR_hl_field(0, UserDefnInstTerm_37, 2) = ((MR_Box) (Context_13));
    }
    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, ContextPieces_10, UserDefnInstTerm_37, &MaybeFunctor_38);
    if (((MR_tag((MR_Word) MaybeFunctor_38)) == (MR_Integer) 0))
    {
      MR_Word Specs_144 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_38, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInst_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_144));
      }
    }
    else
    {
      MR_Word QualifiedName_39 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_38, (MR_Integer) 0))));
      MR_Word ArgTerms1_40 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_38, (MR_Integer) 1))));
      MR_Word Inst_139;
      MR_Word BuiltinModule_41;
      MR_String UnqualifiedName_42;
      MR_Word KnownInstKind_131;
      MR_Word Var_154;
      MR_Word Var_108;

      BuiltinModule_41 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(QualifiedName_39, (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[3]), &Var_154);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(BuiltinModule_41, Var_154);
      if (succeeded)
      {
        UnqualifiedName_42 = mdbcomp__sym_name__unqualify_name_1_f_0(QualifiedName_39);
        succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(UnqualifiedName_42, ArgTerms1_40, &KnownInstKind_131);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) KnownInstKind_131)) == (MR_Integer) 0);
          if (succeeded)
          {
            Inst_139 = ((MR_Word) ((MR_hl_field(0, KnownInstKind_131, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Inst_139)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_139, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_108 = ((MR_Word) ((MR_hl_field(3, Inst_139, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            succeeded = !(succeeded);
          }
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInst_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Inst_139));
        }
      else
      {
        MR_Word MaybeArgInsts_45;

        parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, ArgTerms1_40, &MaybeArgInsts_45);
        if (((MR_tag((MR_Word) MaybeArgInsts_45)) == (MR_Integer) 0))
          *MaybeInst_14 = (MR_Word) (MaybeArgInsts_45);
        else
        {
          MR_Word ArgInsts_46 = ((MR_Word) ((MR_hl_field(1, MaybeArgInsts_45, (MR_Integer) 0))));
          MR_Word Var_109;
          MR_Word Inst_132;

          {
            Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_109, 0) = ((MR_Box) (QualifiedName_39));
            MR_hl_field(0, Var_109, 1) = ((MR_Box) (ArgInsts_46));
          }
          {
            Inst_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Inst_132, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Inst_132, 1) = ((MR_Box) (Var_109));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInst_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Inst_132));
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_mode_5_p_0(
  MR_Word AllowConstrainedInstVar_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeMode_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word TermFunctor_16 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    MR_Word ArgTerms0_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
    MR_Word Context_105 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) TermFunctor_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FunctorName_26 = ((MR_String) ((MR_hl_field(0, TermFunctor_16, (MR_Integer) 0))));
          MR_Word InstTermA_27;
          MR_Word InstTermB_28;
          MR_Word Var_84;
          MR_Word Var_85;

          succeeded = (strcmp(FunctorName_26, (MR_String) ">>") == 0);
          if (succeeded)
          {
            succeeded = (ArgTerms0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InstTermA_27 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_17, (MR_Integer) 0))));
              Var_84 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_17, (MR_Integer) 1))));
              succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                InstTermB_28 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
                Var_85 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));
                succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            MR_Word MaybeInstA_29;
            MR_Word MaybeInstB_30;
            MR_Word InstA_31;
            MR_Word InstB_32;

            parse_tree__parse_inst_mode_name__parse_inst_5_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, InstTermA_27, &MaybeInstA_29);
            parse_tree__parse_inst_mode_name__parse_inst_5_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, InstTermB_28, &MaybeInstB_30);
            succeeded = ((MR_tag((MR_Word) MaybeInstA_29)) == (MR_Integer) 1);
            if (succeeded)
            {
              InstA_31 = ((MR_Word) ((MR_hl_field(1, MaybeInstA_29, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeInstB_30)) == (MR_Integer) 1);
              if (succeeded)
                InstB_32 = ((MR_Word) ((MR_hl_field(1, MaybeInstB_30, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_86, 0) = ((MR_Box) (InstA_31));
                MR_hl_field(0, Var_86, 1) = ((MR_Box) (InstB_32));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMode_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_86));
              }
            }
            else
            {
              MR_Word Specs_33;
              MR_Word Var_87;
              MR_Word Var_88;

              Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInstA_29);
              Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInstB_30);
              Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_87, Var_88);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeMode_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_33));
              }
            }
          }
          else
          {
            MR_Word BeforeIsTerm_34;
            MR_Word DetTerm_35;
            MR_Word Var_89;
            MR_Word Var_90;

            succeeded = (strcmp(FunctorName_26, (MR_String) "is") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms0_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BeforeIsTerm_34 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_17, (MR_Integer) 0))));
                Var_89 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_17, (MR_Integer) 1))));
                succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  DetTerm_35 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 0))));
                  Var_90 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 1))));
                  succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
              parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, BeforeIsTerm_34, DetTerm_35, MaybeMode_10);
            else
            {
              MR_Word MaybeFunctor_36;

              parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, ContextPieces_8, Term_9, &MaybeFunctor_36);
              if (((MR_tag((MR_Word) MaybeFunctor_36)) == (MR_Integer) 0))
              {
                MR_Word Specs_98 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_36, (MR_Integer) 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeMode_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Specs_98));
                }
              }
              else
              {
                MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_36, (MR_Integer) 0))));
                MR_Word ArgTerms_38 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_36, (MR_Integer) 1))));
                MR_Word MaybeArgInsts_39;

                parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, ArgTerms_38, &MaybeArgInsts_39);
                if (((MR_tag((MR_Word) MaybeArgInsts_39)) == (MR_Integer) 0))
                  *MaybeMode_10 = (MR_Word) (MaybeArgInsts_39);
                else
                {
                  MR_Word ArgInsts_40 = ((MR_Word) ((MR_hl_field(1, MaybeArgInsts_39, (MR_Integer) 0))));
                  MR_Word Var_91;

                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (SymName_37));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (ArgInsts_40));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeMode_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_91));
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_142;
          MR_Word Var_145;
          MR_Word Var_147;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Word Var_156;
          MR_String TermStr_158;
          MR_Word Pieces_159;
          MR_Word Spec_160;

          TermStr_158 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_139 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
          {
            Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_151, 1) = ((MR_Box) (TermStr_158));
          }
          {
            Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
            MR_hl_field(1, Var_150, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[10])));
          }
          {
            Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_147, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
            MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_150));
          }
          {
            Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_145, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[12])));
            MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_147));
          }
          {
            Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_142, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
            MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_145));
          }
          {
            Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
          }
          Pieces_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, Var_140);
          {
            Spec_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_160, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_mode\'/5"));
            MR_hl_field(1, Spec_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_160, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_160, 3) = ((MR_Box) (Context_105));
            MR_hl_field(1, Spec_160, 4) = ((MR_Box) (Pieces_159));
          }
          {
            Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_156, 0) = ((MR_Box) (Spec_160));
            MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMode_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_156));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Var_167;
          MR_Word Var_170;
          MR_Word Var_172;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_181;
          MR_String TermStr_183;
          MR_Word Pieces_184;
          MR_Word Spec_185;

          TermStr_183 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_164 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
          {
            Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_176, 1) = ((MR_Box) (TermStr_183));
          }
          {
            Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[10])));
          }
          {
            Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
            MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
          }
          {
            Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_170, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[13])));
            MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_172));
          }
          {
            Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_167, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
            MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
          }
          {
            Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_167));
          }
          Pieces_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_164, Var_165);
          {
            Spec_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_185, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_mode\'/5"));
            MR_hl_field(1, Spec_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_185, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_185, 3) = ((MR_Box) (Context_105));
            MR_hl_field(1, Spec_185, 4) = ((MR_Box) (Pieces_184));
          }
          {
            Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_181, 0) = ((MR_Box) (Spec_185));
            MR_hl_field(1, Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMode_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_181));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TermFunctor_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_82;
              MR_String TermStr_92;
              MR_Word Pieces_93;
              MR_Word Spec_94;

              TermStr_92 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
              Var_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
              {
                Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_72, 1) = ((MR_Box) (TermStr_92));
              }
              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
                MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[10])));
              }
              {
                Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
              }
              {
                Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[6])));
                MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
              }
              Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_61);
              {
                Spec_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_94, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_mode\'/5"));
                MR_hl_field(1, Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_94, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_94, 3) = ((MR_Box) (Context_105));
                MR_hl_field(1, Spec_94, 4) = ((MR_Box) (Pieces_93));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (Spec_94));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeMode_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_82));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_117;
              MR_Word Var_120;
              MR_Word Var_122;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_131;
              MR_String TermStr_133;
              MR_Word Pieces_134;
              MR_Word Spec_135;

              TermStr_133 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
              Var_114 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
              {
                Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_126, 1) = ((MR_Box) (TermStr_133));
              }
              {
                Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
                MR_hl_field(1, Var_125, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[10])));
              }
              {
                Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_125));
              }
              {
                Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
                MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
              }
              {
                Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
                MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
              }
              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_117));
              }
              Pieces_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_115);
              {
                Spec_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_135, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_mode\'/5"));
                MR_hl_field(1, Spec_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_135, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_135, 3) = ((MR_Box) (Context_105));
                MR_hl_field(1, Spec_135, 4) = ((MR_Box) (Pieces_134));
              }
              {
                Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_131, 0) = ((MR_Box) (Spec_135));
                MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeMode_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
              }
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(1, Term_9, (MR_Integer) 1))));
    MR_String TermStr_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_58;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
    Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[16])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[14])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
    {
      Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_mode\'/5"));
      MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMode_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(
  MR_Word AllowConstrainedInstVar_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeBoundInst_10)
{
  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    MR_Word Context_100 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Functor_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeFunctor_19;
          MR_Word Var_55;

          Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_55, Term_9, &MaybeFunctor_19);
          if (((MR_tag((MR_Word) MaybeFunctor_19)) == (MR_Integer) 0))
          {
            MR_Word Specs_82 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_19, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeBoundInst_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_82));
            }
          }
          else
          {
            MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_19, (MR_Integer) 0))));
            MR_Word ArgTerms1_21 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_19, (MR_Integer) 1))));
            MR_Word MaybeArgInsts_22;

            parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, ArgTerms1_21, &MaybeArgInsts_22);
            if (((MR_tag((MR_Word) MaybeArgInsts_22)) == (MR_Integer) 0))
              *MaybeBoundInst_10 = (MR_Word) (MaybeArgInsts_22);
            else
            {
              MR_Word ArgInsts_23 = ((MR_Word) ((MR_hl_field(1, MaybeArgInsts_22, (MR_Integer) 0))));
              MR_Integer Arity_24;
              MR_Word ConsId_25;
              MR_Word Var_56;
              MR_Word Var_57;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[2]), ArgTerms1_21, &Arity_24);
              Var_56 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
              {
                ConsId_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, ConsId_25, 1) = ((MR_Box) (SymName_20));
                MR_hl_field(3, ConsId_25, 2) = ((MR_Box) (Arity_24));
                MR_hl_field(3, ConsId_25, 3) = ((MR_Box) (Var_56));
              }
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (ConsId_25));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (ArgInsts_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundInst_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Base_28 = ((MR_Unsigned) ((MR_hl_field(1, Functor_16, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Integer_29 = ((MR_Word) ((MR_hl_field(1, Functor_16, (MR_Integer) 1))));
          MR_Word Signedness_30 = ((((MR_Unsigned) ((MR_hl_field(1, Functor_16, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          MR_Word Size_31 = ((MR_Unsigned) ((MR_hl_field(1, Functor_16, (MR_Integer) 2))) & (MR_Integer) 7);
          MR_Word MaybeConsId_32;

          parse_tree__parse_util__parse_integer_cons_id_6_p_0(Base_28, Integer_29, Signedness_30, Size_31, Context_100, &MaybeConsId_32);
          if (((MR_tag((MR_Word) MaybeConsId_32)) == (MR_Integer) 0))
            *MaybeBoundInst_10 = (MR_Word) (MaybeConsId_32);
          else
          {
            MR_Word BoundInst_33;
            MR_Word ConsId_86 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_32, (MR_Integer) 0))));

            {
              BoundInst_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BoundInst_33, 0) = ((MR_Box) (ConsId_86));
              MR_hl_field(0, BoundInst_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeBoundInst_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_33));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Str_35 = ((MR_String) ((MR_hl_field(2, Functor_16, (MR_Integer) 0))));
          MR_Word ConsId_109;
          MR_Word BoundInst_110;

          {
            ConsId_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_109, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, ConsId_109, 1) = ((MR_Box) (Str_35));
          }
          {
            BoundInst_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, BoundInst_110, 0) = ((MR_Box) (ConsId_109));
            MR_hl_field(0, BoundInst_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeBoundInst_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_110));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Functor_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float Float_34 = MR_unbox_float((MR_hl_field(3, Functor_16, (MR_Integer) 1)));
              MR_Word ConsId_92;
              MR_Word BoundInst_93;

              {
                ConsId_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ConsId_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, ConsId_92, 1) = MR_box_float(Float_34);
              }
              {
                BoundInst_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BoundInst_93, 0) = ((MR_Box) (ConsId_92));
                MR_hl_field(0, BoundInst_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundInst_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_93));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_61;
              MR_Word Var_64;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_78;
              MR_String TermStr_83;
              MR_Word Pieces_84;
              MR_Word Spec_85;

              TermStr_83 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
              Var_58 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
              {
                Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_68, 1) = ((MR_Box) (TermStr_83));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[77])));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[75])));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
              }
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
              }
              Pieces_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_59);
              {
                Spec_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_bound_inst\'/5"));
                MR_hl_field(1, Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_85, 3) = ((MR_Box) (Context_100));
                MR_hl_field(1, Spec_85, 4) = ((MR_Box) (Pieces_84));
              }
              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) (Spec_85));
                MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeBoundInst_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
              }
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(1, Term_9, (MR_Integer) 1))));
    MR_String TermStr_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_53;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
    Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[79])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_37);
    {
      Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_bound_inst\'/5"));
      MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeBoundInst_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(
  MR_Word AllowConstrainedInstVar_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_2[20]));
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MaybeHeadBoundInst_16;
    MR_Word MaybeTailBoundInsts_17;
    MR_Word HeadBoundInst_18;
    MR_Word TailBoundInsts_19;

    parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Term_13, &MaybeHeadBoundInst_16);
    parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Terms_14, &MaybeTailBoundInsts_17);
    succeeded = ((MR_tag((MR_Word) MaybeHeadBoundInst_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadBoundInst_18 = ((MR_Word) ((MR_hl_field(1, MaybeHeadBoundInst_16, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTailBoundInsts_17)) == (MR_Integer) 1);
      if (succeeded)
        TailBoundInsts_19 = ((MR_Word) ((MR_hl_field(1, MaybeTailBoundInsts_17, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (HeadBoundInst_18));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (TailBoundInsts_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      }
    }
    else
    {
      MR_Word Specs_20;
      MR_Word Var_22;
      MR_Word Var_23;

      Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), MaybeHeadBoundInst_16);
      Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[4]), MaybeTailBoundInsts_17);
      Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_22, Var_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_20));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(
  MR_Word AllowConstrainedInstVar_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word DisjunctionTerm_10,
  MR_Word Uniqueness_11,
  MR_Word * MaybeInst_12)
{
  MR_bool succeeded;
  MR_Word DisjunctTerms_13;
  MR_Word MaybeBoundInsts_14;

  parse_tree__parse_util__disjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DisjunctionTerm_10, &DisjunctTerms_13);
  parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, DisjunctTerms_13, &MaybeBoundInsts_14);
  if (((MR_tag((MR_Word) MaybeBoundInsts_14)) == (MR_Integer) 0))
    *MaybeInst_12 = (MR_Word) (MaybeBoundInsts_14);
  else
  {
    MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(1, MaybeBoundInsts_14, (MR_Integer) 0))));
    MR_Word SortedBoundInsts_17;
    MR_Word Duplicates_21;
    MR_Word TypeCtorInfo_51_51;
    MR_Word FirstBoundInst_18;
    MR_Word LaterBoundInsts_19;
    MR_Word Duplicates0_20;

    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts_16, &SortedBoundInsts_17);
    succeeded = (SortedBoundInsts_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FirstBoundInst_18 = ((MR_Word) ((MR_hl_field(1, SortedBoundInsts_17, (MR_Integer) 0))));
      LaterBoundInsts_19 = ((MR_Word) ((MR_hl_field(1, SortedBoundInsts_17, (MR_Integer) 1))));
      parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(FirstBoundInst_18, LaterBoundInsts_19, &Duplicates0_20);
      TypeCtorInfo_51_51 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
      mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_51_51, Duplicates0_20, &Duplicates_21);
      succeeded = (Duplicates_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word Pieces_24;
      MR_Word Spec_25;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_45;
      MR_Word Var_46;

      Var_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
      Var_34 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", Duplicates_21);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[72])));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
      }
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[74])));
      Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_28);
      Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DisjunctionTerm_10);
      {
        Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_bound_inst_list\'/6"));
        MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Var_45));
        MR_hl_field(1, Spec_25, 4) = ((MR_Box) (Pieces_24));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInst_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
      }
    }
    else
    {
      MR_Word Inst_26;

      {
        Inst_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Inst_26, 0) = (MR_Box) ((MR_Unsigned) (Uniqueness_11));
        MR_hl_field(2, Inst_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Inst_26, 2) = ((MR_Box) (SortedBoundInsts_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInst_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_26));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(
  MR_Word AllowConstrainedInstVar_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word BeforeIsTerm_10,
  MR_Word DetTerm_11,
  MR_Word * MaybeInst_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
  MR_Word BeforeIsArgTerms_14;
  MR_Word IsAny_16;
  MR_String BeforeIsFunctor_13;
  MR_Word Var_37;

  if (succeeded)
  {
    Var_37 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 0))));
    BeforeIsArgTerms_14 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
    if (succeeded)
    {
      BeforeIsFunctor_13 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      if ((strcmp(BeforeIsFunctor_13, (MR_String) "pred") == 0))
      {
        IsAny_16 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(BeforeIsFunctor_13, (MR_String) "any_pred") == 0))
      {
        IsAny_16 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
  {
    MR_Word MaybeArgModes_17;
    MR_Word MaybeDetism_18;
    MR_Word ArgModes_19;
    MR_Word Detism_20;

    parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, BeforeIsArgTerms_14, &MaybeArgModes_17);
    parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_8, DetTerm_11, &MaybeDetism_18);
    succeeded = ((MR_tag((MR_Word) MaybeArgModes_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgModes_19 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_17, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeDetism_18)) == (MR_Integer) 1);
      if (succeeded)
        Detism_20 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_18, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word PredInst_21;
      MR_Word Inst_22;

      {
        PredInst_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredInst_21, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, PredInst_21, 1) = ((MR_Box) (ArgModes_19));
        MR_hl_field(0, PredInst_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, PredInst_21, 3) = (MR_Box) ((MR_Unsigned) (Detism_20));
      }
      switch (IsAny_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_41 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInst_21)));

            {
              Inst_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Inst_22, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(1, Inst_22, 1) = ((MR_Box) (Var_41));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_43 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInst_21)));

            {
              Inst_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Inst_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Inst_22, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Inst_22, 2) = ((MR_Box) (Var_43));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInst_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_22));
      }
    }
    else
    {
      MR_Word Specs_23;
      MR_Word Var_44;
      MR_Word Var_45;

      Var_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes_17);
      Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_18);
      Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_44, Var_45);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInst_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
      }
    }
  }
  else
  {
    MR_Word RetModeTerm_26;
    MR_Word ArgModesTerms_28;
    MR_Word IsAny_121;
    MR_Word FuncTerm_25;
    MR_String FuncTermFunctor_27;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_String BeforeIsFunctor_105;
    MR_Word BeforeIsArgTerms_106;

    succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 0))));
      BeforeIsArgTerms_106 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
      if (succeeded)
      {
        BeforeIsFunctor_105 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
        succeeded = (strcmp(BeforeIsFunctor_105, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (BeforeIsArgTerms_106 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncTerm_25 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_106, (MR_Integer) 0))));
            Var_47 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_106, (MR_Integer) 1))));
            succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RetModeTerm_26 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
              Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
              succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) FuncTerm_25)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_49 = ((MR_Word) ((MR_hl_field(0, FuncTerm_25, (MR_Integer) 0))));
                  ArgModesTerms_28 = ((MR_Word) ((MR_hl_field(0, FuncTerm_25, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    FuncTermFunctor_27 = ((MR_String) ((MR_hl_field(0, Var_49, (MR_Integer) 0))));
                    if ((strcmp(FuncTermFunctor_27, (MR_String) "func") == 0))
                    {
                      IsAny_121 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(FuncTermFunctor_27, (MR_String) "any_func") == 0))
                    {
                      IsAny_121 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
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
      MR_Word MaybeArgModes0_30;
      MR_Word MaybeRetMode_31;
      MR_Word MaybeDetism_114;
      MR_Word ArgModes0_32;
      MR_Word RetMode_33;
      MR_Word Detism_111;

      parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, ArgModesTerms_28, &MaybeArgModes0_30);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, RetModeTerm_26, &MaybeRetMode_31);
      parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_8, DetTerm_11, &MaybeDetism_114);
      succeeded = ((MR_tag((MR_Word) MaybeArgModes0_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgModes0_32 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_30, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeRetMode_31)) == (MR_Integer) 1);
        if (succeeded)
        {
          RetMode_33 = ((MR_Word) ((MR_hl_field(1, MaybeRetMode_31, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeDetism_114)) == (MR_Integer) 1);
          if (succeeded)
            Detism_111 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_114, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word FuncInst_34;
        MR_Word Var_50;
        MR_Word ArgModes_107;
        MR_Word Inst_108;

        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (RetMode_33));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ArgModes_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_32, Var_50);
        {
          FuncInst_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FuncInst_34, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, FuncInst_34, 1) = ((MR_Box) (ArgModes_107));
          MR_hl_field(0, FuncInst_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, FuncInst_34, 3) = (MR_Box) ((MR_Unsigned) (Detism_111));
        }
        switch (IsAny_121) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_55 = (MR_Word) (MR_mkword(1, (MR_Word) (FuncInst_34)));

              {
                Inst_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Inst_108, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, Inst_108, 1) = ((MR_Box) (Var_55));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_57 = (MR_Word) (MR_mkword(1, (MR_Word) (FuncInst_34)));

              {
                Inst_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_108, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Inst_108, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, Inst_108, 2) = ((MR_Box) (Var_57));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInst_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Inst_108));
        }
      }
      else
      {
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Specs_109;

        Var_58 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes0_30);
        Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode_31);
        Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_114);
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_60, Var_61);
        Specs_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_58, Var_59);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInst_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_109));
        }
      }
    }
    else
    {
      MR_Word Pieces_35;
      MR_Word Spec_36;
      MR_Word Var_62;
      MR_Word Var_102;
      MR_Word Var_103;

      Var_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
      Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[71])));
      Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeIsTerm_10);
      {
        Spec_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_higher_order_inst\'/6"));
        MR_hl_field(1, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_36, 3) = ((MR_Box) (Var_102));
        MR_hl_field(1, Spec_36, 4) = ((MR_Box) (Pieces_35));
      }
      {
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInst_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(
  MR_Word AllowConstrainedInstVar_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word BeforeIsTerm_10,
  MR_Word DetTerm_11,
  MR_Word * MaybeMode_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
  MR_Word BeforeIsArgTerms_14;
  MR_Word IsAny_16;
  MR_String BeforeIsFunctor_13;
  MR_Word Var_39;

  if (succeeded)
  {
    Var_39 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 0))));
    BeforeIsArgTerms_14 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
    if (succeeded)
    {
      BeforeIsFunctor_13 = ((MR_String) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
      if ((strcmp(BeforeIsFunctor_13, (MR_String) "pred") == 0))
      {
        IsAny_16 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(BeforeIsFunctor_13, (MR_String) "any_pred") == 0))
      {
        IsAny_16 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
  {
    MR_Word AllowInstsAsModes_17;

    AllowInstsAsModes_17 = libs__globals__get_allow_ho_insts_as_modes_0_f_0();
    switch (AllowInstsAsModes_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Pieces_18;
          MR_Word Spec_19;
          MR_Word Var_40;
          MR_Word Var_52;
          MR_Word Var_53;

          Var_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
          Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[23])));
          Var_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeIsTerm_10);
          {
            Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_higher_order_mode\'/6"));
            MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Var_52));
            MR_hl_field(1, Spec_19, 4) = ((MR_Box) (Pieces_18));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (Spec_19));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMode_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeArgModes_20;
          MR_Word MaybeDetism_21;
          MR_Word ArgModes_22;
          MR_Word Detism_23;

          parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, BeforeIsArgTerms_14, &MaybeArgModes_20);
          parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_8, DetTerm_11, &MaybeDetism_21);
          succeeded = ((MR_tag((MR_Word) MaybeArgModes_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgModes_22 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_20, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeDetism_21)) == (MR_Integer) 1);
            if (succeeded)
              Detism_23 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_21, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word PredInstInfo_24;
            MR_Word Inst_25;
            MR_Word Mode_26;

            {
              PredInstInfo_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredInstInfo_24, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, PredInstInfo_24, 1) = ((MR_Box) (ArgModes_22));
              MR_hl_field(0, PredInstInfo_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, PredInstInfo_24, 3) = (MR_Box) ((MR_Unsigned) (Detism_23));
            }
            switch (IsAny_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_58 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_24)));

                  {
                    Inst_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Inst_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(1, Inst_25, 1) = ((MR_Box) (Var_58));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_60 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_24)));

                  {
                    Inst_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Inst_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Inst_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(3, Inst_25, 2) = ((MR_Box) (Var_60));
                  }
                }
                break;
            }
            {
              Mode_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Mode_26, 0) = ((MR_Box) (Inst_25));
              MR_hl_field(0, Mode_26, 1) = ((MR_Box) (Inst_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMode_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Mode_26));
            }
          }
          else
          {
            MR_Word Specs_27;
            MR_Word Var_62;
            MR_Word Var_63;

            Var_62 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes_20);
            Var_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_21);
            Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_62, Var_63);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeMode_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
            }
          }
        }
        break;
    }
  }
  else
  {
    MR_Word RetModeTerm_30;
    MR_Word ArgModesTerms_32;
    MR_Word IsAny_179;
    MR_Word FuncTerm_29;
    MR_String FuncTermFunctor_31;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_String BeforeIsFunctor_139;
    MR_Word BeforeIsArgTerms_140;

    succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_64 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 0))));
      BeforeIsArgTerms_140 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
      if (succeeded)
      {
        BeforeIsFunctor_139 = ((MR_String) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
        succeeded = (strcmp(BeforeIsFunctor_139, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (BeforeIsArgTerms_140 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncTerm_29 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_140, (MR_Integer) 0))));
            Var_65 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_140, (MR_Integer) 1))));
            succeeded = (Var_65 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RetModeTerm_30 = ((MR_Word) ((MR_hl_field(1, Var_65, (MR_Integer) 0))));
              Var_66 = ((MR_Word) ((MR_hl_field(1, Var_65, (MR_Integer) 1))));
              succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) FuncTerm_29)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(0, FuncTerm_29, (MR_Integer) 0))));
                  ArgModesTerms_32 = ((MR_Word) ((MR_hl_field(0, FuncTerm_29, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    FuncTermFunctor_31 = ((MR_String) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
                    if ((strcmp(FuncTermFunctor_31, (MR_String) "func") == 0))
                    {
                      IsAny_179 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(FuncTermFunctor_31, (MR_String) "any_func") == 0))
                    {
                      IsAny_179 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
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
      MR_Word AllowInstsAsModes_166;

      AllowInstsAsModes_166 = libs__globals__get_allow_ho_insts_as_modes_0_f_0();
      switch (AllowInstsAsModes_166) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_68;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Pieces_141;
            MR_Word Spec_142;

            Var_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
            Pieces_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[23])));
            Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeIsTerm_10);
            {
              Spec_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_142, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_higher_order_mode\'/6"));
              MR_hl_field(1, Spec_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_142, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_142, 3) = ((MR_Box) (Var_80));
              MR_hl_field(1, Spec_142, 4) = ((MR_Box) (Pieces_141));
            }
            {
              Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_81, 0) = ((MR_Box) (Spec_142));
              MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeMode_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeArgModes0_34;
            MR_Word MaybeRetMode_35;
            MR_Word MaybeDetism_152;
            MR_Word ArgModes0_36;
            MR_Word RetMode_37;
            MR_Word Detism_148;

            parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, ArgModesTerms_32, &MaybeArgModes0_34);
            parse_tree__parse_inst_mode_name__parse_mode_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, RetModeTerm_30, &MaybeRetMode_35);
            parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_8, DetTerm_11, &MaybeDetism_152);
            succeeded = ((MR_tag((MR_Word) MaybeArgModes0_34)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgModes0_36 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_34, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeRetMode_35)) == (MR_Integer) 1);
              if (succeeded)
              {
                RetMode_37 = ((MR_Word) ((MR_hl_field(1, MaybeRetMode_35, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeDetism_152)) == (MR_Integer) 1);
                if (succeeded)
                  Detism_148 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_152, (MR_Integer) 0))));
              }
            }
            if (succeeded)
            {
              MR_Word FuncInstInfo_38;
              MR_Word Var_83;
              MR_Word ArgModes_143;
              MR_Word Inst_144;
              MR_Word Mode_145;

              {
                Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_83, 0) = ((MR_Box) (RetMode_37));
                MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ArgModes_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_36, Var_83);
              {
                FuncInstInfo_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FuncInstInfo_38, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(0, FuncInstInfo_38, 1) = ((MR_Box) (ArgModes_143));
                MR_hl_field(0, FuncInstInfo_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, FuncInstInfo_38, 3) = (MR_Box) ((MR_Unsigned) (Detism_148));
              }
              switch (IsAny_179) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_88 = (MR_Word) (MR_mkword(1, (MR_Word) (FuncInstInfo_38)));

                    {
                      Inst_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Inst_144, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(1, Inst_144, 1) = ((MR_Box) (Var_88));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_90 = (MR_Word) (MR_mkword(1, (MR_Word) (FuncInstInfo_38)));

                    {
                      Inst_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Inst_144, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Inst_144, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, Inst_144, 2) = ((MR_Box) (Var_90));
                    }
                  }
                  break;
              }
              {
                Mode_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Mode_145, 0) = ((MR_Box) (Inst_144));
                MR_hl_field(0, Mode_145, 1) = ((MR_Box) (Inst_144));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMode_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Mode_145));
              }
            }
            else
            {
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Specs_146;

              Var_92 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes0_34);
              Var_94 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode_35);
              Var_95 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_152);
              Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_94, Var_95);
              Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_92, Var_93);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeMode_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_146));
              }
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Var_96;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Pieces_175;
      MR_Word Spec_176;

      Var_96 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
      Pieces_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[43])));
      Var_136 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeIsTerm_10);
      {
        Spec_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_176, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_higher_order_mode\'/6"));
        MR_hl_field(1, Spec_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_176, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_176, 3) = ((MR_Box) (Var_136));
        MR_hl_field(1, Spec_176, 4) = ((MR_Box) (Pieces_175));
      }
      {
        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_137, 0) = ((MR_Box) (Spec_176));
        MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMode_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_137));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_insts_5_p_0(
  MR_Word AllowConstrainedInstVar_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_2[1]));
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MaybeHeadInst_16;
    MR_Word MaybeTailInsts_17;
    MR_Word HeadInst_18;
    MR_Word TailInsts_19;

    parse_tree__parse_inst_mode_name__parse_inst_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Term_13, &MaybeHeadInst_16);
    parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Terms_14, &MaybeTailInsts_17);
    succeeded = ((MR_tag((MR_Word) MaybeHeadInst_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadInst_18 = ((MR_Word) ((MR_hl_field(1, MaybeHeadInst_16, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTailInsts_17)) == (MR_Integer) 1);
      if (succeeded)
        TailInsts_19 = ((MR_Word) ((MR_hl_field(1, MaybeTailInsts_17, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (HeadInst_18));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (TailInsts_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      }
    }
    else
    {
      MR_Word Specs_20;
      MR_Word Var_22;
      MR_Word Var_23;

      Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeHeadInst_16);
      Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[1]), MaybeTailInsts_17);
      Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_22, Var_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_20));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_modes_5_p_0(
  MR_Word AllowConstrainedInstVar_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_2[0]));
  else
  {
    MR_Word Term_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MaybeHeadMode_16;
    MR_Word MaybeTailModes_17;
    MR_Word HeadMode_18;
    MR_Word TailModes_19;

    parse_tree__parse_inst_mode_name__parse_mode_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Term_13, &MaybeHeadMode_16);
    parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Terms_14, &MaybeTailModes_17);
    succeeded = ((MR_tag((MR_Word) MaybeHeadMode_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadMode_18 = ((MR_Word) ((MR_hl_field(1, MaybeHeadMode_16, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTailModes_17)) == (MR_Integer) 1);
      if (succeeded)
        TailModes_19 = ((MR_Word) ((MR_hl_field(1, MaybeTailModes_17, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (HeadMode_18));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (TailModes_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      }
    }
    else
    {
      MR_Word Specs_20;
      MR_Word Var_22;
      MR_Word Var_23;

      Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeHeadMode_16);
      Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeTailModes_17);
      Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_22, Var_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_20));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String Name_4,
  MR_Word Args_5,
  MR_Word * KnownInst_6)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(Name_4, 0)) {
      case (MR_Integer) 61:
        if (MR_offset_streq(1, Name_4, (MR_String) "=<"))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 97:
        if (MR_offset_streq(1, Name_4, (MR_String) "any"))
          case_num_0 = (MR_Integer) 1;
        break;
      case (MR_Integer) 98:
        if (((((((((MR_nth_code_unit(Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_4, 4)) == (MR_Integer) 100))))
          switch (MR_nth_code_unit(Name_4, 5)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 95:
              if (MR_offset_streq(6, Name_4, (MR_String) "bound_unique"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
        break;
      case (MR_Integer) 99:
        if (((((((((((((((((MR_nth_code_unit(Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_4, 8)) == (MR_Integer) 100))))
          switch (MR_nth_code_unit(Name_4, 9)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 95:
              if (MR_offset_streq(10, Name_4, (MR_String) "clobbered_any"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
        break;
      case (MR_Integer) 102:
        if (MR_offset_streq(1, Name_4, (MR_String) "free"))
          case_num_0 = (MR_Integer) 6;
        break;
      case (MR_Integer) 103:
        if (MR_offset_streq(1, Name_4, (MR_String) "ground"))
          case_num_0 = (MR_Integer) 7;
        break;
      case (MR_Integer) 105:
        if (MR_offset_streq(1, Name_4, (MR_String) "is"))
          case_num_0 = (MR_Integer) 8;
        break;
      case (MR_Integer) 109:
        if (((((((((((((MR_nth_code_unit(Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(Name_4, 6)) == (MR_Integer) 95))))
          switch (MR_nth_code_unit(Name_4, 7)) {
            case (MR_Integer) 99:
              if (((((((((((((((((MR_nth_code_unit(Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_4, 15)) == (MR_Integer) 100))))
                switch (MR_nth_code_unit(Name_4, 16)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(17, Name_4, (MR_String) "mostly_clobbered_any"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                }
              break;
            case (MR_Integer) 117:
              if (((((((((((MR_nth_code_unit(Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_4, 12)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(Name_4, 13)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(14, Name_4, (MR_String) "mostly_unique_any"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
        break;
      case (MR_Integer) 110:
        if (MR_offset_streq(1, Name_4, (MR_String) "not_reached"))
          case_num_0 = (MR_Integer) 13;
        break;
      case (MR_Integer) 117:
        if (((((((((((MR_nth_code_unit(Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_4, 5)) == (MR_Integer) 101))))
          switch (MR_nth_code_unit(Name_4, 6)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 95:
              if (MR_offset_streq(7, Name_4, (MR_String) "unique_any"))
                case_num_0 = (MR_Integer) 15;
              break;
          }
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "=<"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[4]));
          else
          {
            MR_Word Var_222 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
            MR_Box Var_223 = (MR_hl_field(1, Args_5, (MR_Integer) 0));

            if ((Var_222 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[4]));
            else
            {
              MR_Word Var_234 = ((MR_Word) ((MR_hl_field(1, Var_222, (MR_Integer) 1))));
              MR_Box Var_235 = (MR_hl_field(1, Var_222, (MR_Integer) 0));

              if ((Var_234 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_78;

                {
                  Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_78, 0) = Var_223;
                  MR_hl_field(1, Var_78, 1) = Var_235;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownInst_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
                }
              }
              else
                *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[4]));
            }
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          // case "any"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[5]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          // case "bound"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[7]));
          else
          {
            MR_Word Var_224 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
            MR_Box Var_225 = (MR_hl_field(1, Args_5, (MR_Integer) 0));

            if ((Var_224 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_82;

              {
                Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_82, 0) = Var_225;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownInst_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_82));
              }
            }
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[7]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          // case "bound_unique"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[7]));
          else
          {
            MR_Word Var_226 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
            MR_Box Var_227 = (MR_hl_field(1, Args_5, (MR_Integer) 0));

            if ((Var_226 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_86, 1) = Var_227;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownInst_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_86));
              }
            }
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[7]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
        {
          // case "clobbered"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[8]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 5:
        {
          // case "clobbered_any"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[9]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          // case "free"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[10]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case "ground"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[11]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case "is"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[4]));
          else
          {
            MR_Word Var_228 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
            MR_Box Var_229 = (MR_hl_field(1, Args_5, (MR_Integer) 0));

            if ((Var_228 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[4]));
            else
            {
              MR_Word Var_236 = ((MR_Word) ((MR_hl_field(1, Var_228, (MR_Integer) 1))));
              MR_Box Var_237 = (MR_hl_field(1, Var_228, (MR_Integer) 0));

              if ((Var_236 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_71;

                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_71, 0) = Var_229;
                  MR_hl_field(0, Var_71, 1) = Var_237;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownInst_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_71));
                }
              }
              else
                *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[4]));
            }
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          // case "mostly_clobbered"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[12]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 10:
        {
          // case "mostly_clobbered_any"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[13]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 11:
        {
          // case "mostly_unique"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[14]);
          else
          {
            MR_Word Var_230 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
            MR_Box Var_231 = (MR_hl_field(1, Args_5, (MR_Integer) 0));

            if ((Var_230 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_62;

              {
                Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_62, 1) = Var_231;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownInst_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_62));
              }
            }
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[15]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 12:
        {
          // case "mostly_unique_any"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[16]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 13:
        {
          // case "not_reached"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[17]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 14:
        {
          // case "unique"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[18]);
          else
          {
            MR_Word Var_232 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
            MR_Box Var_233 = (MR_hl_field(1, Args_5, (MR_Integer) 0));

            if ((Var_232 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_55;

              {
                Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_55, 1) = Var_233;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownInst_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
              }
            }
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[15]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 15:
        {
          // case "unique_any"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_2[19]);
          else
            *KnownInst_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_inst_mode_name_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Cur_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Next_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word DuplicatesTail_9;
    MR_Word PrevConsId_10;
    MR_Word CurConsId_12;

    parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(Cur_6, Next_7, &DuplicatesTail_9);
    PrevConsId_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    CurConsId_12 = ((MR_Word) ((MR_hl_field(0, Cur_6, (MR_Integer) 0))));
    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(PrevConsId_10, CurConsId_12);
    if (succeeded)
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 26U));
        MR_hl_field(3, Var_14, 1) = ((MR_Box) (CurConsId_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (DuplicatesTail_9));
      }
    }
    else
      *HeadVar__3_3 = DuplicatesTail_9;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDetism_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word Detism_9;
  MR_String DetString_7;
  MR_Word Var_13;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        DetString_7 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
        succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetString_7, &Detism_9);
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDetism_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Detism_9));
    }
  else
  {
    MR_String TermStr_10;
    MR_Word DetismPieces_11;
    MR_Word DetismSpec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_28;
    MR_Word Var_29;

    TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_18, 1) = ((MR_Box) (TermStr_10));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[20])));
    }
    {
      DetismPieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DetismPieces_11, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[5])));
      MR_hl_field(1, DetismPieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      DetismSpec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DetismSpec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_name.parse_determinism\'/3"));
      MR_hl_field(1, DetismSpec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, DetismSpec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, DetismSpec_12, 3) = ((MR_Box) (Var_28));
      MR_hl_field(1, DetismSpec_12, 4) = ((MR_Box) (DetismPieces_11));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (DetismSpec_12));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDetism_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__standard_det_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 31);
  MR_String str_1;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // hash chain loop
  ;
  do
  {
    // lookup the string for this hash slot
    ;
    str_1 = ((&parse_tree__parse_inst_mode_name_vector_common_5[0 + slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_5_0__vct_5_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
    {
      // we found a match; look up the results
      ;
      *HeadVar__2_2 = ((&parse_tree__parse_inst_mode_name_vector_common_5[0 + slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_5_0__vct_5_f_2;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    {
      // no match yet, so get next slot in hash chain
      ;
      slot_0 = ((&parse_tree__parse_inst_mode_name_vector_common_5[0 + slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_5_0__vct_5_f_1;
    }
  }
  while ((slot_0 >= (MR_Integer) 0));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word Why_7,
  MR_Word VarSet_8,
  MR_Word Term_9)
{
  MR_Word MaybeInst_10;
  MR_String TermStr_11;
  MR_String Place_12;
  MR_Word Pieces_13;
  MR_Word Spec_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_42;
  MR_Word Var_43;

  TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
  Place_12 = ((&parse_tree__parse_inst_mode_name_vector_common_4[0 + Why_7]))->parse_tree__parse_inst_mode_name__vector_common_type_4_0__vct_4_f_0;
  Var_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (TermStr_11));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (Place_12));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_name_scalar_common_1[25])));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[50])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_name_scalar_common_1[49])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
  }
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_18);
  Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
  {
    Spec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_inst_mode_name.no_allow_constrained_inst_var_result\'/4"));
    MR_hl_field(1, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, Spec_14, 3) = ((MR_Box) (Var_42));
    MR_hl_field(1, Spec_14, 4) = ((MR_Box) (Pieces_13));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeInst_10, 0) = ((MR_Box) (Var_43));
  }
  return MaybeInst_10;
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_inst_mode_name__init(void)
{
}

void mercury__parse_tree__parse_inst_mode_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_allow_constrained_inst_var_0);
	MR_register_type_ctor_info(&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_compound_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_why_no_constrained_inst_var_0);
}

void mercury__parse_tree__parse_inst_mode_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_inst_mode_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_inst_mode_name.
