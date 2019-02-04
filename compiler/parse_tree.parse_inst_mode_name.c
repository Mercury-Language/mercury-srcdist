/*
** Automatically generated from `parse_inst_mode_name.m'
** by the Mercury compiler,
** version rotd-2018-08-02
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1[1];

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

static const MR_EnumFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_value_ordered_why_no_constrained_inst_var_0[7];

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


static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_1[79][2];

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_4[21][1];

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_5[5][3];


/* sealed */ struct parse_tree__parse_inst_mode_name__vector_common_type_2_0_s {
  const MR_String parse_tree__parse_inst_mode_name__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_2_0_s parse_tree__parse_inst_mode_name_vector_common_2[7];

/* sealed */ struct parse_tree__parse_inst_mode_name__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_1;
  const MR_Word parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_2;
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_3_0_s parse_tree__parse_inst_mode_name_vector_common_3[32];



static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_1[79][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be a valid mode."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid mode."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid inst."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid determinism."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "any_func(<mode1>, ...) = <return_mode> is <detism>"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<mode1>, ...) = <return_mode> is <detism>"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "any_pred(<mode1>, ...) is <detism>"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<mode1>, ...) is <detism>"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "one of the following forms:"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a higher-order mode should have"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "any_func(<inst1>, ...) = <return_inst> is <detism>"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[16])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<inst1>, ...) = <return_inst> is <detism>"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "any_pred(<inst1>, ...) is <detism>"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<inst1>, ...) is <detism>"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a higher-order insts should have"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not have any arguments."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not be a used as a bound inst."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a bound inst."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[5])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a constrained inst variable"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not appear"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this bound inst lists"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an implementation defined literal"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a floating point number"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an implementation defined literal"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an integer"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a string"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a variable such as"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the builtin inst"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should only be used with arity"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst constraints can be applied"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only to inst variables,"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not to terms such as"))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_4[21][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "two"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[62])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "zero"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "one"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[63])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[2])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[64])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[3])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "zero or one"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[65])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[66])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_5[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_2_0_s parse_tree__parse_inst_mode_name_vector_common_2[7] = {
  /* row 0 */   {     (MR_String) "on the right hand side of an inst constraint" },
  /* row 1 */   {     (MR_String) "on the left hand side of the definition of a named inst" },
  /* row 2 */   {     (MR_String) "on the right hand side of the definition of a named inst equivalence" },
  /* row 3 */   {     (MR_String) "on the right hand side of the definition of a named mode" },
  /* row 4 */   {     (MR_String) "in a mode annotation on a type" },
  /* row 5 */   {     (MR_String) "as the ground or any inst of a solver type definition" },
  /* row 6 */   {     (MR_String) "as the inst of a mutable" },
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_3_0_s parse_tree__parse_inst_mode_name_vector_common_3[32] = {
  /* row 0 */
  {
    (MR_String) "semidet",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "erroneous",
    (MR_Integer) -1,
    (MR_Integer) 6
  },
  /* row 2 */
  {
    (MR_String) "multi",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    (MR_String) "failure",
    (MR_Integer) -1,
    (MR_Integer) 7
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    (MR_String) "cc_nondet",
    (MR_Integer) 2,
    (MR_Integer) 5
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    (MR_String) "multidet",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 22 */
  {
    (MR_String) "det",
    (MR_Integer) -1,
    (MR_Integer) 0
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    (MR_String) "nondet",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    (MR_String) "cc_multi",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_why_no_constrained_inst_var_0)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_0[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_1[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1
};

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_allow_constrained_inst_var_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "allow_constrained_inst_var",
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_allow_constrained_inst_var_0 },
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_allow_constrained_inst_var_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_allow_constrained_inst_var_0
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0 = {
  (MR_String) "kcik_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2 = {
  (MR_String) "kcik_bound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3 = {
  (MR_String) "kcik_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4 = {
  (MR_String) "kcik_mostly_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4
};

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "known_compound_inst_kind",
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_compound_inst_kind_1 },
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_compound_inst_kind_1
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0 = {
  (MR_String) "known_inst_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1 = {
  (MR_String) "known_inst_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2 = {
  (MR_String) "known_inst_bad_arity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2
};

static const MR_DuPtagLayout parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_inst_kind_1[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_2,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "known_inst_kind",
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_name_ordered_known_inst_kind_1 },
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_ptag_ordered_known_inst_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_known_inst_kind_1
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_0 = {
  (MR_String) "wnciv_constraint_rhs",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_1 = {
  (MR_String) "wnciv_inst_defn_lhs",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_2 = {
  (MR_String) "wnciv_eqv_inst_defn_rhs",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_3 = {
  (MR_String) "wnciv_mode_defn_rhs",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_4 = {
  (MR_String) "wnciv_type_and_mode",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_5 = {
  (MR_String) "wnciv_solver_type_inst",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_functor_desc_why_no_constrained_inst_var_0_6 = {
  (MR_String) "wnciv_mutable_inst",
  (MR_Integer) 6
};

static const MR_EnumFunctorDescPtr parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_value_ordered_why_no_constrained_inst_var_0[7] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_name",
  (MR_String) "why_no_constrained_inst_var",
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_name_ordered_why_no_constrained_inst_var_0 },
  {     parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__enum_value_ordered_why_no_constrained_inst_var_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__functor_number_map_why_no_constrained_inst_var_0
};

void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

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
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
            MR_String Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_29, ArgY1_21);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word TypeInfo_for_T_78,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Box Var_82 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_83 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_7 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word Var_8;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, &Var_8, Var_83, ArgY1_5);
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_82, ArgY2_7);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Box Var_80 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_81 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_27 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_29 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word Var_30;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, &Var_30, Var_81, ArgY1_27);
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_80, ArgY2_29);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Box Var_79 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_47 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_78, HeadVar__1_1, Var_79, ArgY1_47);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box Var_85 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box ArgY1_61 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));

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
                MR_Box Var_84 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box ArgY1_75 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));

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
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;
            MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_8;
            MR_Box ArgX2_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_7, ArgY1_8);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_11 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_11, ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgX1_13 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_13, ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgX1_15 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_15, ArgY1_16);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer Var_12 = (MR_Integer) (Var_11);
        MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_12, Var_13);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__is_known_inst_name_1_p_0(
  MR_String Name_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;

    succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_2, (MR_Word) ((MR_Unsigned) 0U), &Var_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(
  MR_String HeadVar__1_1)
{
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
    MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
    MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Functor_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));

          parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, Name_27, ArgTerms_15, Context_16, MaybeInst_10);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_String TermStr_24;
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_50;

          TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (TermStr_24));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
          }
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_29);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_25));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_44));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInst_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String TermStr_24;
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_50;

          TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (TermStr_24));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
          }
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_29);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_25));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_44));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInst_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_9, (MR_Integer) 0))));
    MR_Word InstVar_13;
    MR_Word Var_52;

    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), Var_11, &InstVar_13);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (InstVar_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInst_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
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
  {
    MR_bool succeeded;
    MR_Word KnownInstKind_15;

    succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_11, ArgTerms0_12, &KnownInstKind_15);
    if (succeeded)
      switch (MR_tag((MR_Word) KnownInstKind_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Inst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownInstKind_15, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInst_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_19));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompoundInstKind_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KnownInstKind_15, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) CompoundInstKind_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word BeforeIsTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompoundInstKind_20, (MR_Integer) 0))));
                  MR_Word DetTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompoundInstKind_20, (MR_Integer) 1))));

                  parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, BeforeIsTerm_21, DetTerm_22, MaybeInst_14);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word VarTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompoundInstKind_20, (MR_Integer) 0))));
                  MR_Word SubInstTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompoundInstKind_20, (MR_Integer) 1))));

                  if (((MR_tag((MR_Word) VarTerm_24)) == (MR_Integer) 0))
                  {
                    MR_String VarTermStr_36;
                    MR_Word Var_47;
                    MR_Word Var_48;
                    MR_Word Var_50;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_76;
                    MR_Word Pieces_127;
                    MR_Word Spec_128;

                    VarTermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, VarTerm_24);
                    Var_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (VarTermStr_36));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[78])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[77])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[76])));
                      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
                    }
                    {
                      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
                    }
                    Pieces_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_47, Var_48);
                    Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarTerm_24);
                    {
                      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_127));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
                      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_72));
                    }
                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_128, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_128, 2) = ((MR_Box) (Var_69));
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Spec_128));
                      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeInst_14 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
                    }
                  }
                  else
                  {
                    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarTerm_24, (MR_Integer) 0))));
                    MR_Word MaybeSubInst_28;

                    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_4[19])), VarSet_9, ContextPieces_10, SubInstTerm_25, &MaybeSubInst_28);
                    if (((MR_tag((MR_Word) MaybeSubInst_28)) == (MR_Integer) 0))
                      *MaybeInst_14 = MaybeSubInst_28;
                    else
                    {
                      MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubInst_28, (MR_Integer) 0))));

                      if ((AllowConstrainedInstVar_8 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Var_81;
                        MR_Word Var_82;
                        MR_Word Inst_122;

                        Var_82 = mercury__term__coerce_var_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), Var_26);
                        Var_81 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[3]), ((MR_Box) (Var_82)));
                        {
                          Inst_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Inst_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), Inst_122, 1) = ((MR_Box) (Var_81));
                          MR_hl_field(MR_mktag(3), Inst_122, 2) = ((MR_Box) (SubInst_29));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeInst_14 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_122));
                        }
                      }
                      else
                      {
                        MR_Word Why_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllowConstrainedInstVar_8, (MR_Integer) 0))));
                        MR_Word BadTerm_31;
                        MR_Word Var_80;

                        {
                          Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Name_11));
                        }
                        {
                          BadTerm_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), BadTerm_31, 0) = ((MR_Box) (Var_80));
                          MR_hl_field(MR_mktag(0), BadTerm_31, 1) = ((MR_Box) (ArgTerms0_12));
                          MR_hl_field(MR_mktag(0), BadTerm_31, 2) = ((MR_Box) (Context_13));
                        }
                        *MaybeInst_14 = parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(ContextPieces_10, Why_30, VarSet_9, BadTerm_31);
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word DisjTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompoundInstKind_20, (MR_Integer) 0))));

                  parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, DisjTerm_23, (MR_Integer) 0, MaybeInst_14);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CompoundInstKind_20, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word DisjTerm_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompoundInstKind_20, (MR_Integer) 1))));

                      parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, DisjTerm_120, (MR_Integer) 1, MaybeInst_14);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DisjTerm_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompoundInstKind_20, (MR_Integer) 1))));

                      parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, DisjTerm_121, (MR_Integer) 2, MaybeInst_14);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ExpectedArityStr_16 = ((MR_String) ((MR_hl_field(MR_mktag(2), KnownInstKind_15, (MR_Integer) 0))));
            MR_Word Pieces_17;
            MR_Word Spec_18;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_89;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_113;

            Var_86 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Name_11));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (ExpectedArityStr_16));
            }
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[75])));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[74])));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
            }
            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
            }
            Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_86, Var_87);
            {
              Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (Pieces_17));
            }
            {
              Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Context_13));
              MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_109));
            }
            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_107));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Spec_18));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeInst_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_113));
            }
          }
          break;
      }
    else
    {
      MR_Word UserDefnInstTerm_37;
      MR_Word MaybeFunctor_38;
      MR_Word Var_115;

      {
        Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (Name_11));
      }
      {
        UserDefnInstTerm_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UserDefnInstTerm_37, 0) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), UserDefnInstTerm_37, 1) = ((MR_Box) (ArgTerms0_12));
        MR_hl_field(MR_mktag(0), UserDefnInstTerm_37, 2) = ((MR_Box) (Context_13));
      }
      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, ContextPieces_10, UserDefnInstTerm_37, &MaybeFunctor_38);
      if (((MR_tag((MR_Word) MaybeFunctor_38)) == (MR_Integer) 0))
      {
        MR_Word Specs_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctor_38, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInst_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_154));
        }
      }
      else
      {
        MR_Word QualifiedName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_38, (MR_Integer) 0))));
        MR_Word ArgTerms1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_38, (MR_Integer) 1))));
        MR_Word Inst_149;
        MR_Word BuiltinModule_41;
        MR_String UnqualifiedName_42;
        MR_Word KnownInstKind_141;
        MR_Word Var_170;
        MR_Word Var_118;

        BuiltinModule_41 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(QualifiedName_39, (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[20]), &Var_170);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(BuiltinModule_41, Var_170);
        if (succeeded)
        {
          UnqualifiedName_42 = mdbcomp__sym_name__unqualify_name_1_f_0(QualifiedName_39);
          succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(UnqualifiedName_42, ArgTerms1_40, &KnownInstKind_141);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) KnownInstKind_141)) == (MR_Integer) 0);
            if (succeeded)
            {
              Inst_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownInstKind_141, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Inst_149)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_149, (MR_Integer) 0))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_149, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_118)) == (MR_Integer) 0);
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInst_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_149));
          }
        else
        {
          MR_Word MaybeArgInsts_45;

          parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_8, VarSet_9, ContextPieces_10, ArgTerms1_40, &MaybeArgInsts_45);
          if (((MR_tag((MR_Word) MaybeArgInsts_45)) == (MR_Integer) 0))
            *MaybeInst_14 = (MR_Word) (MaybeArgInsts_45);
          else
          {
            MR_Word ArgInsts_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInsts_45, (MR_Integer) 0))));
            MR_Word Var_119;
            MR_Word Inst_142;

            {
              Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (QualifiedName_39));
              MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (ArgInsts_46));
            }
            {
              Inst_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Inst_142, 1) = ((MR_Box) (Var_119));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInst_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_142));
            }
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
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
    {
      MR_Word TermFunctor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      MR_Word ArgTerms0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      MR_Word Context_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) TermFunctor_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String FunctorName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), TermFunctor_16, (MR_Integer) 0))));
            MR_Word InstTermA_27;
            MR_Word InstTermB_28;
            MR_Word Var_41;
            MR_Word Var_42;

            succeeded = (strcmp(FunctorName_26, (MR_String) ">>") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ArgTerms0_17)) == (MR_Integer) 1);
              if (succeeded)
              {
                InstTermA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_17, (MR_Integer) 0))));
                Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_17, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
                if (succeeded)
                {
                  InstTermB_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
                  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                  succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
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
                InstA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstA_29, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeInstB_30)) == (MR_Integer) 1);
                if (succeeded)
                  InstB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstB_30, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_43;

                {
                  Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (InstA_31));
                  MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (InstB_32));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeMode_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
                }
              }
              else
              {
                MR_Word Specs_33;
                MR_Word Var_44;
                MR_Word Var_45;

                Var_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInstA_29);
                Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInstB_30);
                Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_44, Var_45);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeMode_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
                }
              }
            }
            else
            {
              MR_Word BeforeIsTerm_34;
              MR_Word DetTerm_35;
              MR_Word Var_46;
              MR_Word Var_47;

              succeeded = (strcmp(FunctorName_26, (MR_String) "is") == 0);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ArgTerms0_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  BeforeIsTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_17, (MR_Integer) 0))));
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_17, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    DetTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
                    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
                    succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
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
                  MR_Word Specs_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctor_36, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeMode_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_108));
                  }
                }
                else
                {
                  MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_36, (MR_Integer) 0))));
                  MR_Word ArgTerms_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_36, (MR_Integer) 1))));
                  MR_Word MaybeArgInsts_39;

                  parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, ArgTerms_38, &MaybeArgInsts_39);
                  if (((MR_tag((MR_Word) MaybeArgInsts_39)) == (MR_Integer) 0))
                    *MaybeMode_10 = (MR_Word) (MaybeArgInsts_39);
                  else
                  {
                    MR_Word ArgInsts_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInsts_39, (MR_Integer) 0))));
                    MR_Word Var_48;

                    {
                      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (SymName_37));
                      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (ArgInsts_40));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeMode_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_48));
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_160;
            MR_Word Var_163;
            MR_Word Var_165;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Word Var_173;
            MR_Word Var_174;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_179;
            MR_String TermStr_181;
            MR_Word Pieces_182;
            MR_Word Spec_183;

            TermStr_181 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
            Var_157 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
            {
              Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (TermStr_181));
            }
            {
              Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
              MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
            }
            {
              Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_168));
            }
            {
              Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[71])));
              MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_165));
            }
            {
              Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
              MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_163));
            }
            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_160));
            }
            Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_157, Var_158);
            {
              Var_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (Pieces_182));
            }
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (Context_115));
              MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (Var_175));
            }
            {
              Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Var_174));
              MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_183, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_183, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_183, 2) = ((MR_Box) (Var_173));
            }
            {
              Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Spec_183));
              MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeMode_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_179));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Word Var_190;
            MR_Word Var_193;
            MR_Word Var_195;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_203;
            MR_Word Var_204;
            MR_Word Var_205;
            MR_Word Var_206;
            MR_Word Var_209;
            MR_String TermStr_211;
            MR_Word Pieces_212;
            MR_Word Spec_213;

            TermStr_211 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
            Var_187 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
            {
              Var_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_199, 1) = ((MR_Box) (TermStr_211));
            }
            {
              Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Var_199));
              MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
            }
            {
              Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_198));
            }
            {
              Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[72])));
              MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_195));
            }
            {
              Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
              MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_193));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_190));
            }
            Pieces_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_187, Var_188);
            {
              Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (Pieces_212));
            }
            {
              Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Var_206));
              MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_204, 0) = ((MR_Box) (Context_115));
              MR_hl_field(MR_mktag(0), Var_204, 1) = ((MR_Box) (Var_205));
            }
            {
              Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Var_204));
              MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_213, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_213, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_213, 2) = ((MR_Box) (Var_203));
            }
            {
              Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Spec_213));
              MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeMode_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_209));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TermFunctor_16, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_52;
                MR_Word Var_55;
                MR_Word Var_57;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_76;
                MR_String TermStr_102;
                MR_Word Pieces_103;
                MR_Word Spec_104;

                TermStr_102 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
                Var_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
                {
                  Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (TermStr_102));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                  MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[69])));
                  MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
                }
                {
                  Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
                  MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
                }
                Pieces_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, Var_50);
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_103));
                }
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Context_115));
                  MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Var_72));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                  MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_104, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_104, 2) = ((MR_Box) (Var_70));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Spec_104));
                  MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeMode_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_127;
                MR_Word Var_128;
                MR_Word Var_130;
                MR_Word Var_133;
                MR_Word Var_135;
                MR_Word Var_138;
                MR_Word Var_139;
                MR_Word Var_143;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_146;
                MR_Word Var_149;
                MR_String TermStr_151;
                MR_Word Pieces_152;
                MR_Word Spec_153;

                TermStr_151 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
                Var_127 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
                {
                  Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (TermStr_151));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                  MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
                }
                {
                  Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[70])));
                  MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
                }
                {
                  Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
                  MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
                }
                {
                  Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
                }
                Pieces_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_127, Var_128);
                {
                  Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (Pieces_152));
                }
                {
                  Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (Context_115));
                  MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (Var_145));
                }
                {
                  Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
                  MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_153, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_153, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_153, 2) = ((MR_Box) (Var_143));
                }
                {
                  Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Spec_153));
                  MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeMode_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_149));
                }
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_9, (MR_Integer) 1))));
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_100;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
      Var_78 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[9])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[73])));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
      }
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_78, Var_79);
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Pieces_14));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Var_96));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_94));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMode_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
      }
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
    MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
    MR_Word ArgTerms0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
    MR_Word Context_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Functor_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeFunctor_19;
          MR_Word Var_102;

          Var_102 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_102, Term_9, &MaybeFunctor_19);
          if (((MR_tag((MR_Word) MaybeFunctor_19)) == (MR_Integer) 0))
          {
            MR_Word Specs_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctor_19, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeBoundInst_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_129));
            }
          }
          else
          {
            MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_19, (MR_Integer) 0))));
            MR_Word ArgTerms1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_19, (MR_Integer) 1))));
            MR_Word MaybeArgInsts_22;

            parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_6, VarSet_7, ContextPieces_8, ArgTerms1_21, &MaybeArgInsts_22);
            if (((MR_tag((MR_Word) MaybeArgInsts_22)) == (MR_Integer) 0))
              *MaybeBoundInst_10 = (MR_Word) (MaybeArgInsts_22);
            else
            {
              MR_Word ArgInsts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInsts_22, (MR_Integer) 0))));
              MR_Integer Arity_24;
              MR_Word ConsId_25;
              MR_Word Var_103;
              MR_Word Var_104;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[2]), ArgTerms1_21, &Arity_24);
              Var_103 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
              {
                ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (SymName_20));
                MR_hl_field(MR_mktag(3), ConsId_25, 2) = ((MR_Box) (Arity_24));
                MR_hl_field(MR_mktag(3), ConsId_25, 3) = ((MR_Box) (Var_103));
              }
              {
                Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (ConsId_25));
                MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (ArgInsts_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundInst_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_104));
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        if ((ArgTerms0_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word BoundInst_34;
          MR_Word ConsId_133;

          parse_tree__prog_util__det_make_functor_cons_id_3_p_0(Functor_16, (MR_Integer) 0, &ConsId_133);
          {
            BoundInst_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BoundInst_34, 0) = ((MR_Box) (ConsId_133));
            MR_hl_field(MR_mktag(0), BoundInst_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeBoundInst_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_34));
          }
        }
        else
        {
          MR_String FunctorStr_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_String TermStr_134;
          MR_Word Pieces_135;
          MR_Word Spec_136;

          switch (MR_tag((MR_Word) Functor_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              FunctorStr_41 = (MR_String) "an integer";
              break;
            case (MR_Integer) 2:
              FunctorStr_41 = (MR_String) "a string";
              break;
            case (MR_Integer) 3:
              FunctorStr_41 = (MR_String) "a float";
              break;
          }
          TermStr_134 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (FunctorStr_41));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (TermStr_134));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[53])));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
          }
          Pieces_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_44, Var_45);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_135));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Context_151));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_136, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_136, 2) = ((MR_Box) (Var_65));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_136));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeBoundInst_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Functor_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((ArgTerms0_17 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word BoundInst_34;
              MR_Word ConsId_133;

              parse_tree__prog_util__det_make_functor_cons_id_3_p_0(Functor_16, (MR_Integer) 0, &ConsId_133);
              {
                BoundInst_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BoundInst_34, 0) = ((MR_Box) (ConsId_133));
                MR_hl_field(MR_mktag(0), BoundInst_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundInst_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_34));
              }
            }
            else
            {
              MR_String FunctorStr_41;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_47;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_71;
              MR_String TermStr_134;
              MR_Word Pieces_135;
              MR_Word Spec_136;

              switch (MR_tag((MR_Word) Functor_16)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  FunctorStr_41 = (MR_String) "an integer";
                  break;
                case (MR_Integer) 2:
                  FunctorStr_41 = (MR_String) "a string";
                  break;
                case (MR_Integer) 3:
                  FunctorStr_41 = (MR_String) "a float";
                  break;
              }
              TermStr_134 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
              Var_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (FunctorStr_41));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (TermStr_134));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[53])));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
              }
              Pieces_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_44, Var_45);
              {
                Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_135));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Context_151));
                MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_136, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_136, 2) = ((MR_Box) (Var_65));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_136));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeBoundInst_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_78;
              MR_Word Var_81;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_100;
              MR_String TermStr_130;
              MR_Word Pieces_131;
              MR_Word Spec_132;

              TermStr_130 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
              Var_75 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (TermStr_130));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[55])));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[68])));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
              }
              Pieces_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_75, Var_76);
              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Pieces_131));
              }
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Context_151));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Var_96));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_132, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_132, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_132, 2) = ((MR_Box) (Var_94));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Spec_132));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeBoundInst_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
              }
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_9, (MR_Integer) 1))));
    MR_String TermStr_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_127;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
    Var_105 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[57])));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_108));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_105, Var_106);
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_14));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_121));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeBoundInst_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
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
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_4[18]));
    else
    {
      MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeHeadBoundInst_16;
      MR_Word MaybeTailBoundInsts_17;
      MR_Word HeadBoundInst_18;
      MR_Word TailBoundInsts_19;

      parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Term_13, &MaybeHeadBoundInst_16);
      parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Terms_14, &MaybeTailBoundInsts_17);
      succeeded = ((MR_tag((MR_Word) MaybeHeadBoundInst_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadBoundInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadBoundInst_16, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailBoundInsts_17)) == (MR_Integer) 1);
        if (succeeded)
          TailBoundInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailBoundInsts_17, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (HeadBoundInst_18));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (TailBoundInsts_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
        }
      }
      else
      {
        MR_Word Specs_20;
        MR_Word Var_22;
        MR_Word Var_23;

        Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), MaybeHeadBoundInst_16);
        Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[4]), MaybeTailBoundInsts_17);
        Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_22, Var_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_20));
        }
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
      MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBoundInsts_14, (MR_Integer) 0))));
      MR_Word SortedBoundInsts_17;
      MR_Word Duplicates_21;
      MR_Word TypeCtorInfo_56_56;
      MR_Word FirstBoundInst_18;
      MR_Word LaterBoundInsts_19;
      MR_Word Duplicates0_20;

      mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts_16, &SortedBoundInsts_17);
      succeeded = ((MR_tag((MR_Word) SortedBoundInsts_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        FirstBoundInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedBoundInsts_17, (MR_Integer) 0))));
        LaterBoundInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedBoundInsts_17, (MR_Integer) 1))));
        parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(FirstBoundInst_18, LaterBoundInsts_19, &Duplicates0_20);
        TypeCtorInfo_56_56 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_56_56, Duplicates0_20, &Duplicates_21);
        succeeded = ((MR_tag((MR_Word) Duplicates_21)) == (MR_Integer) 1);
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
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_51;

        Var_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9);
        Var_34 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Duplicates_21);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[67])));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
        }
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[51])));
        Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_27, Var_28);
        Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DisjunctionTerm_10);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Pieces_24));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_44));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInst_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
        }
      }
      else
      {
        MR_Word Inst_26;

        {
          Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Inst_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Inst_26, 1) = ((MR_Box) (Uniqueness_11));
          MR_hl_field(MR_mktag(3), Inst_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Inst_26, 3) = ((MR_Box) (SortedBoundInsts_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInst_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_26));
        }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
    MR_Word BeforeIsArgTerms_14;
    MR_Word IsAny_16;
    MR_String BeforeIsFunctor_13;
    MR_Word Var_37;

    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 0))));
      BeforeIsArgTerms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
      if (succeeded)
      {
        BeforeIsFunctor_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
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
        ArgModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_17, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeDetism_18)) == (MR_Integer) 1);
        if (succeeded)
          Detism_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_18, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word PredInst_21;
        MR_Word Inst_22;

        {
          PredInst_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredInst_21, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), PredInst_21, 1) = ((MR_Box) (ArgModes_19));
          MR_hl_field(MR_mktag(0), PredInst_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), PredInst_21, 3) = ((MR_Box) (Detism_20));
        }
        switch (IsAny_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_43 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInst_21)));

              {
                Inst_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Inst_22, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Inst_22, 2) = ((MR_Box) (Var_43));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInst_21)));

              {
                Inst_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Inst_22, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Inst_22, 1) = ((MR_Box) (Var_41));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInst_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_22));
        }
      }
      else
      {
        MR_Word Specs_23;
        MR_Word Var_44;
        MR_Word Var_45;

        Var_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes_17);
        Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_18);
        Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_44, Var_45);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInst_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_23));
        }
      }
    }
    else
    {
      MR_Word RetModeTerm_26;
      MR_Word ArgModesTerms_28;
      MR_Word IsAny_126;
      MR_Word FuncTerm_25;
      MR_String FuncTermFunctor_27;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_String BeforeIsFunctor_110;
      MR_Word BeforeIsArgTerms_111;

      succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 0))));
        BeforeIsArgTerms_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
        if (succeeded)
        {
          BeforeIsFunctor_110 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0))));
          succeeded = (strcmp(BeforeIsFunctor_110, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) BeforeIsArgTerms_111)) == (MR_Integer) 1);
            if (succeeded)
            {
              FuncTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_111, (MR_Integer) 0))));
              Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_111, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
              if (succeeded)
              {
                RetModeTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
                Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
                succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FuncTerm_25)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncTerm_25, (MR_Integer) 0))));
                    ArgModesTerms_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncTerm_25, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FuncTermFunctor_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
                      if ((strcmp(FuncTermFunctor_27, (MR_String) "func") == 0))
                      {
                        IsAny_126 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                      else
                      if ((strcmp(FuncTermFunctor_27, (MR_String) "any_func") == 0))
                      {
                        IsAny_126 = (MR_Integer) 1;
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
        MR_Word MaybeDetism_119;
        MR_Word ArgModes0_32;
        MR_Word RetMode_33;
        MR_Word Detism_116;

        parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, ArgModesTerms_28, &MaybeArgModes0_30);
        parse_tree__parse_inst_mode_name__parse_mode_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, RetModeTerm_26, &MaybeRetMode_31);
        parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_8, DetTerm_11, &MaybeDetism_119);
        succeeded = ((MR_tag((MR_Word) MaybeArgModes0_30)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgModes0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes0_30, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeRetMode_31)) == (MR_Integer) 1);
          if (succeeded)
          {
            RetMode_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetMode_31, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeDetism_119)) == (MR_Integer) 1);
            if (succeeded)
              Detism_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_119, (MR_Integer) 0))));
          }
        }
        if (succeeded)
        {
          MR_Word FuncInst_34;
          MR_Word Var_50;
          MR_Word ArgModes_112;
          MR_Word Inst_113;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (RetMode_33));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ArgModes_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_32, Var_50);
          {
            FuncInst_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FuncInst_34, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), FuncInst_34, 1) = ((MR_Box) (ArgModes_112));
            MR_hl_field(MR_mktag(0), FuncInst_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), FuncInst_34, 3) = ((MR_Box) (Detism_116));
          }
          switch (IsAny_126) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_57 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (FuncInst_34)));

                {
                  Inst_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Inst_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Inst_113, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Inst_113, 2) = ((MR_Box) (Var_57));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_55 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (FuncInst_34)));

                {
                  Inst_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Inst_113, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), Inst_113, 1) = ((MR_Box) (Var_55));
                }
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInst_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_113));
          }
        }
        else
        {
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Specs_114;

          Var_58 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes0_30);
          Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode_31);
          Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_119);
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_60, Var_61);
          Specs_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_58, Var_59);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInst_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_114));
          }
        }
      }
      else
      {
        MR_Word Pieces_35;
        MR_Word Spec_36;
        MR_Word Var_62;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_108;

        Var_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9);
        Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[49])));
        Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeIsTerm_10);
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Pieces_35));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (Var_104));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_101));
        }
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Spec_36));
          MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInst_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
        }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
    MR_Word BeforeIsArgTerms_14;
    MR_Word IsAny_16;
    MR_String BeforeIsFunctor_13;
    MR_Word Var_38;

    if (succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 0))));
      BeforeIsArgTerms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
      if (succeeded)
      {
        BeforeIsFunctor_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
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
        ArgModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_17, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeDetism_18)) == (MR_Integer) 1);
        if (succeeded)
          Detism_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_18, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word PredInstInfo_21;
        MR_Word Inst_22;
        MR_Word Mode_23;

        {
          PredInstInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredInstInfo_21, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), PredInstInfo_21, 1) = ((MR_Box) (ArgModes_19));
          MR_hl_field(MR_mktag(0), PredInstInfo_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), PredInstInfo_21, 3) = ((MR_Box) (Detism_20));
        }
        switch (IsAny_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_44 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_21)));

              {
                Inst_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Inst_22, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Inst_22, 2) = ((MR_Box) (Var_44));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_42 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_21)));

              {
                Inst_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Inst_22, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Inst_22, 1) = ((MR_Box) (Var_42));
              }
            }
            break;
        }
        {
          Mode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Mode_23, 0) = ((MR_Box) (Inst_22));
          MR_hl_field(MR_mktag(0), Mode_23, 1) = ((MR_Box) (Inst_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMode_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_23));
        }
      }
      else
      {
        MR_Word Specs_24;
        MR_Word Var_46;
        MR_Word Var_47;

        Var_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes_17);
        Var_47 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_18);
        Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_46, Var_47);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMode_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
        }
      }
    }
    else
    {
      MR_Word RetModeTerm_27;
      MR_Word ArgModesTerms_29;
      MR_Word IsAny_132;
      MR_Word FuncTerm_26;
      MR_String FuncTermFunctor_28;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_String BeforeIsFunctor_113;
      MR_Word BeforeIsArgTerms_114;

      succeeded = ((MR_tag((MR_Word) BeforeIsTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 0))));
        BeforeIsArgTerms_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
        if (succeeded)
        {
          BeforeIsFunctor_113 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
          succeeded = (strcmp(BeforeIsFunctor_113, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) BeforeIsArgTerms_114)) == (MR_Integer) 1);
            if (succeeded)
            {
              FuncTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_114, (MR_Integer) 0))));
              Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_114, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
              if (succeeded)
              {
                RetModeTerm_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
                Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1))));
                succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FuncTerm_26)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncTerm_26, (MR_Integer) 0))));
                    ArgModesTerms_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncTerm_26, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FuncTermFunctor_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
                      if ((strcmp(FuncTermFunctor_28, (MR_String) "func") == 0))
                      {
                        IsAny_132 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                      else
                      if ((strcmp(FuncTermFunctor_28, (MR_String) "any_func") == 0))
                      {
                        IsAny_132 = (MR_Integer) 1;
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
        MR_Word MaybeArgModes0_31;
        MR_Word MaybeRetMode_32;
        MR_Word MaybeDetism_124;
        MR_Word ArgModes0_33;
        MR_Word RetMode_34;
        MR_Word Detism_120;

        parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, ArgModesTerms_29, &MaybeArgModes0_31);
        parse_tree__parse_inst_mode_name__parse_mode_5_p_0(AllowConstrainedInstVar_7, VarSet_8, ContextPieces_9, RetModeTerm_27, &MaybeRetMode_32);
        parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_8, DetTerm_11, &MaybeDetism_124);
        succeeded = ((MR_tag((MR_Word) MaybeArgModes0_31)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgModes0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes0_31, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeRetMode_32)) == (MR_Integer) 1);
          if (succeeded)
          {
            RetMode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetMode_32, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeDetism_124)) == (MR_Integer) 1);
            if (succeeded)
              Detism_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_124, (MR_Integer) 0))));
          }
        }
        if (succeeded)
        {
          MR_Word FuncInstInfo_35;
          MR_Word Var_52;
          MR_Word ArgModes_115;
          MR_Word Inst_116;
          MR_Word Mode_117;

          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (RetMode_34));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ArgModes_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_33, Var_52);
          {
            FuncInstInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FuncInstInfo_35, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), FuncInstInfo_35, 1) = ((MR_Box) (ArgModes_115));
            MR_hl_field(MR_mktag(0), FuncInstInfo_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), FuncInstInfo_35, 3) = ((MR_Box) (Detism_120));
          }
          switch (IsAny_132) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_59 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (FuncInstInfo_35)));

                {
                  Inst_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Inst_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Inst_116, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Inst_116, 2) = ((MR_Box) (Var_59));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_57 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (FuncInstInfo_35)));

                {
                  Inst_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Inst_116, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), Inst_116, 1) = ((MR_Box) (Var_57));
                }
              }
              break;
          }
          {
            Mode_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Mode_117, 0) = ((MR_Box) (Inst_116));
            MR_hl_field(MR_mktag(0), Mode_117, 1) = ((MR_Box) (Inst_116));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMode_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_117));
          }
        }
        else
        {
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Specs_118;

          Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeArgModes0_31);
          Var_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode_32);
          Var_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_124);
          Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_63, Var_64);
          Specs_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, Var_62);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMode_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_118));
          }
        }
      }
      else
      {
        MR_Word Pieces_36;
        MR_Word Spec_37;
        MR_Word Var_65;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_111;

        Var_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9);
        Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[33])));
        Var_106 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeIsTerm_10);
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Pieces_36));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (Var_107));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_104));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMode_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
        }
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
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_4[17]));
    else
    {
      MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeHeadInst_16;
      MR_Word MaybeTailInsts_17;
      MR_Word HeadInst_18;
      MR_Word TailInsts_19;

      parse_tree__parse_inst_mode_name__parse_inst_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Term_13, &MaybeHeadInst_16);
      parse_tree__parse_inst_mode_name__parse_insts_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Terms_14, &MaybeTailInsts_17);
      succeeded = ((MR_tag((MR_Word) MaybeHeadInst_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadInst_16, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailInsts_17)) == (MR_Integer) 1);
        if (succeeded)
          TailInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailInsts_17, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (HeadInst_18));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (TailInsts_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
        }
      }
      else
      {
        MR_Word Specs_20;
        MR_Word Var_22;
        MR_Word Var_23;

        Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeHeadInst_16);
        Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[1]), MaybeTailInsts_17);
        Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_22, Var_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_20));
        }
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
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_4[16]));
    else
    {
      MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeHeadMode_16;
      MR_Word MaybeTailModes_17;
      MR_Word HeadMode_18;
      MR_Word TailModes_19;

      parse_tree__parse_inst_mode_name__parse_mode_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Term_13, &MaybeHeadMode_16);
      parse_tree__parse_inst_mode_name__parse_modes_5_p_0(AllowConstrainedInstVar_1, VarSet_2, ContextPieces_3, Terms_14, &MaybeTailModes_17);
      succeeded = ((MR_tag((MR_Word) MaybeHeadMode_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadMode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadMode_16, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailModes_17)) == (MR_Integer) 1);
        if (succeeded)
          TailModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailModes_17, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (HeadMode_18));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (TailModes_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
        }
      }
      else
      {
        MR_Word Specs_20;
        MR_Word Var_22;
        MR_Word Var_23;

        Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeHeadMode_16);
        Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_1[0]), MaybeTailModes_17);
        Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_22, Var_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_20));
        }
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
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[0]));
            else
            {
              MR_Word Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_225 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_224 == (MR_Word) ((MR_Unsigned) 0U)))
                *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[0]));
              else
              {
                MR_Word Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_224, (MR_Integer) 1))));
                MR_Box Var_237 = (MR_hl_field(MR_mktag(1), Var_224, (MR_Integer) 0));

                if ((Var_236 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_44;

                  {
                    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_44, 0) = Var_225;
                    MR_hl_field(MR_mktag(1), Var_44, 1) = Var_237;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *KnownInst_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
                  }
                }
                else
                  *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[0]));
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
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[1]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            // case "bound"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[3]));
            else
            {
              MR_Word Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_227 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_226 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_39;

                {
                  Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_39, 0) = Var_227;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownInst_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
                }
              }
              else
                *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[3]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            // case "bound_unique"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[3]));
            else
            {
              MR_Word Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_229 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_228 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_35;

                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_35, 1) = Var_229;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownInst_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
                }
              }
              else
                *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[3]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            // case "clobbered"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[4]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            // case "clobbered_any"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[5]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            // case "free"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[6]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            // case "ground"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[7]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            // case "is"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[0]));
            else
            {
              MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_231 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_230 == (MR_Word) ((MR_Unsigned) 0U)))
                *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[0]));
              else
              {
                MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_230, (MR_Integer) 1))));
                MR_Box Var_239 = (MR_hl_field(MR_mktag(1), Var_230, (MR_Integer) 0));

                if ((Var_238 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_51;

                  {
                    Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_51, 0) = Var_231;
                    MR_hl_field(MR_mktag(0), Var_51, 1) = Var_239;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *KnownInst_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
                  }
                }
                else
                  *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[0]));
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
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[8]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            // case "mostly_clobbered_any"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[9]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            // case "mostly_unique"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[10]);
            else
            {
              MR_Word Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_233 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_232 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_59;

                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_59, 1) = Var_233;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownInst_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
                }
              }
              else
                *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[11]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            // case "mostly_unique_any"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[12]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            // case "not_reached"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[13]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            // case "unique"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[14]);
            else
            {
              MR_Word Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_235 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_234 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_66;

                {
                  Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_66, 1) = Var_235;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownInst_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_66));
                }
              }
              else
                *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[11]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            // case "unique_any"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownInst_6 = (MR_Word) (&parse_tree__parse_inst_mode_name_scalar_common_4[15]);
            else
              *KnownInst_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_4[2]));
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Cur_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Next_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word DuplicatesTail_9;
      MR_Word PrevConsId_10;
      MR_Word CurConsId_12;

      parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(Cur_6, Next_7, &DuplicatesTail_9);
      PrevConsId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      CurConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cur_6, (MR_Integer) 0))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(PrevConsId_10, CurConsId_12);
      if (succeeded)
      {
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (CurConsId_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DuplicatesTail_9));
        }
      }
      else
        *HeadVar__3_3 = DuplicatesTail_9;
    }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeDetism_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word Detism_9;
    MR_String DetString_7;
    MR_Word Var_13;
    MR_Word Var_14;

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
          DetString_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
          succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetString_7, &Detism_9);
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDetism_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Detism_9));
      }
    else
    {
      MR_String TermStr_10;
      MR_Word DetismPieces_11;
      MR_Word DetismSpec_12;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;

      TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TermStr_10));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[13])));
      }
      {
        DetismPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DetismPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
        MR_hl_field(MR_mktag(1), DetismPieces_11, 1) = ((MR_Box) (Var_17));
      }
      Var_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (DetismPieces_11));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DetismSpec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DetismSpec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DetismSpec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), DetismSpec_12, 2) = ((MR_Box) (Var_27));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (DetismSpec_12));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDetism_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__standard_det_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
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
      str_1 = ((&parse_tree__parse_inst_mode_name_vector_common_3[0 + slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_0;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
      {
        // we found a match; look up the results
        ;
        *HeadVar__2_2 = ((&parse_tree__parse_inst_mode_name_vector_common_3[0 + slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_2;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      {
        // no match yet, so get next slot in hash chain
        ;
        slot_0 = ((&parse_tree__parse_inst_mode_name_vector_common_3[0 + slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_1;
      }
    }
    while ((slot_0 >= (MR_Integer) 0));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word Why_7,
  MR_Word VarSet_8,
  MR_Word Term_9)
{
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
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;

    TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Place_12 = ((&parse_tree__parse_inst_mode_name_vector_common_2[0 + Why_7]))->parse_tree__parse_inst_mode_name__vector_common_type_2_0__vct_2_f_0;
    Var_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (TermStr_11));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Place_12));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_17, Var_18);
    Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_41));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeInst_10, 0) = ((MR_Box) (Var_48));
    }
    return MaybeInst_10;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
